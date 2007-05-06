(load "library/trylid.k")
(load-trylid)
(load ".jolt-sources/load.k")

(define Compiler (trylid-proto Compiler))

(define file [(trylid-proto Standard File) new: (trylid-string "tests/Test")])
(define trylid-namespace
	[(trylid-proto Compiler ExistingProto)
		new: (trylid-string "Trylid") proto: Trylid])
[trylid-namespace is-main: true]

;; [(import "CompilerOptions") verboseTree: true]
[Compiler
	compile-file: file
	as: (trylid-string "Test")
	into: trylid-namespace]

(define Standard (trylid-proto Standard))
[Standard print: (trylid-string "Test name = ")]
[Standard print-line: [[Trylid Test] name]]

