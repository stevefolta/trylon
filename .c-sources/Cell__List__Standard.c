#include "Trylon_.h"

UsingSym_(Cell)UsingClass_(List__Standard)
UsingClass_(Object__Standard)
UsingClass_(Cell__List__Standard)
struct ClassInfo Cell__List__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 15, 2, Proto_(Cell__List__Standard), Proto_(List__Standard), Proto_(Object__Standard), nil, Sym_(Cell), nil, nil };
struct object Cell__List__Standard = 
	{ &Cell__List__Standard__classInfo_, {nil, nil} };


#define object__fld_	(0)
#define next__fld_	(1)


obj_ create_co___Cell__List__Standard(obj_ this_, obj_ object)
{
	obj_ t0_;
	UsingMethod_(next_co_) UsingMethod_(object_co_)

		{
		t0_ = Call_(object_co_, this_, object);
		t0_ = Call_(next_co_, this_, nil);
		}
	return nil;
}


obj_ new_co___Cell__List__Standard(obj_ this_, obj_ object)
{
	UsingClass_(Cell__List__Standard)
	obj_ obj = AllocObj_(Cell__List__Standard);
	create_co___Cell__List__Standard(obj, object);
	return obj;
}


