#include "Trylon_.h"

UsingSym_(Implementation)UsingClass_(Standard)
UsingClass_(Object__Standard)
UsingClass_(Implementation__Standard)
struct ClassInfo Implementation__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 34, 0, Proto_(Implementation__Standard), Proto_(Standard), Proto_(Object__Standard), nil, Sym_(Implementation), nil, nil };
struct object Implementation__Standard = 
	{ &Implementation__Standard__classInfo_, {} };




obj_ _dt_target_language__Implementation__Standard(obj_ this_)
{
	DefineString_(0, "C")

		{
		return Str_(0);
		}
	return nil;
}


obj_ allocate_bytes_non_ptr_co___Implementation__Standard(obj_ this_, obj_ num_bytes)
{
return BuildBytePtr_(AllocNonPtr_(IntValue_(num_bytes)));
return nil;
}


obj_ allocate_bytes_co___Implementation__Standard(obj_ this_, obj_ num_bytes)
{
return BuildBytePtr_(Allocate_(IntValue_(num_bytes)));
return nil;
}


obj_ allocate_object_co_with_extra_slots_co___Implementation__Standard(obj_ this_, obj_ proto, obj_ num_extra_slots)
{
return CloneObjExtra_(proto, IntValue_(num_extra_slots));
return nil;
}


obj_ ptr_size__Implementation__Standard(obj_ this_)
{
return BuildInt_(sizeof(obj_));
return nil;
}


