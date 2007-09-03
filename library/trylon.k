;; trylon.k
;; Support for the Trylon language.
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
(define Trylon nil)
(define trylon-root-object nil)
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

(define *trylon-lib-path* nil)

(define try-trylon-library
	(lambda (path)
		;; There's not an easy way to check for the existence of a directory at
		;; this point.  So we'll look for a file in the library directory.
		(define file [File openIfPresent: [path , '"/Posix/jmp_buf.so"]])
		(if file
			(begin
				[file close]
				(set *trylon-lib-path* path)
				path
				)
			nil)
		))

(define find-trylon-library
	(lambda ()
		;; Already found it?
		(if *trylon-lib-path*
			(return *trylon-lib-path*))
		;; Use $TRYLON_LIBRARY if it's set.
		(define lib-env (getenv "TRYLON_LIBRARY"))
		(if lib-env
			(if (try-trylon-library [String value_: lib-env])
				(return *trylon-lib-path*)
				(printf "Warning: Ignoring $TRYLON_LIBRARY; it's not valid.\n")))
		;; Try $HOME/trylon.
		(define home-env (getenv "HOME"))
		(if home-env
			(if (try-trylon-library [[String value_: home-env] , '"/trylon"])
				(return *trylon-lib-path*)))
		;; Try some common places.
		(or (try-trylon-library '"./library")
				(try-trylon-library '"/usr/lib/trylon")
				(try-trylon-library '"/usr/local/lib/trylon")
				(try-trylon-library '"/usr/share/trylon")
				(try-trylon-library '"/opt/lib"))
		(if *trylon-lib-path*
			(return *trylon-lib-path*))
		;; Couldn't find it; abort.
		(printf "Trylon's library couldn't be found.  You can explicitly tell\n")
		(printf "Trylon where it is by setting $TRYLON_LIBRARY.  Or, perhaps this\n")
		(printf "means that your Trylon library wasn't built correctly.\n")
		(exit 1)
		))


;; This is much like (define-type), but it doesn't operate in a specific
;; namespace and it's a function, not a syntax.
(define create-trylon-proto
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
			[vtable methodAt: '.superclass put: closure-returner with: superclass]
			[vtable methodAt: '.added-fields put: closure-returner with: fields]
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

(syntax define-trylon-proto 	;; name namespace superclass fields
	(lambda (node compiler)
		`(let ((new-proto
						 (create-trylon-proto
							 (quote ,[node at: '1]) ,[node at: '3] (quote ,[node at: '4]))))
			(add-shared-field ,[node at: '1] ,[node at: '2] new-proto)
			[[new-proto _vtable]
				methodAt: '.parent-context put: closure-returner with: ,[node at: '2]]
			new-proto
			)
		))

(define read-trylon-proto-file
	(lambda (filename)
		(load [[*jolt-sources-path* , filename] _stringValue])
		))

(define get-trylon-proto
	(lambda (names)
		(let ((proto Trylon) (which-name '0) (filename nil))
			(while [which-name < [names size]]
				(let ((name [names at: which-name])
							(name-string [name asString]))
					(set filename
						(if filename [[filename , '" "] , name-string] name-string))
					(if [[proto _vtable] lookup: name]
						nil
						(read-trylon-proto-file [filename , '".k"])
						)
					(set proto [proto perform: name])
					)
				(set which-name [which-name + '1])
				)
			proto
			)
		))

(syntax load-trylon-proto
	(lambda (node compiler)
		`(get-trylon-proto '(,@[node copyFrom: '1]))
		))

(syntax trylon-proto
	(lambda (node compiler)
		(let ((proto Trylon)
					(which-name '1)
					(num-names [node size])
					(expr 'Trylon))
			(while [which-name < num-names]
				(let ((name [node at: which-name]))
					(set expr `(send ',name ,expr))
					)
				(set which-name [which-name + '1])
				)
			expr
			)
		))

(define-type TrylonLoadSpec Object (parent name filename))
(define proto-loader
	(lambda (_closure _self self)
		(define load-spec (long@ _closure 1))
		(read-trylon-proto-file [[load-spec filename] , '".k"])
		[[load-spec parent] perform: [load-spec name]]
		))
(define install-trylon-proto-loader-into
	(lambda (names)
		(let ((parent-proto Trylon)
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
			(define load-spec [TrylonLoadSpec new])
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
		`(install-trylon-proto-loader-into '(,@[node copyFrom: '1]))
		))

(define load-trylon-posix-proto
	(lambda (name)
		(define file-name [[(find-trylon-library) , '"/Posix/"] , [name asString]])
		[Object _import: [file-name _stringValue] ""]
		(define proto (import [name _stringValue]))
		[[(trylon-proto Posix) _vtable]
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

(syntax trylon-block 	;; (locals...) exprs...
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

(syntax trylon-for 	;; local collection exprs...
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
		(let ((jmpbuf [[(trylon-proto Posix) jmp_buf] currentCatcher]))
			(longjmp jmpbuf exception)
			)
		;; Should never get here...
		(exit)
		nil
		))

(syntax catch 	;; body else-clause
	(lambda (node compiler)
		`(let ((.jmpbuf nil) (exception nil))
			 (set .jmpbuf [[(trylon-proto Posix) jmp_buf] new])
			 [.jmpbuf push]
			 (set exception (setjmp .jmpbuf))
			 (if exception
				 (begin [.jmpbuf restore] ,[node at: '2])
				 (begin ,[node at: '1] [.jmpbuf restore]))
			 )
		))

(syntax trylon-tuple 	;; value...
	(lambda (node compiler)
		(define num-values [[node size] - '1])
		(define _num-values [num-values _integerValue])
		(define setters [Expression new: num-values])
		(define index '0)
		(while [index < num-values]
			[setters at: index put:
				`[tuple
					 at: (trylon-int ,index)
					 put: ,[node at: [index + '1]]]]
			(set index [index + '1]))
		`(let ((tuple [(trylon-proto Standard Tuple) new: (trylon-int ,num-values)]))
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
				 (let ((__sc (_bind ',selector [__sr .superclass])))
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

(define trylon-int
	(lambda (value)
		[SmallInteger value_: value]
		))

(syntax trylon-int-literal
	(lambda (node compiler)
		`(quote ,[node at: '1])
		))

(define trylon-char
	(lambda (value)
		[SmallInteger value_: value]
		))

(syntax trylon-char-literal
	(lambda (node compiler)
		`(quote ,[node at: '1])
		))



(define trylon-string
	(lambda (c-string)
		[StandardString new_: c-string]
		))

(syntax trylon-string-literal
	(lambda (node compiler)
		;; Need to be careful; this can be called during early loading, before
		;; StandardString is available.
		(if StandardString
			`(quote ,(trylon-string [[node at: '1] _stringValue]))
			`(trylon-string ,[node at: '1]))
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
(define [Object object-ptr]
	(byte-ptr self))
(define [Object string]
	[StandardString new_: [self _debugName]])
(define [Object print-string]
	[self string])


(define [SmallInteger string]
	[(trylon-int [self _integerValue]) string])
(define [SmallInteger int]
	(trylon-int [self _integerValue]))
(define [SmallInteger char]
	(trylon-char [self _integerValue]))
(define [SmallInteger % arg]
	[self \\ arg])
(define [SmallInteger ~]
	[SmallInteger value_: (~ [self _integerValue])])
(define [SmallInteger unary-minus]
	[SmallInteger value_: (- [self _integerValue])])
(define [SmallInteger float]
	[self asFloat])
(define [SmallInteger .proto-name]
	(trylon-string "SmallInteger"))
(define [SmallInteger print-string]
	(trylon-string [[self printString] _stringValue]))
(define [SmallInteger string]
	[self print-string])
(define [SmallInteger debug-write]
	[[Trylon Standard] print-line: [(trylon-string "Int: ") + [self string]]])

;; SmallInteger as character.
(define [SmallInteger char-string]
	(let ((buf (GC_malloc_atomic 8)))
		(set-char@ buf [self _integerValue])
		(set-char@ (+ buf 1) 0)
		(trylon-string buf)))
(define [SmallInteger is-whitespace]
	(if (or (== self '$ ) (== self '$\t) (== self '$\n) (== self '$\r))
		true false))
(define [SmallInteger is-digit]
	(if (and (>= self '$0) (<= self '$9))
		true false))

(define [String length]
	[self size])
(define [String intern]
	[self asSymbol])

(define Symbol (import "Symbol"))
(define [Symbol string]
	[StandardString new_: [self _stringValue]])
(define [Symbol print-string]
	(let ((quoter (trylon-string "'")))
		(fixed-return [[quoter + [self string]] + quoter])))
(define [Symbol intern]
	self)

(define UndefinedObject (import "UndefinedObject"))
(define [UndefinedObject string]
	(trylon-string "nil"))

(define Float (import "Float"))
(define [Float string]
	[StandardString new-copy_: [[self asString] _stringValue]])


;; Loading (this is last so it can use all the above).

(define load-trylon
	(lambda ()
		;; Create Standard Object, but not loaded into a namespace yet.
		(define trylon-root-object (create-trylon-proto 'Object Object '()))
		;; Create Trylon.
		(set Trylon (create-trylon-proto 'Trylon trylon-root-object '()))
		(add-shared-field Trylon Trylon Trylon)
		;; Create Standard.
		(get-trylon-proto '(Standard))
		;; Install Standard Object.
		(add-shared-field Object (trylon-proto Standard) trylon-root-object)
		(read-trylon-proto-file '"Standard Object.k")
		;; Primitive types in Standard that we want fast access to.
		(set StandardImplementation (trylon-proto Standard Implementation))
		(set StandardBytePtr (trylon-proto Standard BytePtr))
		(set StandardString (trylon-proto Standard String))
		;; Augment Pepsi Object.
		(add-shared-field .superclass Object nil)
		(add-shared-field .proto Object Object)
		;; Set "Standard Implementation .target-language".  We can't use
		;; (trylon-string) until after "Standard Implementation" is loaded, so be
		;; careful what order we do this in.
		(trylon-proto Standard Implementation)
		(add-shared-field .target-language (trylon-proto Standard Implementation)
			(trylon-string "Coke"))
		;; Load the rest of Trylon.
		(read-trylon-proto-file '"Trylon.k")
		;; Weird magic prevents mysterious crash when using Posix.  It shouldn't
		;; need this... but it seems to.
		(set Posix (trylon-proto Posix))
		[Posix jmp_buf]
		))


