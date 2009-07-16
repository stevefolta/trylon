#include "Trylon_.h"

UsingSym_(StringBytesIterator)UsingClass_(Standard)
UsingClass_(Iterator__Standard)
UsingClass_(StringBytesIterator__Standard)
struct ClassInfo StringBytesIterator__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 9, 3, Proto_(StringBytesIterator__Standard), Proto_(Standard), Proto_(Iterator__Standard), nil, Sym_(StringBytesIterator), nil, nil };
struct object StringBytesIterator__Standard = 
	{ &StringBytesIterator__Standard__classInfo_, {nil, nil, nil} };



#define start__fld_	(0)
#define stopper__fld_	(1)
#define string__fld_	(2)


obj_ _gt___StringBytesIterator__Standard(obj_ this_, obj_ other)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(_gt_) UsingMethod_(start)

		{
		t0_ = Call_(start, this_);
		t1_ = Call_(start, other);
		t2_ = Call_(_gt_, t0_, t1_);
		return t2_;
		}
	return nil;
}


obj_ back_up__StringBytesIterator__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(1)
	UsingMethod_(_) UsingMethod_(_gt_) UsingMethod_(start) UsingMethod_(start_co_) UsingMethod_(string)

		{
		t0_ = Call_(start, this_);
		t1_ = Call_(string, this_);
		t2_ = Call_(start, t1_);
		t3_ = Call_(_gt_, t0_, t2_);
		if (t3_)
			{
			t0_ = Call_(start, this_);
			t1_ = Call_(_, t0_, SmallInt_(1));
			t2_ = Call_(start_co_, this_, t1_);
			}
		}
	return nil;
}


obj_ copy__StringBytesIterator__Standard(obj_ this_)
{
	extern obj_ new_co_to_co_string_co___StringBytesIterator__Standard(obj_ this_, obj_ start, obj_ stopper, obj_ string);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(start) UsingMethod_(stopper) UsingMethod_(string)
	UsingClass_(StringBytesIterator__Standard)

		{
		t0_ = Call_(start, this_);
		t1_ = Call_(stopper, this_);
		t2_ = Call_(string, this_);
		t3_ = new_co_to_co_string_co___StringBytesIterator__Standard(Proto_(StringBytesIterator__Standard), t0_, t1_, t2_);
		return t3_;
		}
	return nil;
}


obj_ create_co___StringBytesIterator__Standard(obj_ this_, obj_ string)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(start) UsingMethod_(start_co_) UsingMethod_(stopper) UsingMethod_(stopper_co_) UsingMethod_(string_co_)

		{
		t0_ = Call_(string_co_, this_, string);
		t0_ = Call_(start, string);
		t1_ = Call_(start_co_, this_, t0_);
		t0_ = Call_(stopper, string);
		t1_ = Call_(stopper_co_, this_, t0_);
		}
	return nil;
}


obj_ create_co_to_co_string_co___StringBytesIterator__Standard(obj_ this_, obj_ start, obj_ stopper, obj_ string)
{
	obj_ t0_;
	UsingMethod_(start_co_) UsingMethod_(stopper_co_) UsingMethod_(string_co_)

		{
		t0_ = Call_(start_co_, this_, start);
		t0_ = Call_(stopper_co_, this_, stopper);
		t0_ = Call_(string_co_, this_, string);
		}
	return nil;
}


obj_ current_item__StringBytesIterator__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(deref_char) UsingMethod_(start)

		{
		t0_ = Call_(start, this_);
		t1_ = Call_(deref_char, t0_);
		return t1_;
		}
	return nil;
}


obj_ go_forward__StringBytesIterator__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(1)
	UsingMethod_(_pl_) UsingMethod_(start) UsingMethod_(start_co_)

		{
		t0_ = Call_(start, this_);
		t1_ = Call_(_pl_, t0_, SmallInt_(1));
		t2_ = Call_(start_co_, this_, t1_);
		}
	return nil;
}


obj_ is_done__StringBytesIterator__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(_gt__eq_) UsingMethod_(start) UsingMethod_(stopper)

		{
		t0_ = Call_(start, this_);
		t1_ = Call_(stopper, this_);
		t2_ = Call_(_gt__eq_, t0_, t1_);
		return t2_;
		}
	return nil;
}


obj_ iterator__StringBytesIterator__Standard(obj_ this_)
{

		{
		return this_;
		}
	return nil;
}


obj_ new_co___StringBytesIterator__Standard(obj_ this_, obj_ string)
{
	UsingClass_(StringBytesIterator__Standard)
	obj_ obj = AllocObj_(StringBytesIterator__Standard);
	create_co___StringBytesIterator__Standard(obj, string);
	return obj;
}


obj_ new_co_to_co_string_co___StringBytesIterator__Standard(obj_ this_, obj_ start, obj_ stopper, obj_ string)
{
	UsingClass_(StringBytesIterator__Standard)
	obj_ obj = AllocObj_(StringBytesIterator__Standard);
	create_co_to_co_string_co___StringBytesIterator__Standard(obj, start, stopper, string);
	return obj;
}


obj_ remainder__StringBytesIterator__Standard(obj_ this_)
{
	extern obj_ new_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(start) UsingMethod_(stopper)
	UsingClass_(String__Standard)

		{
		t0_ = Call_(start, this_);
		t1_ = Call_(stopper, this_);
		t2_ = new_co_to_co___String__Standard(Proto_(String__Standard), t0_, t1_);
		return t2_;
		}
	return nil;
}


obj_ skip_co___StringBytesIterator__Standard(obj_ this_, obj_ num_chars)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(_pl_) UsingMethod_(start) UsingMethod_(start_co_)

		{
		t0_ = Call_(start, this_);
		t1_ = Call_(_pl_, t0_, num_chars);
		t2_ = Call_(start_co_, this_, t1_);
		}
	return nil;
}


