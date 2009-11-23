#include "Trylon_.h"

UsingSym_(GarbageCollector)UsingClass_(Standard)
UsingClass_(Object__Standard)
UsingClass_(GarbageCollector__Standard)
struct ClassInfo GarbageCollector__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 33, 0, Proto_(GarbageCollector__Standard), Proto_(Standard), Proto_(Object__Standard), nil, Sym_(GarbageCollector), nil, nil };
struct object GarbageCollector__Standard = 
	{ &GarbageCollector__Standard__classInfo_, {} };




#include <gc/gc.h>
obj_ force_collection__GarbageCollector__Standard(obj_ this_)
{
GC_gcollect();
return nil;
}


obj_ num_collections__GarbageCollector__Standard(obj_ this_)
{
return BuildInt_(GC_gc_no);
return nil;
}


