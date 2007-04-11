IDC   = idc -k # -O
IDFLAGS   = -g -I/home/steve/idst-svn/function/objects

OBJEXT_SO       = .so

FILES = struct_stat.so

all: $(FILES)

%$(OBJEXT_SO) : %.st
	$(IDC) $(IDFLAGS) -s $< -o $@
