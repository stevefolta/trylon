#include "Trylon_.h"

UsingSym_(ValuesIterator)UsingClass_(Dictionary__Standard)
UsingClass_(Iterator__Dictionary__Standard)
UsingClass_(ValuesIterator__Dictionary__Standard)
struct ClassInfo ValuesIterator__Dictionary__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 41, 1, Proto_(ValuesIterator__Dictionary__Standard), Proto_(Dictionary__Standard), Proto_(Iterator__Dictionary__Standard), nil, Sym_(ValuesIterator), nil, nil };
struct object ValuesIterator__Dictionary__Standard = 
	{ &ValuesIterator__Dictionary__Standard__classInfo_, {nil} };


#define stack_top__fld_	(0)



obj_ create_co___ValuesIterator__Dictionary__Standard(obj_ this_, obj_ root)
{
	obj_ create_co___Iterator__Dictionary__Standard(obj_, obj_);
	obj_ t0_;

		{
		t0_ = create_co___Iterator__Dictionary__Standard(this_, root);
		}
	return nil;
}


obj_ current_item__ValuesIterator__Dictionary__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(node) UsingMethod_(stack_top) UsingMethod_(value)

		{
		t0_ = Call_(stack_top, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			return nil;
			}
		t0_ = Call_(stack_top, this_);
		t1_ = Call_(node, t0_);
		t2_ = Call_(value, t1_);
		return t2_;
		}
	return nil;
}


obj_ new_co___ValuesIterator__Dictionary__Standard(obj_ this_, obj_ root)
{
	UsingClass_(ValuesIterator__Dictionary__Standard)
	obj_ obj = AllocObj_(ValuesIterator__Dictionary__Standard);
	create_co___ValuesIterator__Dictionary__Standard(obj, root);
	return obj;
}


