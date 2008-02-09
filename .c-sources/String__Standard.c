#include "Trylon_.h"

UsingSym_(String)UsingClass_(Standard)
UsingClass_(Object__Standard)
UsingClass_(String__Standard)
struct ClassInfo String__Standard__classInfo_ = 
	{ 22, 8, Proto_(String__Standard), Proto_(Standard), Proto_(Object__Standard), nil, Sym_(String) ,nil };
struct object String__Standard = 
	{ &String__Standard__classInfo_, {nil, nil} };


#define start__fld_	(0)
#define stopper__fld_	(1)


#include <stdlib.h>


obj_ _nt__eq___String__Standard(obj_ this_, obj_ arg)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 1)
	DefineInt_(1, 1)
	UsingMethod_(_nt__eq_) UsingMethod_(_pl_) UsingMethod_(_gt__eq_) UsingMethod_(deref_char) UsingMethod_(start) UsingMethod_(stopper)

		{
		obj_ other_p, p;
		t0_ = Call_(start, this_);
		p = t0_;
		t0_ = Call_(start, arg);
		other_p = t0_;
		while (1) {
			ContinuePoint_(0)
			{
			t0_ = Call_(stopper, this_);
			t1_ = Call_(_gt__eq_, p, t0_);
			if (t1_)
				{
				t0_ = Call_(stopper, arg);
				t1_ = Call_(_gt__eq_, other_p, t0_);
				if (t1_)
					{
					return nil;
					}
				else
					{
					return true_;
					}
				}
			t0_ = Call_(stopper, arg);
			t1_ = Call_(_gt__eq_, other_p, t0_);
			if (t1_)
				{
				return true_;
				}
			t0_ = Call_(deref_char, p);
			t1_ = Call_(deref_char, other_p);
			t2_ = Call_(_nt__eq_, t0_, t1_);
			if (t2_)
				{
				return true_;
				}
			t0_ = Call_(_pl_, p, Int_(0));
			p = t0_;
			t0_ = Call_(_pl_, other_p, Int_(1));
			other_p = t0_;
			}
		}
		return true_;
		
		}
	return nil;
}


obj_ _pl___String__Standard(obj_ this_, obj_ arg)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	UsingMethod_(_pl_) UsingMethod_(copy_from_co_length_co_) UsingMethod_(length) UsingMethod_(start) UsingMethod_(stopper_co_)
	extern obj_ new_co___String__Standard(obj_ this_, obj_ length);
	UsingClass_(String__Standard)

		{
		obj_ new_string;
		t0_ = Call_(length, this_);
		t1_ = Call_(length, arg);
		t2_ = Call_(_pl_, t0_, t1_);
		t3_ = new_co___String__Standard(Proto_(String__Standard), t2_);
		new_string = t3_;
		t0_ = Call_(start, new_string);
		t1_ = Call_(start, this_);
		t2_ = Call_(length, this_);
		t3_ = Call_(copy_from_co_length_co_, t0_, t1_, t2_);
		t0_ = Call_(start, new_string);
		t1_ = Call_(length, this_);
		t2_ = Call_(_pl_, t0_, t1_);
		t3_ = Call_(start, arg);
		t4_ = Call_(length, arg);
		t5_ = Call_(copy_from_co_length_co_, t2_, t3_, t4_);
		t0_ = Call_(start, new_string);
		t1_ = Call_(length, this_);
		t2_ = Call_(_pl_, t0_, t1_);
		t3_ = Call_(length, arg);
		t4_ = Call_(_pl_, t2_, t3_);
		t5_ = Call_(stopper_co_, new_string, t4_);
		return new_string;
		
		}
	return nil;
}


obj_ _lt___String__Standard(obj_ this_, obj_ arg)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 1)
	DefineInt_(1, 1)
	UsingMethod_(_pl_) UsingMethod_(_lt_) UsingMethod_(_gt_) UsingMethod_(_gt__eq_) UsingMethod_(deref_char) UsingMethod_(start) UsingMethod_(stopper)

		{
		obj_ other_p, p;
		t0_ = Call_(start, this_);
		p = t0_;
		t0_ = Call_(start, arg);
		other_p = t0_;
		while (1) {
			ContinuePoint_(0)
			{
			t0_ = Call_(stopper, this_);
			t1_ = Call_(_gt__eq_, p, t0_);
			if (t1_)
				{
				t0_ = Call_(stopper, arg);
				t1_ = Call_(_gt__eq_, other_p, t0_);
				if (t1_)
					{
					return nil;
					}
				else
					{
					return true_;
					}
				}
			t0_ = Call_(stopper, arg);
			t1_ = Call_(_gt__eq_, other_p, t0_);
			if (t1_)
				{
				return nil;
				}
			t0_ = Call_(deref_char, p);
			t1_ = Call_(deref_char, other_p);
			t2_ = Call_(_gt_, t0_, t1_);
			if (t2_)
				{
				return nil;
				}
			else
				{
				t0_ = Call_(deref_char, p);
				t1_ = Call_(deref_char, other_p);
				t2_ = Call_(_lt_, t0_, t1_);
				if (t2_)
					{
					return true_;
					}
				}
			t0_ = Call_(_pl_, p, Int_(0));
			p = t0_;
			t0_ = Call_(_pl_, other_p, Int_(1));
			other_p = t0_;
			}
		}
		return nil;
		
		}
	return nil;
}


obj_ _lt__eq___String__Standard(obj_ this_, obj_ arg)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 1)
	DefineInt_(1, 1)
	UsingMethod_(_pl_) UsingMethod_(_lt_) UsingMethod_(_gt_) UsingMethod_(_gt__eq_) UsingMethod_(deref_char) UsingMethod_(start) UsingMethod_(stopper)

		{
		obj_ other_p, p;
		t0_ = Call_(start, this_);
		p = t0_;
		t0_ = Call_(start, arg);
		other_p = t0_;
		while (1) {
			ContinuePoint_(0)
			{
			t0_ = Call_(stopper, this_);
			t1_ = Call_(_gt__eq_, p, t0_);
			if (t1_)
				{
				return true_;
				}
			t0_ = Call_(stopper, arg);
			t1_ = Call_(_gt__eq_, other_p, t0_);
			if (t1_)
				{
				return nil;
				}
			t0_ = Call_(deref_char, p);
			t1_ = Call_(deref_char, other_p);
			t2_ = Call_(_gt_, t0_, t1_);
			if (t2_)
				{
				return nil;
				}
			else
				{
				t0_ = Call_(deref_char, p);
				t1_ = Call_(deref_char, other_p);
				t2_ = Call_(_lt_, t0_, t1_);
				if (t2_)
					{
					return true_;
					}
				}
			t0_ = Call_(_pl_, p, Int_(0));
			p = t0_;
			t0_ = Call_(_pl_, other_p, Int_(1));
			other_p = t0_;
			}
		}
		return nil;
		
		}
	return nil;
}


obj_ _eq__eq___String__Standard(obj_ this_, obj_ arg)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 1)
	DefineInt_(1, 1)
	UsingMethod_(_nt__eq_) UsingMethod_(_pl_) UsingMethod_(_gt__eq_) UsingMethod_(deref_char) UsingMethod_(start) UsingMethod_(stopper)

		{
		obj_ other_p, p;
		t0_ = Call_(start, this_);
		p = t0_;
		t0_ = Call_(start, arg);
		other_p = t0_;
		while (1) {
			ContinuePoint_(0)
			{
			t0_ = Call_(stopper, this_);
			t1_ = Call_(_gt__eq_, p, t0_);
			if (t1_)
				{
				t0_ = Call_(stopper, arg);
				t1_ = Call_(_gt__eq_, other_p, t0_);
				if (t1_)
					{
					return true_;
					}
				else
					{
					return nil;
					}
				}
			t0_ = Call_(stopper, arg);
			t1_ = Call_(_gt__eq_, other_p, t0_);
			if (t1_)
				{
				return nil;
				}
			t0_ = Call_(deref_char, p);
			t1_ = Call_(deref_char, other_p);
			t2_ = Call_(_nt__eq_, t0_, t1_);
			if (t2_)
				{
				return nil;
				}
			t0_ = Call_(_pl_, p, Int_(0));
			p = t0_;
			t0_ = Call_(_pl_, other_p, Int_(1));
			other_p = t0_;
			}
		}
		return nil;
		
		}
	return nil;
}


obj_ _gt___String__Standard(obj_ this_, obj_ arg)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 1)
	DefineInt_(1, 1)
	UsingMethod_(_pl_) UsingMethod_(_lt_) UsingMethod_(_gt_) UsingMethod_(_gt__eq_) UsingMethod_(deref_char) UsingMethod_(start) UsingMethod_(stopper)

		{
		obj_ other_p, p;
		t0_ = Call_(start, this_);
		p = t0_;
		t0_ = Call_(start, arg);
		other_p = t0_;
		while (1) {
			ContinuePoint_(0)
			{
			t0_ = Call_(stopper, this_);
			t1_ = Call_(_gt__eq_, p, t0_);
			if (t1_)
				{
				return nil;
				}
			t0_ = Call_(stopper, arg);
			t1_ = Call_(_gt__eq_, other_p, t0_);
			if (t1_)
				{
				return true_;
				}
			t0_ = Call_(deref_char, p);
			t1_ = Call_(deref_char, other_p);
			t2_ = Call_(_gt_, t0_, t1_);
			if (t2_)
				{
				return true_;
				}
			else
				{
				t0_ = Call_(deref_char, p);
				t1_ = Call_(deref_char, other_p);
				t2_ = Call_(_lt_, t0_, t1_);
				if (t2_)
					{
					return nil;
					}
				}
			t0_ = Call_(_pl_, p, Int_(0));
			p = t0_;
			t0_ = Call_(_pl_, other_p, Int_(1));
			other_p = t0_;
			}
		}
		return nil;
		
		}
	return nil;
}


obj_ _gt__eq___String__Standard(obj_ this_, obj_ arg)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 1)
	DefineInt_(1, 1)
	UsingMethod_(_pl_) UsingMethod_(_lt_) UsingMethod_(_gt_) UsingMethod_(_gt__eq_) UsingMethod_(deref_char) UsingMethod_(start) UsingMethod_(stopper)

		{
		obj_ other_p, p;
		t0_ = Call_(start, this_);
		p = t0_;
		t0_ = Call_(start, arg);
		other_p = t0_;
		while (1) {
			ContinuePoint_(0)
			{
			t0_ = Call_(stopper, this_);
			t1_ = Call_(_gt__eq_, p, t0_);
			if (t1_)
				{
				t0_ = Call_(stopper, arg);
				t1_ = Call_(_gt__eq_, other_p, t0_);
				if (t1_)
					{
					return true_;
					}
				else
					{
					return nil;
					}
				}
			t0_ = Call_(stopper, arg);
			t1_ = Call_(_gt__eq_, other_p, t0_);
			if (t1_)
				{
				return true_;
				}
			t0_ = Call_(deref_char, p);
			t1_ = Call_(deref_char, other_p);
			t2_ = Call_(_gt_, t0_, t1_);
			if (t2_)
				{
				return true_;
				}
			else
				{
				t0_ = Call_(deref_char, p);
				t1_ = Call_(deref_char, other_p);
				t2_ = Call_(_lt_, t0_, t1_);
				if (t2_)
					{
					return nil;
					}
				}
			t0_ = Call_(_pl_, p, Int_(0));
			p = t0_;
			t0_ = Call_(_pl_, other_p, Int_(1));
			other_p = t0_;
			}
		}
		return nil;
		
		}
	return nil;
}


obj_ at_co___String__Standard(obj_ this_, obj_ index)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(_pl_) UsingMethod_(deref_char) UsingMethod_(start)

		{
		t0_ = Call_(start, this_);
		t1_ = Call_(_pl_, t0_, index);
		t2_ = Call_(deref_char, t1_);
		return t2_;
		
		}
	return nil;
}


obj_ bytes__String__Standard(obj_ this_)
{
	obj_ t0_;
	extern obj_ new_co___StringBytesIterator__Standard(obj_ this_, obj_ string);
	UsingClass_(StringBytesIterator__Standard)

		{
		t0_ = new_co___StringBytesIterator__Standard(Proto_(StringBytesIterator__Standard), this_);
		return t0_;
		
		}
	return nil;
}


obj_ characters__String__Standard(obj_ this_)
{
	obj_ t0_;
	extern obj_ new_co___StringUTF8Iterator__Standard(obj_ this_, obj_ string);
	UsingClass_(StringUTF8Iterator__Standard)

		{
		t0_ = new_co___StringUTF8Iterator__Standard(Proto_(StringUTF8Iterator__Standard), this_);
		return t0_;
		
		}
	return nil;
}


obj_ contains_co___String__Standard(obj_ this_, obj_ other)
{
	obj_ t0_;
	obj_ t1_;
	DefineInt_(0, 0)
	UsingMethod_(_gt__eq_) UsingMethod_(index_of_string_co_)

		{
		t0_ = Call_(index_of_string_co_, this_, other);
		t1_ = Call_(_gt__eq_, t0_, Int_(0));
		return t1_;
		
		}
	return nil;
}


obj_ copy__String__Standard(obj_ this_)
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


obj_ create_co___String__Standard(obj_ this_, obj_ length)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(start) UsingMethod_(start_co_) UsingMethod_(stopper_co_)
	extern obj_ new_non_pointer_co___BytePtr__Standard(obj_ this_, obj_ size);
	UsingClass_(BytePtr__Standard)

		{
		t0_ = new_non_pointer_co___BytePtr__Standard(Proto_(BytePtr__Standard), length);
		t1_ = Call_(start_co_, this_, t0_);
		t0_ = Call_(start, this_);
		t1_ = Call_(stopper_co_, this_, t0_);
		
		
		}
	return nil;
}


obj_ create_co_length_co___String__Standard(obj_ this_, obj_ start, obj_ length)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_pl_) UsingMethod_(start_co_) UsingMethod_(stopper_co_)

		{
		t0_ = Call_(start_co_, this_, start);
		t0_ = Call_(_pl_, start, length);
		t1_ = Call_(stopper_co_, this_, t0_);
		
		}
	return nil;
}


obj_ create_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper)
{
	obj_ t0_;
	UsingMethod_(start_co_) UsingMethod_(stopper_co_)

		{
		t0_ = Call_(start_co_, this_, start);
		t0_ = Call_(stopper_co_, this_, stopper);
		
		}
	return nil;
}


obj_ debug_string__String__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "\"")
	DefineString_(1, "\"")
	UsingMethod_(_pl_)

		{
		t0_ = Call_(_pl_, Str_(0), this_);
		t1_ = Call_(_pl_, t0_, Str_(1));
		return t1_;
		
		
		
		}
	return nil;
}


obj_ debug_write__String__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(debug_string)
	extern obj_ print_line_co___Standard(obj_ this_, obj_ line);
	UsingClass_(Standard)

		{
		t0_ = Call_(debug_string, this_);
		t1_ = print_line_co___Standard(Proto_(Standard), t0_);
		
		}
	return nil;
}


obj_ ends_with_co___String__Standard(obj_ this_, obj_ other)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	UsingMethod_(_) UsingMethod_(_eq__eq_) UsingMethod_(length) UsingMethod_(substr_co_)

		{
		t0_ = Call_(length, this_);
		t1_ = Call_(length, other);
		t2_ = Call_(_, t0_, t1_);
		t3_ = Call_(substr_co_, this_, t2_);
		t4_ = Call_(_eq__eq_, t3_, other);
		return t4_;
		
		}
	return nil;
}


obj_ first_character__String__Standard(obj_ this_)
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


obj_ float___String__Standard(obj_ this_)
{
return BuildFloat_(strtod(CString_(this_), nil));

}


obj_ from_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper)
{
	obj_ t0_;
	extern obj_ new_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	UsingClass_(String__Standard)

		{
		t0_ = new_co_to_co___String__Standard(Proto_(String__Standard), start, stopper);
		return t0_;
		
		}
	return nil;
}


obj_ index_of_string_co___String__Standard(obj_ this_, obj_ search_string)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineInt_(0, 1)
	DefineInt_(1, -1)
	UsingMethod_(_) UsingMethod_(copy) UsingMethod_(is_empty) UsingMethod_(length) UsingMethod_(starts_with_co_) UsingMethod_(substr_co_)

		{
		obj_ remainder;
		/* Could be more efficient... */
		t0_ = Call_(copy, this_);
		remainder = t0_;
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(is_empty, remainder);
			t1_ = Not_(t0_);
			if (!(t1_))
				Break_(0)
			{
			t0_ = Call_(starts_with_co_, remainder, search_string);
			if (t0_)
				{
				t0_ = Call_(length, this_);
				t1_ = Call_(length, remainder);
				t2_ = Call_(_, t0_, t1_);
				return t2_;
				}
			t3_ = Call_(substr_co_, remainder, Int_(0));
			remainder = t3_;
			}
			}
		return Int_(1);
		
		}
	return nil;
}


obj_ index_of_co___String__Standard(obj_ this_, obj_ char_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 1)
	DefineInt_(1, -1)
	UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(_lt_) UsingMethod_(_eq__eq_) UsingMethod_(deref_char) UsingMethod_(start) UsingMethod_(stopper)

		{
		obj_ char_ptr;
		t0_ = Call_(start, this_);
		char_ptr = t0_;
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(stopper, this_);
			t1_ = Call_(_lt_, char_ptr, t0_);
			if (!(t1_))
				Break_(0)
			{
			t0_ = Call_(deref_char, char_ptr);
			t1_ = Call_(_eq__eq_, t0_, char_);
			if (t1_)
				{
				t0_ = Call_(start, this_);
				t1_ = Call_(_, char_ptr, t0_);
				return t1_;
				}
			t2_ = Call_(_pl_, char_ptr, Int_(0));
			char_ptr = t2_;
			}
			}
		return Int_(1);
		
		}
	return nil;
}


obj_ int___String__Standard(obj_ this_)
{
return BuildInt_(strtoul(CString_(this_), nil, 0));

}


obj_ intern__String__Standard(obj_ this_)
{
	obj_ t0_;
	extern obj_ intern_co___Symbol__Standard(obj_ this_, obj_ name);
	UsingClass_(Symbol__Standard)

		{
		t0_ = intern_co___Symbol__Standard(Proto_(Symbol__Standard), this_);
		return t0_;
		
		}
	return nil;
}


obj_ is_empty__String__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(_lt__eq_) UsingMethod_(start) UsingMethod_(stopper)

		{
		t0_ = Call_(stopper, this_);
		t1_ = Call_(start, this_);
		t2_ = Call_(_lt__eq_, t0_, t1_);
		return t2_;
		
		
		}
	return nil;
}


obj_ last_character__String__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineInt_(0, 0)
	DefineInt_(1, 0)
	DefineInt_(2, 1)
	UsingMethod_(_) UsingMethod_(_eq__eq_) UsingMethod_(at_co_) UsingMethod_(length)

		{
		obj_ len;
		t0_ = Call_(length, this_);
		len = t0_;
		t0_ = Call_(_eq__eq_, len, Int_(0));
		if (t0_)
			{
			return Int_(1);
			}
		t0_ = Call_(_, len, Int_(2));
		t1_ = Call_(at_co_, this_, t0_);
		return t1_;
		
		}
	return nil;
}


obj_ last_index_of_co___String__Standard(obj_ this_, obj_ char_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 1)
	DefineInt_(1, 1)
	DefineInt_(2, -1)
	UsingMethod_(_) UsingMethod_(_eq__eq_) UsingMethod_(_gt__eq_) UsingMethod_(deref_char) UsingMethod_(start) UsingMethod_(stopper)

		{
		obj_ char_ptr;
		t0_ = Call_(stopper, this_);
		t1_ = Call_(_, t0_, Int_(0));
		char_ptr = t1_;
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(start, this_);
			t1_ = Call_(_gt__eq_, char_ptr, t0_);
			if (!(t1_))
				Break_(0)
			{
			t0_ = Call_(deref_char, char_ptr);
			t1_ = Call_(_eq__eq_, t0_, char_);
			if (t1_)
				{
				t0_ = Call_(start, this_);
				t1_ = Call_(_, char_ptr, t0_);
				return t1_;
				}
			t2_ = Call_(_, char_ptr, Int_(1));
			char_ptr = t2_;
			}
			}
		return Int_(2);
		
		}
	return nil;
}


obj_ length__String__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(_) UsingMethod_(start) UsingMethod_(stopper)

		{
		t0_ = Call_(stopper, this_);
		t1_ = Call_(start, this_);
		t2_ = Call_(_, t0_, t1_);
		return t2_;
		}
	return nil;
}


obj_ lines__String__Standard(obj_ this_)
{
	obj_ t0_;
	extern obj_ new_co___LinesIterator__Standard(obj_ this_, obj_ string);
	UsingClass_(LinesIterator__Standard)

		{
		t0_ = new_co___LinesIterator__Standard(Proto_(LinesIterator__Standard), this_);
		return t0_;
		
		
		}
	return nil;
}


obj_ lowercase__String__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineInt_(0, 65)
	DefineInt_(1, 90)
	DefineInt_(2, 97)
	DefineInt_(3, 65)
	DefineInt_(4, 0)
	DefineInt_(5, 1)
	DefineInt_(6, 1)
	UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(_lt_) UsingMethod_(_lt__eq_) UsingMethod_(_gt__eq_) UsingMethod_(char_at_co_put_co_) UsingMethod_(deref_char) UsingMethod_(length) UsingMethod_(start) UsingMethod_(stopper) UsingMethod_(stopper_co_)
	extern obj_ new_non_pointer_co___BytePtr__Standard(obj_ this_, obj_ size);
	extern obj_ new_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	UsingClass_(String__Standard)
	UsingClass_(BytePtr__Standard)

		{
		obj_ buffer, length, out_p, p;
		t0_ = Call_(length, this_);
		length = t0_;
		t0_ = new_non_pointer_co___BytePtr__Standard(Proto_(BytePtr__Standard), length);
		buffer = t0_;
		t0_ = Call_(start, this_);
		p = t0_;
		t0_ = Call_(stopper, this_);
		t1_ = Call_(stopper_co_, this_, t0_);
		out_p = buffer;
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(stopper, this_);
			t1_ = Call_(_lt_, p, t0_);
			if (!(t1_))
				Break_(0)
			{
			obj_ c;
			t0_ = Call_(deref_char, p);
			c = t0_;
			t0_ = Call_(_gt__eq_, c, Int_(0));
			if (t0_) {
				t1_ = Call_(_lt__eq_, c, Int_(1));
				t0_ = t1_;
				}
			if (t0_)
				{
				t0_ = Call_(_, Int_(2), Int_(3));
				t1_ = Call_(_pl_, c, t0_);
				c = t1_;
				}
			t0_ = Call_(char_at_co_put_co_, out_p, Int_(4), c);
			t0_ = Call_(_pl_, p, Int_(5));
			p = t0_;
			t0_ = Call_(_pl_, out_p, Int_(6));
			out_p = t0_;
			}
			}
		t0_ = Call_(_pl_, buffer, length);
		t1_ = new_co_to_co___String__Standard(Proto_(String__Standard), buffer, t0_);
		return t1_;
		
		
		}
	return nil;
}


obj_ new_co___String__Standard(obj_ this_, obj_ length)
{
	UsingClass_(String__Standard)
	obj_ obj = AllocObj_(String__Standard);
	create_co___String__Standard(obj, length);
	return obj;
}


obj_ new_co_length_co___String__Standard(obj_ this_, obj_ start, obj_ length)
{
	UsingClass_(String__Standard)
	obj_ obj = AllocObj_(String__Standard);
	create_co_length_co___String__Standard(obj, start, length);
	return obj;
}


obj_ new_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper)
{
	UsingClass_(String__Standard)
	obj_ obj = AllocObj_(String__Standard);
	create_co_to_co___String__Standard(obj, start, stopper);
	return obj;
}


obj_ print_string__String__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "\"")
	DefineString_(1, "\"")
	UsingMethod_(_pl_)

		{
		t0_ = Call_(_pl_, Str_(0), this_);
		t1_ = Call_(_pl_, t0_, Str_(1));
		return t1_;
		
		}
	return nil;
}


obj_ size__String__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(_) UsingMethod_(start) UsingMethod_(stopper)

		{
		t0_ = Call_(stopper, this_);
		t1_ = Call_(start, this_);
		t2_ = Call_(_, t0_, t1_);
		return t2_;
		}
	return nil;
}


obj_ start__String__Standard(obj_ this_)
{
	return Field_(start);
}


obj_ start_co___String__Standard(obj_ this_, obj_ value)
{
	Field_(start) = value;
	return value;
}


obj_ starts_with_co___String__Standard(obj_ this_, obj_ other)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 0)
	UsingMethod_(_eq__eq_) UsingMethod_(length) UsingMethod_(substr_co_length_co_)

		{
		t0_ = Call_(length, other);
		t1_ = Call_(substr_co_length_co_, this_, Int_(0), t0_);
		t2_ = Call_(_eq__eq_, t1_, other);
		return t2_;
		
		}
	return nil;
}


obj_ stopper__String__Standard(obj_ this_)
{
	return Field_(stopper);
}


obj_ stopper_co___String__Standard(obj_ this_, obj_ value)
{
	Field_(stopper) = value;
	return value;
}


obj_ string__String__Standard(obj_ this_)
{

		{
		return this_;
		}
	return nil;
}


obj_ substr_co___String__Standard(obj_ this_, obj_ from)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "")
	UsingMethod_(_pl_) UsingMethod_(_gt_) UsingMethod_(length) UsingMethod_(start) UsingMethod_(stopper)
	extern obj_ new_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	UsingClass_(String__Standard)

		{
		t0_ = Call_(length, this_);
		t1_ = Call_(_gt_, from, t0_);
		if (t1_)
			{
			return Str_(0);
			}
		t0_ = Call_(start, this_);
		t1_ = Call_(_pl_, t0_, from);
		t2_ = Call_(stopper, this_);
		t3_ = new_co_to_co___String__Standard(Proto_(String__Standard), t1_, t2_);
		return t3_;
		
		}
	return nil;
}


obj_ substr_co_length_co___String__Standard(obj_ this_, obj_ from, obj_ length)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "")
	UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(_gt_) UsingMethod_(length) UsingMethod_(start)
	extern obj_ new_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	UsingClass_(String__Standard)

		{
		obj_ dest_length, new_start, src_length;
		t0_ = Call_(length, this_);
		src_length = t0_;
		t0_ = Call_(_gt_, from, src_length);
		if (t0_)
			{
			return Str_(0);
			}
		dest_length = length;
		t0_ = Call_(_, src_length, from);
		t1_ = Call_(_gt_, dest_length, t0_);
		if (t1_)
			{
			t0_ = Call_(_, src_length, from);
			dest_length = t0_;
			}
		t0_ = Call_(start, this_);
		t1_ = Call_(_pl_, t0_, from);
		new_start = t1_;
		t0_ = Call_(_pl_, new_start, dest_length);
		t1_ = new_co_to_co___String__Standard(Proto_(String__Standard), new_start, t0_);
		return t1_;
		
		}
	return nil;
}


obj_ trimmed__String__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineInt_(0, 32)
	DefineInt_(1, 9)
	DefineInt_(2, 10)
	DefineInt_(3, 13)
	DefineInt_(4, 1)
	DefineInt_(5, 32)
	DefineInt_(6, 9)
	DefineInt_(7, 10)
	DefineInt_(8, 13)
	DefineInt_(9, 1)
	UsingMethod_(_nt__eq_) UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(copy) UsingMethod_(first_character) UsingMethod_(is_empty) UsingMethod_(last_character) UsingMethod_(start) UsingMethod_(start_co_) UsingMethod_(stopper) UsingMethod_(stopper_co_)

		{
		obj_ trimmed_copy;
		t0_ = Call_(copy, this_);
		trimmed_copy = t0_;
		
		/* Trim the front. */
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(is_empty, trimmed_copy);
			t1_ = Not_(t0_);
			if (!(t1_))
				Break_(0)
			{
			obj_ c;
			t0_ = Call_(first_character, trimmed_copy);
			c = t0_;
			t0_ = Call_(_nt__eq_, c, Int_(0));
			if (t0_) {
				t1_ = Call_(_nt__eq_, c, Int_(1));
				t0_ = t1_;
				}
			if (t0_) {
				t2_ = Call_(_nt__eq_, c, Int_(2));
				t0_ = t2_;
				}
			if (t0_) {
				t3_ = Call_(_nt__eq_, c, Int_(3));
				t0_ = t3_;
				}
			if (t0_)
				{
				Break_(0)
				}
			t0_ = Call_(start, trimmed_copy);
			t1_ = Call_(_pl_, t0_, Int_(4));
			t2_ = Call_(start_co_, trimmed_copy, t1_);
			
			}
			}
		/* Trim the back. */
		while (1) {
			ContinuePoint_(1)
			t0_ = Call_(is_empty, trimmed_copy);
			t1_ = Not_(t0_);
			if (!(t1_))
				Break_(1)
			{
			obj_ c;
			t0_ = Call_(last_character, trimmed_copy);
			c = t0_;
			t0_ = Call_(_nt__eq_, c, Int_(5));
			if (t0_) {
				t1_ = Call_(_nt__eq_, c, Int_(6));
				t0_ = t1_;
				}
			if (t0_) {
				t2_ = Call_(_nt__eq_, c, Int_(7));
				t0_ = t2_;
				}
			if (t0_) {
				t3_ = Call_(_nt__eq_, c, Int_(8));
				t0_ = t3_;
				}
			if (t0_)
				{
				Break_(1)
				}
			t0_ = Call_(stopper, trimmed_copy);
			t1_ = Call_(_, t0_, Int_(9));
			t2_ = Call_(stopper_co_, trimmed_copy, t1_);
			
			}
			}
		return trimmed_copy;
		
		
		}
	return nil;
}


