#include "Trylon_.h"

UsingSym_(Iterator)UsingClass_(Tuple__Standard)
UsingClass_(Iterator__Standard)
UsingClass_(Iterator__Tuple__Standard)
struct ClassInfo Iterator__Tuple__Standard__classInfo_ = 
	{ 12, 2, Proto_(Iterator__Tuple__Standard), Proto_(Tuple__Standard), Proto_(Iterator__Standard), nil, Sym_(Iterator) ,nil };
struct object Iterator__Tuple__Standard = 
	{ &Iterator__Tuple__Standard__classInfo_, {nil, nil} };



#define tuple__fld_	(0)
#define index__fld_	(1)


obj_ create_co___Iterator__Tuple__Standard(obj_ this_, obj_ tuple)
{
	obj_ t0_;
	DefineInt_(0, 0)
	UsingMethod_(index_co_) UsingMethod_(tuple_co_)

		{
		t0_ = Call_(tuple_co_, this_, tuple);
		t0_ = Call_(index_co_, this_, Int_(0));
		}
	return nil;
}


obj_ current_item__Iterator__Tuple__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(at_co_) UsingMethod_(index) UsingMethod_(tuple)

		{
		t0_ = Call_(tuple, this_);
		t1_ = Call_(index, this_);
		t2_ = Call_(at_co_, t0_, t1_);
		return t2_;
		}
	return nil;
}


obj_ go_forward__Iterator__Tuple__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 1)
	UsingMethod_(_pl_) UsingMethod_(index) UsingMethod_(index_co_)

		{
		t0_ = Call_(index, this_);
		t1_ = Call_(_pl_, t0_, Int_(0));
		t2_ = Call_(index_co_, this_, t1_);
		
		
		
		}
	return nil;
}


obj_ index__Iterator__Tuple__Standard(obj_ this_)
{
	return Field_(index);
}


obj_ index_co___Iterator__Tuple__Standard(obj_ this_, obj_ value)
{
	Field_(index) = value;
	return value;
}


obj_ is_done__Iterator__Tuple__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(_gt__eq_) UsingMethod_(index) UsingMethod_(num_items) UsingMethod_(tuple)

		{
		t0_ = Call_(index, this_);
		t1_ = Call_(tuple, this_);
		t2_ = Call_(num_items, t1_);
		t3_ = Call_(_gt__eq_, t0_, t2_);
		return t3_;
		}
	return nil;
}


obj_ new_co___Iterator__Tuple__Standard(obj_ this_, obj_ tuple)
{
	UsingClass_(Iterator__Tuple__Standard)
	obj_ obj = AllocObj_(Iterator__Tuple__Standard);
	create_co___Iterator__Tuple__Standard(obj, tuple);
	return obj;
}


obj_ tuple__Iterator__Tuple__Standard(obj_ this_)
{
	return Field_(tuple);
}


obj_ tuple_co___Iterator__Tuple__Standard(obj_ this_, obj_ value)
{
	Field_(tuple) = value;
	return value;
}


