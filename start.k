;; Setup Trylon's runtime.
(load "library/trylon.k")
;; Uncomment the next line to run the self-generated compiler:
;; (set *jolt-sources-path* '".jolt-sources-self/")
(load-trylon)

;; Add nice debugging stuff to Pepsi.
[[(import "Expression") _vtable] methodAt: '_debugName put: closure-returner with: "PepsiExpression"]
[[(import "String") _vtable] methodAt: '_debugName put: closure-returner with: "PepsiString"]

;; Pre-load the program.
(load [[*jolt-sources-path* , '"load.k"] _stringValue])


;; Run the program.
(define prog-args [(trylon-proto Standard List) new])
[prog-args append: (trylon-string "trylon")]
[prog-args append: (trylon-string "--target-jolt")]
[Trylon main: prog-args]

