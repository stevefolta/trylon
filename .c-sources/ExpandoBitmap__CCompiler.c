#include "Trylon_.h"

UsingSym_(ExpandoBitmap)UsingClass_(CCompiler)
UsingClass_(Object__Standard)
UsingClass_(ExpandoBitmap__CCompiler)
struct ClassInfo ExpandoBitmap__CCompiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 165, 3, Proto_(ExpandoBitmap__CCompiler), Proto_(CCompiler), Proto_(Object__Standard), nil, Sym_(ExpandoBitmap), nil, nil };
struct object ExpandoBitmap__CCompiler = 
	{ &ExpandoBitmap__CCompiler__classInfo_, {nil, nil, nil} };


#define bitmap__fld_	(0)
#define num_bytes__fld_	(1)
#define growth_increment__fld_	(2)


obj_ at_co___ExpandoBitmap__CCompiler(obj_ this_, obj_ index)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	UsingInt_(8)
	UsingInt_(1)
	UsingInt_(8)
	UsingInt_(0)
	UsingMethod_(_nt__eq_) UsingMethod_(_pc_) UsingMethod_(_an_) UsingMethod_(_dv_) UsingMethod_(_lt__lt_) UsingMethod_(_gt_) UsingMethod_(bitmap) UsingMethod_(byte_at_co_) UsingMethod_(num_bytes)

		{
		obj_ which_byte;
		t0_ = Call_(_dv_, index, SmallInt_(8));
		which_byte = t0_;
		t0_ = Call_(num_bytes, this_);
		t1_ = Call_(_gt_, which_byte, t0_);
		if (t1_)
			{
			return nil;
			}
		
		t0_ = Call_(bitmap, this_);
		t1_ = Call_(byte_at_co_, t0_, which_byte);
		t2_ = Call_(_pc_, index, SmallInt_(8));
		t3_ = Call_(_lt__lt_, SmallInt_(1), t2_);
		t4_ = Call_(_an_, t1_, t3_);
		t5_ = Call_(_nt__eq_, t4_, SmallInt_(0));
		return t5_;
		}
	return nil;
}


obj_ at_co_put_co___ExpandoBitmap__CCompiler(obj_ this_, obj_ index, obj_ value)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	UsingInt_(8)
	UsingInt_(1)
	UsingInt_(1)
	UsingInt_(8)
	UsingMethod_(_pc_) UsingMethod_(_an_) UsingMethod_(_pl_) UsingMethod_(_dv_) UsingMethod_(_lt__lt_) UsingMethod_(_gt_) UsingMethod_(bitmap) UsingMethod_(byte_at_co_) UsingMethod_(byte_at_co_put_co_) UsingMethod_(expand_co_) UsingMethod_(num_bytes) UsingMethod_(_or_) UsingMethod_(_tw_)

		{
		obj_ mask, which_byte;
		t0_ = Call_(_dv_, index, SmallInt_(8));
		which_byte = t0_;
		t0_ = Call_(num_bytes, this_);
		t1_ = Call_(_gt_, which_byte, t0_);
		if (t1_)
			{
			t0_ = Call_(_pl_, which_byte, SmallInt_(1));
			t1_ = Call_(expand_co_, this_, t0_);
			}
		
		t0_ = Call_(_pc_, index, SmallInt_(8));
		t1_ = Call_(_lt__lt_, SmallInt_(1), t0_);
		mask = t1_;
		if (value)
			{
			t0_ = Call_(bitmap, this_);
			t1_ = Call_(bitmap, this_);
			t2_ = Call_(byte_at_co_, t1_, which_byte);
			t3_ = Call_(_or_, t2_, mask);
			t4_ = Call_(byte_at_co_put_co_, t0_, which_byte, t3_);
			}
		else
			{
			t0_ = Call_(bitmap, this_);
			t1_ = Call_(bitmap, this_);
			t2_ = Call_(byte_at_co_, t1_, which_byte);
			t3_ = Call_(_tw_, mask);
			t4_ = Call_(_an_, t2_, t3_);
			t5_ = Call_(byte_at_co_put_co_, t0_, which_byte, t4_);
			}
		}
	return nil;
}


obj_ at_co_set_to_co___ExpandoBitmap__CCompiler(obj_ this_, obj_ index, obj_ value)
{
	obj_ t0_;
	UsingMethod_(at_co_put_co_)

		{
		t0_ = Call_(at_co_put_co_, this_, index, value);
		}
	return nil;
}


obj_ create__ExpandoBitmap__CCompiler(obj_ this_)
{
	extern obj_ new_co___BytePtr__Standard(obj_ this_, obj_ size);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(64)
	UsingMethod_(bitmap_co_) UsingMethod_(growth_increment) UsingMethod_(growth_increment_co_) UsingMethod_(num_bytes) UsingMethod_(num_bytes_co_)
	UsingClass_(BytePtr__Standard)

		{
		t0_ = Call_(growth_increment_co_, this_, SmallInt_(64));
		t0_ = Call_(growth_increment, this_);
		t1_ = Call_(num_bytes_co_, this_, t0_);
		t0_ = Call_(num_bytes, this_);
		t1_ = new_co___BytePtr__Standard(Proto_(BytePtr__Standard), t0_);
		t2_ = Call_(bitmap_co_, this_, t1_);
		}
	return nil;
}


obj_ expand_co___ExpandoBitmap__CCompiler(obj_ this_, obj_ needed_num_bytes)
{
	extern obj_ new_co___BytePtr__Standard(obj_ this_, obj_ size);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(_pl_) UsingMethod_(_lt_) UsingMethod_(bitmap) UsingMethod_(bitmap_co_) UsingMethod_(copy_from_co_length_co_) UsingMethod_(growth_increment) UsingMethod_(num_bytes) UsingMethod_(num_bytes_co_)
	UsingClass_(BytePtr__Standard)

		{
		obj_ new_bitmap, new_num_bytes;
		t0_ = Call_(num_bytes, this_);
		t1_ = Call_(growth_increment, this_);
		t2_ = Call_(_pl_, t0_, t1_);
		new_num_bytes = t2_;
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(_lt_, new_num_bytes, needed_num_bytes);
			if (!(t0_))
				Break_(0)
			{
			t0_ = Call_(growth_increment, this_);
			t1_ = Call_(_pl_, new_num_bytes, t0_);
			new_num_bytes = t1_;
			}
			}
		
		t0_ = new_co___BytePtr__Standard(Proto_(BytePtr__Standard), new_num_bytes);
		new_bitmap = t0_;
		t0_ = Call_(bitmap, this_);
		t1_ = Call_(num_bytes, this_);
		t2_ = Call_(copy_from_co_length_co_, new_bitmap, t0_, t1_);
		
		t0_ = Call_(bitmap_co_, this_, new_bitmap);
		t0_ = Call_(num_bytes_co_, this_, new_num_bytes);
		}
	return nil;
}


obj_ new__ExpandoBitmap__CCompiler(obj_ this_)
{
	UsingClass_(ExpandoBitmap__CCompiler)
	obj_ obj = AllocObj_(ExpandoBitmap__CCompiler);
	create__ExpandoBitmap__CCompiler(obj);
	return obj;
}


obj_ next_clear_from_co___ExpandoBitmap__CCompiler(obj_ this_, obj_ indexObj)
{
int index = IntValue_(indexObj);
unsigned int* bitmap = (unsigned int *) BytePtrValue_(Field_(bitmap));
int numBytes = IntValue_(Field_(num_bytes));
int whichInt = index / 32;
int numInts = numBytes / 4;
unsigned int mask;

// Check the rest of the word containing "index".
unsigned int word = bitmap[whichInt];
if (word != 0xFFFFFFFF) {
mask = 1 << (index % 32);
while (mask != 0) {
if ((word & mask) == 0)
return BuildInt_(index);
index += 1;
mask <<= 1;
}
}
else
index += 32 - (index % 32);

// Check the rest of the words.
whichInt += 1;
while (whichInt < numInts) {
word = bitmap[whichInt];
if (word != 0xFFFFFFFF) {
mask = 1;
while (mask != 0) {
if ((word & mask) == 0)
return BuildInt_(index);
index += 1;
mask <<= 1;
}
}
index += 32;
whichInt += 1;
}

// Not in the allocated area.
return BuildInt_(index);
}


