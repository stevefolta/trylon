#include "Trylon_.h"

UsingClass_(Pair__KeyValuePairsIterator__Dictionary__Standard) 
static obj_ tu0_[];
UsingSym_(KeyValuePairsIterator)UsingClass_(Dictionary__Standard)
UsingClass_(Iterator__Dictionary__Standard)
UsingClass_(KeyValuePairsIterator__Dictionary__Standard)
struct ClassInfo KeyValuePairsIterator__Dictionary__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 38, 1, Proto_(KeyValuePairsIterator__Dictionary__Standard), Proto_(Dictionary__Standard), Proto_(Iterator__Dictionary__Standard), nil, Sym_(KeyValuePairsIterator), nil, ((obj_) tu0_) };
struct object KeyValuePairsIterator__Dictionary__Standard = 
	{ &KeyValuePairsIterator__Dictionary__Standard__classInfo_, {nil} };

	UsingInt_(1)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(1), Proto_(Pair__KeyValuePairsIterator__Dictionary__Standard) };

#define stack_top__fld_	(0)



obj_ Pair__KeyValuePairsIterator__Dictionary__Standard__accessor_(obj_ this_)
{
	UsingClass_(Pair__KeyValuePairsIterator__Dictionary__Standard)
	return Proto_(Pair__KeyValuePairsIterator__Dictionary__Standard);
}


obj_ create_co___KeyValuePairsIterator__Dictionary__Standard(obj_ this_, obj_ root)
{
	obj_ create_co___Iterator__Dictionary__Standard(obj_, obj_);
	obj_ t0_;

		{
		t0_ = create_co___Iterator__Dictionary__Standard(this_, root);
		}
	return nil;
}


obj_ current_item__KeyValuePairsIterator__Dictionary__Standard(obj_ this_)
{
	extern obj_ new_co___Pair__KeyValuePairsIterator__Dictionary__Standard(obj_ this_, obj_ node);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(node) UsingMethod_(stack_top)
	UsingClass_(Pair__KeyValuePairsIterator__Dictionary__Standard)

		{
		obj_ node;
		t0_ = Call_(stack_top, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			return nil;
			}
		t0_ = Call_(stack_top, this_);
		t1_ = Call_(node, t0_);
		node = t1_;
		t0_ = new_co___Pair__KeyValuePairsIterator__Dictionary__Standard(Proto_(Pair__KeyValuePairsIterator__Dictionary__Standard), node);
		return t0_;
		}
	return nil;
}


obj_ new_co___KeyValuePairsIterator__Dictionary__Standard(obj_ this_, obj_ root)
{
	UsingClass_(KeyValuePairsIterator__Dictionary__Standard)
	obj_ obj = AllocObj_(KeyValuePairsIterator__Dictionary__Standard);
	create_co___KeyValuePairsIterator__Dictionary__Standard(obj, root);
	return obj;
}


