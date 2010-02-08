#include "Trylon_.h"

UsingSym_(System)UsingClass_(Standard)
UsingClass_(Object__Standard)
UsingClass_(System__Standard)
struct ClassInfo System__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 59, 0, Proto_(System__Standard), Proto_(Standard), Proto_(Object__Standard), nil, Sym_(System), nil, nil };
struct object System__Standard = 
	{ &System__Standard__classInfo_, {} };




#include <sys/time.h>
#include <time.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/utsname.h>
#include <stdio.h>
#ifdef OSX_FINK
/* "Fink doesn't use the gc directory for some reason." */
#include <gc.h>
#else
#include <gc/gc.h>
#endif
obj_ current_directory_path__System__Standard(obj_ this_)
{
	extern obj_ getcwd__Posix(obj_ this_);
	obj_ t0_;
	UsingClass_(Posix)

		{
		t0_ = getcwd__Posix(Proto_(Posix));
		return t0_;
		}
	return nil;
}


obj_ current_directory_path_co___System__Standard(obj_ this_, obj_ new_path)
{
	extern obj_ chdir_co___Posix(obj_ this_, obj_ path);
	obj_ t0_;
	UsingClass_(Posix)

		{
		t0_ = chdir_co___Posix(Proto_(Posix), new_path);
		}
	return nil;
}


obj_ debugger__System__Standard(obj_ this_)
{
kill(getpid(), SIGTRAP);
return nil;
}


obj_ dump_gc_stats__System__Standard(obj_ this_)
{
printf("-- %d collections.\n", GC_gc_no);
printf("  heap size:                %d.\n", GC_get_heap_size());
printf("  free bytes:               %d.\n", GC_get_free_bytes());
printf("  allocated since last GC:  %d.\n", GC_get_bytes_since_gc());
printf("  total bytes:              %d.\n", GC_get_total_bytes());
return NULL;
return nil;
}


obj_ environment_variable_named_co___System__Standard(obj_ this_, obj_ name)
{
char* nameStr = CString_(name);
char* value = getenv(nameStr);

obj_ result;
if (value)
result = BuildString_(value);
else
result = BuildString_("");
return result;
return nil;
}


obj_ milliseconds__System__Standard(obj_ this_)
{
struct timeval timeVal;
struct timezone timeZone;
long long now;

gettimeofday(&timeVal, &timeZone);
now = ((long long) timeVal.tv_sec) * 1000000LL + timeVal.tv_usec;
return BuildInt_(now / 1000);
return nil;
}


obj_ num_garbage_collections__System__Standard(obj_ this_)
{
return BuildInt_(GC_gc_no);
return nil;
}


obj_ run_program_co_arguments_co___System__Standard(obj_ this_, obj_ name, obj_ arguments)
{
	extern obj_ from_co___List__Standard(obj_ this_, obj_ collection);
	extern obj_ fork__Posix(obj_ this_);
	extern obj_ execp_co_arguments_co___Posix(obj_ this_, obj_ file, obj_ arguments);
	extern obj_ exit_co___Posix(obj_ this_, obj_ status);
	extern obj_ wait_pid_co___Posix(obj_ this_, obj_ pid);
	extern obj_ error_co___Standard(obj_ this_, obj_ message);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(1)
	DefineString_(0, "Child process didn't exit properly.")
	UsingMethod_(_eq__eq_) UsingMethod_(exit_status) UsingMethod_(exited) UsingMethod_(is_valid) UsingMethod_(prepend_co_) UsingMethod_(unary_minus)
	UsingClass_(ErrnoException__Posix)
	UsingClass_(List__Standard)
	UsingClass_(Posix)
	UsingClass_(Standard)

		{
		obj_ args, pid;
		/*  Prepend the name to the arguments list. */
		t0_ = from_co___List__Standard(Proto_(List__Standard), arguments);
		args = t0_;
		t0_ = Call_(prepend_co_, args, name);
		
		/*  Run it. */
		t0_ = fork__Posix(Proto_(Posix));
		pid = t0_;
		t0_ = Call_(_eq__eq_, pid, SmallInt_(0));
		if (t0_)
			{
			/*  This is the child. */
			t0_ = execp_co_arguments_co___Posix(Proto_(Posix), name, args);
			t0_ = exit_co___Posix(Proto_(Posix), SmallInt_(1));
			}
		else
			{
			t0_ = Call_(unary_minus, SmallInt_(1));
			t1_ = Call_(_eq__eq_, pid, t0_);
			if (t1_)
				{
				Throw_(Proto_(ErrnoException__Posix));
				}
			else
				{
				obj_ result;
				/*  This is the parent. */
				t0_ = wait_pid_co___Posix(Proto_(Posix), pid);
				result = t0_;
				t0_ = Call_(is_valid, result);
				t1_ = Not_(t0_);
				if ((t1_) == nil) {
					t2_ = Call_(exited, result);
					t3_ = Not_(t2_);
					t1_ = t3_;
					}
				if (t1_)
					{
					t0_ = error_co___Standard(Proto_(Standard), Str_(0));
					}
				t0_ = Call_(exit_status, result);
				return t0_;
				}
			}
		}
	return nil;
}


obj_ sleep_ms_co___System__Standard(obj_ this_, obj_ milliseconds)
{
int ms = IntValue_(milliseconds);
struct timespec timeSpec;
timeSpec.tv_sec = ms / 1000;
timeSpec.tv_nsec = (ms % 1000) * 1000 * 1000;
nanosleep(&timeSpec, NULL);
return nil;
}


obj_ strftime_co_format_co___System__Standard(obj_ this_, obj_ time_int, obj_ format)
{
time_t timeInt = IntValue_(time_int);
char* formatStr = CString_(format);
struct tm* timeStruct = localtime(&timeInt);
char resultStr[128];
size_t numChars = 
strftime(resultStr, sizeof(resultStr) - 1, formatStr, timeStruct);
return BuildStringOfLength_(resultStr, numChars);
return nil;
}


obj_ sysname__System__Standard(obj_ this_)
{
struct utsname names;
int result = uname(&names);
if (result == -1)
names.sysname[0] = 0;
return BuildString_(names.sysname);
return nil;
}


