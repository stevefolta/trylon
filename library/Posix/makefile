-include makefile.local
ifndef IDFLAGS
	IDFLAGS   = -g -I/home/steve/idst-svn/function/objects
endif

IDC   = idc -k # -O

OBJEXT_SO       = .so

FILES = Stat.so Dirent.so

all: $(FILES)

%$(OBJEXT_SO) : %.st
	$(IDC) $(IDFLAGS) -s $< -o $@
