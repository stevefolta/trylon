-include makefile.local-settings

ifeq "$(shell uname)" "Darwin"
	CFLAGS += -DOSX_FINK
	INCLUDE_PATHS += -I/sw/include
	LIB_PATHS += -L/sw/lib
endif

CFLAGS += -g


default:
	../../vlange $(VLANGE_FLAGS) main

c-test:
	$(CC) $(CFLAGS) $(INCLUDE_PATHS) \
		.c-sources/*.c \
		$(LIB_PATHS) -lgc -ldl 	\
		-o test-prog

