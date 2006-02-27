PAGES := 	\
	trylon expressions statements

VPATH = source

HTML_PAGES := $(addprefix html/,$(addsuffix .html,$(PAGES)))


.PHONY: all

all: $(HTML_PAGES)


html/%.html: %
	doctifier/doctifier template: source/template $< > $@
