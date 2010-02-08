#include "Trylon_.h"

UsingSym_(ReceivedBuffer)UsingClass_(StreamLinesReader__Standard)
UsingClass_(Object__Standard)
UsingClass_(ReceivedBuffer__StreamLinesReader__Standard)
struct ClassInfo ReceivedBuffer__StreamLinesReader__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 87, 3, Proto_(ReceivedBuffer__StreamLinesReader__Standard), Proto_(StreamLinesReader__Standard), Proto_(Object__Standard), nil, Sym_(ReceivedBuffer), nil, nil };
struct object ReceivedBuffer__StreamLinesReader__Standard = 
	{ &ReceivedBuffer__StreamLinesReader__Standard__classInfo_, {nil, nil, nil} };


#define buffer__fld_	(0)
#define capacity__fld_	(1)
#define size__fld_	(2)


obj_ create_co___ReceivedBuffer__StreamLinesReader__Standard(obj_ this_, obj_ capacity)
{
	extern obj_ new_co___BytePtr__Standard(obj_ this_, obj_ size);
	obj_ t0_;
	obj_ t1_;
	UsingInt_(0)
	UsingMethod_(buffer_co_) UsingMethod_(capacity_co_) UsingMethod_(size_co_)
	UsingClass_(BytePtr__Standard)

		{
		t0_ = new_co___BytePtr__Standard(Proto_(BytePtr__Standard), capacity);
		t1_ = Call_(buffer_co_, this_, t0_);
		t0_ = Call_(capacity_co_, this_, capacity);
		t0_ = Call_(size_co_, this_, SmallInt_(0));
		}
	return nil;
}


obj_ is_empty__ReceivedBuffer__StreamLinesReader__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingInt_(0)
	UsingMethod_(_eq__eq_) UsingMethod_(size)

		{
		t0_ = Call_(size, this_);
		t1_ = Call_(_eq__eq_, t0_, SmallInt_(0));
		return t1_;
		}
	return nil;
}


obj_ new_co___ReceivedBuffer__StreamLinesReader__Standard(obj_ this_, obj_ capacity)
{
	UsingClass_(ReceivedBuffer__StreamLinesReader__Standard)
	obj_ obj = AllocObj_(ReceivedBuffer__StreamLinesReader__Standard);
	create_co___ReceivedBuffer__StreamLinesReader__Standard(obj, capacity);
	return obj;
}


obj_ read_from_co___ReceivedBuffer__StreamLinesReader__Standard(obj_ this_, obj_ stream)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(0)
	UsingInt_(0)
	UsingMethod_(_lt_) UsingMethod_(buffer) UsingMethod_(capacity) UsingMethod_(read_buffer_co_length_co_) UsingMethod_(size) UsingMethod_(size_co_)

		{
		t0_ = Call_(buffer, this_);
		t1_ = Call_(capacity, this_);
		t2_ = Call_(read_buffer_co_length_co_, stream, t0_, t1_);
		t3_ = Call_(size_co_, this_, t2_);
		t0_ = Call_(size, this_);
		t1_ = Call_(_lt_, t0_, SmallInt_(0));
		if (t1_)
			{
			t0_ = Call_(size_co_, this_, SmallInt_(0));
			}
		}
	return nil;
}


obj_ start__ReceivedBuffer__StreamLinesReader__Standard(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(buffer)

		{
		t0_ = Call_(buffer, this_);
		return t0_;
		}
	return nil;
}


obj_ stopper__ReceivedBuffer__StreamLinesReader__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(_pl_) UsingMethod_(buffer) UsingMethod_(size)

		{
		t0_ = Call_(buffer, this_);
		t1_ = Call_(size, this_);
		t2_ = Call_(_pl_, t0_, t1_);
		return t2_;
		}
	return nil;
}


obj_ string__ReceivedBuffer__StreamLinesReader__Standard(obj_ this_)
{
	extern obj_ from_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	UsingMethod_(_pl_) UsingMethod_(buffer) UsingMethod_(size)
	UsingClass_(String__Standard)

		{
		t0_ = Call_(buffer, this_);
		t1_ = Call_(buffer, this_);
		t2_ = Call_(size, this_);
		t3_ = Call_(_pl_, t1_, t2_);
		t4_ = from_co_to_co___String__Standard(Proto_(String__Standard), t0_, t3_);
		return t4_;
		}
	return nil;
}


