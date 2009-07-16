#include "Trylon_.h"

UsingSym_(Iterator)UsingClass_(Standard)
UsingClass_(Object__Standard)
UsingClass_(Iterator__Standard)
struct ClassInfo Iterator__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 13, 0, Proto_(Iterator__Standard), Proto_(Standard), Proto_(Object__Standard), nil, Sym_(Iterator), nil, nil };
struct object Iterator__Standard = 
	{ &Iterator__Standard__classInfo_, {} };




obj_ current_item__Iterator__Standard(obj_ this_)
{
	extern obj_ virtual__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		}
	return nil;
}


obj_ go_forward__Iterator__Standard(obj_ this_)
{
	extern obj_ virtual__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		}
	return nil;
}


obj_ is_done__Iterator__Standard(obj_ this_)
{
	extern obj_ virtual__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		}
	return nil;
}


obj_ next__Iterator__Standard(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(current_item) UsingMethod_(go_forward)

		{
		obj_ result;
		t0_ = Call_(current_item, this_);
		result = t0_;
		t0_ = Call_(go_forward, this_);
		return result;
		}
	return nil;
}


