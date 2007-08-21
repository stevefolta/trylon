ifndef PREFIX
	PREFIX := /usr
endif


all: trylid

trylid:
	(cd library/Posix && make)
	$(CC) -o trylid .c-sources/*.c -lgc -lm

install:
	install -d $(PREFIX)/bin
	install -d $(PREFIX)/lib
	install trylid $(PREFIX)/bin
	cp -r library $(PREFIX)/lib/trylid

clean:
	rm -rf .c-sources .objects .jolt-sources .jolt-sources-self


# Tarball creation.

TARBALL_FILES := sources makefile ReadMe License tarball-date version
TARBALL_FILES += library/trylid.k library/Standard
TARBALL_FILES += library/Posix/*.st library/Posix/makefile library/Posix/*.h
TARBALL_FILES += docs/source docs/html docs/makefile
TARBALL_FILES += start.k start-self.k command-line.k
TARBALL_FILES += tests
TARBALL_FILES += build-settings .c-sources .jolt-sources

TRYLID_DIR := $(notdir $(PWD))
TARBALL_FILES := $(addprefix $(TRYLID_DIR)/,$(TARBALL_FILES))

tarball:
	date "+%Y.%m.%d %k:%M %z" > tarball-date
	cd .. && tar --create --gzip --file=$(TRYLID_DIR)/trylid.tgz 	\
		$(TARBALL_FILES)


