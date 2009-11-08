ifndef PREFIX
	PREFIX := /usr
endif

ifeq "$(shell uname)" "Darwin"
	PLATFORM_FLAGS = -DMAC_OSX
	# Assume the MacPorts version of the Boehm GC is installed.
	PLATFORM_FLAGS += -I/opt/local/include -L/opt/local/lib
	# Use this if you're using Fink:
	# PLATFORM_FLAGS += -DOSX_FINK -I/sw/include -L/sw/lib
endif

all: trylon

trylon:
	$(CC) -o trylon .c-sources/*.c -lgc -lm $(PLATFORM_FLAGS)

.PHONY: jolt-backend install clean tests syntax-test fix-bugs-test x86-compiler-test

jolt-backend:
	(cd library/IdPosix && make)

install:
	install -d $(PREFIX)/bin
	install -d $(PREFIX)/lib
	install trylon $(PREFIX)/bin
	install trylon-interpreter $(PREFIX)/bin
	cp -r library $(PREFIX)/lib/trylon

clean:
	rm -rf \
		.c-sources .objects .jolt-sources .jolt-sources-self .c-sources-2 .objects-2

tests: syntax-test standard-library-test fixed-bugs-test x86-compiler-test

syntax-test:
	cd tests/syntax && rm -f syntax-test && make && trylon main && echo

standard-library-test:
	cd tests/standard-library && rm -f test-standard-library .objects/* && make && echo

fixed-bugs-test:
	cd tests/fixed-bugs && rm -f test-fixed-bugs .objects/* && make && echo

x86-compiler-test:
	cd sources/X86Compiler/test && make


# Tarball creation.

TARBALL_FILES := sources makefile ReadMe License tarball-date version
TARBALL_FILES += library/Trylon_.h library/Trylon_.c library/build-settings
TARBALL_FILES += library/Standard library/Cairo library/Xlib library/Xft
TARBALL_FILES += library/trylon.k
TARBALL_FILES += library/IdPosix/*.st library/IdPosix/makefile
TARBALL_FILES += library/IdPosix/*.h
TARBALL_FILES += docs/source docs/html docs/makefile
TARBALL_FILES += docs/doctifier/build-settings docs/doctifier/sources
TARBALL_FILES += start.k start-self.k command-line.k
TARBALL_FILES += tests
TARBALL_FILES += build-settings .c-sources
TARBALL_FILES += trylon-interpreter

TRYLON_DIR := $(notdir $(PWD))
TARBALL_FILES := $(addprefix $(TRYLON_DIR)/,$(TARBALL_FILES))

tarball:
	date "+%Y.%m.%d %k:%M %z" > tarball-date
	cd .. && tar --create --gzip --file=$(TRYLON_DIR)/trylon.tgz 	\
		$(TARBALL_FILES)


