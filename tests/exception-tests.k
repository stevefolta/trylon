(load "library/trylid.k")
(load-trylid)

(define MessageException (trylid-proto Standard MessageException))

(define CompilerOptions (import "CompilerOptions"))
;; [CompilerOptions verboseTree: true]

(define bottom-level
	(lambda ()
		(throw [MessageException new: (trylid-string "Boom!")])
		))

(define mid-level
	(lambda ()
		(catch
			(bottom-level)
			(begin
				[[Trylid Standard] print-line:
					(trylid-string "mid-level caught exception; rethrowing.")]
				(throw exception)
				)
			)
		))

(define top-level
	(lambda ()
		(catch
			(mid-level)
			(begin
				([(trylid-proto Standard) print-line: [exception message]])
				;; It crashes here, I know not why...
				([(trylid-proto Standard) print-line:
					(trylid-string "In top-level catch clause.")])
				)
			)
		))

(top-level)


