#include "Trylon_.h"

UsingClass_(ErrnoException__Posix) UsingClass_(NoOpenModeException__Posix) UsingClass_(PipeFDs__Posix) UsingClass_(WaitResult__Posix) 
static obj_ tu0_[];
UsingSym_(Posix)UsingClass_(Main)
UsingClass_(Object__Standard)
UsingClass_(Posix)
struct ClassInfo Posix__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 84, 0, Proto_(Posix), Proto_(Main), Proto_(Object__Standard), nil, Sym_(Posix), nil, ((obj_) tu0_) };
struct object Posix = 
	{ &Posix__classInfo_, {} };

	UsingInt_(4)
	UsingInt_(2)
	UsingInt_(0)
	UsingInt_(1)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(4), Proto_(ErrnoException__Posix), Proto_(NoOpenModeException__Posix), Proto_(PipeFDs__Posix), Proto_(WaitResult__Posix) };


DeclareSharedField_(stderr_fd, Posix, SmallInt_(2))
DeclareSharedField_(stdin_fd, Posix, SmallInt_(0))
DeclareSharedField_(stdout_fd, Posix, SmallInt_(1))

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <sys/wait.h>

static void throw_errno()
{
extern obj_ new__ErrnoException__Posix(obj_);
UsingClass_(ErrnoException__Posix);
Throw_(new__ErrnoException__Posix(Proto_(ErrnoException__Posix)));
}

static char** build_args_list(obj_ arguments)
{
UsingMethod_(num_items)
int numArgs = IntValue_(Call_(num_items, arguments));
char** args = (char**) Allocate_((numArgs + 1) * sizeof(char*));
int argNum = 0;
ForStart_(1, arguments, arg)
args[argNum] = CString_(arg);
argNum += 1;
ForEnd_(1)
args[argNum] = NULL;
return args;
}

UsingSym_(O_ul_RDONLY) UsingSym_(O_ul_WRONLY) UsingSym_(O_ul_RDWR)
UsingSym_(O_ul_APPEND) UsingSym_(O_ul_ASYNC) UsingSym_(O_ul_CREAT)
UsingSym_(O_ul_DIRECT) UsingSym_(O_ul_DIRECTORY)
UsingSym_(O_ul_EXCL) UsingSym_(O_ul_LARGEFILE)
UsingSym_(O_ul_NOATIME) UsingSym_(O_ul_NOCTTY) UsingSym_(O_ul_NOFOLLOW)
UsingSym_(O_ul_NONBLOCK) UsingSym_(O_ul_NDELAY)
UsingSym_(O_ul_SYNC) UsingSym_(O_ul_TRUNC)
UsingSym_(append) UsingSym_(async) UsingSym_(create) UsingSym_(direct) UsingSym_(directory)
UsingSym_(exclusive) UsingSym_(large_file)
UsingSym_(no_atime) UsingSym_(no_atime) UsingSym_(no_ctty) UsingSym_(no_follow)
UsingSym_(non_block) UsingSym_(ndelay) UsingSym_(sync) UsingSym_(trunc) UsingSym_(truncate)
UsingSym_(read_only) UsingSym_(read_write) UsingSym_(write_only)

static const EnumDictEntry_ openFlags[] = {
{ Sym_(O_ul_APPEND), O_APPEND },
{ Sym_(O_ul_ASYNC), O_ASYNC },
{ Sym_(O_ul_CREAT), O_CREAT },
#ifdef __USE_GNU
{ Sym_(O_ul_DIRECT), O_DIRECT },
{ Sym_(O_ul_DIRECTORY), O_DIRECTORY },
#endif
{ Sym_(O_ul_EXCL), O_EXCL },
#ifdef __USE_LARGEFILE64
{ Sym_(O_ul_LARGEFILE), O_LARGEFILE },
#endif
{ Sym_(O_ul_NDELAY), O_NDELAY },
#ifdef __USE_GNU
{ Sym_(O_ul_NOATIME), O_NOATIME },
#endif
{ Sym_(O_ul_NOCTTY), O_NOCTTY },
#ifdef __USE_GNU
{ Sym_(O_ul_NOFOLLOW), O_NOFOLLOW },
#endif
{ Sym_(O_ul_NONBLOCK), O_NONBLOCK },
{ Sym_(O_ul_RDONLY), O_RDONLY },
{ Sym_(O_ul_RDWR), O_RDWR },
{ Sym_(O_ul_SYNC), O_SYNC },
{ Sym_(O_ul_TRUNC), O_TRUNC },
{ Sym_(O_ul_WRONLY), O_WRONLY },
{ Sym_(append), O_APPEND },
{ Sym_(async), O_ASYNC },
{ Sym_(create), O_CREAT },
#ifdef __USE_GNU
{ Sym_(direct), O_DIRECT },
{ Sym_(directory), O_DIRECTORY },
#endif
{ Sym_(exclusive), O_EXCL },
#ifdef __USE_LARGEFILE64
{ Sym_(large_file), O_LARGEFILE },
#endif
#ifdef __USE_GNU
{ Sym_(no_atime), O_NOATIME },
#endif
{ Sym_(no_ctty), O_NOCTTY },
#ifdef __USE_GNU
{ Sym_(no_follow), O_NOFOLLOW },
#endif
{ Sym_(non_block), O_NONBLOCK },
{ Sym_(ndelay), O_NDELAY },
{ Sym_(read_only), O_RDONLY },
{ Sym_(read_write), O_RDWR },
{ Sym_(sync), O_SYNC },
{ Sym_(trunc), O_TRUNC },
{ Sym_(truncate), O_TRUNC },
{ Sym_(write_only), O_WRONLY },
};
obj_ ErrnoException__Posix__accessor_(obj_ this_)
{
	UsingClass_(ErrnoException__Posix)
	return Proto_(ErrnoException__Posix);
}


obj_ NoOpenModeException__Posix__accessor_(obj_ this_)
{
	UsingClass_(NoOpenModeException__Posix)
	return Proto_(NoOpenModeException__Posix);
}


obj_ PipeFDs__Posix__accessor_(obj_ this_)
{
	UsingClass_(PipeFDs__Posix)
	return Proto_(PipeFDs__Posix);
}


obj_ WaitResult__Posix__accessor_(obj_ this_)
{
	UsingClass_(WaitResult__Posix)
	return Proto_(WaitResult__Posix);
}


obj_ chdir_co___Posix(obj_ this_, obj_ path)
{
if (chdir(CString_(path)) < 0)
throw_errno();
return nil;
}


obj_ close_fd_co___Posix(obj_ this_, obj_ fd)
{
return BuildInt_(close(IntValue_(fd)));
return nil;
}


obj_ dup_from_co_to_co___Posix(obj_ this_, obj_ old_fd, obj_ new_fd)
{
int result = dup2(IntValue_(old_fd), IntValue_(new_fd));
if (result < 0)
throw_errno();
return BuildInt_(result);
return nil;
}


obj_ dup_co___Posix(obj_ this_, obj_ old_fd)
{
int result = dup(IntValue_(old_fd));
if (result < 0)
throw_errno();
return BuildInt_(result);
return nil;
}


obj_ errno__Posix(obj_ this_)
{
return BuildInt_(errno);
return nil;
}


obj_ exec_co_arguments_co___Posix(obj_ this_, obj_ path, obj_ arguments)
{
execv(CString_(path), build_args_list(arguments));
throw_errno();
return nil;
}


obj_ exec_co_arguments_co_environment_co___Posix(obj_ this_, obj_ filename, obj_ arguments, obj_ environment)
{
char** args = build_args_list(arguments);
char** env = build_args_list(environment);
execve(CString_(filename), args, env);
throw_errno();
return nil;
}


obj_ execp_co_arguments_co___Posix(obj_ this_, obj_ file, obj_ arguments)
{
execvp(CString_(file), build_args_list(arguments));
throw_errno();
return nil;
}


obj_ exit_co___Posix(obj_ this_, obj_ status)
{
_exit(IntValue_(status));
return nil;
}


obj_ fchdir_co___Posix(obj_ this_, obj_ path)
{
if (fchdir(IntValue_(path)) < 0)
throw_errno();
return nil;
}


obj_ fork__Posix(obj_ this_)
{
return BuildInt_(fork());
return nil;
}


obj_ getcwd__Posix(obj_ this_)
{
char* path = AllocNonPtr_(2048);
char* result = getcwd(path, 2048);
if (result == NULL)
throw_errno();
return BuildString_(path);
return nil;
}


obj_ lseek_fd_co_offset_co_whence_co___Posix(obj_ this_, obj_ fd, obj_ offset, obj_ whence)
{
UsingSym_(SEEK_ul_CUR) UsingSym_(SEEK_ul_END) UsingSym_(SEEK_ul_SET)
UsingSym_(current) UsingSym_(eof) UsingSym_(set)
static const EnumDictEntry_ whenceDict[] = {
{ Sym_(SEEK_ul_CUR), SEEK_CUR },
{ Sym_(SEEK_ul_END), SEEK_END },
{ Sym_(SEEK_ul_SET), SEEK_SET },
{ Sym_(current), SEEK_CUR },
{ Sym_(eof), SEEK_END },
{ Sym_(set), SEEK_SET },
};
int whenceInt =
SymToEnum_(whence, whenceDict, NumEnumsIn_(whenceDict), SEEK_SET);
off_t result = lseek(IntValue_(fd), IntValue_(offset), whenceInt);
if (result == (off_t) -1)
throw_errno();
return BuildInt_(result);
return nil;
}


obj_ mkdir_co_mode_co___Posix(obj_ this_, obj_ path, obj_ mode)
{
if (mkdir(CString_(path), IntValue_(mode)) < 0)
throw_errno();
return nil;
}


obj_ open_co_flags_co___Posix(obj_ this_, obj_ path, obj_ flags)
{
int result;
int intFlags = BitFlagsFromSyms_(flags, openFlags, NumEnumsIn_(openFlags));
if ((intFlags & O_CREAT) != 0) {
UsingClass_(NoOpenModeException__Posix);
extern obj_ new_co___NoOpenModeException__Posix(obj_, obj_);
Throw_(
new_co___NoOpenModeException__Posix(
Proto_(NoOpenModeException__Posix), path));
}
result = open(CString_(path), intFlags);
if (result < 1)
throw_errno();
return BuildInt_(result);
return nil;
}


obj_ open_co_flags_co_mode_co___Posix(obj_ this_, obj_ path, obj_ flags, obj_ mode)
{
int intFlags = BitFlagsFromSyms_(flags, openFlags, NumEnumsIn_(openFlags));
int result = open(CString_(path), intFlags, IntValue_(mode));
if (result < 1)
throw_errno();
return BuildInt_(result);
return nil;
}


obj_ pipe__Posix(obj_ this_)
{
int pipefds[2];
int result;
extern obj_ new_read_co_write_co___PipeFDs__Posix(obj_, obj_, obj_);
UsingClass_(PipeFDs__Posix)

result = pipe(pipefds);
if (result < 0)
throw_errno();

return
new_read_co_write_co___PipeFDs__Posix(
Proto_(PipeFDs__Posix), BuildInt_(pipefds[0]), BuildInt_(pipefds[1]));
return nil;
}


obj_ rand__Posix(obj_ this_)
{
return BuildInt_(rand());
return nil;
}


obj_ read_fd_co_to_co_size_co___Posix(obj_ this_, obj_ fd, obj_ buffer, obj_ size)
{
int result = read(IntValue_(fd), BytePtrValue_(buffer), IntValue_(size));
if (result < 0)
throw_errno();
return BuildInt_(result);
return nil;
}


obj_ references__Posix(obj_ this_)
{
	UsingSym_(O_ul_RDONLY)
	UsingSym_(O_ul_WRONLY)
	UsingSym_(O_ul_RDWR)
	UsingSym_(O_ul_APPEND)
	UsingSym_(O_ul_ASYNC)
	UsingSym_(O_ul_CREAT)
	UsingSym_(O_ul_DIRECT)
	UsingSym_(O_ul_DIRECTORY)
	UsingSym_(O_ul_EXCL)
	UsingSym_(O_ul_LARGEFILE)
	UsingSym_(O_ul_NOATIME)
	UsingSym_(O_ul_NOCTTY)
	UsingSym_(O_ul_NOFOLLOW)
	UsingSym_(O_ul_NONBLOCK)
	UsingSym_(O_ul_NDELAY)
	UsingSym_(O_ul_SYNC)
	UsingSym_(O_ul_TRUNC)
	UsingSym_(read_only)
	UsingSym_(read_write)
	UsingSym_(write_only)
	UsingSym_(append)
	UsingSym_(async)
	UsingSym_(close_on_exec)
	UsingSym_(create)
	UsingSym_(direct)
	UsingSym_(directory)
	UsingSym_(exclusive)
	UsingSym_(large_file)
	UsingSym_(no_atime)
	UsingSym_(no_ctty)
	UsingSym_(no_follow)
	UsingSym_(non_block)
	UsingSym_(ndelay)
	UsingSym_(sync)
	UsingSym_(trunc)
	UsingSym_(truncate)
	UsingSym_(no_hang)
	UsingSym_(untraced)
	UsingSym_(WNOHANG)
	UsingSym_(WUNTRACED)
	UsingSym_(set)
	UsingSym_(current)
	UsingSym_(eof)
	UsingSym_(SEEK_ul_SET)
	UsingSym_(SEEK_ul_CUR)
	UsingSym_(SEEK_ul_END)

		{
		
		
		}
	return nil;
}


obj_ rmdir_co___Posix(obj_ this_, obj_ path)
{
if (rmdir(CString_(path)) < 0)
throw_errno();
return nil;
}


obj_ srand_co___Posix(obj_ this_, obj_ seed)
{
srand(IntValue_(seed));
return nil;
}


obj_ stderr_fd__Posix(obj_ this_)
{
	return SharedField_(stderr_fd, Posix);
}


obj_ stderr_fd_co___Posix(obj_ this_, obj_ value)
{
	SetSharedField_(stderr_fd, Posix, value);
	return value;
}


obj_ stdin_fd__Posix(obj_ this_)
{
	return SharedField_(stdin_fd, Posix);
}


obj_ stdin_fd_co___Posix(obj_ this_, obj_ value)
{
	SetSharedField_(stdin_fd, Posix, value);
	return value;
}


obj_ stdout_fd__Posix(obj_ this_)
{
	return SharedField_(stdout_fd, Posix);
}


obj_ stdout_fd_co___Posix(obj_ this_, obj_ value)
{
	SetSharedField_(stdout_fd, Posix, value);
	return value;
}


obj_ strerror_co___Posix(obj_ this_, obj_ errnum)
{
return BuildString_(strerror(IntValue_(errnum)));
return nil;
}


obj_ wait__Posix(obj_ this_)
{
UsingClass_(WaitResult__Posix)
UsingMethod_(new_co_status_co_)
pid_t child;
int status;
obj_ result;

/* Call wait(). */
child = wait(&status);

/* Build the result. */
result = Call_(new_co_status_co_, Proto_(WaitResult__Posix), BuildInt_(child), BuildInt_(status));
return result;
return nil;
}


obj_ wait_pid_co___Posix(obj_ this_, obj_ pid)
{
	obj_ t0_;
	UsingMethod_(wait_pid_co_options_co_)

		{
		t0_ = Call_(wait_pid_co_options_co_, this_, pid, nil);
		return t0_;
		}
	return nil;
}


obj_ wait_pid_co_options_co___Posix(obj_ this_, obj_ pid, obj_ options)
{
UsingSym_(no_hang) UsingSym_(untraced)
UsingSym_(WNOHANG) UsingSym_(WUNTRACED)
UsingClass_(WaitResult__Posix)
UsingMethod_(new_co_status_co_)
int optionsInt = 0;
pid_t child;
int status;
obj_ result;
static const EnumDictEntry_ optionDict[] = {
{ Sym_(WNOHANG), WNOHANG },
{ Sym_(WUNTRACED), WUNTRACED },
{ Sym_(no_hang), WNOHANG },
{ Sym_(untraced), WUNTRACED },
};

/* Gather the options. */
optionsInt = BitFlagsFromSyms_(options, optionDict, NumEnumsIn_(optionDict));

/* Call waitpid(). */
child = waitpid(IntValue_(pid), &status, optionsInt);

/* Build the result. */
result = Call_(new_co_status_co_, Proto_(WaitResult__Posix), BuildInt_(child), BuildInt_(status));
return result;
return nil;
}


obj_ write_fd_co_from_co_size_co___Posix(obj_ this_, obj_ fd, obj_ buffer, obj_ size)
{
int result = write(IntValue_(fd), BytePtrValue_(buffer), IntValue_(size));
if (result < 0)
throw_errno();
return BuildInt_(result);
return nil;
}


