;; trylid.k
;; Support for the Trylid language.
;;
;; Copyright 2007 Steve Folta.  See the License file.


;; Basic globals.

(define nil 0)
(define true (import "true"))
(define false (import "false"))


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


;; Defining and loading objects.

;; These globals will be set later:
(define Trylid nil)
(define trylid-root-object nil)
(define StandardBytePtr nil)
(define StandardString nil)
(define StandardInt nil)
(define StandardChar nil)
(define StandardImplementation nil)

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


;; Loading prototypes from .k files.

(define *jolt-sources-path* '".jolt-sources/")

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
		`(add-shared-field ,[node at: '1] ,[node at: '2]
			(create-trylid-proto
				(quote ,[node at: '1]) ,[node at: '3] (quote ,[node at: '4])))
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
			)
		))
(syntax install-proto-loader
	(lambda (node compiler)
		`(install-trylid-proto-loader-into '(,@[node copyFrom: '1]))
		))

(define load-trylid-posix-proto
	(lambda (name)
		(define getenv (dlsym "getenv"))
		(define lib (getenv "TRYLID_LIBRARY"))
		(if (not lib) (error "$TRYLID_LIBRARY isn't set."))
		(define file-name [[[String value_: lib] , '"/Posix/"] , [name asString]])
		[Object _import: [file-name _stringValue]]
		(define proto (import [name _stringValue]))
		[[(trylid-proto Posix) _vtable]
			methodAt: name put: closure-returner with: proto]
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
			[[compiler continues] removeFirst]
			[[compiler continues] addFirst: continue-label]
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
		;;...
		[StdOut nextPutAll: [exception message]]
		[StdOut cr]
		(exit)
		nil
		))

(syntax catch 	;; body else-clause
	(lambda (node compiler)
		;;...
		[node at: '1]
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
		;; Can't use "Int new" here, as it would recurse.
		(let ((int [[StandardInt _vtable] _alloc: 4]))
			(set-long@ int value)
			int
			)))

(syntax trylid-int-literal
	(lambda (node compiler)
		`(quote ,(trylid-int [[node at: '1] _integerValue]))
		))

(define trylid-char
	(lambda (value)
		(let ((char-obj [StandardChar new]))
			(set-long@ char-obj value)
			char-obj
			)))

(syntax trylid-char-literal
	(lambda (node compiler)
		`(quote ,(trylid-char [[node at: '1] _integerValue]))
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

(define-send '== Object arg
	[self = arg])

(define-send '!= Object arg
	(not [self == arg]))

(define _vtable (import "_vtable"))
[[_vtable _vtable] methodAt: '_tally put: field-getter with: 0]
[[_vtable _vtable] methodAt: 'bindings put: field-getter with: 4]
[[_vtable _vtable] methodAt: 'delegate put: field-getter with: 8]

(define-send 'is-a: Object arg
	(let ((vtable [self _vtable])
				(target-vtable [arg _vtable]))
		(while vtable
			(if (== vtable target-vtable)
				(return true))
			(set vtable [vtable delegate]))
		false
		))
(define-send 'same-as: Object arg
	(== self arg))

(define-send 'string SmallInteger
	[(trylid-int [self _integerValue]) string])
(define-send 'int SmallInteger
	(trylid-int [self _integerValue]))

(define Symbol (import "Symbol"))
(define-send 'string Symbol
	[StandardString new_: [self _stringValue]])
(define-send 'intern Symbol
	self)

(define-send 'string Object
	[StandardString new_: [self _debugName]])



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
		(set StandardInt (trylid-proto Standard Int))
		(set StandardChar (trylid-proto Standard Char))
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
		))


