/* Standard__System.primitives.c */

#include "Trylon_.h"
#include <sys/time.h>
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


obj_ num_garbage_collections__Standard__System()
{
	return BuildInt_(GC_gc_no);
}


