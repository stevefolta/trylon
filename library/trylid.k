(define get-trylid-proto
	(lambda (names)
		(let ((proto Main) (which-name '0) (filename nil))
			(while [which-name < [names size]]
				(let ((name [names at: which-name]))
					(set filename (if filename [[filename , " "] , name] name))
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
		`(get-trylid-proto '(,@[node copyFrom: 1]))
		))

(define load-trylid
	(lambda ()
		;; Create Standard Object, but not loaded into a namespace yet.
		(define trylid-root-object (create-trylid-proto Object ()))
		;; Create Main.
		(define-trylid-proto Main nil trylid-root-object ())
		(add-shared-field Main Main Main)
		;; Load Standard.
		(trylid-proto Standard)
		;; Install Standard Object.
		(add-shared-field Object (trylid-proto Standard) trylid-root-object)
		(read-trylid-proto-file "Standard Object.k")
		;; Load the rest of Main
		(read-trylid-proto-file "Main.k")
		))

