all: go

test.lst: test.asm
	nasm $^ -l $@

.PHONY: go
go: test.lst
	vim test.lst

