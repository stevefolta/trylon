#include "Trylon_.h"

UsingSym_(StringUTF8Iterator)UsingClass_(Standard)
UsingClass_(Iterator__Standard)
UsingClass_(StringUTF8Iterator__Standard)
struct ClassInfo StringUTF8Iterator__Standard__classInfo_ = 
	{ 16, 16, Proto_(StringUTF8Iterator__Standard), Proto_(Standard), Proto_(Iterator__Standard), nil, Sym_(StringUTF8Iterator) ,nil };
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
	DefineInt_(0, 1)
	DefineInt_(1, 255)
	DefineInt_(2, 192)
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
			t1_ = Call_(_, t0_, Int_(0));
			t2_ = Call_(start_ptr_co_, this_, t1_);
			t0_ = Call_(start_ptr, this_);
			t1_ = Call_(deref_char, t0_);
			t2_ = Call_(_an_, t1_, Int_(1));
			t3_ = Call_(_gt__eq_, t2_, Int_(2));
			if (t3_)
				{
				Break_(0)
				
				
				}
			}
			}
		}
	return nil;
}


obj_ cached_char__StringUTF8Iterator__Standard(obj_ this_)
{
	return Field_(cached_char);
}


obj_ cached_char_co___StringUTF8Iterator__Standard(obj_ this_, obj_ value)
{
	Field_(cached_char) = value;
	return value;
}


obj_ copy__StringUTF8Iterator__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(start) UsingMethod_(stopper) UsingMethod_(string)
	extern obj_ new_co_to_co_string_co___StringUTF8Iterator__Standard(obj_ this_, obj_ start, obj_ stopper, obj_ string);
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
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineInt_(0, 255)
	DefineInt_(1, 1)
	DefineInt_(2, 128)
	DefineInt_(3, 0)
	DefineInt_(4, 194)
	DefineInt_(5, 224)
	DefineInt_(6, 1)
	DefineInt_(7, 31)
	DefineInt_(8, 240)
	DefineInt_(9, 2)
	DefineInt_(10, 15)
	DefineInt_(11, 240)
	DefineInt_(12, 3)
	DefineInt_(13, 3)
	DefineInt_(14, 0)
	DefineInt_(15, 1)
	DefineInt_(16, 192)
	DefineInt_(17, 128)
	DefineInt_(18, 6)
	DefineInt_(19, 63)
	DefineInt_(20, 1)
	UsingMethod_(_nt__eq_) UsingMethod_(_an_) UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(_lt_) UsingMethod_(_lt__lt_) UsingMethod_(_gt_) UsingMethod_(_gt__eq_) UsingMethod_(cached_char) UsingMethod_(cached_char_co_) UsingMethod_(deref_char) UsingMethod_(start_ptr) UsingMethod_(start_ptr_co_) UsingMethod_(stopper) UsingMethod_(_or_)
	extern obj_ error_co___Standard(obj_ this_, obj_ message);
	UsingSym_(Invalid__UTF_8__string_dt_)
	extern obj_ error_co___Standard(obj_ this_, obj_ message);
	UsingSym_(Invalid__UTF_8__string_dt_)
	extern obj_ error_co___Standard(obj_ this_, obj_ message);
	UsingSym_(Invalid__UTF_8__string_dt_)
	UsingClass_(Standard)

		{
		t0_ = Call_(cached_char, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			obj_ c;
			t0_ = Call_(start_ptr, this_);
			t1_ = Call_(deref_char, t0_);
			t2_ = Call_(_an_, t1_, Int_(0));
			c = t2_;
			t0_ = Call_(start_ptr, this_);
			t1_ = Call_(_pl_, t0_, Int_(1));
			t2_ = Call_(start_ptr_co_, this_, t1_);
			t0_ = Call_(_lt_, c, Int_(2));
			if (t0_)
				{
				t0_ = Call_(cached_char_co_, this_, c);
				}
			else
				{
				obj_ extension_bytes;
				extension_bytes = Int_(3);
				t0_ = Call_(_lt_, c, Int_(4));
				if (t0_)
					{
					t0_ = error_co___Standard(Proto_(Standard), Sym_(Invalid__UTF_8__string_dt_));
					}
				else
					{
					t0_ = Call_(_lt_, c, Int_(5));
					if (t0_)
						{
						/* We handle the shorter cases first, expecting them to be more common. */
						extension_bytes = Int_(6);
						t0_ = Call_(_an_, c, Int_(7));
						t1_ = Call_(cached_char_co_, this_, t0_);
						}
					else
						{
						t0_ = Call_(_lt_, c, Int_(8));
						if (t0_)
							{
							extension_bytes = Int_(9);
							t0_ = Call_(_an_, c, Int_(10));
							t1_ = Call_(cached_char_co_, this_, t0_);
							}
						else
							{
							t0_ = Call_(_gt_, c, Int_(11));
							if (t0_)
								{
								extension_bytes = Int_(12);
								t0_ = Call_(_an_, c, Int_(13));
								t1_ = Call_(cached_char_co_, this_, t0_);
								}
							}
						}
					}
				while (1) {
					ContinuePoint_(0)
					t0_ = Call_(_gt_, extension_bytes, Int_(14));
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
					t1_ = Call_(_pl_, t0_, Int_(15));
					t2_ = Call_(start_ptr_co_, this_, t1_);
					t0_ = Call_(_an_, c, Int_(16));
					t1_ = Call_(_nt__eq_, t0_, Int_(17));
					if (t1_)
						{
						t0_ = error_co___Standard(Proto_(Standard), Sym_(Invalid__UTF_8__string_dt_));
						}
					t0_ = Call_(cached_char, this_);
					t1_ = Call_(_lt__lt_, t0_, Int_(18));
					t2_ = Call_(cached_char_co_, this_, t1_);
					t0_ = Call_(cached_char, this_);
					t1_ = Call_(_an_, c, Int_(19));
					t2_ = Call_(_or_, t0_, t1_);
					t3_ = Call_(cached_char_co_, this_, t2_);
					t0_ = Call_(_, extension_bytes, Int_(20));
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
			 	/* Loads up the next character into cached-char. */
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
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(start) UsingMethod_(stopper)
	extern obj_ new_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
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
	DefineInt_(0, 0)
	DefineInt_(1, 1)
	UsingMethod_(_) UsingMethod_(_gt_) UsingMethod_(go_forward)

		{
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(_gt_, num_chars, Int_(0));
			if (!(t0_))
				Break_(0)
			{
			t0_ = Call_(go_forward, this_);
			t0_ = Call_(_, num_chars, Int_(1));
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


obj_ start_ptr__StringUTF8Iterator__Standard(obj_ this_)
{
	return Field_(start_ptr);
}


obj_ start_ptr_co___StringUTF8Iterator__Standard(obj_ this_, obj_ value)
{
	Field_(start_ptr) = value;
	return value;
}


obj_ stopper__StringUTF8Iterator__Standard(obj_ this_)
{
	return Field_(stopper);
}


obj_ stopper_co___StringUTF8Iterator__Standard(obj_ this_, obj_ value)
{
	Field_(stopper) = value;
	return value;
}


obj_ string__StringUTF8Iterator__Standard(obj_ this_)
{
	return Field_(string);
}


obj_ string_co___StringUTF8Iterator__Standard(obj_ this_, obj_ value)
{
	Field_(string) = value;
	return value;
}


