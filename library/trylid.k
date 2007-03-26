(define nil 0)

(define Main nil) 	;; Will be set later.

(define add-shared-field-to
	(lambda (name proto value)
		;; ...
		))

(syntax add-shared-field 	;; name proto value
	(lambda (node compiler)
		`(add-shared-field-to (quote ,[node at: '0]) ,[node at: '1] ,[node at: '2])
		))

(define field-getter
	(lambda (_closure _self self)
		(long@ (+ _self (long@ _closure 2)))
		))

(define field-setter
	(lambda (_closure _self self value)
		(set-long@ (+ _self (long@ _closure 2)) value)
		))

(define closure-returner
	(lambda (_closure _self self)
		(long@ _closure 2)
		))

;; This is much like (define-type), but it doesn't operate in a specific
;; namespace and it's a function, not a syntax.
(define create-trylid-proto
	(lambda (name superclass fields)
		(let ((name-string [name asString])
					(super-size [superclass _sizeof])
					(num-fields [fields size])
					(fields-size (* 4 [num-fields _integerValue]))
					(proto-size (+ super-size fields-size))
					(proto [superclass _delegated])
					(vtable [proto _vtable]))
			[vtable methodAt: '_sizeof put: closure-returner with: proto-size]
			[vtable methodAt: '_debugName put: closure-returner with: name-string]
			;; Add the slot accessors.
			(let ((offset super-size)
						(field-index '0))
				(while [field-index < num-fields]
					(let ((field-name [fields at: field-index])
								(setter-name [[[field-name asString] append: '":"] intern]))
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
		`(add-shared-field-to (quote ,[node at: '0]) ,[node at: '1]
			(create-trylid-proto
				(quote ,[node at: '0]) ,[node at: '2] (quote ,[node at: '3])))
		))

(define read-trylid-proto-file
	(lambda (filename)
		(load [[[String value_: ".jolt-sources/"] , filename] _stringValue])
		))

(define get-trylid-proto
	(lambda (names)
		(let ((proto Main) (which-name '0) (filename nil))
			(while [which-name < [names size]]
				(let ((name [names at: which-name]))
					(let ((name-string [name asString]))
						(set filename
							(if filename [[filename , " "] , name-string] name-string)))
					(if [[proto _vtable] lookup: name]
						nil
						(read-trylid-proto-file [filename , ".k"])
						)
					(set proto [proto perform: name])
					)
				(set which-name [which-name + 1])
				)
			proto
			)
		))

(syntax trylid-proto
	(lambda (node compiler)
		`(get-trylid-proto '(,@[node copyFrom: '1]))
		))

(define load-trylid
	(lambda ()
		;; Create Standard Object, but not loaded into a namespace yet.
		(define trylid-root-object (create-trylid-proto Object '()))
		;; Create Main.
		(define-trylid-proto Main nil trylid-root-object ())
		(add-shared-field Main Main Main)
		;; Load Standard.
		(trylid-proto Standard)
		;; Install Standard Object.
		(add-shared-field Object (trylid-proto Standard) trylid-root-object)
		(read-trylid-proto-file [String value_: "Standard Object.k"])
		;; Load the rest of Main
		(read-trylid-proto-file [String value_: "Main.k"])
		))

