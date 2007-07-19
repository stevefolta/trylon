;; Setup Trylid's runtime.
(load "../../library/trylid.k")
(load-trylid)

;; Pre-load the program.
(load [[*jolt-sources-path* , '"load.k"] _stringValue])


;; Run the program.
(define prog-args [(trylid-proto Standard List) new])
[prog-args append: (trylid-string "bench")]
[Trylid main: prog-args]

