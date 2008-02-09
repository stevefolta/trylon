#include "Trylon_.h"

UsingSym_(WordsLexer)UsingClass_(Compiler)
UsingClass_(Object__Standard)
UsingClass_(WordsLexer__Compiler)
struct ClassInfo WordsLexer__Compiler__classInfo_ = 
	{ 62, 12, Proto_(WordsLexer__Compiler), Proto_(Compiler), Proto_(Object__Standard), nil, Sym_(WordsLexer) ,nil };
struct object WordsLexer__Compiler = 
	{ &WordsLexer__Compiler__classInfo_, {nil, nil, nil} };


#define cached_word__fld_	(0)
#define p__fld_	(1)
#define stopper__fld_	(2)


obj_ cached_word__WordsLexer__Compiler(obj_ this_)
{
	return Field_(cached_word);
}


obj_ cached_word_co___WordsLexer__Compiler(obj_ this_, obj_ value)
{
	Field_(cached_word) = value;
	return value;
}


obj_ create_co___WordsLexer__Compiler(obj_ this_, obj_ string)
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


obj_ create_co_to_co___WordsLexer__Compiler(obj_ this_, obj_ start, obj_ stopper)
{
	obj_ t0_;
	UsingMethod_(p_co_) UsingMethod_(stopper_co_)

		{
		t0_ = Call_(p_co_, this_, start);
		t0_ = Call_(stopper_co_, this_, stopper);
		
		}
	return nil;
}


obj_ current__WordsLexer__Compiler(obj_ this_)
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


obj_ current_item__WordsLexer__Compiler(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(current)

		{
		t0_ = Call_(current, this_);
		return t0_;
		
		}
	return nil;
}


obj_ go_forward__WordsLexer__Compiler(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(next)

		{
		t0_ = Call_(next, this_);
		
		
		}
	return nil;
}


obj_ is_done__WordsLexer__Compiler(obj_ this_)
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


obj_ is_empty__WordsLexer__Compiler(obj_ this_)
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


obj_ new_co___WordsLexer__Compiler(obj_ this_, obj_ string)
{
	UsingClass_(WordsLexer__Compiler)
	obj_ obj = AllocObj_(WordsLexer__Compiler);
	create_co___WordsLexer__Compiler(obj, string);
	return obj;
}


obj_ new_co_to_co___WordsLexer__Compiler(obj_ this_, obj_ start, obj_ stopper)
{
	UsingClass_(WordsLexer__Compiler)
	obj_ obj = AllocObj_(WordsLexer__Compiler);
	create_co_to_co___WordsLexer__Compiler(obj, start, stopper);
	return obj;
}


obj_ next__WordsLexer__Compiler(obj_ this_)
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


obj_ p__WordsLexer__Compiler(obj_ this_)
{
	return Field_(p);
}


obj_ p_co___WordsLexer__Compiler(obj_ this_, obj_ value)
{
	Field_(p) = value;
	return value;
}


obj_ parse_char_escape_from_co_to_co___WordsLexer__Compiler(obj_ this_, obj_ start, obj_ stopper)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineInt_(0, 4)
	DefineInt_(1, 85)
	DefineInt_(2, 8)
	DefineInt_(3, 2)
	DefineInt_(4, 2)
	UsingMethod_(_eq__eq_) UsingMethod_(deref_char) UsingMethod_(first_character) UsingMethod_(p) UsingMethod_(parse_escaped_char_into_co_) UsingMethod_(parse_hex_co_) UsingMethod_(string)
	extern obj_ new_co_to_co___WordsLexer__Compiler(obj_ this_, obj_ start, obj_ stopper);
	UsingSym_(u)
	UsingSym_(U)
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ new__SmallStringBuilder__Compiler(obj_ this_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	UsingClass_(WordsLexer__Compiler)
	UsingClass_(SmallStringBuilder__Compiler)

		{
		obj_ c, lexer;
		t0_ = new_co_to_co___WordsLexer__Compiler(Proto_(WordsLexer__Compiler), start, stopper);
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
			num_digits = Int_(0);
			t0_ = Call_(_eq__eq_, c, Int_(1));
			if (t0_)
				{
				num_digits = Int_(2);
				}
			t0_ = Call_(parse_hex_co_, lexer, num_digits);
			value = t0_;
			t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), Int_(3));
			t0_->fields[1] = value;
			t1_ = Call_(p, lexer);
			t0_->fields[2] = t1_;
			return t0_;
			}
		else
			{
			obj_ builder;
			t2_ = new__SmallStringBuilder__Compiler(Proto_(SmallStringBuilder__Compiler));
			builder = t2_;
			t0_ = Call_(parse_escaped_char_into_co_, lexer, builder);
			t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), Int_(4));
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


obj_ parse_escaped_char_into_co___WordsLexer__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineInt_(0, 97)
	DefineInt_(1, 98)
	DefineInt_(2, 101)
	DefineInt_(3, 102)
	DefineInt_(4, 110)
	DefineInt_(5, 114)
	DefineInt_(6, 116)
	DefineInt_(7, 118)
	DefineInt_(8, 48)
	DefineInt_(9, 49)
	DefineInt_(10, 50)
	DefineInt_(11, 120)
	DefineInt_(12, 88)
	DefineInt_(13, 117)
	DefineInt_(14, 85)
	DefineInt_(15, 7)
	DefineInt_(16, 1)
	DefineInt_(17, 8)
	DefineInt_(18, 1)
	DefineInt_(19, 27)
	DefineInt_(20, 1)
	DefineInt_(21, 12)
	DefineInt_(22, 1)
	DefineInt_(23, 10)
	DefineInt_(24, 1)
	DefineInt_(25, 13)
	DefineInt_(26, 1)
	DefineInt_(27, 9)
	DefineInt_(28, 1)
	DefineInt_(29, 11)
	DefineInt_(30, 1)
	DefineInt_(31, 48)
	DefineInt_(32, 1)
	DefineInt_(33, 3)
	DefineInt_(34, 48)
	DefineInt_(35, 1)
	DefineInt_(36, 3)
	DefineInt_(37, 48)
	DefineInt_(38, 1)
	DefineInt_(39, 1)
	DefineInt_(40, 2)
	DefineInt_(41, 1)
	DefineInt_(42, 4)
	DefineInt_(43, 85)
	DefineInt_(44, 8)
	DefineString_(0, "Unterminated quote.")
	DefineString_(1, "Unterminated quote.")
	UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(_lt_) UsingMethod_(_lt__lt_) UsingMethod_(_eq__eq_) UsingMethod_(_gt__eq_) UsingMethod_(add_char_co_) UsingMethod_(char_) UsingMethod_(deref_char) UsingMethod_(is_digit) UsingMethod_(p) UsingMethod_(p_co_) UsingMethod_(parse_hex_co_) UsingMethod_(stopper) UsingMethod_(utf8_encode_co_into_co_)

		{
		obj_ escaped_char;
		/* The `\` has already been consumed. */
		escaped_char = nil;
		t0_ = Call_(p, this_);
		t1_ = Call_(deref_char, t0_);
		Switch_(t1_)
		if (SwitchMatches_(Int_(0)))
			{
			escaped_char = Int_(15);
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, Int_(16));
			t2_ = Call_(p_co_, this_, t1_);
			}
		else if (SwitchMatches_(Int_(1)))
			{
			escaped_char = Int_(17);
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, Int_(18));
			t2_ = Call_(p_co_, this_, t1_);
			}
		else if (SwitchMatches_(Int_(2)))
			{
			escaped_char = Int_(19);
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, Int_(20));
			t2_ = Call_(p_co_, this_, t1_);
			}
		else if (SwitchMatches_(Int_(3)))
			{
			escaped_char = Int_(21);
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, Int_(22));
			t2_ = Call_(p_co_, this_, t1_);
			}
		else if (SwitchMatches_(Int_(4)))
			{
			escaped_char = Int_(23);
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, Int_(24));
			t2_ = Call_(p_co_, this_, t1_);
			}
		else if (SwitchMatches_(Int_(5)))
			{
			escaped_char = Int_(25);
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, Int_(26));
			t2_ = Call_(p_co_, this_, t1_);
			}
		else if (SwitchMatches_(Int_(6)))
			{
			escaped_char = Int_(27);
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, Int_(28));
			t2_ = Call_(p_co_, this_, t1_);
			}
		else if (SwitchMatches_(Int_(7)))
			{
			escaped_char = Int_(29);
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, Int_(30));
			t2_ = Call_(p_co_, this_, t1_);
			}
		else if (SwitchMatches_(Int_(8)) || SwitchMatches_(Int_(9)) || SwitchMatches_(Int_(10)))
			{
			obj_ value;
			t0_ = Call_(p, this_);
			t1_ = Call_(deref_char, t0_);
			t2_ = Call_(_, t1_, Int_(31));
			value = t2_;
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, Int_(32));
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
				t0_ = Call_(_lt__lt_, value, Int_(33));
				value = t0_;
				t0_ = Call_(_, digit, Int_(34));
				t1_ = Call_(_pl_, value, t0_);
				value = t1_;
				t0_ = Call_(p, this_);
				t1_ = Call_(_pl_, t0_, Int_(35));
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
					t0_ = Call_(_lt__lt_, value, Int_(36));
					value = t0_;
					t0_ = Call_(_, digit, Int_(37));
					t1_ = Call_(_pl_, value, t0_);
					value = t1_;
					t0_ = Call_(p, this_);
					t1_ = Call_(_pl_, t0_, Int_(38));
					t2_ = Call_(p_co_, this_, t1_);
					}
				}
			t0_ = Call_(char_, value);
			escaped_char = t0_;
			}
		else if (SwitchMatches_(Int_(11)) || SwitchMatches_(Int_(12)))
			{
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, Int_(39));
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
			t0_ = Call_(parse_hex_co_, this_, Int_(40));
			t1_ = Call_(char_, t0_);
			escaped_char = t1_;
			}
		else if (SwitchMatches_(Int_(13)) || SwitchMatches_(Int_(14)))
			{
			obj_ num_digits, value;
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, Int_(41));
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
			num_digits = Int_(42);
			t0_ = Call_(p, this_);
			t1_ = Call_(deref_char, t0_);
			t2_ = Call_(_eq__eq_, t1_, Int_(43));
			if (t2_)
				{
				num_digits = Int_(44);
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
			}
		EndSwitch_
		if (escaped_char)
			{
			t0_ = Call_(add_char_co_, builder, escaped_char);
			
			
			}
		}
	return nil;
}


obj_ parse_hex_co___WordsLexer__Compiler(obj_ this_, obj_ max_digits)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 0)
	DefineInt_(1, 0)
	DefineInt_(2, 0)
	DefineInt_(3, 48)
	DefineInt_(4, 97)
	DefineInt_(5, 102)
	DefineInt_(6, 97)
	DefineInt_(7, 10)
	DefineInt_(8, 65)
	DefineInt_(9, 70)
	DefineInt_(10, 65)
	DefineInt_(11, 10)
	DefineInt_(12, 1)
	DefineInt_(13, 4)
	DefineInt_(14, 1)
	UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(_lt_) UsingMethod_(_lt__lt_) UsingMethod_(_lt__eq_) UsingMethod_(_gt__eq_) UsingMethod_(deref_char) UsingMethod_(is_digit) UsingMethod_(p) UsingMethod_(p_co_) UsingMethod_(stopper)

		{
		obj_ num_digits, value;
		value = Int_(0);
		num_digits = Int_(1);
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
			digit_value = Int_(2);
			t0_ = Call_(is_digit, c);
			if (t0_)
				{
				t0_ = Call_(_, c, Int_(3));
				digit_value = t0_;
				}
			else
				{
				t0_ = Call_(_gt__eq_, c, Int_(4));
				if (t0_) {
					t1_ = Call_(_lt__eq_, c, Int_(5));
					t0_ = t1_;
					}
				if (t0_)
					{
					t0_ = Call_(_, c, Int_(6));
					t1_ = Call_(_pl_, t0_, Int_(7));
					digit_value = t1_;
					}
				else
					{
					t0_ = Call_(_gt__eq_, c, Int_(8));
					if (t0_) {
						t1_ = Call_(_lt__eq_, c, Int_(9));
						t0_ = t1_;
						}
					if (t0_)
						{
						t0_ = Call_(_, c, Int_(10));
						t1_ = Call_(_pl_, t0_, Int_(11));
						digit_value = t1_;
						}
					else
						{
						Break_(0)
						}
					}
				}
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, Int_(12));
			t2_ = Call_(p_co_, this_, t1_);
			t0_ = Call_(_lt__lt_, value, Int_(13));
			value = t0_;
			t0_ = Call_(_pl_, value, digit_value);
			value = t0_;
			t0_ = Call_(_pl_, num_digits, Int_(14));
			num_digits = t0_;
			}
			}
		return value;
		
		
		}
	return nil;
}


obj_ parse_next_word__WordsLexer__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	obj_ t7_;
	obj_ t8_;
	DefineInt_(0, 1)
	DefineInt_(1, 40)
	DefineInt_(2, 41)
	DefineInt_(3, 91)
	DefineInt_(4, 93)
	DefineInt_(5, 123)
	DefineInt_(6, 125)
	DefineInt_(7, 44)
	DefineInt_(8, 33)
	DefineInt_(9, 45)
	DefineInt_(10, 1)
	DefineInt_(11, 34)
	DefineInt_(12, 39)
	DefineInt_(13, 1)
	DefineInt_(14, 1)
	DefineInt_(15, 92)
	DefineInt_(16, 1)
	DefineInt_(17, 1)
	DefineInt_(18, 1)
	DefineInt_(19, 40)
	DefineInt_(20, 41)
	DefineInt_(21, 91)
	DefineInt_(22, 93)
	DefineInt_(23, 123)
	DefineInt_(24, 125)
	DefineInt_(25, 44)
	DefineInt_(26, 33)
	DefineString_(0, "Unterminated quote.")
	UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(_gt__eq_) UsingMethod_(add_from_co_to_co_) UsingMethod_(deref_char) UsingMethod_(is_whitespace) UsingMethod_(p) UsingMethod_(p_co_) UsingMethod_(parse_escaped_char_into_co_) UsingMethod_(stopper) UsingMethod_(string)
	extern obj_ from_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	extern obj_ from_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	extern obj_ from_co_to_co___SmallStringBuilder__Compiler(obj_ this_, obj_ start, obj_ stopper);
	extern obj_ from_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	extern obj_ from_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	UsingClass_(MessageException__Standard)
	UsingClass_(String__Standard)
	UsingClass_(SmallStringBuilder__Compiler)

		{
		obj_ c, word_start;
		/* Skip initial whitespace. */
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
			t1_ = Call_(_pl_, t0_, Int_(0));
			t2_ = Call_(p_co_, this_, t1_);
			
			}
		}
		t0_ = Call_(p, this_);
		word_start = t0_;
		
		/* Is it a paren/bracket/brace/comma/minus? */
		t0_ = Call_(_eq__eq_, c, Int_(1));
		if ((t0_) == nil) {
			t1_ = Call_(_eq__eq_, c, Int_(2));
			t0_ = t1_;
			}
		if ((t0_) == nil) {
			t2_ = Call_(_eq__eq_, c, Int_(3));
			t0_ = t2_;
			}
		if ((t0_) == nil) {
			t3_ = Call_(_eq__eq_, c, Int_(4));
			t0_ = t3_;
			}
		if ((t0_) == nil) {
			t4_ = Call_(_eq__eq_, c, Int_(5));
			t0_ = t4_;
			}
		if ((t0_) == nil) {
			t5_ = Call_(_eq__eq_, c, Int_(6));
			t0_ = t5_;
			}
		if ((t0_) == nil) {
			t6_ = Call_(_eq__eq_, c, Int_(7));
			t0_ = t6_;
			}
		if ((t0_) == nil) {
			t7_ = Call_(_eq__eq_, c, Int_(8));
			t0_ = t7_;
			}
		if ((t0_) == nil) {
			t8_ = Call_(_eq__eq_, c, Int_(9));
			t0_ = t8_;
			}
		if (t0_)
			{
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, Int_(10));
			t2_ = Call_(p_co_, this_, t1_);
			t0_ = Call_(p, this_);
			t1_ = from_co_to_co___String__Standard(Proto_(String__Standard), word_start, t0_);
			return t1_;
			
			}
		/* A string/symbol? */
		else
			{
			t2_ = Call_(_eq__eq_, c, Int_(11));
			if ((t2_) == nil) {
				t3_ = Call_(_eq__eq_, c, Int_(12));
				t2_ = t3_;
				}
			if (t2_)
				{
				obj_ builder, delimiter;
				delimiter = c;
				builder = nil;
				t0_ = Call_(p, this_);
				t1_ = Call_(_pl_, t0_, Int_(13));
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
						t1_ = Call_(_pl_, t0_, Int_(14));
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
						t3_ = Call_(_eq__eq_, c, Int_(15));
						if (t3_)
							{
							t0_ = Not_(builder);
							if (t0_)
								{
								t0_ = Call_(p, this_);
								t1_ = from_co_to_co___SmallStringBuilder__Compiler(Proto_(SmallStringBuilder__Compiler), word_start, t0_);
								builder = t1_;
								}
							else
								{
								t0_ = Call_(p, this_);
								t1_ = Call_(add_from_co_to_co_, builder, word_start, t0_);
								}
							t0_ = Call_(p, this_);
							t1_ = Call_(_pl_, t0_, Int_(16));
							t2_ = Call_(p_co_, this_, t1_);
							t0_ = Call_(parse_escaped_char_into_co_, this_, builder);
							t0_ = Call_(p, this_);
							word_start = t0_;
							}
						else
							{
							t0_ = Call_(p, this_);
							t1_ = Call_(_pl_, t0_, Int_(17));
							t2_ = Call_(p_co_, this_, t1_);
							
							}
						}
					}
				}
				}
			/* Gather the word. */
			}
		while (1) {
			ContinuePoint_(2)
			{
			t0_ = Call_(p, this_);
			t1_ = Call_(_pl_, t0_, Int_(18));
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
				t1_ = Call_(_eq__eq_, c, Int_(19));
				t0_ = t1_;
				}
			if ((t0_) == nil) {
				t2_ = Call_(_eq__eq_, c, Int_(20));
				t0_ = t2_;
				}
			if ((t0_) == nil) {
				t3_ = Call_(_eq__eq_, c, Int_(21));
				t0_ = t3_;
				}
			if ((t0_) == nil) {
				t4_ = Call_(_eq__eq_, c, Int_(22));
				t0_ = t4_;
				}
			if ((t0_) == nil) {
				t5_ = Call_(_eq__eq_, c, Int_(23));
				t0_ = t5_;
				}
			if ((t0_) == nil) {
				t6_ = Call_(_eq__eq_, c, Int_(24));
				t0_ = t6_;
				}
			if ((t0_) == nil) {
				t7_ = Call_(_eq__eq_, c, Int_(25));
				t0_ = t7_;
				}
			if ((t0_) == nil) {
				t8_ = Call_(_eq__eq_, c, Int_(26));
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


obj_ peek__WordsLexer__Compiler(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(current)

		{
		t0_ = Call_(current, this_);
		
		}
	return nil;
}


obj_ remainder__WordsLexer__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(p) UsingMethod_(stopper)
	extern obj_ from_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	UsingClass_(String__Standard)

		{
		t0_ = Call_(p, this_);
		t1_ = Call_(stopper, this_);
		t2_ = from_co_to_co___String__Standard(Proto_(String__Standard), t0_, t1_);
		return t2_;
		
		
		}
	return nil;
}


obj_ stopper__WordsLexer__Compiler(obj_ this_)
{
	return Field_(stopper);
}


obj_ stopper_co___WordsLexer__Compiler(obj_ this_, obj_ value)
{
	Field_(stopper) = value;
	return value;
}


obj_ utf8_encode_co_into_co___WordsLexer__Compiler(obj_ this_, obj_ char_, obj_ builder)
{
	obj_ t0_;
	obj_ t1_;
	DefineInt_(0, 127)
	DefineInt_(1, 128)
	DefineInt_(2, -64)
	DefineInt_(3, 0)
	DefineInt_(4, 63)
	DefineInt_(5, 6)
	DefineInt_(6, 67108863)
	DefineInt_(7, 1)
	DefineInt_(8, 128)
	DefineInt_(9, 128)
	UsingMethod_(_an_) UsingMethod_(_lt_) UsingMethod_(_eq__eq_) UsingMethod_(_gt__gt_) UsingMethod_(add_char_co_) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(push_front_co_) UsingMethod_(_or_)
	extern obj_ new__List__Standard(obj_ this_);
	UsingClass_(List__Standard)

		{
		obj_ list, prefix;
		t0_ = Call_(_lt_, char_, Int_(0));
		if (t0_)
			{
			t0_ = Call_(add_char_co_, builder, char_);
			return nil;
			
			}
		prefix = Int_(1);
		t0_ = new__List__Standard(Proto_(List__Standard));
		list = t0_;
		while (1) {
			ContinuePoint_(0)
			{
			t0_ = Call_(_an_, char_, Int_(2));
			t1_ = Call_(_eq__eq_, t0_, Int_(3));
			if (t1_)
				{
				Break_(0)
				}
			t0_ = Call_(_an_, char_, Int_(4));
			t1_ = Call_(push_front_co_, list, t0_);
			t0_ = Call_(_gt__gt_, char_, Int_(5));
			t1_ = Call_(_an_, t0_, Int_(6));
			char_ = t1_;
			t0_ = Call_(_gt__gt_, prefix, Int_(7));
			t1_ = Call_(_or_, t0_, Int_(8));
			prefix = t1_;
			}
		}
		t0_ = Call_(_or_, prefix, char_);
		t1_ = Call_(add_char_co_, builder, t0_);
		ForStart_(1, list, char_)
			{
			t0_ = Call_(_or_, char_, Int_(9));
			t1_ = Call_(add_char_co_, builder, t0_);
			
			
			
			
			}
		ForEnd_(1)
		}
	return nil;
}


