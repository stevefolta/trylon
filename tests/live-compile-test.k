(load "library/trylid.k")
(load-trylid)

(define Compiler (trylid-proto Compiler))

(define file [(trylid-proto Standard File) new: (trylid-string "tests/Test")])
(define trylid-namespace
	[(trylid-proto Compiler ExistingProto)
		new: (trylid-string "Trylid") proto: Trylid])
[trylid-namespace is-main: true]
[Compiler
	compile-file: file
	as: (trylid-string "Test")
	into: trylid-namespace]

