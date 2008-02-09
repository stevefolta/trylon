#include "Trylon_.h"

UsingSym_(Iterator)UsingClass_(ExpandoArray__CCompiler)
UsingClass_(Object__Standard)
UsingClass_(Iterator__ExpandoArray__CCompiler)
struct ClassInfo Iterator__ExpandoArray__CCompiler__classInfo_ = 
	{ 149, 8, Proto_(Iterator__ExpandoArray__CCompiler), Proto_(ExpandoArray__CCompiler), Proto_(Object__Standard), nil, Sym_(Iterator) ,nil };
struct object Iterator__ExpandoArray__CCompiler = 
	{ &Iterator__ExpandoArray__CCompiler__classInfo_, {nil, nil} };


#define array__fld_	(0)
#define index__fld_	(1)


obj_ array__Iterator__ExpandoArray__CCompiler(obj_ this_)
{
	return Field_(array);
}


obj_ array_co___Iterator__ExpandoArray__CCompiler(obj_ this_, obj_ value)
{
	Field_(array) = value;
	return value;
}


obj_ create_co___Iterator__ExpandoArray__CCompiler(obj_ this_, obj_ array)
{
	obj_ t0_;
	DefineInt_(0, 0)
	UsingMethod_(array_co_) UsingMethod_(index_co_)

		{
		t0_ = Call_(array_co_, this_, array);
		t0_ = Call_(index_co_, this_, Int_(0));
		
		}
	return nil;
}


obj_ current_item__Iterator__ExpandoArray__CCompiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(array) UsingMethod_(at_co_) UsingMethod_(index)

		{
		t0_ = Call_(array, this_);
		t1_ = Call_(index, this_);
		t2_ = Call_(at_co_, t0_, t1_);
		return t2_;
		
		}
	return nil;
}


obj_ go_forward__Iterator__ExpandoArray__CCompiler(obj_ this_)
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


obj_ index__Iterator__ExpandoArray__CCompiler(obj_ this_)
{
	return Field_(index);
}


obj_ index_co___Iterator__ExpandoArray__CCompiler(obj_ this_, obj_ value)
{
	Field_(index) = value;
	return value;
}


obj_ is_done__Iterator__ExpandoArray__CCompiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(_gt__eq_) UsingMethod_(array) UsingMethod_(index) UsingMethod_(num_items)

		{
		t0_ = Call_(index, this_);
		t1_ = Call_(array, this_);
		t2_ = Call_(num_items, t1_);
		t3_ = Call_(_gt__eq_, t0_, t2_);
		return t3_;
		
		}
	return nil;
}


obj_ new_co___Iterator__ExpandoArray__CCompiler(obj_ this_, obj_ array)
{
	UsingClass_(Iterator__ExpandoArray__CCompiler)
	obj_ obj = AllocObj_(Iterator__ExpandoArray__CCompiler);
	create_co___Iterator__ExpandoArray__CCompiler(obj, array);
	return obj;
}


