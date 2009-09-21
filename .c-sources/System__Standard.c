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
char workingDirName[2048];
getcwd(workingDirName, 2048);
return BuildString_(workingDirName);
}


obj_ current_directory_path_co___System__Standard(obj_ this_, obj_ new_path)
{
UsingMethod_(_pl_)
UsingClass_(MessageException__Standard)
extern obj_ new_co___MessageException__Standard(obj_, obj_);

char* dirPath = CString_(new_path);
int result = chdir(dirPath);
if (result != 0) {
DefineString_(0, "Couldn't change to directory \"")
DefineString_(1, "\".")
obj_ message = Call_(_pl_, Str_(0), new_path);
message = Call_(_pl_, message, Str_(1));
obj_ exception =
new_co___MessageException__Standard(
Proto_(MessageException__Standard), message);
Throw_(exception);
}

return NULL;
}


obj_ debugger__System__Standard(obj_ this_)
{
kill(getpid(), SIGTRAP);
}


obj_ dump_gc_stats__System__Standard(obj_ this_)
{
printf("-- %d collections.\n", GC_gc_no);
printf("  heap size:                %d.\n", GC_get_heap_size());
printf("  free bytes:               %d.\n", GC_get_free_bytes());
printf("  allocated since last GC:  %d.\n", GC_get_bytes_since_gc());
printf("  total bytes:              %d.\n", GC_get_total_bytes());
return NULL;
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
}


obj_ milliseconds__System__Standard(obj_ this_)
{
struct timeval timeVal;
struct timezone timeZone;
long long now;

gettimeofday(&timeVal, &timeZone);
now = ((long long) timeVal.tv_sec) * 1000000LL + timeVal.tv_usec;
return BuildInt_(now / 1000);
}


obj_ num_garbage_collections__System__Standard(obj_ this_)
{
return BuildInt_(GC_gc_no);
}


obj_ run_program_co_arguments_co___System__Standard(obj_ this_, obj_ name, obj_ arguments)
{
UsingMethod_(iterator) UsingMethod_(is_done) UsingMethod_(current_item)
UsingMethod_(go_forward) UsingMethod_(num_items)

/* Build the argv[] array. */
int numArgs = IntValue_(Call_(num_items, arguments));
char** args = (char**) Allocate_((numArgs + 2) * sizeof(char*));
args[0] = CString_(name);
int argNum = 1;
obj_ iterator = Call_(iterator, arguments);
while (1) {
if (Call_(is_done, iterator))
break;

obj_ arg = Call_(current_item, iterator);
args[argNum] = CString_(arg);

Call_(go_forward, iterator);
argNum += 1;
}
args[argNum] = NULL;

// run it
pid_t childPID = fork();
if (childPID == 0) {
// this is the child
execvp(args[0], args);
return BuildInt_(0);
}
else if (childPID != -1) {
// this is the parent; wait for the child
int status;
int result = waitpid(childPID, &status, 0);
if (result == -1 || !WIFEXITED(status))
return BuildInt_(-1);
return BuildInt_(WEXITSTATUS(status));
}

return NULL;
}


obj_ sleep_ms_co___System__Standard(obj_ this_, obj_ milliseconds)
{
int ms = IntValue_(milliseconds);
struct timespec timeSpec;
timeSpec.tv_sec = ms / 1000;
timeSpec.tv_nsec = (ms % 1000) * 1000 * 1000;
nanosleep(&timeSpec, NULL);
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
}


obj_ sysname__System__Standard(obj_ this_)
{
struct utsname names;
int result = uname(&names);
if (result == -1)
names.sysname[0] = 0;
return BuildString_(names.sysname);
}


