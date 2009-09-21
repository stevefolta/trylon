# Makefile for a Trylon program.

PROGRAM := iff-test


SOURCES := $(wildcard main) $(wildcard sources/*)
SOURCES += $(wildcard build-settings) $(wildcard build-settings.local)


all: runnit


$(PROGRAM): $(SOURCES)
	@trylon
	@echo "---------------------------------------------"
	@echo


.PHONY: runnit
runnit: $(PROGRAM)
	@./$(PROGRAM)

