#include "Trylon_.h"

UsingClass_(Iterator__empty__Standard) 
static obj_ tu0_[];
UsingSym_(empty)UsingClass_(Standard)
UsingClass_(Collection__Standard)
UsingClass_(empty__Standard)
struct ClassInfo empty__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 20, 0, Proto_(empty__Standard), Proto_(Standard), Proto_(Collection__Standard), nil, Sym_(empty), nil, ((obj_) tu0_) };
struct object empty__Standard = 
	{ &empty__Standard__classInfo_, {} };

	UsingInt_(1)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(1), Proto_(Iterator__empty__Standard) };




obj_ Iterator__empty__Standard__accessor_(obj_ this_)
{
	UsingClass_(Iterator__empty__Standard)
	return Proto_(Iterator__empty__Standard);
}


obj_ is_empty__empty__Standard(obj_ this_)
{

		{
		return true_;
		}
	return nil;
}


obj_ iterator__empty__Standard(obj_ this_)
{
	extern obj_ new__Iterator__empty__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Iterator__empty__Standard)

		{
		t0_ = new__Iterator__empty__Standard(Proto_(Iterator__empty__Standard));
		return t0_;
		}
	return nil;
}


obj_ num_items__empty__Standard(obj_ this_)
{
	UsingInt_(0)

		{
		return SmallInt_(0);
		}
	return nil;
}


