#include "Trylon_.h"

UsingSym_(SingleObjectIterator)UsingClass_(Standard)
UsingClass_(Iterator__Standard)
UsingClass_(SingleObjectIterator__Standard)
struct ClassInfo SingleObjectIterator__Standard__classInfo_ = 
	{ 17, 1, Proto_(SingleObjectIterator__Standard), Proto_(Standard), Proto_(Iterator__Standard), nil, Sym_(SingleObjectIterator) ,nil };
struct object SingleObjectIterator__Standard = 
	{ &SingleObjectIterator__Standard__classInfo_, {nil} };



#define object__fld_	(0)


obj_ create_co___SingleObjectIterator__Standard(obj_ this_, obj_ object)
{
	obj_ t0_;
	UsingMethod_(object_co_)

		{
		t0_ = Call_(object_co_, this_, object);
		
		}
	return nil;
}


obj_ current_item__SingleObjectIterator__Standard(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(object)

		{
		t0_ = Call_(object, this_);
		return t0_;
		
		}
	return nil;
}


obj_ go_forward__SingleObjectIterator__Standard(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(object_co_)

		{
		t0_ = Call_(object_co_, this_, nil);
		
		
		
		}
	return nil;
}


obj_ is_done__SingleObjectIterator__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(object)

		{
		t0_ = Call_(object, this_);
		t1_ = Not_(t0_);
		return t1_;
		
		}
	return nil;
}


obj_ new_co___SingleObjectIterator__Standard(obj_ this_, obj_ object)
{
	UsingClass_(SingleObjectIterator__Standard)
	obj_ obj = AllocObj_(SingleObjectIterator__Standard);
	create_co___SingleObjectIterator__Standard(obj, object);
	return obj;
}


obj_ object__SingleObjectIterator__Standard(obj_ this_)
{
	return Field_(object);
}


obj_ object_co___SingleObjectIterator__Standard(obj_ this_, obj_ value)
{
	Field_(object) = value;
	return value;
}


