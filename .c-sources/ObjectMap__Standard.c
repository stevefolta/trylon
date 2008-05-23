#include "Trylon_.h"

UsingSym_(ObjectMap)UsingClass_(Standard)
UsingClass_(Object__Standard)
UsingClass_(ObjectMap__Standard)
struct ClassInfo ObjectMap__Standard__classInfo_ = 
	{ 177, 4, Proto_(ObjectMap__Standard), Proto_(Standard), Proto_(Object__Standard), nil, Sym_(ObjectMap) ,nil };
struct object ObjectMap__Standard = 
	{ &ObjectMap__Standard__classInfo_, {nil} };


#define dictionary__fld_	(0)


obj_ Iterator__ObjectMap__Standard__accessor_(obj_ this_)
{
	UsingClass_(Iterator__ObjectMap__Standard)
	return Proto_(Iterator__ObjectMap__Standard);
}


obj_ at_co___ObjectMap__Standard(obj_ this_, obj_ key)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(at_co_) UsingMethod_(dictionary) UsingMethod_(object_ptr)

		{
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(object_ptr, key);
		t2_ = Call_(at_co_, t0_, t1_);
		return t2_;
		
		}
	return nil;
}


obj_ at_co_put_co___ObjectMap__Standard(obj_ this_, obj_ key, obj_ value)
{
	obj_ t0_;
	UsingMethod_(insert_co_at_co_)

		{
		t0_ = Call_(insert_co_at_co_, this_, value, key);
		
		}
	return nil;
}


obj_ contains_co___ObjectMap__Standard(obj_ this_, obj_ key)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(contains_co_) UsingMethod_(dictionary) UsingMethod_(object_ptr)

		{
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(object_ptr, key);
		t2_ = Call_(contains_co_, t0_, t1_);
		return t2_;
		
		
		}
	return nil;
}


obj_ count__ObjectMap__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(count) UsingMethod_(dictionary)

		{
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(count, t0_);
		return t1_;
		}
	return nil;
}


obj_ create__ObjectMap__Standard(obj_ this_)
{
	extern obj_ new__Dictionary__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(dictionary_co_)
	UsingClass_(Dictionary__Standard)

		{
		t0_ = new__Dictionary__Standard(Proto_(Dictionary__Standard));
		t1_ = Call_(dictionary_co_, this_, t0_);
		
		}
	return nil;
}


obj_ dictionary__ObjectMap__Standard(obj_ this_)
{
	return Field_(dictionary);
}


obj_ dictionary_co___ObjectMap__Standard(obj_ this_, obj_ value)
{
	Field_(dictionary) = value;
	return value;
}


obj_ insert_co_at_co___ObjectMap__Standard(obj_ this_, obj_ value, obj_ key)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(dictionary) UsingMethod_(insert_co_at_co_) UsingMethod_(object_ptr)

		{
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(object_ptr, key);
		t2_ = Call_(insert_co_at_co_, t0_, value, t1_);
		
		}
	return nil;
}


obj_ is_empty__ObjectMap__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(dictionary) UsingMethod_(is_empty)

		{
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(is_empty, t0_);
		return t1_;
		
		
		
		}
	return nil;
}


obj_ keys__ObjectMap__Standard(obj_ this_)
{
	extern obj_ new_co___Iterator__ObjectMap__Standard(obj_ this_, obj_ iterator);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(dictionary) UsingMethod_(keys)
	UsingClass_(Iterator__ObjectMap__Standard)

		{
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(keys, t0_);
		t2_ = new_co___Iterator__ObjectMap__Standard(Proto_(Iterator__ObjectMap__Standard), t1_);
		return t2_;
		
		}
	return nil;
}


obj_ new__ObjectMap__Standard(obj_ this_)
{
	UsingClass_(ObjectMap__Standard)
	obj_ obj = AllocObj_(ObjectMap__Standard);
	create__ObjectMap__Standard(obj);
	return obj;
}


obj_ num_items__ObjectMap__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(count) UsingMethod_(dictionary)

		{
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(count, t0_);
		return t1_;
		
		}
	return nil;
}


obj_ remove_co___ObjectMap__Standard(obj_ this_, obj_ key)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(dictionary) UsingMethod_(object_ptr) UsingMethod_(remove_co_)

		{
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(object_ptr, key);
		t2_ = Call_(remove_co_, t0_, t1_);
		return t2_;
		
		}
	return nil;
}


obj_ values__ObjectMap__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(dictionary) UsingMethod_(values)

		{
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(values, t0_);
		return t1_;
		
		
		}
	return nil;
}


