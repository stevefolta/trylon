PAGES := 	\
	objects code-structure

VPATH = source

DOCTIFIER = ~/trylon/docs/doctifier/doctifier

HTML_PAGES := $(addprefix html/,$(addsuffix .html,$(PAGES)))


.PHONY: all

all: $(HTML_PAGES)


html/%.html: %
	$(DOCTIFIER) template: source/template $< > $@

