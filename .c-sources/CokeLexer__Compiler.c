#include "Trylon_.h"

UsingSym_(CokeLexer)UsingClass_(Compiler)
UsingClass_(Object__Standard)
UsingClass_(CokeLexer__Compiler)
struct ClassInfo CokeLexer__Compiler__classInfo_ = 
	{ 59, 16, Proto_(CokeLexer__Compiler), Proto_(Compiler), Proto_(Object__Standard), nil, Sym_(CokeLexer) ,nil };
struct object CokeLexer__Compiler = 
	{ &CokeLexer__Compiler__classInfo_, {nil, nil, nil, nil} };


#define lines__fld_	(0)
#define line__fld_	(1)
#define p__fld_	(2)
#define stopper__fld_	(3)


obj_ create_co___CokeLexer__Compiler(obj_ this_, obj_ lines)
{
	obj_ t0_;
	UsingMethod_(lines_co_) UsingMethod_(load_line)

		{
		t0_ = Call_(lines_co_, this_, lines);
		t0_ = Call_(load_line, this_);
		
		
		}
	return nil;
}


obj_ lex_list__CokeLexer__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineInt_(0, 0)
	DefineInt_(1, 41)
	DefineInt_(2, 0)
	DefineInt_(3, 1)
	DefineString_(0, "Unterminated list in Coke code.")
	UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(append_co_) UsingMethod_(at_co_put_co_) UsingMethod_(count) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(next_char) UsingMethod_(next_expr) UsingMethod_(peek_non_whitespace_char)
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	UsingClass_(MessageException__Standard)
	UsingClass_(List__Standard)
	UsingClass_(Expression)

		{
		obj_ expr, index, list;
		/* Gather the list. */
		t0_ = new__List__Standard(Proto_(List__Standard));
		list = t0_;
		while (1) {
			ContinuePoint_(0)
			{
			obj_ c;
			/* Skip whitespace. */
			t0_ = Call_(peek_non_whitespace_char, this_);
			c = t0_;
			t0_ = Call_(_eq__eq_, c, Int_(0));
			if (t0_)
				{
				t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(0));
				Throw_(t0_);
				
				}
			/* Are we done? */
			t1_ = Call_(_eq__eq_, c, Int_(1));
			if (t1_)
				{
				t0_ = Call_(next_char, this_);
				Break_(0)
				
				}
			t0_ = Call_(next_expr, this_);
			t1_ = Call_(append_co_, list, t0_);
			
			}
		}
		/* Build the Expression. */
		t0_ = Call_(count, list);
		t1_ = new_co___Expression(Proto_(Expression), t0_);
		expr = t1_;
		index = Int_(2);
		ForStart_(1, list, item)
			{
			t0_ = Call_(at_co_put_co_, expr, index, item);
			t0_ = Call_(_pl_, index, Int_(3));
			index = t0_;
			}
		ForEnd_(1)
		return expr;
		
		
		}
	return nil;
}


obj_ lex_number_co___CokeLexer__Compiler(obj_ this_, obj_ c)
{
	obj_ t0_;
	obj_ t1_;
	DefineInt_(0, 0)
	DefineInt_(1, 10)
	DefineInt_(2, 48)
	DefineInt_(3, 48)
	DefineInt_(4, 57)
	UsingMethod_(_st_) UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(_lt_) UsingMethod_(_gt_) UsingMethod_(next_char) UsingMethod_(peek_char)

		{
		obj_ value;
		/* "c" is the first character of the number, already consumed. */
		value = Int_(0);
		while (1) {
			ContinuePoint_(0)
			{
			t0_ = Call_(_st_, value, Int_(1));
			value = t0_;
			t0_ = Call_(_, c, Int_(2));
			t1_ = Call_(_pl_, value, t0_);
			value = t1_;
			t0_ = Call_(peek_char, this_);
			c = t0_;
			t0_ = Call_(_lt_, c, Int_(3));
			if ((t0_) == nil) {
				t1_ = Call_(_gt_, c, Int_(4));
				t0_ = t1_;
				}
			if (t0_)
				{
				Break_(0)
				}
			t0_ = Call_(next_char, this_);
			}
		}
		return value;
		
		
		}
	return nil;
}


obj_ lex_send__CokeLexer__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 0)
	DefineInt_(1, 93)
	DefineInt_(2, 3)
	DefineInt_(3, 0)
	DefineInt_(4, 1)
	DefineInt_(5, 2)
	DefineInt_(6, 3)
	DefineInt_(7, 1)
	DefineString_(0, "Bad send in Coke code.")
	DefineString_(1, "Unterminated send in Coke code.")
	UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(append_co_) UsingMethod_(at_co_put_co_) UsingMethod_(count) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(next_char) UsingMethod_(next_expr) UsingMethod_(peek_non_whitespace_char)
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	UsingSym_(send)
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(quote)
	UsingClass_(MessageException__Standard)
	UsingClass_(List__Standard)
	UsingClass_(Expression)

		{
		obj_ args, expr, index, message, receiver;
		t0_ = Call_(next_expr, this_);
		receiver = t0_;
		t0_ = Call_(next_expr, this_);
		message = t0_;
		t0_ = Not_(receiver);
		if ((t0_) == nil) {
			t1_ = Not_(message);
			t0_ = t1_;
			}
		if (t0_)
			{
			t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(0));
			Throw_(t0_);
			
			}
		/* Gather the arguments. */
		t1_ = new__List__Standard(Proto_(List__Standard));
		args = t1_;
		while (1) {
			ContinuePoint_(0)
			{
			obj_ c;
			/* Skip whitespace. */
			t0_ = Call_(peek_non_whitespace_char, this_);
			c = t0_;
			t0_ = Call_(_eq__eq_, c, Int_(0));
			if (t0_)
				{
				t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(1));
				Throw_(t0_);
				
				}
			/* Are we done? */
			t1_ = Call_(_eq__eq_, c, Int_(1));
			if (t1_)
				{
				t0_ = Call_(next_char, this_);
				Break_(0)
				
				}
			t0_ = Call_(next_expr, this_);
			t1_ = Call_(append_co_, args, t0_);
			
			}
		}
		/* Build the Expression. */
		t0_ = Call_(count, args);
		t1_ = Call_(_pl_, t0_, Int_(2));
		t2_ = new_co___Expression(Proto_(Expression), t1_);
		expr = t2_;
		t0_ = Call_(at_co_put_co_, expr, Int_(3), Sym_(send));
		t0_ = with_co_with_co___Expression(Proto_(Expression), Sym_(quote), message);
		t1_ = Call_(at_co_put_co_, expr, Int_(4), t0_);
		t0_ = Call_(at_co_put_co_, expr, Int_(5), receiver);
		index = Int_(6);
		ForStart_(1, args, item)
			{
			t0_ = Call_(at_co_put_co_, expr, index, item);
			t0_ = Call_(_pl_, index, Int_(7));
			index = t0_;
			}
		ForEnd_(1)
		return expr;
		
		
		}
	return nil;
}


obj_ lex_string__CokeLexer__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 34)
	DefineInt_(1, 1)
	UsingMethod_(_) UsingMethod_(_eq__eq_) UsingMethod_(next_char) UsingMethod_(p)
	extern obj_ new_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	UsingClass_(String__Standard)

		{
		obj_ start, string;
		/* The initial quote has already been consumed. */
		t0_ = Call_(p, this_);
		start = t0_;
		while (1) {
			ContinuePoint_(0)
			{
			obj_ c;
			t0_ = Call_(next_char, this_);
			c = t0_;
			t0_ = Call_(_eq__eq_, c, Int_(0));
			if (t0_)
				{
				Break_(0)
				}
			}
		}
		t0_ = Call_(p, this_);
		t1_ = Call_(_, t0_, Int_(1));
		t2_ = new_co_to_co___String__Standard(Proto_(String__Standard), start, t1_);
		string = t2_;
		return string;
		
		
		}
	return nil;
}


obj_ line__CokeLexer__Compiler(obj_ this_)
{
	return Field_(line);
}


obj_ line_co___CokeLexer__Compiler(obj_ this_, obj_ value)
{
	Field_(line) = value;
	return value;
}


obj_ lines__CokeLexer__Compiler(obj_ this_)
{
	return Field_(lines);
}


obj_ lines_co___CokeLexer__Compiler(obj_ this_, obj_ value)
{
	Field_(lines) = value;
	return value;
}


obj_ load_line__CokeLexer__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(line) UsingMethod_(line_co_) UsingMethod_(lines) UsingMethod_(p_co_) UsingMethod_(pop_front) UsingMethod_(start) UsingMethod_(stopper) UsingMethod_(stopper_co_)

		{
		t0_ = Call_(lines, this_);
		t1_ = Call_(pop_front, t0_);
		t2_ = Call_(line_co_, this_, t1_);
		t0_ = Call_(line, this_);
		if (t0_)
			{
			t0_ = Call_(line, this_);
			t1_ = Call_(start, t0_);
			t2_ = Call_(p_co_, this_, t1_);
			t0_ = Call_(line, this_);
			t1_ = Call_(stopper, t0_);
			t2_ = Call_(stopper_co_, this_, t1_);
			
			
			
			}
		}
	return nil;
}


obj_ new_co___CokeLexer__Compiler(obj_ this_, obj_ lines)
{
	UsingClass_(CokeLexer__Compiler)
	obj_ obj = AllocObj_(CokeLexer__Compiler);
	create_co___CokeLexer__Compiler(obj, lines);
	return obj;
}


obj_ next_char__CokeLexer__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 0)
	DefineInt_(1, 10)
	DefineInt_(2, 1)
	UsingMethod_(_pl_) UsingMethod_(_gt__eq_) UsingMethod_(deref_char) UsingMethod_(line) UsingMethod_(load_line) UsingMethod_(p) UsingMethod_(p_co_) UsingMethod_(stopper)

		{
		obj_ c;
		t0_ = Call_(p, this_);
		t1_ = Call_(stopper, this_);
		t2_ = Call_(_gt__eq_, t0_, t1_);
		if (t2_)
			{
			t0_ = Call_(load_line, this_);
			t0_ = Call_(line, this_);
			t1_ = Not_(t0_);
			if (t1_)
				{
				return Int_(0);
				}
			return Int_(1);
			}
		t0_ = Call_(p, this_);
		t1_ = Call_(deref_char, t0_);
		c = t1_;
		t0_ = Call_(p, this_);
		t1_ = Call_(_pl_, t0_, Int_(2));
		t2_ = Call_(p_co_, this_, t1_);
		return c;
		
		
		}
	return nil;
}


obj_ next_expr__CokeLexer__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	obj_ t7_;
	DefineInt_(0, 0)
	DefineInt_(1, 39)
	DefineInt_(2, 34)
	DefineInt_(3, 40)
	DefineInt_(4, 41)
	DefineInt_(5, 91)
	DefineInt_(6, 93)
	DefineInt_(7, 45)
	DefineInt_(8, 48)
	DefineInt_(9, 57)
	DefineInt_(10, 48)
	DefineInt_(11, 57)
	DefineInt_(12, 1)
	DefineInt_(13, 32)
	DefineInt_(14, 9)
	DefineInt_(15, 10)
	DefineInt_(16, 13)
	DefineInt_(17, 41)
	DefineInt_(18, 93)
	DefineInt_(19, 0)
	DefineString_(0, "Extra \")\" in Coke code.")
	DefineString_(1, "Extra \"]\" in Coke code.")
	UsingMethod_(_) UsingMethod_(_lt__eq_) UsingMethod_(_eq__eq_) UsingMethod_(_gt__eq_) UsingMethod_(intern) UsingMethod_(lex_list) UsingMethod_(lex_number_co_) UsingMethod_(lex_send) UsingMethod_(lex_string) UsingMethod_(next_char) UsingMethod_(next_expr) UsingMethod_(next_non_whitespace_char) UsingMethod_(p) UsingMethod_(peek_char) UsingMethod_(unary_minus)
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(quote)
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	UsingSym_(_)
	extern obj_ new_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	UsingClass_(MessageException__Standard)
	UsingClass_(String__Standard)
	UsingClass_(Expression)

		{
		obj_ c;
		/* What kind of expression? */
		t0_ = Call_(next_non_whitespace_char, this_);
		c = t0_;
		Switch_(c)
		if (SwitchMatches_(Int_(0)))
			{
			return nil;
			
			}
		else if (SwitchMatches_(Int_(1)))
			{
			t0_ = Call_(next_expr, this_);
			t1_ = with_co_with_co___Expression(Proto_(Expression), Sym_(quote), t0_);
			return t1_;
			
			}
		else if (SwitchMatches_(Int_(2)))
			{
			t2_ = Call_(lex_string, this_);
			return t2_;
			
			}
		else if (SwitchMatches_(Int_(3)))
			{
			t3_ = Call_(lex_list, this_);
			return t3_;
			
			}
		else if (SwitchMatches_(Int_(4)))
			{
			t4_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(0));
			Throw_(t4_);
			
			}
		else if (SwitchMatches_(Int_(5)))
			{
			t5_ = Call_(lex_send, this_);
			return t5_;
			}
		else if (SwitchMatches_(Int_(6)))
			{
			t6_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(1));
			Throw_(t6_);
			
			}
		else if (SwitchMatches_(Int_(7)))
			{
			t7_ = Call_(peek_char, this_);
			c = t7_;
			t0_ = Call_(_gt__eq_, c, Int_(8));
			if (t0_) {
				t1_ = Call_(_lt__eq_, c, Int_(9));
				t0_ = t1_;
				}
			if (t0_)
				{
				t0_ = Call_(next_char, this_);
				t0_ = Call_(lex_number_co_, this_, c);
				t1_ = Call_(unary_minus, t0_);
				return t1_;
				}
			else
				{
				return Sym_(_);
				
				}
			}
		else
			{
			t2_ = Call_(_gt__eq_, c, Int_(10));
			if (t2_) {
				t3_ = Call_(_lt__eq_, c, Int_(11));
				t2_ = t3_;
				}
			if (t2_)
				{
				t0_ = Call_(lex_number_co_, this_, c);
				return t0_;
				}
			else
				{
				obj_ start_char;
				t1_ = Call_(p, this_);
				t2_ = Call_(_, t1_, Int_(12));
				start_char = t2_;
				while (1) {
					ContinuePoint_(0)
					{
					t0_ = Call_(peek_char, this_);
					c = t0_;
					t0_ = Call_(_eq__eq_, c, Int_(13));
					if ((t0_) == nil) {
						t1_ = Call_(_eq__eq_, c, Int_(14));
						t0_ = t1_;
						}
					if ((t0_) == nil) {
						t2_ = Call_(_eq__eq_, c, Int_(15));
						t0_ = t2_;
						}
					if ((t0_) == nil) {
						t3_ = Call_(_eq__eq_, c, Int_(16));
						t0_ = t3_;
						}
					if ((t0_) == nil) {
						t4_ = Call_(_eq__eq_, c, Int_(17));
						t0_ = t4_;
						}
					if ((t0_) == nil) {
						t5_ = Call_(_eq__eq_, c, Int_(18));
						t0_ = t5_;
						}
					if ((t0_) == nil) {
						t6_ = Call_(_eq__eq_, c, Int_(19));
						t0_ = t6_;
						}
					if (t0_)
						{
						Break_(0)
						}
					t0_ = Call_(next_char, this_);
					}
				}
				t0_ = Call_(p, this_);
				t1_ = new_co_to_co___String__Standard(Proto_(String__Standard), start_char, t0_);
				t2_ = Call_(intern, t1_);
				return t2_;
				
				
				}
			}
		EndSwitch_
		}
	return nil;
}


obj_ next_non_whitespace_char__CokeLexer__Compiler(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(next_char) UsingMethod_(peek_non_whitespace_char)

		{
		obj_ c;
		t0_ = Call_(peek_non_whitespace_char, this_);
		c = t0_;
		t0_ = Call_(next_char, this_);
		return c;
		
		
		}
	return nil;
}


obj_ p__CokeLexer__Compiler(obj_ this_)
{
	return Field_(p);
}


obj_ p_co___CokeLexer__Compiler(obj_ this_, obj_ value)
{
	Field_(p) = value;
	return value;
}


obj_ peek_char__CokeLexer__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 0)
	DefineInt_(1, 10)
	UsingMethod_(_gt__eq_) UsingMethod_(deref_char) UsingMethod_(line) UsingMethod_(p) UsingMethod_(stopper)

		{
		t0_ = Call_(p, this_);
		t1_ = Call_(stopper, this_);
		t2_ = Call_(_gt__eq_, t0_, t1_);
		if (t2_)
			{
			t0_ = Call_(line, this_);
			t1_ = Not_(t0_);
			if (t1_)
				{
				return Int_(0);
				}
			return Int_(1);
			}
		t0_ = Call_(p, this_);
		t1_ = Call_(deref_char, t0_);
		return t1_;
		
		
		}
	return nil;
}


obj_ peek_non_whitespace_char__CokeLexer__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineInt_(0, 32)
	DefineInt_(1, 9)
	DefineInt_(2, 10)
	DefineInt_(3, 13)
	UsingMethod_(_nt__eq_) UsingMethod_(next_char) UsingMethod_(peek_char)

		{
		while (1) {
			ContinuePoint_(0)
			{
			obj_ c;
			t0_ = Call_(peek_char, this_);
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
				return c;
				}
			t0_ = Call_(next_char, this_);
			
			
			}
		}
		}
	return nil;
}


obj_ stopper__CokeLexer__Compiler(obj_ this_)
{
	return Field_(stopper);
}


obj_ stopper_co___CokeLexer__Compiler(obj_ this_, obj_ value)
{
	Field_(stopper) = value;
	return value;
}


