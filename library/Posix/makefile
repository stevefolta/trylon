-include makefile.local

ifndef IDFLAGS
	ifndef IDST_ROOT
		IDST_ROOT := $(firstword $(wildcard $(HOME)/idst*))
		ifndef IDST_ROOT
			bogue := $(info Your idst directory could not be found.)
			bogue := $(info Create a "makefile.local" file and use it to set)
			bogue := $(info IDST_ROOT.  For example:)
			bogue := $(info  )
			bogue := $(info    IDST_ROOT := $$(HOME)/path/to/idst)
			bogue := $(info  )
			bogue := $(error "Couldn't find your idst directory.")
		endif
		bogue := $(info Found idst directory at $(IDST_ROOT).)
		bogue := $(info If that is not correct, create a "makefile.local")
		bogue := $(info and use it to set IDST_ROOT.)
		bogue := $(info  )
	endif
	IDFLAGS   = -g -I$(IDST_ROOT)/function/objects
endif

IDC   = idc -k # -O

OBJEXT_SO       = .so

FILES = Stat.so Dirent.so Timeval.so jmp_buf.so Stdlib.so Termios.so

all: $(FILES)

%$(OBJEXT_SO) : %.st
	$(IDC) $(IDFLAGS) -s $< -o $@

clean:
	rm *.so *.so.c

