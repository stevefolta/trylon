# For use when trylon doesn't yet exist on a system, such as from a tarball 
# that includes the .c-sources directory.

C_SOURCES_DIR := .c-sources-self

all: trylon

C_SOURCES := $(wildcard $(C_SOURCES_DIR)/*.c)

CFLAGS := -g
LINK_FLAGS := -lgc -ldl -lm

ifeq "$(shell uname)" "Darwin"
	CFLAGS += -DOSX_FINK -I/sw/include
	LINK_FLAGS += -L/sw/lib
endif

trylon:
	$(CC) -o $@ $(C_SOURCES) $(CFLAGS) $(LINK_FLAGS)

