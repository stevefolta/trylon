PAGES := 	\
	objects code-structure expressions statements building debugging 	\
	index

VPATH = source

-include makefile.local

ifndef DOCTIFIER
	DOCTIFIER = ./doctifier/doctifier
endif

HTML_PAGES := $(addprefix html/,$(addsuffix .html,$(PAGES)))


.PHONY: all

all: $(DOCTIFIER) $(HTML_PAGES)


html/%.html: %
	$(DOCTIFIER) template: source/template $< > $@

doctifier/doctifier: doctifier/sources/*
	(cd doctifier && trylon)


