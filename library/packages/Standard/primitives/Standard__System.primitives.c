/* Standard__System.primitives.c */

#include "Trylon_.h"
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
	// Fink doesn't use the gc directory for some reason.
	#include <gc.h>
#else
	#include <gc/gc.h>
#endif


UsingMethod_(_pl_)
UsingMethod_(count)
UsingMethod_(iterator)
UsingMethod_(is_done)
UsingMethod_(current_item)
UsingMethod_(go_forward)


obj_ milliseconds__Standard__System()
{
	struct timeval timeVal;
	struct timezone timeZone;
	long long now;

	gettimeofday(&timeVal, &timeZone);
	now = ((long long) timeVal.tv_sec) * 1000000LL + timeVal.tv_usec;
	return BuildInt_(now / 1000);
}


obj_ sleep_ms_co___Standard__System(obj_ milliseconds)
{
	int ms = IntValue_(milliseconds);
	struct timespec timeSpec;
	timeSpec.tv_sec = ms / 1000;
	timeSpec.tv_nsec = (ms % 1000) * 1000 * 1000;
	nanosleep(&timeSpec, NULL);
}


obj_ num_garbage_collections__Standard__System()
{
	return BuildInt_(GC_gc_no);
}


obj_ dump_gc_stats__Standard__System()
{
	printf("-- %d collections.\n", GC_gc_no);
	printf("  heap size:                %d.\n", GC_get_heap_size());
	printf("  free bytes:               %d.\n", GC_get_free_bytes());
	printf("  allocated since last GC:  %d.\n", GC_get_bytes_since_gc());
	printf("  total bytes:              %d.\n", GC_get_total_bytes());
	return NULL;
}


obj_ debugger__Standard__System()
{
	kill(getpid(), SIGTRAP);
}


obj_ environment_variable_named_co___Standard__System(obj_ name)
{
	char* nameStr = MakeCString_(name);
	char* value = getenv(nameStr);

	obj_ result;
	if (value)
		result = BuildString_(value);
	else
		result = BuildString_("");
	return result;
}


obj_ current_directory_path____Standard__System(void)
{
	char workingDirName[2048];
	getcwd(workingDirName, 2048);
	return BuildString_(workingDirName);
}


obj_ current_directory_path_co___Standard__System(obj_ new_path)
{
	extern obj_ new_co___Standard__MessageException(obj_);

	char* dirPath = MakeCString_(new_path);
	int result = chdir(dirPath);
	if (result != 0) {
		DefineString_(0, "Couldn't change to directory \"")
		DefineString_(1, "\".")
		obj_ message = Call_(_pl_, Str_(0), new_path);
		message = Call_(_pl_, message, Str_(1));
		obj_ exception = new_co___Standard__MessageException(message);
		Throw_(exception);
		}

	return NULL;
}


obj_ run_program_co_arguments_co___Standard__System(obj_ name, obj_ arguments)
{
	/* Build the argv[] array. */
	int numArgs = IntValue_(Call_(count, arguments));
	char** args = (char**) Allocate_((numArgs + 2) * sizeof(char*));
	args[0] = MakeCString_(name);
	int argNum = 1;
	obj_ iterator = Call_(iterator, arguments);
	while (1) {
		if (Test_(Call_(is_done, iterator)))
			break;

		obj_ arg = Call_(current_item, iterator);
		args[argNum] = MakeCString_(arg);

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


obj_ sysname__Standard__System(void)
{
	struct utsname names;
	int result = uname(&names);
	if (result == -1)
		names.sysname[0] = 0;
	return BuildString_(names.sysname);
}


obj_ strftime_co_format_co___Standard__System(obj_ time_int, obj_ format)
{
	time_t timeInt = IntValue_(time_int);
	char* formatStr = MakeCString_(format);
	struct tm* timeStruct = localtime(&timeInt);
	char resultStr[128];
	size_t numChars = 
		strftime(resultStr, sizeof(resultStr) - 1, formatStr, timeStruct);
	return BuildStringOfLength_(resultStr, numChars);
}



