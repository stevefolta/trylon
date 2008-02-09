#include "Trylon_.h"

UsingSym_(SmallStringBuilder)UsingClass_(Compiler)
UsingClass_(Object__Standard)
UsingClass_(SmallStringBuilder__Compiler)
struct ClassInfo SmallStringBuilder__Compiler__classInfo_ = 
	{ 164, 12, Proto_(SmallStringBuilder__Compiler), Proto_(Compiler), Proto_(Object__Standard), nil, Sym_(SmallStringBuilder) ,nil };
struct object SmallStringBuilder__Compiler = 
	{ &SmallStringBuilder__Compiler__classInfo_, {nil, nil, nil} };


#define size__fld_	(0)
#define capacity__fld_	(1)
#define buffer__fld_	(2)


obj_ add_char_co___SmallStringBuilder__Compiler(obj_ this_, obj_ char_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 1)
	DefineInt_(1, 1)
	UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(buffer) UsingMethod_(capacity) UsingMethod_(char_at_co_put_co_) UsingMethod_(grow_to_co_) UsingMethod_(size) UsingMethod_(size_co_)

		{
		t0_ = Call_(size, this_);
		t1_ = Call_(capacity, this_);
		t2_ = Call_(_eq__eq_, t0_, t1_);
		if (t2_)
			{
			t0_ = Call_(size, this_);
			t1_ = Call_(_pl_, t0_, Int_(0));
			t2_ = Call_(grow_to_co_, this_, t1_);
			}
		t0_ = Call_(buffer, this_);
		t1_ = Call_(size, this_);
		t2_ = Call_(char_at_co_put_co_, t0_, t1_, char_);
		t0_ = Call_(size, this_);
		t1_ = Call_(_pl_, t0_, Int_(1));
		t2_ = Call_(size_co_, this_, t1_);
		
		}
	return nil;
}


obj_ add_from_co_to_co___SmallStringBuilder__Compiler(obj_ this_, obj_ start, obj_ stopper)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(_gt_) UsingMethod_(buffer) UsingMethod_(capacity) UsingMethod_(copy_from_co_length_co_) UsingMethod_(grow_to_co_) UsingMethod_(size) UsingMethod_(size_co_)

		{
		obj_ new_size, src_size;
		t0_ = Call_(_, stopper, start);
		src_size = t0_;
		t0_ = Call_(size, this_);
		t1_ = Call_(_pl_, t0_, src_size);
		new_size = t1_;
		t0_ = Call_(capacity, this_);
		t1_ = Call_(_gt_, new_size, t0_);
		if (t1_)
			{
			t0_ = Call_(grow_to_co_, this_, new_size);
			}
		t0_ = Call_(buffer, this_);
		t1_ = Call_(size, this_);
		t2_ = Call_(_pl_, t0_, t1_);
		t3_ = Call_(copy_from_co_length_co_, t2_, start, src_size);
		t0_ = Call_(size_co_, this_, new_size);
		
		}
	return nil;
}


obj_ add_co___SmallStringBuilder__Compiler(obj_ this_, obj_ string)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(add_from_co_to_co_) UsingMethod_(start) UsingMethod_(stopper)

		{
		t0_ = Call_(start, string);
		t1_ = Call_(stopper, string);
		t2_ = Call_(add_from_co_to_co_, this_, t0_, t1_);
		
		}
	return nil;
}


obj_ buffer__SmallStringBuilder__Compiler(obj_ this_)
{
	return Field_(buffer);
}


obj_ buffer_co___SmallStringBuilder__Compiler(obj_ this_, obj_ value)
{
	Field_(buffer) = value;
	return value;
}


obj_ capacity__SmallStringBuilder__Compiler(obj_ this_)
{
	return Field_(capacity);
}


obj_ capacity_co___SmallStringBuilder__Compiler(obj_ this_, obj_ value)
{
	Field_(capacity) = value;
	return value;
}


obj_ create__SmallStringBuilder__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 16)
	DefineInt_(1, 0)
	UsingMethod_(buffer_co_) UsingMethod_(capacity) UsingMethod_(capacity_co_) UsingMethod_(size_co_)
	extern obj_ new_non_pointer_co___BytePtr__Standard(obj_ this_, obj_ size);
	UsingClass_(BytePtr__Standard)

		{
		t0_ = Call_(capacity_co_, this_, Int_(0));
		t0_ = Call_(capacity, this_);
		t1_ = new_non_pointer_co___BytePtr__Standard(Proto_(BytePtr__Standard), t0_);
		t2_ = Call_(buffer_co_, this_, t1_);
		t0_ = Call_(size_co_, this_, Int_(1));
		
		}
	return nil;
}


obj_ create_co_to_co___SmallStringBuilder__Compiler(obj_ this_, obj_ start, obj_ stopper)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 2)
	UsingMethod_(_st_) UsingMethod_(_) UsingMethod_(buffer) UsingMethod_(buffer_co_) UsingMethod_(capacity) UsingMethod_(capacity_co_) UsingMethod_(copy_from_co_length_co_) UsingMethod_(size) UsingMethod_(size_co_)
	extern obj_ new_non_pointer_co___BytePtr__Standard(obj_ this_, obj_ size);
	UsingClass_(BytePtr__Standard)

		{
		t0_ = Call_(_, stopper, start);
		t1_ = Call_(size_co_, this_, t0_);
		t0_ = Call_(size, this_);
		t1_ = Call_(_st_, t0_, Int_(0));
		t2_ = Call_(capacity_co_, this_, t1_);
		t0_ = Call_(capacity, this_);
		t1_ = new_non_pointer_co___BytePtr__Standard(Proto_(BytePtr__Standard), t0_);
		t2_ = Call_(buffer_co_, this_, t1_);
		t0_ = Call_(buffer, this_);
		t1_ = Call_(size, this_);
		t2_ = Call_(copy_from_co_length_co_, t0_, start, t1_);
		
		}
	return nil;
}


obj_ from_co_to_co___SmallStringBuilder__Compiler(obj_ this_, obj_ start, obj_ stopper)
{
	obj_ t0_;
	extern obj_ new_co_to_co___SmallStringBuilder__Compiler(obj_ this_, obj_ start, obj_ stopper);
	UsingClass_(SmallStringBuilder__Compiler)

		{
		t0_ = new_co_to_co___SmallStringBuilder__Compiler(Proto_(SmallStringBuilder__Compiler), start, stopper);
		return t0_;
		
		}
	return nil;
}


obj_ grow_to_co___SmallStringBuilder__Compiler(obj_ this_, obj_ new_size)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 2)
	DefineInt_(1, 2)
	UsingMethod_(_st_) UsingMethod_(_lt_) UsingMethod_(buffer) UsingMethod_(buffer_co_) UsingMethod_(capacity) UsingMethod_(capacity_co_) UsingMethod_(copy_from_co_length_co_) UsingMethod_(size)
	extern obj_ new_non_pointer_co___BytePtr__Standard(obj_ this_, obj_ size);
	UsingClass_(BytePtr__Standard)

		{
		obj_ new_buffer, new_capacity;
		t0_ = Call_(capacity, this_);
		t1_ = Call_(_st_, t0_, Int_(0));
		new_capacity = t1_;
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(_lt_, new_capacity, new_size);
			if (!(t0_))
				Break_(0)
			{
			t0_ = Call_(_st_, new_capacity, Int_(1));
			new_capacity = t0_;
			}
			}
		t0_ = new_non_pointer_co___BytePtr__Standard(Proto_(BytePtr__Standard), new_capacity);
		new_buffer = t0_;
		t0_ = Call_(buffer, this_);
		t1_ = Call_(size, this_);
		t2_ = Call_(copy_from_co_length_co_, new_buffer, t0_, t1_);
		t0_ = Call_(buffer_co_, this_, new_buffer);
		t0_ = Call_(capacity_co_, this_, new_capacity);
		
		
		
		
		}
	return nil;
}


obj_ new__SmallStringBuilder__Compiler(obj_ this_)
{
	UsingClass_(SmallStringBuilder__Compiler)
	obj_ obj = AllocObj_(SmallStringBuilder__Compiler);
	create__SmallStringBuilder__Compiler(obj);
	return obj;
}


obj_ new_co_to_co___SmallStringBuilder__Compiler(obj_ this_, obj_ start, obj_ stopper)
{
	UsingClass_(SmallStringBuilder__Compiler)
	obj_ obj = AllocObj_(SmallStringBuilder__Compiler);
	create_co_to_co___SmallStringBuilder__Compiler(obj, start, stopper);
	return obj;
}


obj_ size__SmallStringBuilder__Compiler(obj_ this_)
{
	return Field_(size);
}


obj_ size_co___SmallStringBuilder__Compiler(obj_ this_, obj_ value)
{
	Field_(size) = value;
	return value;
}


obj_ string__SmallStringBuilder__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	UsingMethod_(_pl_) UsingMethod_(buffer) UsingMethod_(size)
	extern obj_ from_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
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


