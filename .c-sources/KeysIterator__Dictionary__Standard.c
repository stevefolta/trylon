#include "Trylon_.h"

UsingSym_(KeysIterator)UsingClass_(Dictionary__Standard)
UsingClass_(Iterator__Dictionary__Standard)
UsingClass_(KeysIterator__Dictionary__Standard)
struct ClassInfo KeysIterator__Dictionary__Standard__classInfo_ = 
	{ 38, 4, Proto_(KeysIterator__Dictionary__Standard), Proto_(Dictionary__Standard), Proto_(Iterator__Dictionary__Standard), nil, Sym_(KeysIterator) ,nil };
struct object KeysIterator__Dictionary__Standard = 
	{ &KeysIterator__Dictionary__Standard__classInfo_, {nil} };


#define stack_top__fld_	(0)



obj_ create_co___KeysIterator__Dictionary__Standard(obj_ this_, obj_ root)
{
	obj_ t0_;
	obj_ create_co___Iterator__Dictionary__Standard(obj_, obj_);

		{
		t0_ = create_co___Iterator__Dictionary__Standard(this_, root);
		
		}
	return nil;
}


obj_ current_item__KeysIterator__Dictionary__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(key) UsingMethod_(node) UsingMethod_(stack_top)

		{
		t0_ = Call_(stack_top, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			return nil;
			}
		t0_ = Call_(stack_top, this_);
		t1_ = Call_(node, t0_);
		t2_ = Call_(key, t1_);
		return t2_;
		
		
		}
	return nil;
}


obj_ new_co___KeysIterator__Dictionary__Standard(obj_ this_, obj_ root)
{
	UsingClass_(KeysIterator__Dictionary__Standard)
	obj_ obj = AllocObj_(KeysIterator__Dictionary__Standard);
	create_co___KeysIterator__Dictionary__Standard(obj, root);
	return obj;
}


