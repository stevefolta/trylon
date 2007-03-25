PAGES := 	\
	objects code-structure

VPATH = source

HTML_PAGES := $(addprefix html/,$(addsuffix .html,$(PAGES)))


.PHONY: all

all: $(HTML_PAGES)


html/%.html: %
	~/trylon/docs/doctifier/doctifier template: source/template $< > $@

