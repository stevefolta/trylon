;; Setup Trylid's runtime.
(load "library/trylid.k")
(load-trylid)

;; Add nice debugging stuff to Pepsi.
[[(import "Expression") _vtable] methodAt: '_debugName put: closure-returner with: "PepsiExpression"]
[[(import "String") _vtable] methodAt: '_debugName put: closure-returner with: "PepsiString"]

;; Pre-load the program.
(load ".jolt-sources/load.k")

;; Run the program.
(define prog-args [(trylid-proto Standard List) new])
[prog-args append: (trylid-string "trylid")]
[Main main: prog-args]

