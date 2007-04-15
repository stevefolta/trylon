(load "library/trylid.k")

(load-trylid)
(define prog-args [(trylid-proto Standard List) new])
[prog-args append: [(trylid-proto Standard String) new_: "trylid"]]
[Main main: prog-args]

