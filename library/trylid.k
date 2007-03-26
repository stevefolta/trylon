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

(define create-trylid-proto
	(lambda (superclass fields)
		;; ...
		nil
		))

(syntax define-trylid-proto 	;; name namespace superclass fields
	(lambda (node compiler)
		`(add-shared-field-to (quote ,[node at: '0]) ,[node at: '1]
			(create-trylid-proto ,[node at: '2] (quote ,[node at: '3])))
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
					(let ((name-string [String value_: [name _stringValue]]))
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

