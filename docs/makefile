PAGES := 	\
	objects code-structure expressions statements

VPATH = source

-include makefile.local

ifndef DOCTIFIER
	DOCTIFIER = ~/trylon/docs/doctifier/doctifier
endif

HTML_PAGES := $(addprefix html/,$(addsuffix .html,$(PAGES)))


.PHONY: all

all: $(HTML_PAGES)


html/%.html: %
	$(DOCTIFIER) template: source/template $< > $@

