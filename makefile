ifndef PREFIX
	PREFIX := /usr
endif


all: trylon

trylon:
	$(CC) -o trylon .c-sources/*.c -lgc -lm

.PHONY: jolt-backend install clean

jolt-backend:
	(cd library/IdPosix && make)

install:
	install -d $(PREFIX)/bin
	install -d $(PREFIX)/lib
	install trylon $(PREFIX)/bin
	cp -r library $(PREFIX)/lib/trylon

clean:
	rm -rf \
		.c-sources .objects .jolt-sources .jolt-sources-self .c-sources-2 .objects-2


# Tarball creation.

TARBALL_FILES := sources makefile ReadMe License tarball-date version
TARBALL_FILES += library/trylon.k library/Standard
TARBALL_FILES += library/Posix/*.st library/Posix/makefile library/Posix/*.h
TARBALL_FILES += docs/source docs/html docs/makefile
TARBALL_FILES += start.k start-self.k command-line.k
TARBALL_FILES += tests
TARBALL_FILES += build-settings .c-sources

TRYLON_DIR := $(notdir $(PWD))
TARBALL_FILES := $(addprefix $(TRYLON_DIR)/,$(TARBALL_FILES))

tarball:
	date "+%Y.%m.%d %k:%M %z" > tarball-date
	cd .. && tar --create --gzip --file=$(TRYLON_DIR)/trylon.tgz 	\
		$(TARBALL_FILES)


