#include "Trylon_.h"

UsingSym_(Lexer)UsingClass_(Compiler)
UsingClass_(Object__Standard)
UsingClass_(Lexer__Compiler)
struct ClassInfo Lexer__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 66, 5, Proto_(Lexer__Compiler), Proto_(Compiler), Proto_(Object__Standard), nil, Sym_(Lexer), nil, nil };
struct object Lexer__Compiler = 
	{ &Lexer__Compiler__classInfo_, {nil, nil, nil, nil, nil} };

	UsingInt_(0)

#define p__fld_	(0)
#define indent_stack__fld_	(1)
#define at_line_start__fld_	(2)
#define unindents_pending__fld_	(3)
#define unindent_to__fld_	(4)

DeclareSharedField_(eof_char, Lexer__Compiler, SmallInt_(0))

obj_ character_constant_value_co___Lexer__Compiler(obj_ this_, obj_ text)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(92)
	UsingMethod_(_eq__eq_) UsingMethod_(bytes) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(p) UsingMethod_(p_co_) UsingMethod_(parse_character_escape_co_)

		{
		t0_ = Call_(bytes, text);
		t1_ = Call_(p_co_, this_, t0_);
		t0_ = Call_(p, this_);
		t1_ = Call_(current_item, t0_);
		t2_ = Call_(_eq__eq_, t1_, Int_(92));
		if (t2_)
			{
			t0_ = Call_(p, this_);
			t1_ = Call_(go_forward, t0_);
			 	/*  Skip `\`. */
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
	extern obj_ new__IntStack__Compiler(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingInt_(0)
	UsingInt_(0)
	UsingMethod_(at_line_start_co_) UsingMethod_(bytes) UsingMethod_(char_) UsingMethod_(eof_char_co_) UsingMethod_(indent_stack) UsingMethod_(indent_stack_co_) UsingMethod_(p_co_) UsingMethod_(push_co_) UsingMethod_(unindents_pending_co_)
	UsingClass_(IntStack__Compiler)

		{
		t0_ = Call_(char_, SmallInt_(0));
		t1_ = Call_(eof_char_co_, this_, t0_);
		t0_ = Call_(bytes, text);
		t1_ = Call_(p_co_, this_, t0_);
		t0_ = new__IntStack__Compiler(Proto_(IntStack__Compiler));
		t1_ = Call_(indent_stack_co_, this_, t0_);
		t0_ = Call_(indent_stack, this_);
		t1_ = Call_(push_co_, t0_, SmallInt_(0));
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
	extern obj_ new_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(10)
	UsingInt_(13)
	UsingMethod_(_nt__eq_) UsingMethod_(at_line_start_co_) UsingMethod_(cur_char) UsingMethod_(eof_char) UsingMethod_(go_forward) UsingMethod_(p) UsingMethod_(start)
	UsingClass_(String__Standard)

		{
		obj_ c, line_start;
		/*  We've already got the indentation, just get the rest of the line. */
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
				t2_ = Call_(_nt__eq_, c, Int_(10));
				t1_ = t2_;
				}
			if (t1_) {
				t3_ = Call_(_nt__eq_, c, Int_(13));
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
		 	/*  Consume the eol. */
		t0_ = Call_(at_line_start_co_, this_, true_);
		t0_ = Call_(p, this_);
		t1_ = Call_(start, t0_);
		t2_ = new_co_to_co___String__Standard(Proto_(String__Standard), line_start, t1_);
		return t2_;
		}
	return nil;
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
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	obj_ t7_;
	obj_ t8_;
	UsingInt_(0)
	UsingInt_(9)
	UsingInt_(2)
	UsingInt_(32)
	UsingInt_(1)
	UsingInt_(10)
	UsingInt_(13)
	UsingInt_(10)
	UsingInt_(13)
	UsingInt_(32)
	UsingInt_(9)
	UsingInt_(45)
	UsingInt_(45)
	UsingInt_(10)
	UsingInt_(13)
	UsingInt_(32)
	UsingInt_(9)
	UsingInt_(61)
	UsingInt_(62)
	UsingInt_(48)
	UsingInt_(57)
	UsingInt_(48)
	UsingInt_(57)
	UsingInt_(46)
	UsingInt_(35)
	UsingInt_(9)
	UsingInt_(32)
	UsingInt_(10)
	UsingInt_(13)
	UsingInt_(34)
	UsingInt_(10)
	UsingInt_(13)
	UsingInt_(92)
	UsingInt_(34)
	UsingInt_(39)
	UsingInt_(92)
	UsingInt_(39)
	UsingInt_(96)
	UsingInt_(92)
	UsingInt_(96)
	UsingInt_(40)
	UsingInt_(41)
	UsingInt_(123)
	UsingInt_(125)
	UsingInt_(91)
	UsingInt_(93)
	UsingInt_(44)
	UsingInt_(59)
	UsingInt_(126)
	UsingInt_(43)
	UsingInt_(61)
	UsingInt_(42)
	UsingInt_(47)
	UsingInt_(37)
	UsingInt_(94)
	UsingInt_(33)
	UsingInt_(58)
	UsingInt_(60)
	UsingInt_(61)
	UsingInt_(61)
	UsingInt_(62)
	UsingInt_(61)
	UsingInt_(61)
	UsingInt_(38)
	UsingInt_(38)
	UsingInt_(61)
	UsingInt_(124)
	UsingInt_(124)
	UsingInt_(61)
	UsingInt_(97)
	UsingInt_(122)
	UsingInt_(65)
	UsingInt_(90)
	UsingInt_(95)
	UsingInt_(46)
	UsingInt_(240)
	UsingInt_(192)
	UsingInt_(240)
	UsingInt_(192)
	UsingInt_(224)
	UsingInt_(240)
	UsingInt_(95)
	UsingInt_(45)
	UsingInt_(46)
	UsingInt_(97)
	UsingInt_(122)
	UsingInt_(65)
	UsingInt_(90)
	UsingInt_(48)
	UsingInt_(57)
	UsingInt_(240)
	UsingInt_(192)
	UsingInt_(224)
	UsingInt_(240)
	UsingInt_(58)
	UsingInt_(48)
	UsingInt_(57)
	UsingInt_(48)
	UsingInt_(120)
	UsingInt_(88)
	UsingInt_(48)
	UsingInt_(57)
	UsingInt_(97)
	UsingInt_(102)
	UsingInt_(65)
	UsingInt_(70)
	UsingInt_(46)
	DefineString_(0, "Indentation error!")
	DefineString_(1, "Unterminated string constant.")
	DefineString_(2, "Unterminated symbol.")
	DefineString_(3, "Unterminated character constant.")
	DefineString_(4, "Unknown character: \"")
	DefineString_(5, "\"")
	UsingMethod_(_nt__eq_) UsingMethod_(_an_) UsingMethod_(_pl_) UsingMethod_(_lt_) UsingMethod_(_lt__eq_) UsingMethod_(_eq__eq_) UsingMethod_(_gt_) UsingMethod_(_gt__eq_) UsingMethod_(at_line_start) UsingMethod_(at_line_start_co_) UsingMethod_(cur_char) UsingMethod_(eof_char) UsingMethod_(go_forward) UsingMethod_(indent_stack) UsingMethod_(is_empty) UsingMethod_(p) UsingMethod_(pop) UsingMethod_(possibly_equals_token_co_or_co_) UsingMethod_(push_co_) UsingMethod_(start) UsingMethod_(string) UsingMethod_(top) UsingMethod_(unindent_to) UsingMethod_(unindent_to_co_) UsingMethod_(unindents_pending) UsingMethod_(unindents_pending_co_)
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
				/*  We're done unindenting. */
				t0_ = Call_(unindents_pending_co_, this_, nil);
				}
			else
				{
				/*  Unindent one more level. */
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
			/*  If at line start, figure out the indentation. */
			t1_ = Call_(at_line_start, this_);
			if (t1_)
				{
				obj_ indentation;
				t0_ = Call_(at_line_start_co_, this_, nil);
				
				/*  Get the indentation. */
				indentation = SmallInt_(0);
				while (1) {
					ContinuePoint_(1)
					{
					t0_ = Call_(cur_char, this_);
					c = t0_;
					t0_ = Call_(_eq__eq_, c, Int_(9));
					if (t0_)
						{
						t0_ = Call_(_pl_, indentation, SmallInt_(2));
						indentation = t0_;
						}
					else
						{
						t0_ = Call_(_eq__eq_, c, Int_(32));
						if (t0_)
							{
							t0_ = Call_(_pl_, indentation, SmallInt_(1));
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
				
				/*  If it's just an empty line, emit an EOL. */
				t0_ = Call_(_eq__eq_, c, Int_(10));
				if ((t0_) == nil) {
					t1_ = Call_(_eq__eq_, c, Int_(13));
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
				
				/*  Figure out the indentation change. */
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
			
			/*  Get the next character. */
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
			else
				{
				t1_ = Call_(_eq__eq_, c, Int_(10));
				if ((t1_) == nil) {
					t2_ = Call_(_eq__eq_, c, Int_(13));
					t1_ = t2_;
					}
				if (t1_)
					{
					t0_ = Call_(at_line_start_co_, this_, true_);
					t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(eol));
					return t0_;
					}
				}
			
			/*  Line break. */
			
			/*  Whitespace. */
			t1_ = Call_(_eq__eq_, c, Int_(32));
			if ((t1_) == nil) {
				t2_ = Call_(_eq__eq_, c, Int_(9));
				t1_ = t2_;
				}
			if (t1_)
				{
				/*  Skip whitespace. */
				t0_ = Call_(p, this_);
				t1_ = Call_(start, t0_);
				token_start = t1_;
				Continue_(0)
				}
			else
				{
				t0_ = Call_(_eq__eq_, c, Int_(45));
				if (t0_)
					{
					t0_ = Call_(cur_char, this_);
					next_char = t0_;
					t0_ = Call_(_eq__eq_, next_char, Int_(45));
					if (t0_)
						{
						/*  Line continuation. */
						t0_ = Call_(p, this_);
						t1_ = Call_(go_forward, t0_);
						/*  Skip to next line. */
						while (1) {
							ContinuePoint_(2)
							{
							t0_ = Call_(cur_char, this_);
							c = t0_;
							t0_ = Call_(p, this_);
							t1_ = Call_(go_forward, t0_);
							t0_ = Call_(_eq__eq_, c, Int_(10));
							if ((t0_) == nil) {
								t1_ = Call_(_eq__eq_, c, Int_(13));
								t0_ = t1_;
								}
							if (t0_)
								{
								Break_(2)
								}
							}
						}
						/*  Skip whitespace. */
						while (1) {
							ContinuePoint_(3)
							{
							t0_ = Call_(cur_char, this_);
							c = t0_;
							t0_ = Call_(_eq__eq_, c, Int_(32));
							if ((t0_) == nil) {
								t1_ = Call_(_eq__eq_, c, Int_(9));
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
						t0_ = Call_(_eq__eq_, next_char, Int_(61));
						if (t0_)
							{
							t0_ = Call_(p, this_);
							t1_ = Call_(go_forward, t0_);
							t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(__eq_));
							return t0_;
							}
						else
							{
							t1_ = Call_(_eq__eq_, next_char, Int_(62));
							if (t1_)
								{
								t0_ = Call_(p, this_);
								t1_ = Call_(go_forward, t0_);
								t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(__gt_));
								return t0_;
								}
							else
								{
								t1_ = Call_(_gt__eq_, next_char, Int_(48));
								if (t1_) {
									t2_ = Call_(_lt__eq_, next_char, Int_(57));
									t1_ = t2_;
									}
								if (t1_)
									{
									obj_ is_float;
									/*  Number. */
									t0_ = Call_(p, this_);
									t1_ = Call_(go_forward, t0_);
									is_float = nil;
									while (1) {
										ContinuePoint_(4)
										{
										t0_ = Call_(cur_char, this_);
										c = t0_;
										t0_ = Call_(_gt__eq_, c, Int_(48));
										if (t0_) {
											t1_ = Call_(_lt__eq_, c, Int_(57));
											t0_ = t1_;
											}
										if (t0_)
											{
											t0_ = Call_(p, this_);
											t1_ = Call_(go_forward, t0_);
											}
										else
											{
											t0_ = Call_(_eq__eq_, c, Int_(46));
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
				else
					{
					t4_ = Call_(_eq__eq_, c, Int_(35));
					if (t4_)
						{
						/*  Skip initial whitespace. */
						while (1) {
							ContinuePoint_(5)
							{
							t0_ = Call_(cur_char, this_);
							c = t0_;
							t0_ = Call_(_nt__eq_, c, Int_(9));
							if (t0_) {
								t1_ = Call_(_nt__eq_, c, Int_(32));
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
						
						/*  Get the comment. */
						t0_ = Call_(p, this_);
						t1_ = Call_(start, t0_);
						token_start = t1_;
						while (1) {
							ContinuePoint_(6)
							{
							t0_ = Call_(cur_char, this_);
							c = t0_;
							t0_ = Call_(_eq__eq_, c, Int_(10));
							if ((t0_) == nil) {
								t1_ = Call_(_eq__eq_, c, Int_(13));
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
					else
						{
						t3_ = Call_(_eq__eq_, c, Int_(34));
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
								t0_ = Call_(_eq__eq_, c, Int_(10));
								if ((t0_) == nil) {
									t1_ = Call_(_eq__eq_, c, Int_(13));
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
									t1_ = Call_(_eq__eq_, c, Int_(92));
									if (t1_)
										{
										t0_ = Call_(p, this_);
										t1_ = Call_(go_forward, t0_);
										}
									else
										{
										t0_ = Call_(_eq__eq_, c, Int_(34));
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
						else
							{
							t1_ = Call_(_eq__eq_, c, Int_(39));
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
										t1_ = Call_(_eq__eq_, c, Int_(92));
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
												Break_(8)
												}
											}
										}
									}
								}
								t0_ = new_co_from_co_to_co___Token__Compiler(Proto_(Token__Compiler), Sym_(symbol_literal), token_start, token_end);
								return t0_;
								}
							else
								{
								t1_ = Call_(_eq__eq_, c, Int_(96));
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
											t1_ = Call_(_eq__eq_, c, Int_(92));
											if (t1_)
												{
												t0_ = Call_(p, this_);
												t1_ = Call_(go_forward, t0_);
												}
											else
												{
												t0_ = Call_(_eq__eq_, c, Int_(96));
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
											t1_ = Call_(_eq__eq_, c, Int_(123));
											if (t1_)
												{
												t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(_123_));
												return t0_;
												}
											else
												{
												t1_ = Call_(_eq__eq_, c, Int_(125));
												if (t1_)
													{
													t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(_125_));
													return t0_;
													}
												else
													{
													t1_ = Call_(_eq__eq_, c, Int_(91));
													if (t1_)
														{
														t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(_in_));
														return t0_;
														}
													else
														{
														t1_ = Call_(_eq__eq_, c, Int_(93));
														if (t1_)
															{
															t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(_dx_));
															return t0_;
															}
														else
															{
															t1_ = Call_(_eq__eq_, c, Int_(44));
															if (t1_)
																{
																t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(_44_));
																return t0_;
																}
															else
																{
																t1_ = Call_(_eq__eq_, c, Int_(59));
																if (t1_)
																	{
																	t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(_59_));
																	return t0_;
																	}
																else
																	{
																	t1_ = Call_(_eq__eq_, c, Int_(126));
																	if (t1_)
																		{
																		t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(_tw_));
																		return t0_;
																		}
																	else
																		{
																		t1_ = Call_(_eq__eq_, c, Int_(43));
																		if (t1_)
																			{
																			t0_ = Call_(possibly_equals_token_co_or_co_, this_, Sym_(_pl_), Sym_(_pl__eq_));
																			return t0_;
																			}
																		else
																			{
																			t1_ = Call_(_eq__eq_, c, Int_(61));
																			if (t1_)
																				{
																				t0_ = Call_(possibly_equals_token_co_or_co_, this_, Sym_(_eq_), Sym_(_eq__eq_));
																				return t0_;
																				}
																			else
																				{
																				t1_ = Call_(_eq__eq_, c, Int_(42));
																				if (t1_)
																				{
																				t0_ = Call_(possibly_equals_token_co_or_co_, this_, Sym_(_st_), Sym_(_st__eq_));
																				return t0_;
																				}
																				else
																				{
																				t1_ = Call_(_eq__eq_, c, Int_(47));
																				if (t1_)
																				{
																				t0_ = Call_(possibly_equals_token_co_or_co_, this_, Sym_(_dv_), Sym_(_dv__eq_));
																				return t0_;
																				}
																				else
																				{
																				t1_ = Call_(_eq__eq_, c, Int_(37));
																				if (t1_)
																				{
																				t0_ = Call_(possibly_equals_token_co_or_co_, this_, Sym_(_pc_), Sym_(_pc__eq_));
																				return t0_;
																				}
																				else
																				{
																				t1_ = Call_(_eq__eq_, c, Int_(94));
																				if (t1_)
																				{
																				t0_ = Call_(possibly_equals_token_co_or_co_, this_, Sym_(_xr_), Sym_(_xr__eq_));
																				return t0_;
																				}
																				else
																				{
																				t1_ = Call_(_eq__eq_, c, Int_(33));
																				if (t1_)
																				{
																				t0_ = Call_(possibly_equals_token_co_or_co_, this_, Sym_(_nt_), Sym_(_nt__eq_));
																				return t0_;
																				}
																				else
																				{
																				t1_ = Call_(_eq__eq_, c, Int_(58));
																				if (t1_)
																				{
																				t0_ = Call_(possibly_equals_token_co_or_co_, this_, Sym_(_co_), Sym_(_co__eq_));
																				return t0_;
																				}
																				else
																				{
																				t1_ = Call_(_eq__eq_, c, Int_(60));
																				if (t1_)
																				{
																				obj_ type;
																				type = Sym_(_lt_);
																				t0_ = Call_(cur_char, this_);
																				next_char = t0_;
																				t0_ = Call_(_eq__eq_, next_char, c);
																				if (t0_)
																				{
																				/*  Doubled. */
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				t0_ = Call_(cur_char, this_);
																				t1_ = Call_(_eq__eq_, t0_, Int_(61));
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
																				t0_ = Call_(_eq__eq_, next_char, Int_(61));
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
																				t1_ = Call_(_eq__eq_, c, Int_(62));
																				if (t1_)
																				{
																				obj_ type;
																				type = Sym_(_gt_);
																				t0_ = Call_(cur_char, this_);
																				next_char = t0_;
																				t0_ = Call_(_eq__eq_, next_char, c);
																				if (t0_)
																				{
																				/*  Doubled. */
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
																				t0_ = Call_(_eq__eq_, next_char, Int_(61));
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
																				else
																				{
																				t1_ = Call_(_eq__eq_, c, Int_(38));
																				if (t1_)
																				{
																				obj_ type;
																				type = Sym_(_an_);
																				t0_ = Call_(cur_char, this_);
																				next_char = t0_;
																				t0_ = Call_(_eq__eq_, next_char, Int_(38));
																				if (t0_)
																				{
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				type = Sym_(_an__an_);
																				}
																				else
																				{
																				t0_ = Call_(_eq__eq_, next_char, Int_(61));
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
																				t1_ = Call_(_eq__eq_, c, Int_(124));
																				if (t1_)
																				{
																				obj_ type;
																				type = Sym_(_or_);
																				t0_ = Call_(cur_char, this_);
																				next_char = t0_;
																				t0_ = Call_(_eq__eq_, next_char, Int_(124));
																				if (t0_)
																				{
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				type = Sym_(_or__or_);
																				}
																				else
																				{
																				t0_ = Call_(_eq__eq_, next_char, Int_(61));
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
																				else
																				{
																				t1_ = Call_(_gt__eq_, c, Int_(97));
																				if (t1_) {
																				t2_ = Call_(_lt__eq_, c, Int_(122));
																				t1_ = t2_;
																				}
																				if ((t1_) == nil) {
																				t3_ = Call_(_gt__eq_, c, Int_(65));
																				if (t3_) {
																				t4_ = Call_(_lt__eq_, c, Int_(90));
																				t3_ = t4_;
																				}
																				t1_ = t3_;
																				}
																				if ((t1_) == nil) {
																				t5_ = Call_(_eq__eq_, c, Int_(95));
																				t1_ = t5_;
																				}
																				if ((t1_) == nil) {
																				t6_ = Call_(_eq__eq_, c, Int_(46));
																				t1_ = t6_;
																				}
																				if ((t1_) == nil) {
																				t7_ = Call_(_an_, c, SmallInt_(240));
																				t8_ = Call_(_gt__eq_, t7_, SmallInt_(192));
																				t1_ = t8_;
																				}
																				if (t1_)
																				{
																				obj_ hi_nybble, type;
																				/*  The first character might be a UTF-8 character, so handle that. */
																				t0_ = Call_(_an_, c, SmallInt_(240));
																				hi_nybble = t0_;
																				t0_ = Call_(_gt__eq_, hi_nybble, SmallInt_(192));
																				if (t0_)
																				{
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				t0_ = Call_(_gt__eq_, hi_nybble, SmallInt_(224));
																				if (t0_)
																				{
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				t0_ = Call_(_eq__eq_, hi_nybble, SmallInt_(240));
																				if (t0_)
																				{
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				}
																				}
																				}
																				/*  Read the rest of the characters. */
																				while (1) {
																					ContinuePoint_(10)
																				{
																				obj_ is_id_char;
																				t0_ = Call_(cur_char, this_);
																				c = t0_;
																				t0_ = Call_(_eq__eq_, c, Int_(95));
																				if ((t0_) == nil) {
																				t1_ = Call_(_eq__eq_, c, Int_(45));
																				t0_ = t1_;
																				}
																				if ((t0_) == nil) {
																				t2_ = Call_(_eq__eq_, c, Int_(46));
																				t0_ = t2_;
																				}
																				if ((t0_) == nil) {
																				t3_ = Call_(_gt__eq_, c, Int_(97));
																				if (t3_) {
																				t4_ = Call_(_lt__eq_, c, Int_(122));
																				t3_ = t4_;
																				}
																				t0_ = t3_;
																				}
																				if ((t0_) == nil) {
																				t5_ = Call_(_gt__eq_, c, Int_(65));
																				if (t5_) {
																				t6_ = Call_(_lt__eq_, c, Int_(90));
																				t5_ = t6_;
																				}
																				t0_ = t5_;
																				}
																				if ((t0_) == nil) {
																				t7_ = Call_(_gt__eq_, c, Int_(48));
																				if (t7_) {
																				t8_ = Call_(_lt__eq_, c, Int_(57));
																				t7_ = t8_;
																				}
																				t0_ = t7_;
																				}
																				is_id_char = t0_;
																				t0_ = Not_(is_id_char);
																				if (t0_)
																				{
																				/*  It still might be the first byte of a UTF-8 character. */
																				t0_ = Call_(_an_, c, SmallInt_(240));
																				hi_nybble = t0_;
																				t0_ = Call_(_gt__eq_, hi_nybble, SmallInt_(192));
																				if (t0_)
																				{
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				t0_ = Call_(_gt__eq_, hi_nybble, SmallInt_(224));
																				if (t0_)
																				{
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				t0_ = Call_(_eq__eq_, hi_nybble, SmallInt_(240));
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
																				/*  Could be a keyword. */
																				t0_ = Call_(cur_char, this_);
																				t1_ = Call_(_eq__eq_, t0_, Int_(58));
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
																				else
																				{
																				t3_ = Call_(_gt__eq_, c, Int_(48));
																				if (t3_) {
																				t4_ = Call_(_lt__eq_, c, Int_(57));
																				t3_ = t4_;
																				}
																				if (t3_)
																				{
																				obj_ is_hex, type;
																				/*  Is it hex? */
																				is_hex = nil;
																				t0_ = Call_(_eq__eq_, c, Int_(48));
																				if (t0_)
																				{
																				t0_ = Call_(cur_char, this_);
																				c = t0_;
																				t0_ = Call_(_eq__eq_, c, Int_(120));
																				if ((t0_) == nil) {
																				t1_ = Call_(_eq__eq_, c, Int_(88));
																				t0_ = t1_;
																				}
																				if (t0_)
																				{
																				t0_ = Call_(p, this_);
																				t1_ = Call_(go_forward, t0_);
																				is_hex = true_;
																				}
																				}
																				/*  Read the rest of the number. */
																				type = Sym_(int_literal);
																				while (1) {
																					ContinuePoint_(11)
																				{
																				t0_ = Call_(cur_char, this_);
																				c = t0_;
																				t0_ = Call_(_gt__eq_, c, Int_(48));
																				if (t0_) {
																				t1_ = Call_(_lt__eq_, c, Int_(57));
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
																				t1_ = Call_(_gt__eq_, c, Int_(97));
																				if (t1_) {
																				t2_ = Call_(_lt__eq_, c, Int_(102));
																				t1_ = t2_;
																				}
																				if ((t1_) == nil) {
																				t3_ = Call_(_gt__eq_, c, Int_(65));
																				if (t3_) {
																				t4_ = Call_(_lt__eq_, c, Int_(70));
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
																				t0_ = Call_(_eq__eq_, c, Int_(46));
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
			
			/*  -, --, -= */
			
			/*  Comment. */
			
			/*  String literal. */
			
			/*  Symbol literal. */
			
			/*  Character literal. */
			
			/*  Single-character tokens. */
			
			/*  Could be followed by =. */
			
			/*  Could be doubled, then followed by =. */
			
			/*  Could be doubled, or followed by '='. */
			
			/*  Name. */
			
			/*  Number. */
			
			/*  Unknown character. */
			}
		}
		
		/*  Never actually get here. */
		t7_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(eof));
		return t7_;
		}
	return nil;
}


obj_ parse_character_escape_co___Lexer__Compiler(obj_ this_, obj_ p)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(110)
	UsingInt_(10)
	UsingInt_(114)
	UsingInt_(13)
	UsingInt_(116)
	UsingInt_(9)
	UsingInt_(98)
	UsingInt_(8)
	UsingInt_(118)
	UsingInt_(11)
	UsingInt_(102)
	UsingInt_(12)
	UsingInt_(97)
	UsingInt_(7)
	UsingInt_(101)
	UsingInt_(27)
	UsingInt_(120)
	UsingInt_(0)
	UsingInt_(0)
	UsingInt_(2)
	UsingInt_(48)
	UsingInt_(57)
	UsingInt_(48)
	UsingInt_(65)
	UsingInt_(70)
	UsingInt_(10)
	UsingInt_(65)
	UsingInt_(97)
	UsingInt_(102)
	UsingInt_(10)
	UsingInt_(97)
	UsingInt_(16)
	UsingInt_(1)
	UsingMethod_(_st_) UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(_lt_) UsingMethod_(_lt__eq_) UsingMethod_(_eq__eq_) UsingMethod_(_gt__eq_) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done)

		{
		obj_ c;
		/*  The `\` will already be taken. */
		
		t0_ = Call_(current_item, p);
		c = t0_;
		t0_ = Call_(go_forward, p);
		t0_ = Call_(_eq__eq_, c, Int_(110));
		if (t0_)
			{
			return Int_(10);
			}
		else
			{
			t0_ = Call_(_eq__eq_, c, Int_(114));
			if (t0_)
				{
				return Int_(13);
				}
			else
				{
				t0_ = Call_(_eq__eq_, c, Int_(116));
				if (t0_)
					{
					return Int_(9);
					}
				else
					{
					t0_ = Call_(_eq__eq_, c, Int_(98));
					if (t0_)
						{
						return Int_(8);
						}
					else
						{
						t0_ = Call_(_eq__eq_, c, Int_(118));
						if (t0_)
							{
							return Int_(11);
							}
						else
							{
							t0_ = Call_(_eq__eq_, c, Int_(102));
							if (t0_)
								{
								return Int_(12);
								}
							else
								{
								t0_ = Call_(_eq__eq_, c, Int_(97));
								if (t0_)
									{
									return Int_(7);
									}
								else
									{
									t0_ = Call_(_eq__eq_, c, Int_(101));
									if (t0_)
										{
										return Int_(27);
										}
									else
										{
										t0_ = Call_(_eq__eq_, c, Int_(120));
										if (t0_)
											{
											obj_ num_digits, value;
											value = SmallInt_(0);
											num_digits = SmallInt_(0);
											while (1) {
												ContinuePoint_(0)
												t0_ = Call_(is_done, p);
												t1_ = Not_(t0_);
												if (t1_) {
													t2_ = Call_(_lt_, num_digits, SmallInt_(2));
													t1_ = t2_;
													}
												if (!(t1_))
													Break_(0)
												{
												obj_ digit;
												t0_ = Call_(current_item, p);
												digit = t0_;
												t0_ = Call_(_gt__eq_, digit, Int_(48));
												if (t0_) {
													t1_ = Call_(_lt__eq_, digit, Int_(57));
													t0_ = t1_;
													}
												if (t0_)
													{
													t0_ = Call_(_, digit, Int_(48));
													digit = t0_;
													}
												else
													{
													t0_ = Call_(_gt__eq_, digit, Int_(65));
													if (t0_) {
														t1_ = Call_(_lt__eq_, digit, Int_(70));
														t0_ = t1_;
														}
													if (t0_)
														{
														t0_ = Call_(_, digit, Int_(65));
														t1_ = Call_(_pl_, SmallInt_(10), t0_);
														digit = t1_;
														}
													else
														{
														t0_ = Call_(_gt__eq_, digit, Int_(97));
														if (t0_) {
															t1_ = Call_(_lt__eq_, digit, Int_(102));
															t0_ = t1_;
															}
														if (t0_)
															{
															t0_ = Call_(_, digit, Int_(97));
															t1_ = Call_(_pl_, SmallInt_(10), t0_);
															digit = t1_;
															}
														else
															{
															Break_(0)
															}
														}
													}
												t0_ = Call_(_st_, value, SmallInt_(16));
												value = t0_;
												t0_ = Call_(_pl_, value, digit);
												value = t0_;
												t0_ = Call_(go_forward, p);
												t0_ = Call_(_pl_, num_digits, SmallInt_(1));
												num_digits = t0_;
												}
												}
											return value;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		
		/*  Default: just use whatever was after the `\`. */
		return c;
		}
	return nil;
}


obj_ possibly_equals_token_co_or_co___Lexer__Compiler(obj_ this_, obj_ without_equals, obj_ with_equals)
{
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	obj_ t0_;
	obj_ t1_;
	UsingInt_(61)
	UsingMethod_(_eq__eq_) UsingMethod_(cur_char) UsingMethod_(go_forward) UsingMethod_(p)
	UsingClass_(Token__Compiler)

		{
		t0_ = Call_(cur_char, this_);
		t1_ = Call_(_eq__eq_, t0_, Int_(61));
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
	extern obj_ status_reporter__Main(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(report_co_)
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
	UsingInt_(0)
	UsingInt_(9)
	UsingInt_(2)
	UsingInt_(32)
	UsingInt_(1)
	UsingInt_(10)
	UsingInt_(13)
	DefineString_(0, "\n")
	UsingMethod_(_pl_) UsingMethod_(_lt_) UsingMethod_(_eq__eq_) UsingMethod_(at_line_start_co_) UsingMethod_(cur_char) UsingMethod_(first_subblock_line) UsingMethod_(go_forward) UsingMethod_(indent_stack) UsingMethod_(p) UsingMethod_(pop) UsingMethod_(top) UsingMethod_(unindent_to_co_) UsingMethod_(unindents_pending_co_)

		{
		obj_ c, indentation;
		/*  Get the indentation. */
		indentation = SmallInt_(0);
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
			t0_ = Call_(_eq__eq_, c, Int_(9));
			if (t0_)
				{
				t0_ = Call_(_pl_, indentation, SmallInt_(2));
				indentation = t0_;
				}
			else
				{
				t0_ = Call_(_eq__eq_, c, Int_(32));
				if (t0_)
					{
					t0_ = Call_(_pl_, indentation, SmallInt_(1));
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
		
		/*  If it's just an empty line, emit an EOL. */
		t0_ = Call_(_eq__eq_, c, Int_(10));
		if ((t0_) == nil) {
			t1_ = Call_(_eq__eq_, c, Int_(13));
			t0_ = t1_;
			}
		if (t0_)
			{
			t0_ = Call_(p, this_);
			t1_ = Call_(go_forward, t0_);
			t0_ = Call_(at_line_start_co_, this_, true_);
			return Str_(0);
			}
		
		/*  Check for unindent. */
		t0_ = Call_(indent_stack, this_);
		t1_ = Call_(top, t0_);
		t2_ = Call_(_lt_, indentation, t1_);
		if (t2_)
			{
			/*  First, get rid of the block's indentation. */
			t0_ = Call_(indent_stack, this_);
			t1_ = Call_(pop, t0_);
			/*  Then, deal with any further indentation. */
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
		
		/*  Get the rest of the line. */
		/*  This is just like first-subblock-line, so just call that. */
		t0_ = Call_(first_subblock_line, this_);
		return t0_;
		}
	return nil;
}


obj_ unescape_string_co___Lexer__Compiler(obj_ this_, obj_ string)
{
	extern obj_ new_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	extern obj_ new_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(92)
	UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(bytes) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(p) UsingMethod_(p_co_) UsingMethod_(parse_character_escape_co_) UsingMethod_(start) UsingMethod_(string)
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
			t2_ = Call_(_eq__eq_, t1_, Int_(92));
			if (t2_)
				{
				obj_ section;
				/*  Finish the section preceding the `\`. */
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
				 	/*  Skip `\`. */
				/*  Add the escaped character. */
				t0_ = Call_(p, this_);
				t1_ = Call_(parse_character_escape_co_, this_, t0_);
				t2_ = Call_(string, t1_);
				t3_ = Call_(_pl_, result, t2_);
				result = t3_;
				/*  Start the next section. */
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
		/*  Finish the last section */
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


