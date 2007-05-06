(load "library/trylid.k")
(load-trylid)

(define Compiler (trylid-proto Compiler))

(define file [(trylid-proto Standard File) new: (trylid-string "tests/Test")])
[Compiler
	compile-file: file
	as: (trylid-string "Test")
	into: trylid-root-object]

