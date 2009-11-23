#include "Trylon_.h"

UsingSym_(StringUTF8Iterator)UsingClass_(Standard)
UsingClass_(Iterator__Standard)
UsingClass_(StringUTF8Iterator__Standard)
struct ClassInfo StringUTF8Iterator__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 45, 4, Proto_(StringUTF8Iterator__Standard), Proto_(Standard), Proto_(Iterator__Standard), nil, Sym_(StringUTF8Iterator), nil, nil };
struct object StringUTF8Iterator__Standard = 
	{ &StringUTF8Iterator__Standard__classInfo_, {nil, nil, nil, nil} };



#define start_ptr__fld_	(0)
#define stopper__fld_	(1)
#define string__fld_	(2)
#define cached_char__fld_	(3)


obj_ _gt___StringUTF8Iterator__Standard(obj_ this_, obj_ other)
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


obj_ back_up__StringUTF8Iterator__Standard(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(back_up_start_ptr) UsingMethod_(cached_char) UsingMethod_(cached_char_co_)

		{
		t0_ = Call_(cached_char, this_);
		if (t0_)
			{
			t0_ = Call_(back_up_start_ptr, this_);
			t0_ = Call_(cached_char_co_, this_, nil);
			}
		t0_ = Call_(back_up_start_ptr, this_);
		}
	return nil;
}


obj_ back_up_start_ptr__StringUTF8Iterator__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(1)
	UsingInt_(255)
	UsingInt_(192)
	UsingMethod_(_an_) UsingMethod_(_) UsingMethod_(_gt_) UsingMethod_(_gt__eq_) UsingMethod_(deref_char) UsingMethod_(start) UsingMethod_(start_ptr) UsingMethod_(start_ptr_co_) UsingMethod_(string)

		{
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(start_ptr, this_);
			t1_ = Call_(string, this_);
			t2_ = Call_(start, t1_);
			t3_ = Call_(_gt_, t0_, t2_);
			if (!(t3_))
				Break_(0)
			{
			t0_ = Call_(start_ptr, this_);
			t1_ = Call_(_, t0_, SmallInt_(1));
			t2_ = Call_(start_ptr_co_, this_, t1_);
			t0_ = Call_(start_ptr, this_);
			t1_ = Call_(deref_char, t0_);
			t2_ = Call_(_an_, t1_, SmallInt_(255));
			t3_ = Call_(_gt__eq_, t2_, SmallInt_(192));
			if (t3_)
				{
				Break_(0)
				}
			}
			}
		}
	return nil;
}


obj_ copy__StringUTF8Iterator__Standard(obj_ this_)
{
	extern obj_ new_co_to_co_string_co___StringUTF8Iterator__Standard(obj_ this_, obj_ start, obj_ stopper, obj_ string);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(start) UsingMethod_(stopper) UsingMethod_(string)
	UsingClass_(StringUTF8Iterator__Standard)

		{
		t0_ = Call_(start, this_);
		t1_ = Call_(stopper, this_);
		t2_ = Call_(string, this_);
		t3_ = new_co_to_co_string_co___StringUTF8Iterator__Standard(Proto_(StringUTF8Iterator__Standard), t0_, t1_, t2_);
		return t3_;
		}
	return nil;
}


obj_ create_co___StringUTF8Iterator__Standard(obj_ this_, obj_ string)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(start) UsingMethod_(start_ptr_co_) UsingMethod_(stopper) UsingMethod_(stopper_co_) UsingMethod_(string_co_)

		{
		t0_ = Call_(string_co_, this_, string);
		t0_ = Call_(start, string);
		t1_ = Call_(start_ptr_co_, this_, t0_);
		t0_ = Call_(stopper, string);
		t1_ = Call_(stopper_co_, this_, t0_);
		}
	return nil;
}


obj_ create_co_to_co_string_co___StringUTF8Iterator__Standard(obj_ this_, obj_ start, obj_ stopper, obj_ string)
{
	obj_ t0_;
	UsingMethod_(start_ptr_co_) UsingMethod_(stopper_co_) UsingMethod_(string_co_)

		{
		t0_ = Call_(start_ptr_co_, this_, start);
		t0_ = Call_(stopper_co_, this_, stopper);
		t0_ = Call_(string_co_, this_, string);
		}
	return nil;
}


obj_ current_item__StringUTF8Iterator__Standard(obj_ this_)
{
	extern obj_ error_co___Standard(obj_ this_, obj_ message);
	UsingSym_(Invalid__UTF_8__string_dt_)
	extern obj_ error_co___Standard(obj_ this_, obj_ message);
	UsingSym_(Invalid__UTF_8__string_dt_)
	extern obj_ error_co___Standard(obj_ this_, obj_ message);
	UsingSym_(Invalid__UTF_8__string_dt_)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(255)
	UsingInt_(1)
	UsingInt_(128)
	UsingInt_(0)
	UsingInt_(194)
	UsingInt_(224)
	UsingInt_(1)
	UsingInt_(31)
	UsingInt_(240)
	UsingInt_(2)
	UsingInt_(15)
	UsingInt_(240)
	UsingInt_(3)
	UsingInt_(3)
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(192)
	UsingInt_(128)
	UsingInt_(6)
	UsingInt_(63)
	UsingInt_(1)
	UsingMethod_(_nt__eq_) UsingMethod_(_an_) UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(_lt_) UsingMethod_(_lt__lt_) UsingMethod_(_gt_) UsingMethod_(_gt__eq_) UsingMethod_(cached_char) UsingMethod_(cached_char_co_) UsingMethod_(deref_char) UsingMethod_(start_ptr) UsingMethod_(start_ptr_co_) UsingMethod_(stopper) UsingMethod_(_or_)
	UsingClass_(Standard)

		{
		t0_ = Call_(cached_char, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			obj_ c;
			t0_ = Call_(start_ptr, this_);
			t1_ = Call_(deref_char, t0_);
			t2_ = Call_(_an_, t1_, SmallInt_(255));
			c = t2_;
			t0_ = Call_(start_ptr, this_);
			t1_ = Call_(_pl_, t0_, SmallInt_(1));
			t2_ = Call_(start_ptr_co_, this_, t1_);
			t0_ = Call_(_lt_, c, SmallInt_(128));
			if (t0_)
				{
				t0_ = Call_(cached_char_co_, this_, c);
				}
			else
				{
				obj_ extension_bytes;
				extension_bytes = SmallInt_(0);
				t0_ = Call_(_lt_, c, SmallInt_(194));
				if (t0_)
					{
					t0_ = error_co___Standard(Proto_(Standard), Sym_(Invalid__UTF_8__string_dt_));
					}
				else
					{
					t0_ = Call_(_lt_, c, SmallInt_(224));
					if (t0_)
						{
						/*  We handle the shorter cases first, expecting them to be more common. */
						extension_bytes = SmallInt_(1);
						t0_ = Call_(_an_, c, SmallInt_(31));
						t1_ = Call_(cached_char_co_, this_, t0_);
						}
					else
						{
						t0_ = Call_(_lt_, c, SmallInt_(240));
						if (t0_)
							{
							extension_bytes = SmallInt_(2);
							t0_ = Call_(_an_, c, SmallInt_(15));
							t1_ = Call_(cached_char_co_, this_, t0_);
							}
						else
							{
							t0_ = Call_(_gt_, c, SmallInt_(240));
							if (t0_)
								{
								extension_bytes = SmallInt_(3);
								t0_ = Call_(_an_, c, SmallInt_(3));
								t1_ = Call_(cached_char_co_, this_, t0_);
								}
							}
						}
					}
				while (1) {
					ContinuePoint_(0)
					t0_ = Call_(_gt_, extension_bytes, SmallInt_(0));
					if (!(t0_))
						Break_(0)
					{
					t0_ = Call_(start_ptr, this_);
					t1_ = Call_(stopper, this_);
					t2_ = Call_(_gt__eq_, t0_, t1_);
					if (t2_)
						{
						t0_ = error_co___Standard(Proto_(Standard), Sym_(Invalid__UTF_8__string_dt_));
						}
					t0_ = Call_(start_ptr, this_);
					t1_ = Call_(deref_char, t0_);
					c = t1_;
					t0_ = Call_(start_ptr, this_);
					t1_ = Call_(_pl_, t0_, SmallInt_(1));
					t2_ = Call_(start_ptr_co_, this_, t1_);
					t0_ = Call_(_an_, c, SmallInt_(192));
					t1_ = Call_(_nt__eq_, t0_, SmallInt_(128));
					if (t1_)
						{
						t0_ = error_co___Standard(Proto_(Standard), Sym_(Invalid__UTF_8__string_dt_));
						}
					t0_ = Call_(cached_char, this_);
					t1_ = Call_(_lt__lt_, t0_, SmallInt_(6));
					t2_ = Call_(cached_char_co_, this_, t1_);
					t0_ = Call_(cached_char, this_);
					t1_ = Call_(_an_, c, SmallInt_(63));
					t2_ = Call_(_or_, t0_, t1_);
					t3_ = Call_(cached_char_co_, this_, t2_);
					t0_ = Call_(_, extension_bytes, SmallInt_(1));
					extension_bytes = t0_;
					}
					}
				}
			}
		
		t0_ = Call_(cached_char, this_);
		return t0_;
		}
	return nil;
}


obj_ go_forward__StringUTF8Iterator__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(cached_char) UsingMethod_(cached_char_co_) UsingMethod_(current_item)

		{
		t0_ = Call_(cached_char, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = Call_(current_item, this_);
			 	/*  Loads up the next character into cached-char. */
			}
		t0_ = Call_(cached_char_co_, this_, nil);
		}
	return nil;
}


obj_ is_done__StringUTF8Iterator__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	UsingMethod_(_gt__eq_) UsingMethod_(cached_char) UsingMethod_(start_ptr) UsingMethod_(stopper)

		{
		t0_ = Call_(cached_char, this_);
		t1_ = Not_(t0_);
		if (t1_) {
			t2_ = Call_(start_ptr, this_);
			t3_ = Call_(stopper, this_);
			t4_ = Call_(_gt__eq_, t2_, t3_);
			t1_ = t4_;
			}
		return t1_;
		}
	return nil;
}


obj_ iterator__StringUTF8Iterator__Standard(obj_ this_)
{

		{
		return this_;
		}
	return nil;
}


obj_ new_co___StringUTF8Iterator__Standard(obj_ this_, obj_ string)
{
	UsingClass_(StringUTF8Iterator__Standard)
	obj_ obj = AllocObj_(StringUTF8Iterator__Standard);
	create_co___StringUTF8Iterator__Standard(obj, string);
	return obj;
}


obj_ new_co_to_co_string_co___StringUTF8Iterator__Standard(obj_ this_, obj_ start, obj_ stopper, obj_ string)
{
	UsingClass_(StringUTF8Iterator__Standard)
	obj_ obj = AllocObj_(StringUTF8Iterator__Standard);
	create_co_to_co_string_co___StringUTF8Iterator__Standard(obj, start, stopper, string);
	return obj;
}


obj_ remainder__StringUTF8Iterator__Standard(obj_ this_)
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


obj_ skip_co___StringUTF8Iterator__Standard(obj_ this_, obj_ num_chars)
{
	obj_ t0_;
	UsingInt_(0)
	UsingInt_(1)
	UsingMethod_(_) UsingMethod_(_gt_) UsingMethod_(go_forward)

		{
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(_gt_, num_chars, SmallInt_(0));
			if (!(t0_))
				Break_(0)
			{
			t0_ = Call_(go_forward, this_);
			t0_ = Call_(_, num_chars, SmallInt_(1));
			num_chars = t0_;
			}
			}
		}
	return nil;
}


obj_ start__StringUTF8Iterator__Standard(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(back_up_start_ptr) UsingMethod_(cached_char) UsingMethod_(cached_char_co_) UsingMethod_(start_ptr)

		{
		t0_ = Call_(cached_char, this_);
		if (t0_)
			{
			t0_ = Call_(back_up_start_ptr, this_);
			t0_ = Call_(cached_char_co_, this_, nil);
			}
		t0_ = Call_(start_ptr, this_);
		return t0_;
		}
	return nil;
}


