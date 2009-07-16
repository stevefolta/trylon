#include "Trylon_.h"

UsingSym_(Exception)UsingClass_(Standard)
UsingClass_(Object__Standard)
UsingClass_(Exception__Standard)
struct ClassInfo Exception__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 50, 0, Proto_(Exception__Standard), Proto_(Standard), Proto_(Object__Standard), nil, Sym_(Exception), nil, nil };
struct object Exception__Standard = 
	{ &Exception__Standard__classInfo_, {} };




obj_ message__Exception__Standard(obj_ this_)
{
	extern obj_ virtual__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		}
	return nil;
}


