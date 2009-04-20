#include "Trylon_.h"

UsingSym_(Pair)UsingClass_(KeyValuePairsIterator__Dictionary__Standard)
UsingClass_(Object__Standard)
UsingClass_(Pair__KeyValuePairsIterator__Dictionary__Standard)
struct ClassInfo Pair__KeyValuePairsIterator__Dictionary__Standard__classInfo_ = 
	{ 44, 2, Proto_(Pair__KeyValuePairsIterator__Dictionary__Standard), Proto_(KeyValuePairsIterator__Dictionary__Standard), Proto_(Object__Standard), nil, Sym_(Pair) ,nil };
struct object Pair__KeyValuePairsIterator__Dictionary__Standard = 
	{ &Pair__KeyValuePairsIterator__Dictionary__Standard__classInfo_, {nil, nil} };


#define key__fld_	(0)
#define value__fld_	(1)


obj_ create_co___Pair__KeyValuePairsIterator__Dictionary__Standard(obj_ this_, obj_ node)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(key) UsingMethod_(key_co_) UsingMethod_(value) UsingMethod_(value_co_)

		{
		t0_ = Call_(key, node);
		t1_ = Call_(key_co_, this_, t0_);
		t0_ = Call_(value, node);
		t1_ = Call_(value_co_, this_, t0_);
		
		
		
		}
	return nil;
}


obj_ key__Pair__KeyValuePairsIterator__Dictionary__Standard(obj_ this_)
{
	return Field_(key);
}


obj_ key_co___Pair__KeyValuePairsIterator__Dictionary__Standard(obj_ this_, obj_ value)
{
	Field_(key) = value;
	return value;
}


obj_ new_co___Pair__KeyValuePairsIterator__Dictionary__Standard(obj_ this_, obj_ node)
{
	UsingClass_(Pair__KeyValuePairsIterator__Dictionary__Standard)
	obj_ obj = AllocObj_(Pair__KeyValuePairsIterator__Dictionary__Standard);
	create_co___Pair__KeyValuePairsIterator__Dictionary__Standard(obj, node);
	return obj;
}


obj_ value__Pair__KeyValuePairsIterator__Dictionary__Standard(obj_ this_)
{
	return Field_(value);
}


obj_ value_co___Pair__KeyValuePairsIterator__Dictionary__Standard(obj_ this_, obj_ value)
{
	Field_(value) = value;
	return value;
}


