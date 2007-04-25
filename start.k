(load "library/trylid.k")

(load-trylid)
[[(import "Expression") _vtable] methodAt: '_debugName put: closure-returner with: "PepsiExpression"]
[[(import "String") _vtable] methodAt: '_debugName put: closure-returner with: "PepsiString"]
(define prog-args [(trylid-proto Standard List) new])
[prog-args append: (trylid-string "trylid")]
[Main main: prog-args]

