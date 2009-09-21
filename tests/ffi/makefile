# Makefile for a Trylon program.

PROGRAM := ffi-test


SOURCES := main $(wildcard sources/*)


all: runnit


$(PROGRAM): $(SOURCES)
	@trylon
	@echo "---------------------------------------------"
	@echo


.PHONY: runnit
runnit: $(PROGRAM)
	@./$(PROGRAM)

