# Mainly used for building Trylon from the tarball.  If you're hacking on the
# the Trylon compiler, you wouldn't be using makefiles.

ifndef PREFIX
	PREFIX := /usr
endif


all: self-compiler/trylon

self-compiler/trylon:
	(cd self-compiler && make trylon)


install:
	install -d $(PREFIX)/bin
	install -d $(PREFIX)/lib
	install self-compiler/trylon $(PREFIX)/bin
	cp -r library $(PREFIX)/lib/trylon


# Tarball creation.

TARBALL_FILES := library misc makefile ReadMe License tarball-date
TARBALL_FILES += docs/source docs/html docs/makefile
TARBALL_FILES += docs/doctifier/sources docs/doctifier/build-settings
TARBALL_FILES += self-compiler/build-settings self-compiler/main
TARBALL_FILES += self-compiler/makefile self-compiler/.c-sources-self

TRYLON_DIR := $(notdir $(PWD))
TARBALL_FILES := $(addprefix $(TRYLON_DIR)/,$(TARBALL_FILES))

tarball:
	date "+%Y.%m.%d %k:%M %z" > tarball-date
	cd .. && tar --create --gzip --file=$(TRYLON_DIR)/trylon.tgz \
		$(TARBALL_FILES) --exclude '\.arch-ids'


