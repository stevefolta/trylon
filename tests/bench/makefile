# Makefile for a Trylon program.

PROGRAM := bench


SOURCES := main $(wildcard sources/*)


all: runnit


$(PROGRAM): $(SOURCES)
	@trylon
	@echo "---------------------------------------------"
	@echo


.PHONY: runnit
runnit: $(PROGRAM)
	@./$(PROGRAM)

