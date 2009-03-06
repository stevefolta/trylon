# Makefile for a Trylon program.

PROGRAM := syntax-test


SOURCES := main $(wildcard sources/*)


all: runnit


$(PROGRAM): $(SOURCES)
	@trylon
	@echo "---------------------------------------------"
	@echo


.PHONY: runnit
runnit: $(PROGRAM)
	@./$(PROGRAM)

