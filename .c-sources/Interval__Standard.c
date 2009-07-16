#include "Trylon_.h"

UsingSym_(Interval)UsingClass_(Standard)
UsingClass_(Object__Standard)
UsingClass_(Interval__Standard)
struct ClassInfo Interval__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 172, 3, Proto_(Interval__Standard), Proto_(Standard), Proto_(Object__Standard), nil, Sym_(Interval), nil, nil };
struct object Interval__Standard = 
	{ &Interval__Standard__classInfo_, {nil, nil, nil} };


#define start__fld_	(0)
#define stop__fld_	(1)
#define value__fld_	(2)


obj_ create_co___Interval__Standard(obj_ this_, obj_ stop)
{
	obj_ t0_;
	obj_ t1_;
	UsingInt_(0)
	UsingMethod_(start) UsingMethod_(start_co_) UsingMethod_(stop_co_) UsingMethod_(value_co_)

		{
		t0_ = Call_(start_co_, this_, SmallInt_(0));
		t0_ = Call_(stop_co_, this_, stop);
		t0_ = Call_(start, this_);
		t1_ = Call_(value_co_, this_, t0_);
		}
	return nil;
}


obj_ create_co_to_co___Interval__Standard(obj_ this_, obj_ start, obj_ stop)
{
	obj_ t0_;
	UsingMethod_(start_co_) UsingMethod_(stop_co_) UsingMethod_(value_co_)

		{
		t0_ = Call_(start_co_, this_, start);
		t0_ = Call_(stop_co_, this_, stop);
		t0_ = Call_(value_co_, this_, start);
		}
	return nil;
}


obj_ current_item__Interval__Standard(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(value)

		{
		t0_ = Call_(value, this_);
		return t0_;
		}
	return nil;
}


obj_ go_forward__Interval__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(1)
	UsingMethod_(_pl_) UsingMethod_(value) UsingMethod_(value_co_)

		{
		t0_ = Call_(value, this_);
		t1_ = Call_(_pl_, t0_, SmallInt_(1));
		t2_ = Call_(value_co_, this_, t1_);
		}
	return nil;
}


obj_ is_done__Interval__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(_gt__eq_) UsingMethod_(stop) UsingMethod_(value)

		{
		t0_ = Call_(value, this_);
		t1_ = Call_(stop, this_);
		t2_ = Call_(_gt__eq_, t0_, t1_);
		return t2_;
		}
	return nil;
}


obj_ iterator__Interval__Standard(obj_ this_)
{

		{
		return this_;
		}
	return nil;
}


obj_ new_co___Interval__Standard(obj_ this_, obj_ stop)
{
	UsingClass_(Interval__Standard)
	obj_ obj = AllocObj_(Interval__Standard);
	create_co___Interval__Standard(obj, stop);
	return obj;
}


obj_ new_co_to_co___Interval__Standard(obj_ this_, obj_ start, obj_ stop)
{
	UsingClass_(Interval__Standard)
	obj_ obj = AllocObj_(Interval__Standard);
	create_co_to_co___Interval__Standard(obj, start, stop);
	return obj;
}


