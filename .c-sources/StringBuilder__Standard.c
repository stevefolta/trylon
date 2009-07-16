#include "Trylon_.h"

UsingSym_(StringBuilder)UsingClass_(Standard)
UsingClass_(Object__Standard)
UsingClass_(StringBuilder__Standard)
struct ClassInfo StringBuilder__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 173, 2, Proto_(StringBuilder__Standard), Proto_(Standard), Proto_(Object__Standard), nil, Sym_(StringBuilder), nil, nil };
struct object StringBuilder__Standard = 
	{ &StringBuilder__Standard__classInfo_, {nil, nil} };


#define substrings__fld_	(0)
#define length__fld_	(1)


obj_ _pl___StringBuilder__Standard(obj_ this_, obj_ string)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(_pl_) UsingMethod_(append_co_) UsingMethod_(length) UsingMethod_(length_co_) UsingMethod_(substrings)

		{
		t0_ = Call_(substrings, this_);
		t1_ = Call_(append_co_, t0_, string);
		t0_ = Call_(length, this_);
		t1_ = Call_(length, string);
		t2_ = Call_(_pl_, t0_, t1_);
		t3_ = Call_(length_co_, this_, t2_);
		return this_;
		}
	return nil;
}


obj_ add_co___StringBuilder__Standard(obj_ this_, obj_ string)
{
	obj_ t0_;
	UsingMethod_(_pl_)

		{
		t0_ = Call_(_pl_, this_, string);
		return t0_;
		}
	return nil;
}


obj_ create__StringBuilder__Standard(obj_ this_)
{
	extern obj_ new__List__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingInt_(0)
	UsingMethod_(length_co_) UsingMethod_(substrings_co_)
	UsingClass_(List__Standard)

		{
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(substrings_co_, this_, t0_);
		t0_ = Call_(length_co_, this_, SmallInt_(0));
		}
	return nil;
}


obj_ is_empty__StringBuilder__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(is_empty) UsingMethod_(substrings)

		{
		t0_ = Call_(substrings, this_);
		t1_ = Call_(is_empty, t0_);
		return t1_;
		}
	return nil;
}


obj_ new__StringBuilder__Standard(obj_ this_)
{
	UsingClass_(StringBuilder__Standard)
	obj_ obj = AllocObj_(StringBuilder__Standard);
	create__StringBuilder__Standard(obj);
	return obj;
}


obj_ prepend_co___StringBuilder__Standard(obj_ this_, obj_ string)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(_pl_) UsingMethod_(length) UsingMethod_(length_co_) UsingMethod_(prepend_co_) UsingMethod_(substrings)

		{
		t0_ = Call_(substrings, this_);
		t1_ = Call_(prepend_co_, t0_, string);
		t0_ = Call_(length, this_);
		t1_ = Call_(length, string);
		t2_ = Call_(_pl_, t0_, t1_);
		t3_ = Call_(length_co_, this_, t2_);
		}
	return nil;
}


obj_ string__StringBuilder__Standard(obj_ this_)
{
	extern obj_ new_co___BytePtr__Standard(obj_ this_, obj_ size);
	extern obj_ new_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	extern obj_ new__List__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_pl_) UsingMethod_(append_co_) UsingMethod_(copy_from_co_length_co_) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(length) UsingMethod_(start) UsingMethod_(substrings) UsingMethod_(substrings_co_)
	UsingClass_(BytePtr__Standard)
	UsingClass_(List__Standard)
	UsingClass_(String__Standard)

		{
		obj_ bytes, ptr, string;
		/*  Build the consolidated string. */
		t0_ = Call_(length, this_);
		t1_ = new_co___BytePtr__Standard(Proto_(BytePtr__Standard), t0_);
		bytes = t1_;
		ptr = bytes;
		t0_ = Call_(substrings, this_);
		ForStart_(0, t0_, string)
			{
			obj_ length;
			t0_ = Call_(length, string);
			length = t0_;
			t0_ = Call_(start, string);
			t1_ = Call_(copy_from_co_length_co_, ptr, t0_, length);
			t0_ = Call_(_pl_, ptr, length);
			ptr = t0_;
			}
		ForEnd_(0)
		t0_ = new_co_to_co___String__Standard(Proto_(String__Standard), bytes, ptr);
		string = t0_;
		
		/*  Install it here, in case more strings are added later. */
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(substrings_co_, this_, t0_);
		t0_ = Call_(substrings, this_);
		t1_ = Call_(append_co_, t0_, string);
		
		return string;
		}
	return nil;
}


