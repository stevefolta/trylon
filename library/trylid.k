;; trylid.k
;; Support for the Trylid language.
;;
;; Copyright 2007 Steve Folta.  See the License file.


;; Basic globals.

(define nil 0)
(define true (import "true"))
(define false (import "false"))


;; Needed from Pepsi.

(define _vtable (import "_vtable"))


;; Needed C functions.
(define strlen (dlsym "strlen"))
(define memcpy (dlsym "memcpy"))
(define GC_malloc (dlsym "GC_malloc"))
(define GC_malloc_atomic (dlsym "GC_malloc_atomic"))
(define fopen (dlsym "fopen"))
(define fclose (dlsym "fclose"))
(define fread (dlsym "fread"))
(define fwrite (dlsym "fwrite"))
(define feof (dlsym "feof"))
(define unlink (dlsym "unlink"))
(define opendir (dlsym "opendir"))
(define readdir (dlsym "readdir"))
(define closedir (dlsym "closedir"))
(define mkdir (dlsym "mkdir"))
(define getenv (dlsym "getenv"))
(define strtol (dlsym "strtol"))
(define setjmp (dlsym "setjmp"))
(define longjmp (dlsym "longjmp"))
(define readline (dlsym "readline"))
(define using_history (dlsym "using_history"))
(define stifle_history (dlsym "stifle_history"))
(define add_history (dlsym "add_history"))
(define read_history (dlsym "read_history"))
(define write_history (dlsym "write_history"))


;; Defining and loading objects.

;; These globals will be set later:
(define Trylid nil)
(define trylid-root-object nil)
(define StandardBytePtr nil)
(define StandardString nil)
(define StandardImplementation nil)
(define Posix nil)

(define shared-field-getter
	(lambda (_closure _self self)
		(long@ _closure 1)
		))

(define shared-field-setter
	(lambda (_closure _self self value)
		(let ((getter-closure (long@ _closure 1)))
			(set-long@ getter-closure 1 value))
		))

(define add-shared-field-to
	(lambda (name proto value)
		(let ((vtable [proto _vtable]))
			[vtable methodAt: name put: shared-field-getter with: value]
			(let ((getter-assoc [vtable lookup: name])
						(getter-closure (long@ getter-assoc 1))
						(setter-name [[[name asString] , '":"] asSymbol]))
				[vtable methodAt: setter-name
					put: shared-field-setter with: getter-closure]
				)
			[_vtable flush]
			)
		))

(syntax add-shared-field 	;; name proto value
	(lambda (node compiler)
		`(add-shared-field-to ',[node at: '1] ,[node at: '2] ,[node at: '3])
		))

(define field-getter
	(lambda (_closure _self self)
		(long@ (+ _self (long@ _closure 1)))
		))

(define field-setter
	(lambda (_closure _self self value)
		(set-long@ (+ _self (long@ _closure 1)) value)
		))

(define closure-returner
	(lambda (_closure _self self)
		(long@ _closure 1)
		))

(define add-constant-field-to
	(lambda (name proto value)
		[[proto _vtable] methodAt: name put: closure-returner with: value]
		))

(syntax add-constant-field 	;; name proto value
	(lambda (node compiler)
		`(add-constant-field-to ',[node at: '1] ,[node at: '2] ,[node at: '3])
		))


;; Loading prototypes from .k files.

(define *jolt-sources-path* '".jolt-sources/")

(define *trylid-lib-path* nil)

(define try-trylid-library
	(lambda (path)
		;; There's not an easy way to check for the existence of a directory at
		;; this point.  So we'll look for a file in the library directory.
		(define file [File openIfPresent: [path , '"/Posix/jmp_buf.so"]])
		(if file
			(begin
				[file close]
				(set *trylid-lib-path* path)
				path
				)
			nil)
		))

(define find-trylid-library
	(lambda ()
		;; Already found it?
		(if *trylid-lib-path*
			(return *trylid-lib-path*))
		;; Use $TRYLID_LIBRARY if it's set.
		(define lib-env (getenv "TRYLID_LIBRARY"))
		(if lib-env
			(if (try-trylid-library [String value_: lib-env])
				(return *trylid-lib-path*)
				(printf "Warning: Ignoring $TRYLID_LIBRARY; it's not valid.\n")))
		;; Try $HOME/trylid.
		(define home-env (getenv "HOME"))
		(if home-env
			(if (try-trylid-library [[String value_: home-env] , '"/trylid"])
				(return *trylid-lib-path*)))
		;; Try some common places.
		(or (try-trylid-library '"./library")
				(try-trylid-library '"/usr/lib/trylid")
				(try-trylid-library '"/usr/local/lib/trylid")
				(try-trylid-library '"/usr/share/trylid")
				(try-trylid-library '"/opt/lib"))
		(if *trylid-lib-path*
			(return *trylid-lib-path*))
		;; Couldn't find it; abort.
		(printf "Trylid's library couldn't be found.  You can explicitly tell\n")
		(printf "Trylid where it is by setting $TRYLID_LIBRARY.  Or, perhaps this\n")
		(printf "means that your Trylid library wasn't built correctly.\n")
		(exit 1)
		))


;; This is much like (define-type), but it doesn't operate in a specific
;; namespace and it's a function, not a syntax.
(define create-trylid-proto
	(lambda (name superclass fields)
		(let ((name-string [name _stringValue])
					(super-size [superclass _sizeof])
					(num-fields [fields size])
					(fields-size (* 4 [num-fields _integerValue]))
					(proto-size (+ super-size fields-size))
					(proto [superclass _delegated])
					(vtable [proto _vtable]))
			;; Re-allocate the proto, so it gets its fields.  We'd do that using
			;; [vtable _delegated], but that doesn't work as advertised.
			(set proto [vtable _alloc: proto-size])
			;; Add methods needed to act as a prototype.
			[vtable methodAt: '_sizeof put: closure-returner with: proto-size]
			[vtable methodAt: '_debugName put: closure-returner with: name-string]
			[vtable methodAt: '.proto put: closure-returner with: proto]
			[vtable methodAt: '.parent-proto put: closure-returner with: superclass]
			;; Add the slot accessors.
			(let ((offset super-size)
						(field-index '0))
				(while [field-index < num-fields]
					(let ((field-name [fields at: field-index])
								(setter-name [[[field-name asString] , '":"] asSymbol]))
						[vtable methodAt: field-name put: field-getter with: offset]
						[vtable methodAt: setter-name put: field-setter with: offset]
						(set field-index [field-index + '1])
						(set offset (+ offset 4))
						)
					)
				)
			proto
			)
		))

(syntax define-trylid-proto 	;; name namespace superclass fields
	(lambda (node compiler)
		`(let ((new-proto
						 (create-trylid-proto
							 (quote ,[node at: '1]) ,[node at: '3] (quote ,[node at: '4]))))
			(add-shared-field ,[node at: '1] ,[node at: '2] new-proto)
			[[new-proto _vtable]
				methodAt: '.parent-context put: closure-returner with: ,[node at: '2]]
			new-proto
			)
		))

(define read-trylid-proto-file
	(lambda (filename)
		(load [[*jolt-sources-path* , filename] _stringValue])
		))

(define get-trylid-proto
	(lambda (names)
		(let ((proto Trylid) (which-name '0) (filename nil))
			(while [which-name < [names size]]
				(let ((name [names at: which-name])
							(name-string [name asString]))
					(set filename
						(if filename [[filename , '" "] , name-string] name-string))
					(if [[proto _vtable] lookup: name]
						nil
						(read-trylid-proto-file [filename , '".k"])
						)
					(set proto [proto perform: name])
					)
				(set which-name [which-name + '1])
				)
			proto
			)
		))

(syntax load-trylid-proto
	(lambda (node compiler)
		`(get-trylid-proto '(,@[node copyFrom: '1]))
		))

(syntax trylid-proto
	(lambda (node compiler)
		(let ((proto Trylid)
					(which-name '1)
					(num-names [node size])
					(expr 'Trylid))
			(while [which-name < num-names]
				(let ((name [node at: which-name]))
					(set expr `(send ',name ,expr))
					)
				(set which-name [which-name + '1])
				)
			expr
			)
		))

(define-type TrylidLoadSpec Object (parent name filename))
(define proto-loader
	(lambda (_closure _self self)
		(define load-spec (long@ _closure 1))
		(read-trylid-proto-file [[load-spec filename] , '".k"])
		[[load-spec parent] perform: [load-spec name]]
		))
(define install-trylid-proto-loader-into
	(lambda (names)
		(let ((parent-proto Trylid)
					(which-name '0)
					(last-name [[names size] - '1])
					(filename nil)
					(proto-name [names at: last-name])
					(proto-name-string [proto-name asString]))
			(while [which-name < last-name]
				(let ((name [names at: which-name])
							(name-string [name asString]))
					(set filename
						(if filename [[filename , '" "] , name-string] name-string))
					(set parent-proto [parent-proto perform: name])
					)
				(set which-name [which-name + '1])
				)
			(if [[parent-proto _vtable] lookup: proto-name]
				(return [parent-proto perform: proto-name]))
			(set filename
				(if filename [[filename , '" "] , proto-name-string] proto-name-string))
			(define load-spec [TrylidLoadSpec new])
			[load-spec parent: parent-proto]
			[load-spec name: proto-name]
			[load-spec filename: filename]
			[[parent-proto _vtable]
				methodAt: proto-name put: proto-loader with: load-spec]
			[_vtable flush]
			)
		))
(syntax install-proto-loader
	(lambda (node compiler)
		`(install-trylid-proto-loader-into '(,@[node copyFrom: '1]))
		))

(define load-trylid-posix-proto
	(lambda (name)
		(define file-name [[(find-trylid-library) , '"/Posix/"] , [name asString]])
		[Object _import: [file-name _stringValue] ""]
		(define proto (import [name _stringValue]))
		[[(trylid-proto Posix) _vtable]
			methodAt: name put: closure-returner with: proto]
		[_vtable flush]
		proto
		))


;; Statements.

(define make-local-defs
	(lambda (locals)
		(define expr [locals copy])
		(define index '0)
		(while [index < [expr size]]
			[expr at: index put: [expr with: [expr at: index] with: 'nil]]
			(set index [index + '1])
			)
		expr
		))

(syntax trylid-block 	;; (locals...) exprs...
	(lambda (node compiler)
		`(let ,(make-local-defs [node at: '1]) ,@[node copyFrom: '2])
		))

(syntax catch-continue 	;; exprs...
	(lambda (node compiler)
		(let ((block [(import "Block") new])
					(continue-label [compiler newLabel])
					(index '1))
			[[compiler continueLabels] removeFirst]
			[[compiler continueLabels] addFirst: continue-label]
			(while [index < [node size]]
				[block add:
					[[node at: index] translate: compiler]]
				(set index [index + '1])
				)
			[block add: continue-label]
			block
			)
		))

(syntax trylid-for 	;; local collection exprs...
	(lambda (node compiler)
		;; TO DO: Handle "continue" (somehow).
		`(let ((.iterator [,[node at: '2] iterator])
					 (,[node at: '1] nil))
			(while (not [.iterator is-done])
				(catch-continue
					(set ,[node at: '1] [.iterator current-item])
					,@[node copyFrom: '3]
					)
				[.iterator go-forward]
				)
			)
		))

(syntax blank-line
	(lambda (node compiler)
		`(let () 0)
		))

(syntax comment
	(lambda (node compiler)
		`(let () 0)
		))

(define throw
	(lambda (exception)
		;; Throw.
		(let ((jmpbuf [[(trylid-proto Posix) jmp_buf] currentCatcher]))
			(longjmp jmpbuf exception)
			)
		;; Should never get here...
		(exit)
		nil
		))

(syntax catch 	;; body else-clause
	(lambda (node compiler)
		`(let ((.jmpbuf nil) (exception nil))
			 (set .jmpbuf [[(trylid-proto Posix) jmp_buf] new])
			 [.jmpbuf push]
			 (set exception (setjmp .jmpbuf))
			 (if exception
				 (begin [.jmpbuf restore] ,[node at: '2])
				 (begin ,[node at: '1] [.jmpbuf restore]))
			 )
		))

(syntax trylid-tuple 	;; value...
	(lambda (node compiler)
		(define num-values [[node size] - '1])
		(define _num-values [num-values _integerValue])
		(define setters [Expression new: num-values])
		(define index '0)
		(while [index < num-values]
			[setters at: index put:
				`[tuple
					 at: (trylid-int ,index)
					 put: ,[node at: [index + '1]]]]
			(set index [index + '1]))
		`(let ((tuple [(trylid-proto Standard Tuple) new: (trylid-int ,num-values)]))
			 ,@setters
			 tuple)
		))

(syntax super-send ; (super-send selector receiver args...)
	;; There's some kind of scope problem that means we can't use the same names
	;; as (send) does (__r, __c), hence __sr and __sc.  (Actually, only __r is
	;; known to be affected, but we do __c as well just to be sure.)
	(lambda (node compiler)
		(or [[node size] >= '3] [compiler errorSyntax: node])
		(let ((selector [node second])
					(receiver [node third]))
			`(let ((__sr ,receiver))
				 (let ((__sc (_bind ',selector [__sr .parent-proto])))
					 ((long@ __sc) __sc __sr __sr ,@[node copyFrom: '3]))))))



;; Switch
;; (switch value ((value...) expr)... else-clause)
(define make-switch-condition
	(lambda (clause)
		(if [[clause size] == '1]
			`(send '== .switch-value ,[clause first])
			(let ((index '0)
						(size [clause size])
						(expr [Expression new: [size + '1]]))
				[expr at: '0 put: 'or]
				(while [index < size]
					[expr at: [index + '1] put:
						`(send '== .switch-value ,[clause at: index])]
					(set index [index + '1])
					)
				expr
				)
			)
		))
(define switch-expr
	(lambda (clauses)
		(if [[clauses size] == '1]
			[clauses at: '0]
			(let ((clause [clauses at: '0]))
				`(if ,(make-switch-condition [clause at: '0])
					 ,[clause at: '1]
					 ,(switch-expr [clauses copyFrom: '1]))
				)
			)
		))
(syntax switch
	(lambda (node compiler)
		`(let ((.switch-value ,[node at: '1]))
			 ,(switch-expr [node copyFrom: '2])
			 )
		))



;; Fake stuff to work around Jolt bugs (for now).

(syntax fixed-return
	(lambda (node compiler)
		`(if 1 (return ,[node at: '1]))
		))

(syntax fixed-continue
	(lambda (node compiler)
		'(if 1 (continue))
		))

(syntax fixed-break
	(lambda (node compiler)
		'(if 1 (break))
		))



;; Primitive support.

(define byte-ptr
	(lambda (value)
		;; Make a BytePtr with the value.
		(let ((byte-ptr [StandardBytePtr new]))
			(set-long@ byte-ptr value)
			byte-ptr
			)
		))

(define trylid-int
	(lambda (value)
		[SmallInteger value_: value]
		))

(syntax trylid-int-literal
	(lambda (node compiler)
		`(quote ,[node at: '1])
		))

(define trylid-char
	(lambda (value)
		[SmallInteger value_: value]
		))

(syntax trylid-char-literal
	(lambda (node compiler)
		`(quote ,[node at: '1])
		))



(define trylid-string
	(lambda (c-string)
		[StandardString new_: c-string]
		))

(syntax trylid-string-literal
	(lambda (node compiler)
		;; Need to be careful; this can be called during early loading, before
		;; StandardString is available.
		(if StandardString
			`(quote ,(trylid-string [[node at: '1] _stringValue]))
			`(trylid-string ,[node at: '1]))
		))


;; Interoperability.

(define [Object == arg]
	[self = arg])

(define [Object != arg]
	(not [self == arg]))

[[_vtable _vtable] methodAt: '_tally put: field-getter with: 0]
[[_vtable _vtable] methodAt: 'bindings put: field-getter with: 4]
[[_vtable _vtable] methodAt: 'delegate put: field-getter with: 8]

(define [Object is-a: arg]
	(let ((vtable [self _vtable])
				(target-vtable [arg _vtable]))
		(while vtable
			(if (== vtable target-vtable)
				(return true))
			(set vtable [vtable delegate]))
		false
		))
(define [Object same-as: arg]
	(== self arg))
(define [Object responds-to: selector]
	(if [[self _vtable] lookup: selector] true false))
(define [Object string]
	[StandardString new_: [self _debugName]])
(define [Object print-string]
	[self string])


(define [SmallInteger string]
	[(trylid-int [self _integerValue]) string])
(define [SmallInteger int]
	(trylid-int [self _integerValue]))
(define-send 'char SmallInteger
	(trylid-char [self _integerValue]))
(define-send '% SmallInteger arg
	[self \\ arg])
(define-send '^ SmallInteger arg
	[self bitXor: arg])
(define-send '~ SmallInteger
	[SmallInteger value_: (not [self _integerValue])])
(define [SmallInteger .proto-name]
	(trylid-string "SmallInteger"))
(define [SmallInteger print-string]
	(trylid-string [[self printString] _stringValue]))
(define [SmallInteger string]
	[self print-string])

(define [String length]
	[self size])
(define [String intern]
	[self asSymbol])

(define Symbol (import "Symbol"))
(define [Symbol string]
	[StandardString new_: [self _stringValue]])
(define [Symbol print-string]
	(let ((quoter (trylid-string "'")))
		(fixed-return [[quoter + [self string]] + quoter])))
(define [Symbol intern]
	self)

(define UndefinedObject (import "UndefinedObject"))
(define [UndefinedObject string]
	(trylid-string "nil"))



;; Loading (this is last so it can use all the above).

(define load-trylid
	(lambda ()
		;; Create Standard Object, but not loaded into a namespace yet.
		(define trylid-root-object (create-trylid-proto 'Object Object '()))
		;; Create Trylid.
		(set Trylid (create-trylid-proto 'Trylid trylid-root-object '()))
		(add-shared-field Trylid Trylid Trylid)
		;; Create Standard.
		(get-trylid-proto '(Standard))
		;; Install Standard Object.
		(add-shared-field Object (trylid-proto Standard) trylid-root-object)
		(read-trylid-proto-file '"Standard Object.k")
		;; Primitive types in Standard that we want fast access to.
		(set StandardImplementation (trylid-proto Standard Implementation))
		(set StandardBytePtr (trylid-proto Standard BytePtr))
		(set StandardString (trylid-proto Standard String))
		;; Augment Pepsi Object.
		(add-shared-field .parent-proto Object nil)
		(add-shared-field .proto Object Object)
		;; Set "Standard Implementation .target-language".  We can't use
		;; (trylid-string) until after "Standard Implementation" is loaded, so be
		;; careful what order we do this in.
		(trylid-proto Standard Implementation)
		(add-shared-field .target-language (trylid-proto Standard Implementation)
			(trylid-string "Coke"))
		;; Load the rest of Trylid.
		(read-trylid-proto-file '"Trylid.k")
		;; Weird magic prevents mysterious crash when using Posix.  It shouldn't
		;; need this... but it seems to.
		(set Posix (trylid-proto Posix))
		[Posix jmp_buf]
		))


