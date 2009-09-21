# Makefile for a Trylon program.

PROGRAM := test-fixed-bugs


SOURCES := main $(wildcard sources/*) $(wildcard build-settings) $(wildcard build-settings.local)


all: runnit


$(PROGRAM): $(SOURCES)
	@trylon
	@echo "---------------------------------------------"
	@echo


.PHONY: runnit
runnit: $(PROGRAM)
	@echo "Compiled via C:"
	@echo "---------------"
	@./$(PROGRAM)
	@echo
	@echo "As a script:"
	@echo "------------"
	@./main

