default:
	trylon

clean:
	rm -r .c-sources .objects


#### OLD...

-include makefile.local-settings

ifeq "$(shell uname)" "Darwin"
	CFLAGS += -DOSX_FINK
	INCLUDE_PATHS += -I/sw/include
	LIB_PATHS += -L/sw/lib
endif

CFLAGS += -g


#	default:
#		[ -d .c-sources ] || mkdir .c-sources
#		../../trylon $(TRYLON_FLAGS) main
#		$(CC) $(CFLAGS) $(INCLUDE_PATHS) \
#			.c-sources/*.c \
#			$(LIB_PATHS) -lgc -ldl 	\
#			-o hello-world


