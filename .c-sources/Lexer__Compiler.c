#include "Trylon_.h"

UsingSym_(Lexer)UsingClass_(Compiler)
UsingClass_(Object__Standard)
UsingClass_(Lexer__Compiler)
struct ClassInfo Lexer__Compiler__classInfo_ = 
	{ 60, 20, Proto_(Lexer__Compiler), Proto_(Compiler), Proto_(Object__Standard), nil, Sym_(Lexer) ,nil };
struct object Lexer__Compiler = 
	{ &Lexer__Compiler__classInfo_, {nil, nil, nil, nil, nil} };

	DefineInt_(0, 0)

#define p__fld_	(0)
#define indent_stack__fld_	(1)
#define at_line_start__fld_	(2)
#define unindents_pending__fld_	(3)
#define unindent_to__fld_	(4)

DeclareSharedField_(eof_char, Lexer__Compiler, Int_(0))

obj_ at_line_start__Lexer__Compiler(obj_ this_)
{
	return Field_(at_line_start);
}


obj_ at_line_start_co___Lexer__Compiler(obj_ this_, obj_ value)
{
	Field_(at_line_start) = value;
	return value;
}


obj_ character_constant_value_co___Lexer__Compiler(obj_ this_, obj_ text)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineInt_(0, 92)
	UsingMethod_(_eq__eq_) UsingMethod_(bytes) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(p) UsingMethod_(p_co_) UsingMethod_(parse_character_escape_co_)

		{
		t0_ = Call_(bytes, text);
		t1_ = Call_(p_co_, this_, t0_);
		t0_ = Call_(p, this_);
		t1_ = Call_(current_item, t0_);
		t2_ = Call_(_eq__eq_, t1_, Int_(0));
		if (t2_)
			{
			t0_ = Call_(p, this_);
			t1_ = Call_(go_forward, t0_);
			 	/* Skip `\`. */
			t0_ = Call_(p, this_);
			t1_ = Call_(parse_character_escape_co_, this_, t0_);
			return t1_;
			}
		t2_ = Call_(p, this_);
		t3_ = Call_(current_item, t2_);
		return t3_;
		
		
		}
	return nil;
}


obj_ create_co___Lexer__Compiler(obj_ this_, obj_ text)
{
	obj_ t0_;
	obj_ t1_;
	DefineInt_(0, 0)
	DefineInt_(1, 0)
	UsingMethod_(at_line_start_co_) UsingMethod_(bytes) UsingMethod_(char_) UsingMethod_(eof_char_co_) UsingMethod_(indent_stack) UsingMethod_(indent_stack_co_) UsingMethod_(p_co_) UsingMethod_(push_co_) UsingMethod_(unindents_pending_co_)
	extern obj_ new__IntStack__Compiler(obj_ this_);
	UsingClass_(IntStack__Compiler)

		{
		t0_ = Call_(char_, Int_(0));
		t1_ = Call_(eof_char_co_, this_, t0_);
		t0_ = Call_(bytes, text);
		t1_ = Call_(p_co_, this_, t0_);
		t0_ = new__IntStack__Compiler(Proto_(IntStack__Compiler));
		t1_ = Call_(indent_stack_co_, this_, t0_);
		t0_ = Call_(indent_stack, this_);
		t1_ = Call_(push_co_, t0_, Int_(1));
		t0_ = Call_(at_line_start_co_, this_, true_);
		t0_ = Call_(unindents_pending_co_, this_, nil);
		
		
		}
	return nil;
}


obj_ cur_char__Lexer__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(current_item) UsingMethod_(eof_char) UsingMethod_(is_done) UsingMethod_(p)

		{
		t0_ = Call_(p, this_);
		t1_ = Call_(is_done, t0_);
		if (t1_)
			{
			t0_ = Call_(eof_char, this_);
			return t0_;
			}
		else
			{
			t1_ = Call_(p, this_);
			t2_ = Call_(current_item, t1_);
			return t2_;
			
			
			}
		}
	return nil;
}


obj_ eof_char__Lexer__Compiler(obj_ this_)
{
	return SharedField_(eof_char, Lexer__Compiler);
}


obj_ eof_char_co___Lexer__Compiler(obj_ this_, obj_ value)
{
	SetSharedField_(eof_char, Lexer__Compiler, value);
	return value;
}


obj_ first_subblock_line__Lexer__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineInt_(0, 10)
	DefineInt_(1, 13)
	UsingMethod_(_nt__eq_) UsingMethod_(at_line_start_co_) UsingMethod_(cur_char) UsingMethod_(eof_char) UsingMethod_(go_forward) UsingMethod_(p) UsingMethod_(start)
	extern obj_ new_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	UsingClass_(String__Standard)

		{
		obj_ c, line_start;
		/* We've already got the indentation, just get the rest of the line. */
		t0_ = Call_(p, this_);
		t1_ = Call_(start, t0_);
		line_start = t1_;
		t0_ = Call_(cur_char, this_);
		c = t0_;
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(eof_char, this_);
			t1_ = Call_(_nt__eq_, c, t0_);
			if (t1_) {
				t2_ = Call_(_nt__eq_, c, Int_(0));
				t1_ = t2_;
				}
			if (t1_) {
				t3_ = Call_(_nt__eq_, c, Int_(1));
				t1_ = t3_;
				}
			if (!(t1_))
				Break_(0)
			{
			t0_ = Call_(p, this_);
			t1_ = Call_(go_forward, t0_);
			t0_ = Call_(cur_char, this_);
			c = t0_;
			}
			}
		t0_ = Call_(p, this_);
		t1_ = Call_(go_forward, t0_);
		 	/* Consume the eol. */
		t0_ = Call_(at_line_start_co_, this_, true_);
		t0_ = Call_(p, this_);
		t1_ = Call_(start, t0_);
		t2_ = new_co_to_co___String__Standard(Proto_(String__Standard), line_start, t1_);
		return t2_;
		
		
		}
	return nil;
}


obj_ indent_stack__Lexer__Compiler(obj_ this_)
{
	return Field_(indent_stack);
}


obj_ indent_stack_co___Lexer__Compiler(obj_ this_, obj_ value)
{
	Field_(indent_stack) = value;
	return value;
}


obj_ new_co___Lexer__Compiler(obj_ this_, obj_ text)
{
	UsingClass_(Lexer__Compiler)
	obj_ obj = AllocObj_(Lexer__Compiler);
	create_co___Lexer__Compiler(obj, text);
	return obj;
}


obj_ next_token__Lexer__Compiler(obj_ this_)
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
	DefineInt_(0, 0)
	DefineInt_(1, 9)
	DefineInt_(2, 2)
	DefineInt_(3, 32)
	DefineInt_(4, 1)
	DefineInt_(5, 10)
	DefineInt_(6, 13)
	DefineInt_(7, 10)
	DefineInt_(8, 13)
	DefineInt_(9, 32)
	DefineInt_(10, 9)
	DefineInt_(11, 45)
	DefineInt_(12, 45)
	DefineInt_(13, 10)
	DefineInt_(14, 13)
	DefineInt_(15, 32)
	DefineInt_(16, 9)
	DefineInt_(17, 61)
	DefineInt_(18, 62)
	DefineInt_(19, 48)
	DefineInt_(20, 57)
	DefineInt_(21, 48)
	DefineInt_(22, 57)
	DefineInt_(23, 46)
	DefineInt_(24, 35)
	DefineInt_(25, 9)
	DefineInt_(26, 32)
	DefineInt_(27, 10)
	DefineInt_(28, 13)
	DefineInt_(29, 34)
	DefineInt_(30, 10)
	DefineInt_(31, 13)
	DefineInt_(32, 92)
	DefineInt_(33, 34)
	DefineInt_(34, 39)
	DefineInt_(35, 92)
	DefineInt_(36, 39)
	DefineInt_(37, 96)
	DefineInt_(38, 92)
	DefineInt_(39, 96)
	DefineInt_(40, 40)
	DefineInt_(41, 41)
	DefineInt_(42, 123)
	DefineInt_(43, 125)
	DefineInt_(44, 91)
	DefineInt_(45, 93)
	DefineInt_(46, 44)
	DefineInt_(47, 59)
	DefineInt_(48, 126)
	DefineInt_(49, 43)
	DefineInt_(50, 61)
	DefineInt_(51, 42)
	DefineInt_(52, 47)
	DefineInt_(53, 37)
	DefineInt_(54, 94)
	DefineInt_(55, 33)
	DefineInt_(56, 58)
	DefineInt_(57, 60)
	DefineInt_(58, 61)
	DefineInt_(59, 61)
	DefineInt_(60, 62)
	DefineInt_(61, 61)
	DefineInt_(62, 61)
	DefineInt_(63, 38)
	DefineInt_(64, 38)
	DefineInt_(65, 61)
	DefineInt_(66, 124)
	DefineInt_(67, 124)
	DefineInt_(68, 61)
	DefineInt_(69, 97)
	DefineInt_(70, 122)
	DefineInt_(71, 65)
	DefineInt_(72, 90)
	DefineInt_(73, 95)
	DefineInt_(74, 46)
	DefineInt_(75, 240)
	DefineInt_(76, 192)
	DefineInt_(77, 240)
	DefineInt_(78, 192)
	DefineInt_(79, 224)
	DefineInt_(80, 240)
	DefineInt_(81, 95)
	DefineInt_(82, 45)
	DefineInt_(83, 46)
	DefineInt_(84, 97)
	DefineInt_(85, 122)
	DefineInt_(86, 65)
	DefineInt_(87, 90)
	DefineInt_(88, 48)
	DefineInt_(89, 57)
	DefineInt_(90, 240)
	DefineInt_(91, 192)
	DefineInt_(92, 224)
	DefineInt_(93, 240)
	DefineInt_(94, 58)
	DefineInt_(95, 48)
	DefineInt_(96, 57)
	DefineInt_(97, 48)
	DefineInt_(98, 120)
	DefineInt_(99, 88)
	DefineInt_(100, 48)
	DefineInt_(101, 57)
	DefineInt_(102, 97)
	DefineInt_(103, 102)
	DefineInt_(104, 65)
	DefineInt_(105, 70)
	DefineInt_(106, 46)
	DefineString_(0, "Indentation error!")
	DefineString_(1, "Unterminated string constant.")
	DefineString_(2, "Unterminated symbol.")
	DefineString_(3, "Unterminated character constant.")
	DefineString_(4, "Unknown character: \"")
	DefineString_(5, "\"")
	UsingMethod_(_nt__eq_) UsingMethod_(_an_) UsingMethod_(_pl_) UsingMethod_(_lt_) UsingMethod_(_lt__eq_) UsingMethod_(_eq__eq_) UsingMethod_(_gt_) UsingMethod_(_gt__eq_) UsingMethod_(at_line_start) UsingMethod_(at_line_start_co_) UsingMethod_(cur_char) UsingMethod_(eof_char) UsingMethod_(go_forward) UsingMethod_(indent_stack) UsingMethod_(is_empty) UsingMethod_(p) UsingMethod_(pop) UsingMethod_(possibly_equals_token_co_or_co_) UsingMethod_(push_co_) UsingMethod_(start) UsingMethod_(string) UsingMethod_(top) UsingMethod_(unindent_to) UsingMethod_(unindent_to_co_) UsingMethod_(unindents_pending) UsingMethod_(unindents_pending_co_)
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	UsingSym_(unindent)
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	UsingSym_(eol)
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	UsingSym_(indent)
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	UsingSym_(unindent)
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	UsingSym_(eof)
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	UsingSym_(eol)
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	UsingSym_(__eq_)
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	UsingSym_(__gt_)
	UsingSym_(float_literal)
	UsingSym_(int_literal)
	extern obj_ new_co_from_co_to_co___Token__Compiler(obj_ this_, obj_ type, obj_ start, obj_ end);
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	UsingSym_(_)
	extern obj_ new_co_from_co_to_co___Token__Compiler(obj_ this_, obj_ type, obj_ start, obj_ end);
	UsingSym_(comment)
	extern obj_ new_co_from_co_to_co___Token__Compiler(obj_ this_, obj_ type, obj_ start, obj_ end);
	UsingSym_(text_literal_start)
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	extern obj_ new_co_from_co_to_co___Token__Compiler(obj_ this_, obj_ type, obj_ start, obj_ end);
	UsingSym_(string_literal)
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	extern obj_ new_co_from_co_to_co___Token__Compiler(obj_ this_, obj_ type, obj_ start, obj_ end);
	UsingSym_(symbol_literal)
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	extern obj_ new_co_from_co_to_co___Token__Compiler(obj_ this_, obj_ type, obj_ start, obj_ end);
	UsingSym_(character_literal)
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	UsingSym_(_40_)
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	UsingSym_(_41_)
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	UsingSym_(_123_)
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	UsingSym_(_125_)
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	UsingSym_(_in_)
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	UsingSym_(_dx_)
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	UsingSym_(_44_)
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	UsingSym_(_59_)
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	UsingSym_(_tw_)
	UsingSym_(_pl_)
	UsingSym_(_pl__eq_)
	UsingSym_(_eq_)
	UsingSym_(_eq__eq_)
	UsingSym_(_st_)
	UsingSym_(_st__eq_)
	UsingSym_(_dv_)
	UsingSym_(_dv__eq_)
	UsingSym_(_pc_)
	UsingSym_(_pc__eq_)
	UsingSym_(_xr_)
	UsingSym_(_xr__eq_)
	UsingSym_(_nt_)
	UsingSym_(_nt__eq_)
	UsingSym_(_co_)
	UsingSym_(_co__eq_)
	UsingSym_(_lt_)
	UsingSym_(_lt__lt__eq_)
	UsingSym_(_lt__lt_)
	UsingSym_(_lt__eq_)
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	UsingSym_(_gt_)
	UsingSym_(_gt__gt__eq_)
	UsingSym_(_gt__gt_)
	UsingSym_(_gt__eq_)
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	UsingSym_(_an_)
	UsingSym_(_an__an_)
	UsingSym_(_an__eq_)
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	UsingSym_(_or_)
	UsingSym_(_or__or_)
	UsingSym_(_or__eq_)
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	UsingSym_(name)
	UsingSym_(keyword)
	extern obj_ new_co_from_co_to_co___Token__Compiler(obj_ this_, obj_ type, obj_ start, obj_ end);
	UsingSym_(int_literal)
	UsingSym_(float_literal)
	extern obj_ new_co_from_co_to_co___Token__Compiler(obj_ this_, obj_ type, obj_ start, obj_ end);
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	UsingSym_(eof)
	UsingClass_(MessageException__Standard)
	UsingClass_(Token__Compiler)

		{
		obj_ c, next_char;
		c = nil;
		next_char = nil;
		
		t0_ = Call_(unindents_pending, this_);
		if (t0_)
			{
			t0_ = Call_(indent_stack, this_);
			t1_ = Call_(is_empty, t0_);
			if (t1_)
				{
				t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(0));
				Throw_(t0_);
				}
			t1_ = Call_(unindent_to, this_);
			t2_ = Call_(indent_stack, this_);
			t3_ = Call_(top, t2_);
			t4_ = Call_(_eq__eq_, t1_, t3_);
			if (t4_)
				{
				/* We're done unindenting. */
				t0_ = Call_(unindents_pending_co_, this_, nil);
				}
			else
				{
				/* Unindent one more level. */
				t0_ = Call_(indent_stack, this_);
				t1_ = Call_(pop, t0_);
				t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(unindent));
				return t0_;
				
				}
			}
		while (1) {
			ContinuePoint_(0)
			{
			obj_ token_start;
			/* If at line start, figure out the indentation. */
			t1_ = Call_(at_line_start, this_);
			if (t1_)
				{
				obj_ indentation;
				t0_ = Call_(at_line_start_co_, this_, nil);
				
				/* Get the indentation. */
				indentation = Int_(0);
				while (1) {
					ContinuePoint_(1)
					{
					t0_ = Call_(cur_char, this_);
					c = t0_;
					t0_ = Call_(_eq__eq_, c, Int_(1));
					if (t0_)
						{
						t0_ = Call_(_pl_, indentation, Int_(2));
						indentation = t0_;
						}
					else
						{
						t0_ = Call_(_eq__eq_, c, Int_(3));
						if (t0_)
							{
							t0_ = Call_(_pl_, indentation, Int_(4));
							indentation = t0_;
							}
						else
							{
							Break_(1)
							}
						}
					t0_ = Call_(p, this_);
					t1_ = Call_(go_forward, t0_);
					
					}
				}
				/* If it's just an empty line, emit an EOL. */
				t0_ = Call_(_eq__eq_, c, Int_(5));
				if ((t0_) == nil) {
					t1_ = Call_(_eq__eq_, c, Int_(6));
					t0_ = t1_;
					}
				if (t0_)
					{
					t0_ = Call_(p, this_);
					t1_ = Call_(go_forward, t0_);
					t0_ = Call_(at_line_start_co_, this_, true_);
					t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(eol));
					return t0_;
					
					}
				/* Figure out the indentation change. */
				t1_ = Call_(indent_stack, this_);
				t2_ = Call_(top, t1_);
				t3_ = Call_(_gt_, indentation, t2_);
				if (t3_)
					{
					t0_ = Call_(indent_stack, this_);
					t1_ = Call_(push_co_, t0_, indentation);
					t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(indent));
					return t0_;
					}
				else
					{
					t1_ = Call_(indent_stack, this_);
					t2_ = Call_(top, t1_);
					t3_ = Call_(_lt_, indentation, t2_);
					if (t3_)
						{
						t0_ = Call_(unindents_pending_co_, this_, true_);
						t0_ = Call_(unindent_to_co_, this_, indentation);
						t0_ = Call_(indent_stack, this_);
						t1_ = Call_(pop, t0_);
						t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(unindent));
						return t0_;
						
						}
					}
				}
			/* Get the next character. */
			t1_ = Call_(p, this_);
			t2_ = Call_(start, t1_);
			token_start = t2_;
			t0_ = Call_(cur_char, this_);
			c = t0_;
			t0_ = Call_(p, this_);
			t1_ = Call_(go_forward, t0_);
			t0_ = Call_(eof_char, this_);
			t1_ = Call_(_eq__eq_, c, t0_);
			if (t1_)
				{
				t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(eof));
				return t0_;
				
				}
			/* Line break. */
			else
				{
				t1_ = Call_(_eq__eq_, c, Int_(7));
				if ((t1_) == nil) {
					t2_ = Call_(_eq__eq_, c, Int_(8));
					t1_ = t2_;
					}
				if (t1_)
					{
					t0_ = Call_(at_line_start_co_, this_, true_);
					t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(eol));
					return t0_;
					
					}
				/* Whitespace. */
				}
			t1_ = Call_(_eq__eq_, c, Int_(9));
			if ((t1_) == nil) {
				t2_ = Call_(_eq__eq_, c, Int_(10));
				t1_ = t2_;
				}
			if (t1_)
				{
				/* Skip whitespace. */
				t0_ = Call_(p, this_);
				t1_ = Call_(start, t0_);
				token_start = t1_;
				Continue_(0)
				
				}
			/* -, --, -= */
			else
				{
				t0_ = Call_(_eq__eq_, c, Int_(11));
				if (t0_)
					{
					t0_ = Call_(cur_char, this_);
					next_char = t0_;
					t0_ = Call_(_eq__eq_, next_char, Int_(12));
					if (t0_)
						{
						/* Line continuation. */
						t0_ = Call_(p, this_);
						t1_ = Call_(go_forward, t0_);
						/* Skip to next line. */
						while (1) {
							ContinuePoint_(2)
							{
							t0_ = Call_(cur_char, this_);
							c = t0_;
							t0_ = Call_(p, this_);
							t1_ = Call_(go_forward, t0_);
							t0_ = Call_(_eq__eq_, c, Int_(13));
							if ((t0_) == nil) {
								t1_ = Call_(_eq__eq_, c, Int_(14));
								t0_ = t1_;
								}
							if (t0_)
								{
								Break_(2)
								}
							}
						}
						/* Skip whitespace. */
						while (1) {
							ContinuePoint_(3)
							{
							t0_ = Call_(cur_char, this_);
							c = t0_;
							t0_ = Call_(_eq__eq_, c, Int_(15));
							if ((t0_) == nil) {
								t1_ = Call_(_eq__eq_, c, Int_(16));
								t0_ = t1_;
								}
							if ((t0_) == nil) {
								t2_ = Call_(eof_char, this_);
								t3_ = Call_(_eq__eq_, c, t2_);
								t0_ = t3_;
								}
							if (t0_)
								{
								Break_(3)
								}
							t0_ = Call_(p, this_);
							t1_ = Call_(go_forward, t0_);
							
							}
						}
						}
					else
						{
						t0_ = Call_(_eq__eq_, next_char, Int_(17));
						if (t0_)
							{
							t0_ = Call_(p, this_);
							t1_ = Call_(go_forward, t0_);
							t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(__eq_));
							return t0_;
							
							}
						else
							{
							t1_ = Call_(_eq__eq_, next_char, Int_(18));
							if (t1_)
								{
								t0_ = Call_(p, this_);
								t1_ = Call_(go_forward, t0_);
								t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(__gt_));
								return t0_;
								
								}
							else
								{
								t1_ = Call_(_gt__eq_, next_char, Int_(19));
								if (t1_) {
									t2_ = Call_(_lt__eq_, next_char, Int_(20));
									t1_ = t2_;
									}
								if (t1_)
									{
									obj_ is_float;
									/* Number. */
									t0_ = Call_(p, this_);
									t1_ = Call_(go_forward, t0_);
									is_float = nil;
									while (1) {
										ContinuePoint_(4)
										{
										t0_ = Call_(cur_char, this_);
										c = t0_;
										t0_ = Call_(_gt__eq_, c, Int_(21));
										if (t0_) {
											t1_ = Call_(_lt__eq_, c, Int_(22));
											t0_ = t1_;
											}
										if (t0_)
											{
											t0_ = Call_(p, this_);
											t1_ = Call_(go_forward, t0_);
											}
										else
											{
											t0_ = Call_(_eq__eq_, c, Int_(23));
											if (t0_)
												{
												is_float = true_;
												t0_ = Call_(p, this_);
												t1_ = Call_(go_forward, t0_);
												}
											else
												{
												obj_ type;
												type = nil;
												if (is_float)
													{
													type = Sym_(float_literal);
													}
												else
													{
													type = Sym_(int_literal);
													}
												t0_ = Call_(p, this_);
												t1_ = Call_(start, t0_);
												t2_ = new_co_from_co_to_co___Token__Compiler(Proto_(Token__Compiler), type, token_start, t1_);
												return t2_;
												
												}
											}
										}
									}
									}
								else
									{
									t3_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(_));
									return t3_;
									
									}
								}
							}
						}
					}
				/* Comment. */
				else
					{
					t4_ = Call_(_eq__eq_, c, Int_(24));
					if (t4_)
						{
						/* Skip initial whitespace. */
						while (1) {
							ContinuePoint_(5)
							{
							t0_ = Call_(cur_char, this_);
							c = t0_;
							t0_ = Call_(_nt__eq_, c, Int_(25));
							if (t0_) {
								t1_ = Call_(_nt__eq_, c, Int_(26));
								t0_ = t1_;
								}
							if (t0_)
								{
								Break_(5)
								}
							t0_ = Call_(p, this_);
							t1_ = Call_(go_forward, t0_);
							
							}
						}
						/* Get the comment. */
						t0_ = Call_(p, this_);
						t1_ = Call_(start, t0_);
						token_start = t1_;
						while (1) {
							ContinuePoint_(6)
							{
							t0_ = Call_(cur_char, this_);
							c = t0_;
							t0_ = Call_(_eq__eq_, c, Int_(27));
							if ((t0_) == nil) {
								t1_ = Call_(_eq__eq_, c, Int_(28));
								t0_ = t1_;
								}
							if ((t0_) == nil) {
								t2_ = Call_(eof_char, this_);
								t3_ = Call_(_eq__eq_, c, t2_);
								t0_ = t3_;
								}
							if (t0_)
								{
								Break_(6)
								}
							t0_ = Call_(p, this_);
							t1_ = Call_(go_forward, t0_);
							}
						}
						t0_ = Call_(p, this_);
						t1_ = Call_(start, t0_);
						t2_ = new_co_from_co_to_co___Token__Compiler(Proto_(Token__Compiler), Sym_(comment), token_start, t1_);
						return t2_;
						
						}
					/* String literal. */
					else
						{
						t3_ = Call_(_eq__eq_, c, Int_(29));
						if (t3_)
							{
							obj_ token_end;
							t0_ = Call_(p, this_);
							t1_ = Call_(start, t0_);
							token_start = t1_;
							t0_ = Call_(p, this_);
							t1_ = Call_(start, t0_);
							token_end = t1_;
							while (1) {
								ContinuePoint_(7)
								{
								t0_ = Call_(cur_char, this_);
								c = t0_;
								t0_ = Call_(p, this_);
								t1_ = Call_(start, t0_);
								token_end = t1_;
								t0_ = Call_(_eq__eq_, c, Int_(30));
								if ((t0_) == nil) {
									t1_ = Call_(_eq__eq_, c, Int_(31));
									t0_ = t1_;
									}
								if ((t0_) == nil) {
									t2_ = Call_(eof_char, this_);
									t3_ = Call_(_eq__eq_, c, t2_);
									t0_ = t3_;
									}
								if (t0_)
									{
									t0_ = new_co_from_co_to_co___Token__Compiler(Proto_(Token__Compiler), Sym_(text_literal_start), token_start, token_end);
									return t0_;
									}
								t1_ = Call_(p, this_);
								t2_ = Call_(go_forward, t1_);
								t0_ = Call_(eof_char, this_);
								t1_ = Call_(_eq__eq_, c, t0_);
								if (t1_)
									{
									t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(1));
									Throw_(t0_);
									}
								else
									{
									t1_ = Call_(_eq__eq_, c, Int_(32));
									if (t1_)
										{
										t0_ = Call_(p, this_);
										t1_ = Call_(go_forward, t0_);
										}
									else
										{
										t0_ = Call_(_eq__eq_, c, Int_(33));
										if (t0_)
											{
											Break_(7)
											}
										}
									}
								}
							}
							t0_ = new_co_from_co_to_co___Token__Compiler(Proto_(Token__Compiler), Sym_(string_literal), token_start, token_end);
							return t0_;
							
							}
						/* Symbol literal. */
						else
							{
							t1_ = Call_(_eq__eq_, c, Int_(34));
							if (t1_)
								{
								obj_ token_end;
								t0_ = Call_(p, this_);
								t1_ = Call_(start, t0_);
								token_start = t1_;
								t0_ = Call_(p, this_);
								t1_ = Call_(start, t0_);
								token_end = t1_;
								while (1) {
									ContinuePoint_(8)
									{
									t0_ = Call_(cur_char, this_);
									c = t0_;
									t0_ = Call_(p, this_);
									t1_ = Call_(start, t0_);
									token_end = t1_;
									t0_ = Call_(p, this_);
									t1_ = Call_(go_forward, t0_);
									t0_ = Call_(eof_char, this_);
									t1_ = Call_(_eq__eq_, c, t0_);
									if (t1_)
										{
										t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(2));
										Throw_(t0_);
										}
									else
										{
										t1_ = Call_(_eq__eq_, c, Int_(35));
										if (t1_)
											{
											t0_ = Call_(p, this_);
											t1_ = Call_(go_forward, t0_);
											}
										else
											{
											t0_ = Call_(_eq__eq_, c, Int_(36));
											if (t0_)
												{
												Break_(8)
												}
											}
										}
									}
								}
								t0_ = new_co_from_co_to_co___Token__Compiler(Proto_(Token__Compiler), Sym_(symbol_literal), token_start, token_end);
								return t0_;
								
								}
							/* Character literal. */
							else
								{
								t1_ = Call_(_eq__eq_, c, Int_(37));
								if (t1_)
									{
									obj_ token_end;
									t0_ = Call_(p, this_);
									t1_ = Call_(start, t0_);
									token_start = t1_;
									t0_ = Call_(p, this_);
									t1_ = Call_(start, t0_);
									token_end = t1_;
									while (1) {
										ContinuePoint_(9)
										{
										t0_ = Call_(cur_char, this_);
										c = t0_;
										t0_ = Call_(p, this_);
										t1_ = Call_(start, t0_);
										token_end = t1_;
										t0_ = Call_(p, this_);
										t1_ = Call_(go_forward, t0_);
										t0_ = Call_(eof_char, this_);
										t1_ = Call_(_eq__eq_, c, t0_);
										if (t1_)
											{
											t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(3));
											Throw_(t0_);
											}
										else
											{
											t1_ = Call_(_eq__eq_, c, Int_(38));
											if (t1_)
												{
												t0_ = Call_(p, this_);
												t1_ = Call_(go_forward, t0_);
												}
											else
												{
												t0_ = Call_(_eq__eq_, c, Int_(39));
												if (t0_)
													{
													Break_(9)
													}
												}
											}
										}
									}
									t0_ = new_co_from_co_to_co___Token__Compiler(Proto_(Token__Compiler), Sym_(character_literal), token_start, token_end);
									return t0_;
									
									}
								/* Single-character tokens. */
								else
									{
									t1_ = Call_(_eq__eq_, c, Int_(40));
									if (t1_)
										{
										t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(_40_));
										return t0_;
										}
									else
										{
										t1_ = Call_(_eq__eq_, c, Int_(41));
										if (t1_)
											{
											t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(_41_));
											return t0_;
											}
										else
											{
											t1_ = Call_(_eq__eq_, c, Int_(42));
											if (t1_)
												{
												t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(_123_));
												return t0_;
												}
											else
												{
												t1_ = Call_(_eq__eq_, c, Int_(43));
												if (t1_)
													{
													t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(_125_));
													return t0_;
													}
												else
													{
													t1_ = Call_(_eq__eq_, c, Int_(44));
													if (t1_)
														{
														t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(_in_));
														return t0_;
														}
													else
														{
														t1_ = Call_(_eq__eq_, c, Int_(45));
														if (t1_)
															{
															t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(_dx_));
															return t0_;
															}
														else
															{
															t1_ = Call_(_eq__eq_, c, Int_(46));
															if (t1_)
																{
																t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(_44_));
																return t0_;
																}
															else
																{
																t1_ = Call_(_eq__eq_, c, Int_(47));
																if (t1_)
																	{
																	t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(_59_));
																	return t0_;
																	}
																else
																	{
																	t1_ = Call_(_eq__eq_, c, Int_(48));
																	if (t1_)
																		{
																		t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(_tw_));
																		return t0_;
																		
																		}
																	/* Could be followed by =. */
																	else
																		{
																		t1_ = Call_(_eq__eq_, c, Int_(49));
																		if (t1_)
																			{
																			t0_ = Call_(possibly_equals_token_co_or_co_, this_, Sym_(_pl_), Sym_(_pl__eq_));
																			return t0_;
																			}
																		else
																			{
																			t1_ = Call_(_eq__eq_, c, Int_(50));
																			if (t1_)
																				{
																				t0_ = Call_(possibly_equals_token_co_or_co_, this_, Sym_(_eq_), Sym_(_eq__eq_));
																				return t0_;
																				}
																			else
																				{
																				t1_ = Call_(_eq__eq_, c, Int_(51));
																				if (t1_)
																				{
																				t0_ = Call_(possibly_equals_token_co_or_co_, this_, Sym_(_st_), Sym_(_st__eq_));
																				return t0_;
																				}
																				else
																				{
																				t1_ = Call_(_eq__eq_, c, Int_(52));
																				if (t1_)
																				{
																				t0_ = Call_(possibly_equals_token_co_or_co_, this_, Sym_(_dv_), Sym_(_dv__eq_));
																				return t0_;
																				}
																				else
																				{
																				t1_ = Call_(_eq__eq_, c, Int_(53));
																				if (t1_)
																				{
																				t0_ = Call_(possibly_equals_token_co_or_co_, this_, Sym_(_pc_), Sym_(_pc__eq_));
																				return t0_;
																				}
																				else
																				{
																				t1_ = Call_(_eq__eq_, c, Int_(54));
																				if (t1_)
																				{
																				t0_ = Call_(possibly_equals_token_co_or_co_, this_, Sym_(_xr_), Sym_(_xr__eq_));
																				return t0_;
																				}
																				else
																				{
																				t1_ = Call_(_eq__eq_, c, Int_(55));
																				if (t1_)
																				{
																				t0_ = Call_(possibly_equals_token_co_or_co_, this_, Sym_(_nt_), Sym_(_nt__eq_));
																				return t0_;
																				}
																				else
																				{
																				t1_ = Call_(_eq__eq_, c, Int_(56));
																				if (t1_)
																				{
																				t0_ = Call_(possibly_equals_token_co_or_co_, this_, Sym_(_co_), Sym_(_co__eq_));
																				return t0_;
																				
																				}
																				/* Could be doubled, then followed by =. */
																				else
																				{
																				t1_ = Call_(_eq__eq_, c, Int_(57));
																				if (t1_)
																				{
																				obj_ type;
																				type = Sym_(_lt_);
																				t0_ = Call_(cur_char, this_);
																				next_char = t0_;
																				t0_ = Call_(_eq__eq_, next_char, c);
																				if (t0_)
																				{
																				/* Doubled. */
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				t0_ = Call_(cur_char, this_);
																				t1_ = Call_(_eq__eq_, t0_, Int_(58));
																				if (t1_)
																				{
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				type = Sym_(_lt__lt__eq_);
																				}
																				else
																				{
																				type = Sym_(_lt__lt_);
																				}
																				}
																				else
																				{
																				t0_ = Call_(_eq__eq_, next_char, Int_(59));
																				if (t0_)
																				{
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				type = Sym_(_lt__eq_);
																				}
																				}
																				t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), type);
																				return t0_;
																				}
																				else
																				{
																				t1_ = Call_(_eq__eq_, c, Int_(60));
																				if (t1_)
																				{
																				obj_ type;
																				type = Sym_(_gt_);
																				t0_ = Call_(cur_char, this_);
																				next_char = t0_;
																				t0_ = Call_(_eq__eq_, next_char, c);
																				if (t0_)
																				{
																				/* Doubled. */
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				t0_ = Call_(cur_char, this_);
																				t1_ = Call_(_eq__eq_, t0_, Int_(61));
																				if (t1_)
																				{
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				type = Sym_(_gt__gt__eq_);
																				}
																				else
																				{
																				type = Sym_(_gt__gt_);
																				}
																				}
																				else
																				{
																				t0_ = Call_(_eq__eq_, next_char, Int_(62));
																				if (t0_)
																				{
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				type = Sym_(_gt__eq_);
																				}
																				}
																				t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), type);
																				return t0_;
																				
																				}
																				/* Could be doubled, or followed by '='. */
																				else
																				{
																				t1_ = Call_(_eq__eq_, c, Int_(63));
																				if (t1_)
																				{
																				obj_ type;
																				type = Sym_(_an_);
																				t0_ = Call_(cur_char, this_);
																				next_char = t0_;
																				t0_ = Call_(_eq__eq_, next_char, Int_(64));
																				if (t0_)
																				{
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				type = Sym_(_an__an_);
																				}
																				else
																				{
																				t0_ = Call_(_eq__eq_, next_char, Int_(65));
																				if (t0_)
																				{
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				type = Sym_(_an__eq_);
																				}
																				}
																				t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), type);
																				return t0_;
																				}
																				else
																				{
																				t1_ = Call_(_eq__eq_, c, Int_(66));
																				if (t1_)
																				{
																				obj_ type;
																				type = Sym_(_or_);
																				t0_ = Call_(cur_char, this_);
																				next_char = t0_;
																				t0_ = Call_(_eq__eq_, next_char, Int_(67));
																				if (t0_)
																				{
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				type = Sym_(_or__or_);
																				}
																				else
																				{
																				t0_ = Call_(_eq__eq_, next_char, Int_(68));
																				if (t0_)
																				{
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				type = Sym_(_or__eq_);
																				}
																				}
																				t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), type);
																				return t0_;
																				
																				}
																				/* Name. */
																				else
																				{
																				t1_ = Call_(_gt__eq_, c, Int_(69));
																				if (t1_) {
																				t2_ = Call_(_lt__eq_, c, Int_(70));
																				t1_ = t2_;
																				}
																				if ((t1_) == nil) {
																				t3_ = Call_(_gt__eq_, c, Int_(71));
																				if (t3_) {
																				t4_ = Call_(_lt__eq_, c, Int_(72));
																				t3_ = t4_;
																				}
																				t1_ = t3_;
																				}
																				if ((t1_) == nil) {
																				t5_ = Call_(_eq__eq_, c, Int_(73));
																				t1_ = t5_;
																				}
																				if ((t1_) == nil) {
																				t6_ = Call_(_eq__eq_, c, Int_(74));
																				t1_ = t6_;
																				}
																				if ((t1_) == nil) {
																				t7_ = Call_(_an_, c, Int_(75));
																				t8_ = Call_(_gt__eq_, t7_, Int_(76));
																				t1_ = t8_;
																				}
																				if (t1_)
																				{
																				obj_ hi_nybble, type;
																				/* The first character might be a UTF-8 character, so handle that. */
																				t0_ = Call_(_an_, c, Int_(77));
																				hi_nybble = t0_;
																				t0_ = Call_(_gt__eq_, hi_nybble, Int_(78));
																				if (t0_)
																				{
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				t0_ = Call_(_gt__eq_, hi_nybble, Int_(79));
																				if (t0_)
																				{
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				t0_ = Call_(_eq__eq_, hi_nybble, Int_(80));
																				if (t0_)
																				{
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				}
																				}
																				}
																				/* Read the rest of the characters. */
																				while (1) {
																					ContinuePoint_(10)
																				{
																				obj_ is_id_char;
																				t0_ = Call_(cur_char, this_);
																				c = t0_;
																				t0_ = Call_(_eq__eq_, c, Int_(81));
																				if ((t0_) == nil) {
																				t1_ = Call_(_eq__eq_, c, Int_(82));
																				t0_ = t1_;
																				}
																				if ((t0_) == nil) {
																				t2_ = Call_(_eq__eq_, c, Int_(83));
																				t0_ = t2_;
																				}
																				if ((t0_) == nil) {
																				t3_ = Call_(_gt__eq_, c, Int_(84));
																				if (t3_) {
																				t4_ = Call_(_lt__eq_, c, Int_(85));
																				t3_ = t4_;
																				}
																				t0_ = t3_;
																				}
																				if ((t0_) == nil) {
																				t5_ = Call_(_gt__eq_, c, Int_(86));
																				if (t5_) {
																				t6_ = Call_(_lt__eq_, c, Int_(87));
																				t5_ = t6_;
																				}
																				t0_ = t5_;
																				}
																				if ((t0_) == nil) {
																				t7_ = Call_(_gt__eq_, c, Int_(88));
																				if (t7_) {
																				t8_ = Call_(_lt__eq_, c, Int_(89));
																				t7_ = t8_;
																				}
																				t0_ = t7_;
																				}
																				is_id_char = t0_;
																				t0_ = Not_(is_id_char);
																				if (t0_)
																				{
																				/* It still might be the first byte of a UTF-8 character. */
																				t0_ = Call_(_an_, c, Int_(90));
																				hi_nybble = t0_;
																				t0_ = Call_(_gt__eq_, hi_nybble, Int_(91));
																				if (t0_)
																				{
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				t0_ = Call_(_gt__eq_, hi_nybble, Int_(92));
																				if (t0_)
																				{
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				t0_ = Call_(_eq__eq_, hi_nybble, Int_(93));
																				if (t0_)
																				{
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				}
																				}
																				}
																				else
																				{
																				Break_(10)
																				}
																				}
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				}
																				}
																				type = Sym_(name);
																				/* Could be a keyword. */
																				t0_ = Call_(cur_char, this_);
																				t1_ = Call_(_eq__eq_, t0_, Int_(94));
																				if (t1_)
																				{
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				type = Sym_(keyword);
																				}
																				t0_ = Call_(p, this_);
																				t1_ = Call_(start, t0_);
																				t2_ = new_co_from_co_to_co___Token__Compiler(Proto_(Token__Compiler), type, token_start, t1_);
																				return t2_;
																				
																				}
																				/* Number. */
																				else
																				{
																				t3_ = Call_(_gt__eq_, c, Int_(95));
																				if (t3_) {
																				t4_ = Call_(_lt__eq_, c, Int_(96));
																				t3_ = t4_;
																				}
																				if (t3_)
																				{
																				obj_ is_hex, type;
																				/* Is it hex? */
																				is_hex = nil;
																				t0_ = Call_(_eq__eq_, c, Int_(97));
																				if (t0_)
																				{
																				t0_ = Call_(cur_char, this_);
																				c = t0_;
																				t0_ = Call_(_eq__eq_, c, Int_(98));
																				if ((t0_) == nil) {
																				t1_ = Call_(_eq__eq_, c, Int_(99));
																				t0_ = t1_;
																				}
																				if (t0_)
																				{
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				is_hex = true_;
																				}
																				}
																				/* Read the rest of the number. */
																				type = Sym_(int_literal);
																				while (1) {
																					ContinuePoint_(11)
																				{
																				t0_ = Call_(cur_char, this_);
																				c = t0_;
																				t0_ = Call_(_gt__eq_, c, Int_(100));
																				if (t0_) {
																				t1_ = Call_(_lt__eq_, c, Int_(101));
																				t0_ = t1_;
																				}
																				if (t0_)
																				{
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				}
																				else
																				{
																				t0_ = is_hex;
																				if (t0_) {
																				t1_ = Call_(_gt__eq_, c, Int_(102));
																				if (t1_) {
																				t2_ = Call_(_lt__eq_, c, Int_(103));
																				t1_ = t2_;
																				}
																				if ((t1_) == nil) {
																				t3_ = Call_(_gt__eq_, c, Int_(104));
																				if (t3_) {
																				t4_ = Call_(_lt__eq_, c, Int_(105));
																				t3_ = t4_;
																				}
																				t1_ = t3_;
																				}
																				t0_ = t1_;
																				}
																				if (t0_)
																				{
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				}
																				else
																				{
																				t0_ = Call_(_eq__eq_, c, Int_(106));
																				if (t0_)
																				{
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				type = Sym_(float_literal);
																				}
																				else
																				{
																				Break_(11)
																				}
																				}
																				}
																				}
																				}
																				t0_ = Call_(p, this_);
																				t1_ = Call_(start, t0_);
																				t2_ = new_co_from_co_to_co___Token__Compiler(Proto_(Token__Compiler), type, token_start, t1_);
																				return t2_;
																				
																				}
																				/* Unknown character. */
																				else
																				{
																				t3_ = Call_(string, c);
																				t4_ = Call_(_pl_, Str_(4), t3_);
																				t5_ = Call_(_pl_, t4_, Str_(5));
																				t6_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), t5_);
																				Throw_(t6_);
																				
																				}
																				}
																				}
																				}
																				}
																				}
																				}
																				}
																				}
																				}
																				}
																				}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		/* Never actually get here. */
		t7_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(eof));
		return t7_;
		
		
		}
	return nil;
}


obj_ p__Lexer__Compiler(obj_ this_)
{
	return Field_(p);
}


obj_ p_co___Lexer__Compiler(obj_ this_, obj_ value)
{
	Field_(p) = value;
	return value;
}


obj_ parse_character_escape_co___Lexer__Compiler(obj_ this_, obj_ p)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 110)
	DefineInt_(1, 10)
	DefineInt_(2, 114)
	DefineInt_(3, 13)
	DefineInt_(4, 116)
	DefineInt_(5, 9)
	DefineInt_(6, 98)
	DefineInt_(7, 8)
	DefineInt_(8, 118)
	DefineInt_(9, 11)
	DefineInt_(10, 102)
	DefineInt_(11, 12)
	DefineInt_(12, 97)
	DefineInt_(13, 7)
	DefineInt_(14, 101)
	DefineInt_(15, 27)
	DefineInt_(16, 120)
	DefineInt_(17, 0)
	DefineInt_(18, 0)
	DefineInt_(19, 2)
	DefineInt_(20, 48)
	DefineInt_(21, 57)
	DefineInt_(22, 48)
	DefineInt_(23, 65)
	DefineInt_(24, 70)
	DefineInt_(25, 10)
	DefineInt_(26, 65)
	DefineInt_(27, 97)
	DefineInt_(28, 102)
	DefineInt_(29, 10)
	DefineInt_(30, 97)
	DefineInt_(31, 16)
	DefineInt_(32, 1)
	UsingMethod_(_st_) UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(_lt_) UsingMethod_(_lt__eq_) UsingMethod_(_eq__eq_) UsingMethod_(_gt__eq_) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done)

		{
		obj_ c;
		/* The `\` will already be taken. */
		
		t0_ = Call_(current_item, p);
		c = t0_;
		t0_ = Call_(go_forward, p);
		t0_ = Call_(_eq__eq_, c, Int_(0));
		if (t0_)
			{
			return Int_(1);
			}
		else
			{
			t0_ = Call_(_eq__eq_, c, Int_(2));
			if (t0_)
				{
				return Int_(3);
				}
			else
				{
				t0_ = Call_(_eq__eq_, c, Int_(4));
				if (t0_)
					{
					return Int_(5);
					}
				else
					{
					t0_ = Call_(_eq__eq_, c, Int_(6));
					if (t0_)
						{
						return Int_(7);
						}
					else
						{
						t0_ = Call_(_eq__eq_, c, Int_(8));
						if (t0_)
							{
							return Int_(9);
							}
						else
							{
							t0_ = Call_(_eq__eq_, c, Int_(10));
							if (t0_)
								{
								return Int_(11);
								}
							else
								{
								t0_ = Call_(_eq__eq_, c, Int_(12));
								if (t0_)
									{
									return Int_(13);
									}
								else
									{
									t0_ = Call_(_eq__eq_, c, Int_(14));
									if (t0_)
										{
										return Int_(15);
										}
									else
										{
										t0_ = Call_(_eq__eq_, c, Int_(16));
										if (t0_)
											{
											obj_ num_digits, value;
											value = Int_(17);
											num_digits = Int_(18);
											while (1) {
												ContinuePoint_(0)
												t0_ = Call_(is_done, p);
												t1_ = Not_(t0_);
												if (t1_) {
													t2_ = Call_(_lt_, num_digits, Int_(19));
													t1_ = t2_;
													}
												if (!(t1_))
													Break_(0)
												{
												obj_ digit;
												t0_ = Call_(current_item, p);
												digit = t0_;
												t0_ = Call_(_gt__eq_, digit, Int_(20));
												if (t0_) {
													t1_ = Call_(_lt__eq_, digit, Int_(21));
													t0_ = t1_;
													}
												if (t0_)
													{
													t0_ = Call_(_, digit, Int_(22));
													digit = t0_;
													}
												else
													{
													t0_ = Call_(_gt__eq_, digit, Int_(23));
													if (t0_) {
														t1_ = Call_(_lt__eq_, digit, Int_(24));
														t0_ = t1_;
														}
													if (t0_)
														{
														t0_ = Call_(_, digit, Int_(26));
														t1_ = Call_(_pl_, Int_(25), t0_);
														digit = t1_;
														}
													else
														{
														t0_ = Call_(_gt__eq_, digit, Int_(27));
														if (t0_) {
															t1_ = Call_(_lt__eq_, digit, Int_(28));
															t0_ = t1_;
															}
														if (t0_)
															{
															t0_ = Call_(_, digit, Int_(30));
															t1_ = Call_(_pl_, Int_(29), t0_);
															digit = t1_;
															}
														else
															{
															Break_(0)
															}
														}
													}
												t0_ = Call_(_st_, value, Int_(31));
												value = t0_;
												t0_ = Call_(_pl_, value, digit);
												value = t0_;
												t0_ = Call_(go_forward, p);
												t0_ = Call_(_pl_, num_digits, Int_(32));
												num_digits = t0_;
												}
												}
											return value;
											
											}
										/* Default: just use whatever was after the `\`. */
										}
									}
								}
							}
						}
					}
				}
			}
		return c;
		
		
		}
	return nil;
}


obj_ possibly_equals_token_co_or_co___Lexer__Compiler(obj_ this_, obj_ without_equals, obj_ with_equals)
{
	obj_ t0_;
	obj_ t1_;
	DefineInt_(0, 61)
	UsingMethod_(_eq__eq_) UsingMethod_(cur_char) UsingMethod_(go_forward) UsingMethod_(p)
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	UsingClass_(Token__Compiler)

		{
		t0_ = Call_(cur_char, this_);
		t1_ = Call_(_eq__eq_, t0_, Int_(0));
		if (t1_)
			{
			t0_ = Call_(p, this_);
			t1_ = Call_(go_forward, t0_);
			t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), with_equals);
			return t0_;
			}
		else
			{
			t1_ = new_co___Token__Compiler(Proto_(Token__Compiler), without_equals);
			return t1_;
			
			
			}
		}
	return nil;
}


obj_ report_co___Lexer__Compiler(obj_ this_, obj_ message)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(report_co_)
	extern obj_ status_reporter__Main(obj_ this_);
	UsingClass_(Main)

		{
		t0_ = status_reporter__Main(Proto_(Main));
		t1_ = Call_(report_co_, t0_, message);
		
		
		
		
		}
	return nil;
}


obj_ subblock_line__Lexer__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 0)
	DefineInt_(1, 9)
	DefineInt_(2, 2)
	DefineInt_(3, 32)
	DefineInt_(4, 1)
	DefineInt_(5, 10)
	DefineInt_(6, 13)
	DefineString_(0, "\n")
	UsingMethod_(_pl_) UsingMethod_(_lt_) UsingMethod_(_eq__eq_) UsingMethod_(at_line_start_co_) UsingMethod_(cur_char) UsingMethod_(first_subblock_line) UsingMethod_(go_forward) UsingMethod_(indent_stack) UsingMethod_(p) UsingMethod_(pop) UsingMethod_(top) UsingMethod_(unindent_to_co_) UsingMethod_(unindents_pending_co_)

		{
		obj_ c, indentation;
		/* Get the indentation. */
		indentation = Int_(0);
		c = nil;
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(indent_stack, this_);
			t1_ = Call_(top, t0_);
			t2_ = Call_(_lt_, indentation, t1_);
			if (!(t2_))
				Break_(0)
			{
			t0_ = Call_(cur_char, this_);
			c = t0_;
			t0_ = Call_(_eq__eq_, c, Int_(1));
			if (t0_)
				{
				t0_ = Call_(_pl_, indentation, Int_(2));
				indentation = t0_;
				}
			else
				{
				t0_ = Call_(_eq__eq_, c, Int_(3));
				if (t0_)
					{
					t0_ = Call_(_pl_, indentation, Int_(4));
					indentation = t0_;
					}
				else
					{
					Break_(0)
					}
				}
			t0_ = Call_(p, this_);
			t1_ = Call_(go_forward, t0_);
			
			}
			}
		/* If it's just an empty line, emit an EOL. */
		t0_ = Call_(_eq__eq_, c, Int_(5));
		if ((t0_) == nil) {
			t1_ = Call_(_eq__eq_, c, Int_(6));
			t0_ = t1_;
			}
		if (t0_)
			{
			t0_ = Call_(p, this_);
			t1_ = Call_(go_forward, t0_);
			t0_ = Call_(at_line_start_co_, this_, true_);
			return Str_(0);
			
			}
		/* Check for unindent. */
		t0_ = Call_(indent_stack, this_);
		t1_ = Call_(top, t0_);
		t2_ = Call_(_lt_, indentation, t1_);
		if (t2_)
			{
			/* First, get rid of the block's indentation. */
			t0_ = Call_(indent_stack, this_);
			t1_ = Call_(pop, t0_);
			/* Then, deal with any further indentation. */
			t0_ = Call_(indent_stack, this_);
			t1_ = Call_(top, t0_);
			t2_ = Call_(_lt_, indentation, t1_);
			if (t2_)
				{
				t0_ = Call_(unindents_pending_co_, this_, true_);
				t0_ = Call_(unindent_to_co_, this_, indentation);
				}
			t0_ = Call_(at_line_start_co_, this_, nil);
			return nil;
			
			}
		/* Get the rest of the line. */
		/* This is just like first-subblock-line, so just call that. */
		t0_ = Call_(first_subblock_line, this_);
		return t0_;
		
		
		}
	return nil;
}


obj_ unescape_string_co___Lexer__Compiler(obj_ this_, obj_ string)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineInt_(0, 92)
	UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(bytes) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(p) UsingMethod_(p_co_) UsingMethod_(parse_character_escape_co_) UsingMethod_(start) UsingMethod_(string)
	extern obj_ new_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	extern obj_ new_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	UsingClass_(String__Standard)

		{
		obj_ result, section, section_start;
		result = nil;
		t0_ = Call_(bytes, string);
		t1_ = Call_(p_co_, this_, t0_);
		t0_ = Call_(start, string);
		section_start = t0_;
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(p, this_);
			t1_ = Call_(is_done, t0_);
			t2_ = Not_(t1_);
			if (!(t2_))
				Break_(0)
			{
			t0_ = Call_(p, this_);
			t1_ = Call_(current_item, t0_);
			t2_ = Call_(_eq__eq_, t1_, Int_(0));
			if (t2_)
				{
				obj_ section;
				/* Finish the section preceding the `\`. */
				t0_ = Call_(p, this_);
				t1_ = Call_(start, t0_);
				t2_ = new_co_to_co___String__Standard(Proto_(String__Standard), section_start, t1_);
				section = t2_;
				if (result)
					{
					t0_ = Call_(_pl_, result, section);
					result = t0_;
					}
				else
					{
					result = section;
					}
				t0_ = Call_(p, this_);
				t1_ = Call_(go_forward, t0_);
				 	/* Skip `\`. */
				/* Add the escaped character. */
				t0_ = Call_(p, this_);
				t1_ = Call_(parse_character_escape_co_, this_, t0_);
				t2_ = Call_(string, t1_);
				t3_ = Call_(_pl_, result, t2_);
				result = t3_;
				/* Start the next section. */
				t0_ = Call_(p, this_);
				t1_ = Call_(start, t0_);
				section_start = t1_;
				}
			else
				{
				t0_ = Call_(p, this_);
				t1_ = Call_(go_forward, t0_);
				}
			}
			}
		/* Finish the last section */
		t0_ = Call_(p, this_);
		t1_ = Call_(start, t0_);
		t2_ = new_co_to_co___String__Standard(Proto_(String__Standard), section_start, t1_);
		section = t2_;
		if (result)
			{
			t0_ = Call_(_pl_, result, section);
			result = t0_;
			}
		else
			{
			result = section;
			}
		return result;
		
		
		}
	return nil;
}


obj_ unindent_to__Lexer__Compiler(obj_ this_)
{
	return Field_(unindent_to);
}


obj_ unindent_to_co___Lexer__Compiler(obj_ this_, obj_ value)
{
	Field_(unindent_to) = value;
	return value;
}


obj_ unindents_pending__Lexer__Compiler(obj_ this_)
{
	return Field_(unindents_pending);
}


obj_ unindents_pending_co___Lexer__Compiler(obj_ this_, obj_ value)
{
	Field_(unindents_pending) = value;
	return value;
}


