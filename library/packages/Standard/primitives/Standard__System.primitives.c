/* Standard__System.primitives.c */

#include "Trylon_.h"
#include <sys/time.h>
#include <time.h>
#include <signal.h>
#ifdef OSX_FINK
	// Fink doesn't use the gc directory for some reason.
	#include <gc.h>
#else
	#include <gc/gc.h>
#endif


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


obj_ debugger__Standard__System()
{
	kill(getpid(), SIGTRAP);
}


