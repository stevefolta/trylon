;; Setup Trylid's runtime.
(load "library/trylid.k")
;; Uncomment the next line to run the self-generated compiler:
;; (set *jolt-sources-path* '".jolt-sources-self/")
(load-trylid)

;; Add nice debugging stuff to Pepsi.
[[(import "Expression") _vtable] methodAt: '_debugName put: closure-returner with: "PepsiExpression"]
[[(import "String") _vtable] methodAt: '_debugName put: closure-returner with: "PepsiString"]

;; Pre-load the program.
(load [[*jolt-sources-path* , '"load.k"] _stringValue])


;; Run the program.
(define prog-args [(trylid-proto Standard List) new])
[prog-args append: (trylid-string "trylid")]
[Main main: prog-args]

