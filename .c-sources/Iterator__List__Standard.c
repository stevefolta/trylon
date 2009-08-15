#include "Trylon_.h"

UsingSym_(Iterator)UsingClass_(List__Standard)
UsingClass_(Iterator__Standard)
UsingClass_(Iterator__List__Standard)
struct ClassInfo Iterator__List__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 10, 1, Proto_(Iterator__List__Standard), Proto_(List__Standard), Proto_(Iterator__Standard), nil, Sym_(Iterator), nil, nil };
struct object Iterator__List__Standard = 
	{ &Iterator__List__Standard__classInfo_, {nil} };



#define cell__fld_	(0)


obj_ create_co___Iterator__List__Standard(obj_ this_, obj_ cell)
{
	obj_ t0_;
	UsingMethod_(cell_co_)

		{
		t0_ = Call_(cell_co_, this_, cell);
		}
	return nil;
}


obj_ current_item__Iterator__List__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(cell) UsingMethod_(object)

		{
		t0_ = Call_(cell, this_);
		t1_ = Call_(object, t0_);
		return t1_;
		}
	return nil;
}


obj_ go_forward__Iterator__List__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(cell) UsingMethod_(cell_co_) UsingMethod_(next)

		{
		t0_ = Call_(cell, this_);
		t1_ = Call_(next, t0_);
		t2_ = Call_(cell_co_, this_, t1_);
		}
	return nil;
}


obj_ is_done__Iterator__List__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(cell)

		{
		t0_ = Call_(cell, this_);
		t1_ = Not_(t0_);
		return t1_;
		}
	return nil;
}


obj_ new_co___Iterator__List__Standard(obj_ this_, obj_ cell)
{
	UsingClass_(Iterator__List__Standard)
	obj_ obj = AllocObj_(Iterator__List__Standard);
	create_co___Iterator__List__Standard(obj, cell);
	return obj;
}


