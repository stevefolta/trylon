PAGES := 	\
	objects code-structure expressions statements

VPATH = source

-include makefile.local

ifndef DOCTIFIER
	DOCTIFIER = ~/trylon/docs/doctifier/doctifier
endif

HTML_PAGES := $(addprefix html/,$(addsuffix .html,$(PAGES)))
HTML_PAGES += website/index.html


.PHONY: all

all: $(HTML_PAGES)


html/%.html: %
	$(DOCTIFIER) template: source/template $< > $@

website/%.html: website/%
	$(DOCTIFIER) template: source/template $< > $@


