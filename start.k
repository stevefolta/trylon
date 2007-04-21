(load "library/trylid.k")

(load-trylid)
(define prog-args [(trylid-proto Standard List) new])
[prog-args append: (trylid-string "trylid")]
[Main main: prog-args]

