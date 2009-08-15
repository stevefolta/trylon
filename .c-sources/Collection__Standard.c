#include "Trylon_.h"

UsingSym_(Collection)UsingClass_(Standard)
UsingClass_(Object__Standard)
UsingClass_(Collection__Standard)
struct ClassInfo Collection__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 5, 0, Proto_(Collection__Standard), Proto_(Standard), Proto_(Object__Standard), nil, Sym_(Collection), nil, nil };
struct object Collection__Standard = 
	{ &Collection__Standard__classInfo_, {} };




obj_ is_empty__Collection__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingInt_(0)
	UsingMethod_(_gt_) UsingMethod_(num_items)

		{
		t0_ = Call_(num_items, this_);
		t1_ = Call_(_gt_, t0_, SmallInt_(0));
		return t1_;
		}
	return nil;
}


obj_ iterator__Collection__Standard(obj_ this_)
{
	extern obj_ virtual__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		}
	return nil;
}


obj_ num_items__Collection__Standard(obj_ this_)
{
	extern obj_ virtual__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		}
	return nil;
}


