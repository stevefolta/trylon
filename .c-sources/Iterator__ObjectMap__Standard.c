#include "Trylon_.h"

UsingSym_(Iterator)UsingClass_(ObjectMap__Standard)
UsingClass_(Object__Standard)
UsingClass_(Iterator__ObjectMap__Standard)
struct ClassInfo Iterator__ObjectMap__Standard__classInfo_ = 
	{ 180, 1, Proto_(Iterator__ObjectMap__Standard), Proto_(ObjectMap__Standard), Proto_(Object__Standard), nil, Sym_(Iterator) ,nil };
struct object Iterator__ObjectMap__Standard = 
	{ &Iterator__ObjectMap__Standard__classInfo_, {nil} };


#define dict_iterator__fld_	(0)


obj_ create_co___Iterator__ObjectMap__Standard(obj_ this_, obj_ iterator)
{
	obj_ t0_;
	UsingMethod_(dict_iterator_co_)

		{
		t0_ = Call_(dict_iterator_co_, this_, iterator);
		
		}
	return nil;
}


obj_ current_item__Iterator__ObjectMap__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(as_object) UsingMethod_(current_item) UsingMethod_(dict_iterator)

		{
		t0_ = Call_(dict_iterator, this_);
		t1_ = Call_(current_item, t0_);
		t2_ = Call_(as_object, t1_);
		return t2_;
		
		}
	return nil;
}


obj_ dict_iterator__Iterator__ObjectMap__Standard(obj_ this_)
{
	return Field_(dict_iterator);
}


obj_ dict_iterator_co___Iterator__ObjectMap__Standard(obj_ this_, obj_ value)
{
	Field_(dict_iterator) = value;
	return value;
}


obj_ go_forward__Iterator__ObjectMap__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(dict_iterator) UsingMethod_(go_forward)

		{
		t0_ = Call_(dict_iterator, this_);
		t1_ = Call_(go_forward, t0_);
		
		}
	return nil;
}


obj_ is_done__Iterator__ObjectMap__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(dict_iterator) UsingMethod_(is_done)

		{
		t0_ = Call_(dict_iterator, this_);
		t1_ = Call_(is_done, t0_);
		return t1_;
		
		}
	return nil;
}


obj_ iterator__Iterator__ObjectMap__Standard(obj_ this_)
{

		{
		return this_;
		
		
		
		
		}
	return nil;
}


obj_ new_co___Iterator__ObjectMap__Standard(obj_ this_, obj_ iterator)
{
	UsingClass_(Iterator__ObjectMap__Standard)
	obj_ obj = AllocObj_(Iterator__ObjectMap__Standard);
	create_co___Iterator__ObjectMap__Standard(obj, iterator);
	return obj;
}


