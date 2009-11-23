#include "Trylon_.h"

UsingSym_(WordsLexer)UsingClass_(Trylon)
UsingClass_(Object__Standard)
UsingClass_(WordsLexer__Trylon)
struct ClassInfo WordsLexer__Trylon__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 70, 3, Proto_(WordsLexer__Trylon), Proto_(Trylon), Proto_(Object__Standard), nil, Sym_(WordsLexer), nil, nil };
struct object WordsLexer__Trylon = 
	{ &WordsLexer__Trylon__classInfo_, {nil, nil, nil} };


#define cached_word__fld_	(0)
#define p__fld_	(1)
#define stopper__fld_	(2)


obj_ create_co___WordsLexer__Trylon(obj_ this_, obj_ string)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(p_co_) UsingMethod_(start) UsingMethod_(stopper) UsingMethod_(stopper_co_)

		{
		t0_ = Call_(start, string);
		t1_ = Call_(p_co_, this_, t0_);
		t0_ = Call_(stopper, string);
		t1_ = Call_(stopper_co_, this_, t0_);
		}
	return nil;
}


obj_ create_co_to_co___WordsLexer__Trylon(obj_ this_, obj_ start, obj_ stopper)
{
	obj_ t0_;
	UsingMethod_(p_co_) UsingMethod_(stopper_co_)

		{
		t0_ = Call_(p_co_, this_, start);
		t0_ = Call_(stopper_co_, this_, stopper);
		}
	return nil;
}


obj_ current__WordsLexer__Trylon(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(cached_word) UsingMethod_(cached_word_co_) UsingMethod_(parse_next_word)

		{
		t0_ = Call_(cached_word, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = Call_(parse_next_word, this_);
			t1_ = Call_(cached_word_co_, this_, t0_);
			}
		t0_ = Call_(cached_word, this_);
		return t0_;
		}
	return nil;
}


obj_ current_item__WordsLexer__Trylon(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(current)

		{
		t0_ = Call_(current, this_);
		return t0_;
		}
	return nil;
}


obj_ go_forward__WordsLexer__Trylon(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(next)

		{
		t0_ = Call_(next, this_);
		}
	return nil;
}


obj_ is_done__WordsLexer__Trylon(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(current)

		{
		t0_ = Call_(current, this_);
		t1_ = Not_(t0_);
		return t1_;
		}
	return nil;
}


obj_ is_empty__WordsLexer__Trylon(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(current)

		{
		t0_ = Call_(current, this_);
		t1_ = Not_(t0_);
		return t1_;
		}
	return nil;
}


obj_ iterator__WordsLexer__Trylon(obj_ this_)
{

		{
		return this_;
		}
	return nil;
}


obj_ new_co___WordsLexer__Trylon(obj_ this_, obj_ string)
{
	UsingClass_(WordsLexer__Trylon)
	obj_ obj = AllocObj_(WordsLexer__Trylon);
	create_co___WordsLexer__Trylon(obj, string);
	return obj;
}


obj_ new_co_to_co___WordsLexer__Trylon(obj_ this_, obj_ start, obj_ stopper)
{
	UsingClass_(WordsLexer__Trylon)
	obj_ obj = AllocObj_(WordsLexer__Trylon);
	create_co_to_co___WordsLexer__Trylon(obj, start, stopper);
	return obj;
}


obj_ next__WordsLexer__Trylon(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(cached_word) UsingMethod_(cached_word_co_) UsingMethod_(parse_next_word)

		{
		t0_ = Call_(cached_word, this_);
		if (t0_)
			{
			obj_ result;
			t0_ = Call_(cached_word, this_);
			result = t0_;
			t0_ = Call_(cached_word_co_, this_, nil);
			return result;
			}
		else
			{
			t0_ = Call_(parse_next_word, this_);
			return t0_;
			}
		}
	return nil;
}


obj_ parse_char_escape_from_co_to_co___WordsLexer__Trylon(obj_ this_, obj_ start, obj_ stopper)
{
	extern obj_ new_co_to_co___WordsLexer__Trylon(obj_ this_, obj_ start, obj_ stopper);
	UsingSym_(u)
	UsingSym_(U)
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ new__SmallStringBuilder__Standard(obj_ this_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(4)
	UsingInt_(85)
	UsingInt_(8)
	UsingInt_(2)
	UsingInt_(2)
	UsingMethod_(_eq__eq_) UsingMethod_(deref_char) UsingMethod_(first_character) UsingMethod_(p) UsingMethod_(parse_escaped_char_into_co_) UsingMethod_(parse_hex_co_) UsingMethod_(string)
	UsingClass_(SmallStringBuilder__Standard)
	UsingClass_(WordsLexer__Trylon)

		{
		obj_ c, lexer;
		t0_ = new_co_to_co___WordsLexer__Trylon(Proto_(WordsLexer__Trylon), start, stopper);
		lexer = t0_;
		t0_ = Call_(deref_char, start);
		c = t0_;
		t0_ = Call_(_eq__eq_, c, Sym_(u));
		if ((t0_) == nil) {
			t1_ = Call_(_eq__eq_, c, Sym_(U));
			t0_ = t1_;
			}
		if (t0_)
			{
			obj_ num_digits, value;
			num_digits = SmallInt_(4);
			t0_ = Call_(_eq__eq_, c, Int_(85));
			if (t0_)
				{
				num_digits = SmallInt_(8);
				}
			t0_ = Call_(parse_hex_co_, lexer, num_digits);
			value = t0_;
			t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(2));
			t0_->fields[1] = value;
			t1_ = Call_(p, lexer);
			t0_->fields[2] = t1_;
			return t0_;
			}
		else
			{
			obj_ builder;
			t2_ = new__SmallStringBuilder__Standard(Proto_(SmallStringBuilder__Standard));
			builder = t2_;
			t0_ = Call_(parse_escaped_char_into_co_, lexer, builder);
			t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(2));
			t1_ = Call_(string, builder);
			t2_ = Call_(first_character, t1_);
			t0_->fields[1] = t2_;
			t3_ = Call_(p, lexer);
			t0_->fields[2] = t3_;
			return t0_;
			}
		}
	return nil;
}


obj_ parse_escaped_char_into_co___WordsLexer__Trylon(obj_ this_, obj_ builder)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	UsingInt_(97)
	UsingInt_(98)
	UsingInt_(101)
	UsingInt_(102)
	UsingInt_(110)
	UsingInt_(114)
	UsingInt_(116)
	UsingInt_(118)
	UsingInt_(48)
	UsingInt_(49)
	UsingInt_(50)
	UsingInt_(120)
	UsingInt_(88)
	UsingInt_(117)
	UsingInt_(85)
	UsingInt_(7)
	UsingInt_(1)
	UsingInt_(8)
	UsingInt_(1)
	UsingInt_(27)
	UsingInt_(1)
	UsingInt_(12)
	UsingInt_(1)
	UsingInt_(10)
	UsingInt_(1)
	UsingInt_(13)
	UsingInt_(1)
	UsingInt_(9)
	UsingInt_(1)
	UsingInt_(11)
	UsingInt_(1)
	UsingInt_(48)
	UsingInt_(1)
	UsingInt_(3)
	UsingInt_(48)
	UsingInt_(1)
	UsingInt_(3)
	UsingInt_(48)
	UsingInt_(1)
	UsingInt_(1)
	UsingInt_(2)
	UsingInt_(1)
	UsingInt_(4)
	UsingInt_(85)
	UsingInt_(8)
	UsingInt_(1)
	DefineString_(0, "Unterminated quote.")
	DefineString_(1, "Unterminated quote.")
	UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(_lt_) UsingMethod_(_lt__lt_) UsingMethod_(_eq__eq_) UsingMethod_(_gt__eq_) UsingMethod_(add_char_co_) UsingMethod_(char_) UsingMethod_(deref_char) UsingMethod_(is_digit) UsingMethod_(p) UsingMethod_(p_co_) UsingMethod_(parse_hex_co_) UsingMethod_(stopper) UsingMethod_(utf8_encode_co_into_co_)

		{
		obj_ escaped_char;
		/*  The `\` has already been consumed. */
		escaped_char = nil;
		t0_ = Call_(p, this_);
		t1_ = Call_(deref_char, t0_);
		Switch_(t1_)
		if (SwitchMatches_(Int_(97)))
			{
			escaped_char = Int_(7);
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, SmallInt_(1));
			t2_ = Call_(p_co_, this_, t1_);
			}
		else if (SwitchMatches_(Int_(98)))
			{
			escaped_char = Int_(8);
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, SmallInt_(1));
			t2_ = Call_(p_co_, this_, t1_);
			}
		else if (SwitchMatches_(Int_(101)))
			{
			escaped_char = Int_(27);
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, SmallInt_(1));
			t2_ = Call_(p_co_, this_, t1_);
			}
		else if (SwitchMatches_(Int_(102)))
			{
			escaped_char = Int_(12);
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, SmallInt_(1));
			t2_ = Call_(p_co_, this_, t1_);
			}
		else if (SwitchMatches_(Int_(110)))
			{
			escaped_char = Int_(10);
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, SmallInt_(1));
			t2_ = Call_(p_co_, this_, t1_);
			}
		else if (SwitchMatches_(Int_(114)))
			{
			escaped_char = Int_(13);
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, SmallInt_(1));
			t2_ = Call_(p_co_, this_, t1_);
			}
		else if (SwitchMatches_(Int_(116)))
			{
			escaped_char = Int_(9);
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, SmallInt_(1));
			t2_ = Call_(p_co_, this_, t1_);
			}
		else if (SwitchMatches_(Int_(118)))
			{
			escaped_char = Int_(11);
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, SmallInt_(1));
			t2_ = Call_(p_co_, this_, t1_);
			}
		else if (SwitchMatches_(Int_(48)) || SwitchMatches_(Int_(49)) || SwitchMatches_(Int_(50)))
			{
			obj_ value;
			t0_ = Call_(p, this_);
			t1_ = Call_(deref_char, t0_);
			t2_ = Call_(_, t1_, Int_(48));
			value = t2_;
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, SmallInt_(1));
			t2_ = Call_(p_co_, this_, t1_);
			t0_ = Call_(p, this_);
			t1_ = Call_(stopper, this_);
			t2_ = Call_(_lt_, t0_, t1_);
			if (t2_) {
				t3_ = Call_(p, this_);
				t4_ = Call_(deref_char, t3_);
				t5_ = Call_(is_digit, t4_);
				t2_ = t5_;
				}
			if (t2_)
				{
				obj_ digit;
				t0_ = Call_(p, this_);
				t1_ = Call_(deref_char, t0_);
				digit = t1_;
				t0_ = Call_(_lt__lt_, value, SmallInt_(3));
				value = t0_;
				t0_ = Call_(_, digit, Int_(48));
				t1_ = Call_(_pl_, value, t0_);
				value = t1_;
				t0_ = Call_(p, this_);
				t1_ = Call_(_pl_, t0_, SmallInt_(1));
				t2_ = Call_(p_co_, this_, t1_);
				t0_ = Call_(p, this_);
				t1_ = Call_(stopper, this_);
				t2_ = Call_(_lt_, t0_, t1_);
				if (t2_) {
					t3_ = Call_(p, this_);
					t4_ = Call_(deref_char, t3_);
					t5_ = Call_(is_digit, t4_);
					t2_ = t5_;
					}
				if (t2_)
					{
					t0_ = Call_(_lt__lt_, value, SmallInt_(3));
					value = t0_;
					t0_ = Call_(_, digit, Int_(48));
					t1_ = Call_(_pl_, value, t0_);
					value = t1_;
					t0_ = Call_(p, this_);
					t1_ = Call_(_pl_, t0_, SmallInt_(1));
					t2_ = Call_(p_co_, this_, t1_);
					}
				}
			t0_ = Call_(char_, value);
			escaped_char = t0_;
			}
		else if (SwitchMatches_(Int_(120)) || SwitchMatches_(Int_(88)))
			{
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, SmallInt_(1));
			t2_ = Call_(p_co_, this_, t1_);
			t0_ = Call_(p, this_);
			t1_ = Call_(stopper, this_);
			t2_ = Call_(_gt__eq_, t0_, t1_);
			if (t2_)
				{
				obj_ MessageException;
				MessageException = Str_(0);
				Throw_(Str_(0));
				}
			t0_ = Call_(parse_hex_co_, this_, SmallInt_(2));
			t1_ = Call_(char_, t0_);
			escaped_char = t1_;
			}
		else if (SwitchMatches_(Int_(117)) || SwitchMatches_(Int_(85)))
			{
			obj_ num_digits, value;
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, SmallInt_(1));
			t2_ = Call_(p_co_, this_, t1_);
			t0_ = Call_(p, this_);
			t1_ = Call_(stopper, this_);
			t2_ = Call_(_gt__eq_, t0_, t1_);
			if (t2_)
				{
				obj_ MessageException;
				MessageException = Str_(1);
				Throw_(Str_(1));
				}
			num_digits = SmallInt_(4);
			t0_ = Call_(p, this_);
			t1_ = Call_(deref_char, t0_);
			t2_ = Call_(_eq__eq_, t1_, Int_(85));
			if (t2_)
				{
				num_digits = SmallInt_(8);
				}
			t0_ = Call_(parse_hex_co_, this_, num_digits);
			value = t0_;
			t0_ = Call_(utf8_encode_co_into_co_, this_, value, builder);
			}
		else
			{
			t0_ = Call_(p, this_);
			t1_ = Call_(deref_char, t0_);
			escaped_char = t1_;
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, SmallInt_(1));
			t2_ = Call_(p_co_, this_, t1_);
			}
		EndSwitch_
		if (escaped_char)
			{
			t0_ = Call_(add_char_co_, builder, escaped_char);
			}
		}
	return nil;
}


obj_ parse_hex_co___WordsLexer__Trylon(obj_ this_, obj_ max_digits)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(0)
	UsingInt_(0)
	UsingInt_(0)
	UsingInt_(48)
	UsingInt_(97)
	UsingInt_(102)
	UsingInt_(97)
	UsingInt_(10)
	UsingInt_(65)
	UsingInt_(70)
	UsingInt_(65)
	UsingInt_(10)
	UsingInt_(1)
	UsingInt_(4)
	UsingInt_(1)
	UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(_lt_) UsingMethod_(_lt__lt_) UsingMethod_(_lt__eq_) UsingMethod_(_gt__eq_) UsingMethod_(deref_char) UsingMethod_(is_digit) UsingMethod_(p) UsingMethod_(p_co_) UsingMethod_(stopper)

		{
		obj_ num_digits, value;
		value = SmallInt_(0);
		num_digits = SmallInt_(0);
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(_lt_, num_digits, max_digits);
			if (!(t0_))
				Break_(0)
			{
			obj_ c, digit_value;
			t0_ = Call_(p, this_);
			t1_ = Call_(stopper, this_);
			t2_ = Call_(_gt__eq_, t0_, t1_);
			if (t2_)
				{
				Break_(0)
				}
			t0_ = Call_(p, this_);
			t1_ = Call_(deref_char, t0_);
			c = t1_;
			digit_value = SmallInt_(0);
			t0_ = Call_(is_digit, c);
			if (t0_)
				{
				t0_ = Call_(_, c, Int_(48));
				digit_value = t0_;
				}
			else
				{
				t0_ = Call_(_gt__eq_, c, Int_(97));
				if (t0_) {
					t1_ = Call_(_lt__eq_, c, Int_(102));
					t0_ = t1_;
					}
				if (t0_)
					{
					t0_ = Call_(_, c, Int_(97));
					t1_ = Call_(_pl_, t0_, SmallInt_(10));
					digit_value = t1_;
					}
				else
					{
					t0_ = Call_(_gt__eq_, c, Int_(65));
					if (t0_) {
						t1_ = Call_(_lt__eq_, c, Int_(70));
						t0_ = t1_;
						}
					if (t0_)
						{
						t0_ = Call_(_, c, Int_(65));
						t1_ = Call_(_pl_, t0_, SmallInt_(10));
						digit_value = t1_;
						}
					else
						{
						Break_(0)
						}
					}
				}
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, SmallInt_(1));
			t2_ = Call_(p_co_, this_, t1_);
			t0_ = Call_(_lt__lt_, value, SmallInt_(4));
			value = t0_;
			t0_ = Call_(_pl_, value, digit_value);
			value = t0_;
			t0_ = Call_(_pl_, num_digits, SmallInt_(1));
			num_digits = t0_;
			}
			}
		return value;
		}
	return nil;
}


obj_ parse_next_word__WordsLexer__Trylon(obj_ this_)
{
	extern obj_ from_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	extern obj_ from_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	extern obj_ from_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	extern obj_ from_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	extern obj_ from_co_to_co___SmallStringBuilder__Standard(obj_ this_, obj_ start, obj_ stopper);
	extern obj_ from_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	extern obj_ from_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	obj_ t7_;
	obj_ t8_;
	obj_ t9_;
	obj_ t10_;
	UsingInt_(1)
	UsingInt_(33)
	UsingInt_(1)
	UsingInt_(61)
	UsingInt_(1)
	UsingInt_(40)
	UsingInt_(41)
	UsingInt_(91)
	UsingInt_(93)
	UsingInt_(123)
	UsingInt_(125)
	UsingInt_(44)
	UsingInt_(33)
	UsingInt_(126)
	UsingInt_(1)
	UsingInt_(45)
	UsingInt_(1)
	UsingInt_(61)
	UsingInt_(62)
	UsingInt_(1)
	UsingInt_(34)
	UsingInt_(39)
	UsingInt_(96)
	UsingInt_(1)
	UsingInt_(1)
	UsingInt_(92)
	UsingInt_(1)
	UsingInt_(1)
	UsingInt_(1)
	UsingInt_(40)
	UsingInt_(41)
	UsingInt_(91)
	UsingInt_(93)
	UsingInt_(123)
	UsingInt_(125)
	UsingInt_(44)
	UsingInt_(33)
	DefineString_(0, "Unterminated quote.")
	UsingMethod_(_pl_) UsingMethod_(_lt_) UsingMethod_(_eq__eq_) UsingMethod_(_gt__eq_) UsingMethod_(add_from_co_to_co_) UsingMethod_(deref_char) UsingMethod_(is_whitespace) UsingMethod_(p) UsingMethod_(p_co_) UsingMethod_(parse_escaped_char_into_co_) UsingMethod_(stopper) UsingMethod_(string)
	UsingClass_(MessageException__Standard)
	UsingClass_(SmallStringBuilder__Standard)
	UsingClass_(String__Standard)

		{
		obj_ c, word_start;
		/*  Skip initial whitespace. */
		c = nil;
		while (1) {
			ContinuePoint_(0)
			{
			t0_ = Call_(p, this_);
			t1_ = Call_(stopper, this_);
			t2_ = Call_(_gt__eq_, t0_, t1_);
			if (t2_)
				{
				return nil;
				}
			t0_ = Call_(p, this_);
			t1_ = Call_(deref_char, t0_);
			c = t1_;
			t0_ = Call_(is_whitespace, c);
			t1_ = Not_(t0_);
			if (t1_)
				{
				Break_(0)
				}
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, SmallInt_(1));
			t2_ = Call_(p_co_, this_, t1_);
			}
		}
		
		t0_ = Call_(p, this_);
		word_start = t0_;
		
		/*  Is it a paren/bracket/brace/comma/minus? */
		t0_ = Call_(_eq__eq_, c, Int_(33));
		if (t0_)
			{
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, SmallInt_(1));
			t2_ = Call_(p_co_, this_, t1_);
			t0_ = Call_(p, this_);
			t1_ = Call_(stopper, this_);
			t2_ = Call_(_lt_, t0_, t1_);
			if (t2_) {
				t3_ = Call_(p, this_);
				t4_ = Call_(deref_char, t3_);
				t5_ = Call_(_eq__eq_, t4_, Int_(61));
				t2_ = t5_;
				}
			if (t2_)
				{
				t0_ = Call_(p, this_);
				t1_ = Call_(_pl_, t0_, SmallInt_(1));
				t2_ = Call_(p_co_, this_, t1_);
				}
			t0_ = Call_(p, this_);
			t1_ = from_co_to_co___String__Standard(Proto_(String__Standard), word_start, t0_);
			return t1_;
			}
		else
			{
			t2_ = Call_(_eq__eq_, c, Int_(40));
			if ((t2_) == nil) {
				t3_ = Call_(_eq__eq_, c, Int_(41));
				t2_ = t3_;
				}
			if ((t2_) == nil) {
				t4_ = Call_(_eq__eq_, c, Int_(91));
				t2_ = t4_;
				}
			if ((t2_) == nil) {
				t5_ = Call_(_eq__eq_, c, Int_(93));
				t2_ = t5_;
				}
			if ((t2_) == nil) {
				t6_ = Call_(_eq__eq_, c, Int_(123));
				t2_ = t6_;
				}
			if ((t2_) == nil) {
				t7_ = Call_(_eq__eq_, c, Int_(125));
				t2_ = t7_;
				}
			if ((t2_) == nil) {
				t8_ = Call_(_eq__eq_, c, Int_(44));
				t2_ = t8_;
				}
			if ((t2_) == nil) {
				t9_ = Call_(_eq__eq_, c, Int_(33));
				t2_ = t9_;
				}
			if ((t2_) == nil) {
				t10_ = Call_(_eq__eq_, c, Int_(126));
				t2_ = t10_;
				}
			if (t2_)
				{
				t0_ = Call_(p, this_);
				t1_ = Call_(_pl_, t0_, SmallInt_(1));
				t2_ = Call_(p_co_, this_, t1_);
				t0_ = Call_(p, this_);
				t1_ = from_co_to_co___String__Standard(Proto_(String__Standard), word_start, t0_);
				return t1_;
				}
			else
				{
				t2_ = Call_(_eq__eq_, c, Int_(45));
				if (t2_)
					{
					t0_ = Call_(p, this_);
					t1_ = Call_(_pl_, t0_, SmallInt_(1));
					t2_ = Call_(p_co_, this_, t1_);
					/*  A minus is usually its own token, even at the front of a "word".  But */
					/*  there are a couple of two-character tokens that start with a minus ("-=" */
					/*  and "->"). */
					t0_ = Call_(p, this_);
					t1_ = Call_(stopper, this_);
					t2_ = Call_(_lt_, t0_, t1_);
					if (t2_)
						{
						t0_ = Call_(p, this_);
						t1_ = Call_(deref_char, t0_);
						c = t1_;
						t0_ = Call_(_eq__eq_, c, Int_(61));
						if ((t0_) == nil) {
							t1_ = Call_(_eq__eq_, c, Int_(62));
							t0_ = t1_;
							}
						if (t0_)
							{
							t0_ = Call_(p, this_);
							t1_ = Call_(_pl_, t0_, SmallInt_(1));
							t2_ = Call_(p_co_, this_, t1_);
							}
						}
					t0_ = Call_(p, this_);
					t1_ = from_co_to_co___String__Standard(Proto_(String__Standard), word_start, t0_);
					return t1_;
					}
				else
					{
					t2_ = Call_(_eq__eq_, c, Int_(34));
					if ((t2_) == nil) {
						t3_ = Call_(_eq__eq_, c, Int_(39));
						t2_ = t3_;
						}
					if ((t2_) == nil) {
						t4_ = Call_(_eq__eq_, c, Int_(96));
						t2_ = t4_;
						}
					if (t2_)
						{
						obj_ builder, delimiter;
						delimiter = c;
						builder = nil;
						t0_ = Call_(p, this_);
						t1_ = Call_(_pl_, t0_, SmallInt_(1));
						t2_ = Call_(p_co_, this_, t1_);
						while (1) {
							ContinuePoint_(1)
							{
							t0_ = Call_(p, this_);
							t1_ = Call_(stopper, this_);
							t2_ = Call_(_gt__eq_, t0_, t1_);
							if (t2_)
								{
								t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(0));
								Throw_(t0_);
								}
							t1_ = Call_(p, this_);
							t2_ = Call_(deref_char, t1_);
							c = t2_;
							t0_ = Call_(_eq__eq_, c, delimiter);
							if (t0_)
								{
								t0_ = Call_(p, this_);
								t1_ = Call_(_pl_, t0_, SmallInt_(1));
								t2_ = Call_(p_co_, this_, t1_);
								if (builder)
									{
									t0_ = Call_(p, this_);
									t1_ = Call_(add_from_co_to_co_, builder, word_start, t0_);
									t0_ = Call_(string, builder);
									return t0_;
									}
								else
									{
									t1_ = Call_(p, this_);
									t2_ = from_co_to_co___String__Standard(Proto_(String__Standard), word_start, t1_);
									return t2_;
									}
								}
							else
								{
								t3_ = Call_(_eq__eq_, c, Int_(92));
								if (t3_)
									{
									t0_ = Not_(builder);
									if (t0_)
										{
										t0_ = Call_(p, this_);
										t1_ = from_co_to_co___SmallStringBuilder__Standard(Proto_(SmallStringBuilder__Standard), word_start, t0_);
										builder = t1_;
										}
									else
										{
										t0_ = Call_(p, this_);
										t1_ = Call_(add_from_co_to_co_, builder, word_start, t0_);
										}
									t0_ = Call_(p, this_);
									t1_ = Call_(_pl_, t0_, SmallInt_(1));
									t2_ = Call_(p_co_, this_, t1_);
									t0_ = Call_(parse_escaped_char_into_co_, this_, builder);
									t0_ = Call_(p, this_);
									word_start = t0_;
									}
								else
									{
									t0_ = Call_(p, this_);
									t1_ = Call_(_pl_, t0_, SmallInt_(1));
									t2_ = Call_(p_co_, this_, t1_);
									}
								}
							}
						}
						}
					}
				}
			}
		
		/*  A string/symbol/character literal? */
		
		/*  Gather the word. */
		while (1) {
			ContinuePoint_(2)
			{
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, SmallInt_(1));
			t2_ = Call_(p_co_, this_, t1_);
			t0_ = Call_(p, this_);
			t1_ = Call_(stopper, this_);
			t2_ = Call_(_gt__eq_, t0_, t1_);
			if (t2_)
				{
				t0_ = Call_(stopper, this_);
				t1_ = from_co_to_co___String__Standard(Proto_(String__Standard), word_start, t0_);
				return t1_;
				}
			t2_ = Call_(p, this_);
			t3_ = Call_(deref_char, t2_);
			c = t3_;
			t0_ = Call_(is_whitespace, c);
			if ((t0_) == nil) {
				t1_ = Call_(_eq__eq_, c, Int_(40));
				t0_ = t1_;
				}
			if ((t0_) == nil) {
				t2_ = Call_(_eq__eq_, c, Int_(41));
				t0_ = t2_;
				}
			if ((t0_) == nil) {
				t3_ = Call_(_eq__eq_, c, Int_(91));
				t0_ = t3_;
				}
			if ((t0_) == nil) {
				t4_ = Call_(_eq__eq_, c, Int_(93));
				t0_ = t4_;
				}
			if ((t0_) == nil) {
				t5_ = Call_(_eq__eq_, c, Int_(123));
				t0_ = t5_;
				}
			if ((t0_) == nil) {
				t6_ = Call_(_eq__eq_, c, Int_(125));
				t0_ = t6_;
				}
			if ((t0_) == nil) {
				t7_ = Call_(_eq__eq_, c, Int_(44));
				t0_ = t7_;
				}
			if ((t0_) == nil) {
				t8_ = Call_(_eq__eq_, c, Int_(33));
				t0_ = t8_;
				}
			if (t0_)
				{
				Break_(2)
				}
			}
		}
		t0_ = Call_(p, this_);
		t1_ = from_co_to_co___String__Standard(Proto_(String__Standard), word_start, t0_);
		return t1_;
		}
	return nil;
}


obj_ peek__WordsLexer__Trylon(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(current)

		{
		t0_ = Call_(current, this_);
		return t0_;
		}
	return nil;
}


obj_ remainder__WordsLexer__Trylon(obj_ this_)
{
	extern obj_ from_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(p) UsingMethod_(stopper)
	UsingClass_(String__Standard)

		{
		t0_ = Call_(p, this_);
		t1_ = Call_(stopper, this_);
		t2_ = from_co_to_co___String__Standard(Proto_(String__Standard), t0_, t1_);
		return t2_;
		}
	return nil;
}


obj_ require_eol__WordsLexer__Trylon(obj_ this_)
{
	extern obj_ error_co___Standard(obj_ this_, obj_ message);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	UsingSym_(Extra__stuff__at__end__of__line___40__34_)
	UsingSym_(_34__41__dt_)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(3)
	DefineString_(0, "#")
	UsingMethod_(_eq__eq_) UsingMethod_(current) UsingMethod_(is_empty) UsingMethod_(remainder)
	UsingClass_(Standard)

		{
		t0_ = Call_(is_empty, this_);
		if (t0_)
			{
			return nil;
			}
		t0_ = Call_(current, this_);
		t1_ = Call_(_eq__eq_, t0_, Str_(0));
		if (t1_)
			{
			t0_ = Call_(remainder, this_);
			return t0_;
			}
		t1_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(3));
		t1_->fields[1] = Sym_(Extra__stuff__at__end__of__line___40__34_);
		t2_ = Call_(remainder, this_);
		t1_->fields[2] = t2_;
		t1_->fields[3] = Sym_(_34__41__dt_);
		t3_ = error_co___Standard(Proto_(Standard), t1_);
		}
	return nil;
}


obj_ utf8_encode_co_into_co___WordsLexer__Trylon(obj_ this_, obj_ char_, obj_ builder)
{
	extern obj_ new__List__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingInt_(127)
	UsingInt_(128)
	UsingInt_(m64)
	UsingInt_(0)
	UsingInt_(63)
	UsingInt_(6)
	UsingInt_(67108863)
	UsingInt_(1)
	UsingInt_(128)
	UsingInt_(128)
	UsingMethod_(_an_) UsingMethod_(_lt_) UsingMethod_(_eq__eq_) UsingMethod_(_gt__gt_) UsingMethod_(add_char_co_) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(push_front_co_) UsingMethod_(_or_)
	UsingClass_(List__Standard)

		{
		obj_ list, prefix;
		t0_ = Call_(_lt_, char_, SmallInt_(127));
		if (t0_)
			{
			t0_ = Call_(add_char_co_, builder, char_);
			return nil;
			}
		
		prefix = SmallInt_(128);
		t0_ = new__List__Standard(Proto_(List__Standard));
		list = t0_;
		while (1) {
			ContinuePoint_(0)
			{
			t0_ = Call_(_an_, char_, SmallInt_(-64));
			t1_ = Call_(_eq__eq_, t0_, SmallInt_(0));
			if (t1_)
				{
				Break_(0)
				}
			t0_ = Call_(_an_, char_, SmallInt_(63));
			t1_ = Call_(push_front_co_, list, t0_);
			t0_ = Call_(_gt__gt_, char_, SmallInt_(6));
			t1_ = Call_(_an_, t0_, SmallInt_(67108863));
			char_ = t1_;
			t0_ = Call_(_gt__gt_, prefix, SmallInt_(1));
			t1_ = Call_(_or_, t0_, SmallInt_(128));
			prefix = t1_;
			}
		}
		t0_ = Call_(_or_, prefix, char_);
		t1_ = Call_(add_char_co_, builder, t0_);
		ForStart_(1, list, char_)
			{
			t0_ = Call_(_or_, char_, SmallInt_(128));
			t1_ = Call_(add_char_co_, builder, t0_);
			}
		ForEnd_(1)
		}
	return nil;
}


