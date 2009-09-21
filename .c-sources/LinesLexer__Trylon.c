#include "Trylon_.h"

UsingSym_(LinesLexer)UsingClass_(Trylon)
UsingClass_(Object__Standard)
UsingClass_(LinesLexer__Trylon)
struct ClassInfo LinesLexer__Trylon__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 70, 8, Proto_(LinesLexer__Trylon), Proto_(Trylon), Proto_(Object__Standard), nil, Sym_(LinesLexer), nil, nil };
struct object LinesLexer__Trylon = 
	{ &LinesLexer__Trylon__classInfo_, {nil, nil, nil, nil, nil, nil, nil, nil} };


#define p__fld_	(0)
#define stopper__fld_	(1)
#define lines__fld_	(2)
#define indent_stack__fld_	(3)
#define pending_blank_lines__fld_	(4)
#define cur_lines__fld_	(5)
#define cur_indentation__fld_	(6)
#define had_indent_problem__fld_	(7)


obj_ create_co___LinesLexer__Trylon(obj_ this_, obj_ text)
{
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(0)
	UsingInt_(2)
	UsingInt_(0)
	UsingInt_(0)
	UsingMethod_(cur_indentation_co_) UsingMethod_(cur_lines_co_) UsingMethod_(had_indent_problem_co_) UsingMethod_(indent_stack) UsingMethod_(indent_stack_co_) UsingMethod_(lines) UsingMethod_(lines_co_) UsingMethod_(p_co_) UsingMethod_(pending_blank_lines_co_) UsingMethod_(push_front_co_) UsingMethod_(start) UsingMethod_(stopper) UsingMethod_(stopper_co_)
	UsingClass_(List__Standard)

		{
		t0_ = Call_(start, text);
		t1_ = Call_(p_co_, this_, t0_);
		t0_ = Call_(stopper, text);
		t1_ = Call_(stopper_co_, this_, t0_);
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(lines_co_, this_, t0_);
		t0_ = Call_(lines, this_);
		t1_ = Call_(cur_lines_co_, this_, t0_);
		t0_ = Call_(cur_indentation_co_, this_, SmallInt_(0));
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(indent_stack_co_, this_, t0_);
		t0_ = Call_(indent_stack, this_);
		t1_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(2));
		t1_->fields[1] = SmallInt_(0);
		t2_ = Call_(lines, this_);
		t1_->fields[2] = t2_;
		t3_ = Call_(push_front_co_, t0_, t1_);
		t0_ = Call_(pending_blank_lines_co_, this_, SmallInt_(0));
		t0_ = Call_(had_indent_problem_co_, this_, nil);
		}
	return nil;
}


obj_ lex__LinesLexer__Trylon(obj_ this_)
{
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ from_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	extern obj_ new_co___CodeLine__Trylon(obj_ this_, obj_ text);
	extern obj_ from_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	extern obj_ from_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	extern obj_ new_co___CodeLine__Trylon(obj_ this_, obj_ text);
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
	UsingInt_(32)
	UsingInt_(9)
	UsingInt_(1)
	UsingInt_(1)
	UsingInt_(10)
	UsingInt_(13)
	UsingInt_(1)
	UsingInt_(1)
	UsingInt_(0)
	UsingInt_(2)
	UsingInt_(10)
	UsingInt_(13)
	UsingInt_(1)
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(1)
	UsingInt_(10)
	UsingInt_(13)
	UsingInt_(1)
	UsingInt_(0)
	UsingInt_(2)
	UsingInt_(32)
	UsingInt_(9)
	UsingInt_(1)
	UsingInt_(1)
	UsingInt_(10)
	UsingInt_(13)
	UsingInt_(1)
	DefineString_(0, "Indentation error at start of file.")
	DefineString_(1, "Indentation error (\"")
	DefineString_(2, "\").")
	DefineString_(3, "")
	DefineString_(4, "--")
	DefineString_(5, " ")
	UsingMethod_(_nt__eq_) UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(_lt_) UsingMethod_(_eq__eq_) UsingMethod_(_gt_) UsingMethod_(_gt__eq_) UsingMethod_(append_co_) UsingMethod_(block_co_) UsingMethod_(cur_indentation) UsingMethod_(cur_indentation_co_) UsingMethod_(cur_lines) UsingMethod_(cur_lines_co_) UsingMethod_(deref_char) UsingMethod_(ends_with_co_) UsingMethod_(first) UsingMethod_(head) UsingMethod_(indent_stack) UsingMethod_(is_empty) UsingMethod_(last_item) UsingMethod_(length) UsingMethod_(lines) UsingMethod_(p) UsingMethod_(p_co_) UsingMethod_(pending_blank_lines) UsingMethod_(pending_blank_lines_co_) UsingMethod_(pop_front) UsingMethod_(push_front_co_) UsingMethod_(second) UsingMethod_(stopper) UsingMethod_(substr_co_length_co_) UsingMethod_(trimmed)
	UsingClass_(CodeLine__Trylon)
	UsingClass_(List__Standard)
	UsingClass_(MessageException__Standard)
	UsingClass_(String__Standard)

		{
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(p, this_);
			t1_ = Call_(stopper, this_);
			t2_ = Call_(_lt_, t0_, t1_);
			if (!(t2_))
				Break_(0)
			{
			obj_ c, line_indentation, line_start, text;
			/*  Get the current line's indentation. */
			c = nil;
			line_indentation = SmallInt_(0);
			while (1) {
				ContinuePoint_(1)
				t0_ = Call_(p, this_);
				t1_ = Call_(stopper, this_);
				t2_ = Call_(_lt_, t0_, t1_);
				if (!(t2_))
					Break_(1)
				{
				t0_ = Call_(p, this_);
				t1_ = Call_(deref_char, t0_);
				c = t1_;
				t0_ = Call_(_eq__eq_, c, Int_(32));
				if ((t0_) == nil) {
					t1_ = Call_(_eq__eq_, c, Int_(9));
					t0_ = t1_;
					}
				if (t0_)
					{
					t0_ = Call_(_pl_, line_indentation, SmallInt_(1));
					line_indentation = t0_;
					}
				else
					{
					Break_(1)
					}
				t0_ = Call_(p, this_);
				t1_ = Call_(_pl_, t0_, SmallInt_(1));
				t2_ = Call_(p_co_, this_, t1_);
				}
				}
			
			/*  Is it a blank line? */
			/*  If so, the indentation doesn't matter. */
			t0_ = Call_(_eq__eq_, c, Int_(10));
			if ((t0_) == nil) {
				t1_ = Call_(_eq__eq_, c, Int_(13));
				t0_ = t1_;
				}
			if ((t0_) == nil) {
				t2_ = Call_(p, this_);
				t3_ = Call_(stopper, this_);
				t4_ = Call_(_gt__eq_, t2_, t3_);
				t0_ = t4_;
				}
			if (t0_)
				{
				t0_ = Call_(pending_blank_lines, this_);
				t1_ = Call_(_pl_, t0_, SmallInt_(1));
				t2_ = Call_(pending_blank_lines_co_, this_, t1_);
				t0_ = Call_(p, this_);
				t1_ = Call_(_pl_, t0_, SmallInt_(1));
				t2_ = Call_(p_co_, this_, t1_);
				Continue_(0)
				}
			
			/*  From now on, we know we're going to add a non-blank line to some block. */
			
			/*  Did a new block start? */
			t0_ = Call_(cur_indentation, this_);
			t1_ = Call_(_gt_, line_indentation, t0_);
			if (t1_)
				{
				obj_ new_block;
				/*  If the file starts with an indented line, handle that specially. */
				t0_ = Call_(cur_indentation, this_);
				t1_ = Call_(_eq__eq_, t0_, SmallInt_(0));
				if (t1_) {
					t2_ = Call_(lines, this_);
					t3_ = Call_(is_empty, t2_);
					t1_ = t3_;
					}
				if (t1_)
					{
					/*  For now, treat it as an error. */
					t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(0));
					Throw_(t0_);
					}
				/*  Check for errors. */
				/*  Start the indentation. */
				t1_ = new__List__Standard(Proto_(List__Standard));
				new_block = t1_;
				t0_ = Call_(cur_lines, this_);
				t1_ = Call_(last_item, t0_);
				t2_ = Call_(block_co_, t1_, new_block);
				t0_ = Call_(cur_lines_co_, this_, new_block);
				t0_ = Call_(cur_indentation_co_, this_, line_indentation);
				t0_ = Call_(indent_stack, this_);
				t1_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(2));
				t1_->fields[1] = line_indentation;
				t1_->fields[2] = new_block;
				t2_ = Call_(push_front_co_, t0_, t1_);
				}
			else
				{
				t0_ = Call_(cur_indentation, this_);
				t1_ = Call_(_lt_, line_indentation, t0_);
				if (t1_)
					{
					while (1) {
						ContinuePoint_(2)
						t0_ = Call_(indent_stack, this_);
						t1_ = Call_(head, t0_);
						t2_ = Call_(first, t1_);
						t3_ = Call_(_lt_, line_indentation, t2_);
						if (!(t3_))
							Break_(2)
						{
						t0_ = Call_(indent_stack, this_);
						t1_ = Call_(pop_front, t0_);
						}
						}
					t0_ = Call_(indent_stack, this_);
					t1_ = Call_(head, t0_);
					t2_ = Call_(first, t1_);
					t3_ = Call_(_gt_, line_indentation, t2_);
					if (t3_)
						{
						obj_ line, line_start;
						t0_ = Call_(p, this_);
						line_start = t0_;
						while (1) {
							ContinuePoint_(3)
							t0_ = Call_(p, this_);
							t1_ = Call_(stopper, this_);
							t2_ = Call_(_lt_, t0_, t1_);
							if (t2_) {
								t3_ = Call_(p, this_);
								t4_ = Call_(deref_char, t3_);
								t5_ = Call_(_nt__eq_, t4_, Int_(10));
								t2_ = t5_;
								}
							if (t2_) {
								t6_ = Call_(p, this_);
								t7_ = Call_(deref_char, t6_);
								t8_ = Call_(_nt__eq_, t7_, Int_(13));
								t2_ = t8_;
								}
							if (!(t2_))
								Break_(3)
							{
							t0_ = Call_(p, this_);
							t1_ = Call_(_pl_, t0_, SmallInt_(1));
							t2_ = Call_(p_co_, this_, t1_);
							}
							}
						t0_ = Call_(p, this_);
						t1_ = from_co_to_co___String__Standard(Proto_(String__Standard), line_start, t0_);
						t2_ = Call_(trimmed, t1_);
						line = t2_;
						t0_ = Call_(_pl_, Str_(1), line);
						t1_ = Call_(_pl_, t0_, Str_(2));
						t2_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), t1_);
						Throw_(t2_);
						}
					t3_ = Call_(indent_stack, this_);
					t4_ = Call_(head, t3_);
					t5_ = Call_(first, t4_);
					t6_ = Call_(cur_indentation_co_, this_, t5_);
					t0_ = Call_(indent_stack, this_);
					t1_ = Call_(head, t0_);
					t2_ = Call_(second, t1_);
					t3_ = Call_(cur_lines_co_, this_, t2_);
					}
				}
			
			/*  Did a block end? */
			
			/*  Any pending blank lines go here. */
			/*  If we just started a block, they go at the top of the inner block. */
			/*  If we just ended a block, they're part of the outer block (separating */
			/*  items). */
			while (1) {
				ContinuePoint_(4)
				t0_ = Call_(pending_blank_lines, this_);
				t1_ = Call_(_gt_, t0_, SmallInt_(0));
				if (!(t1_))
					Break_(4)
				{
				t0_ = Call_(cur_lines, this_);
				t1_ = new_co___CodeLine__Trylon(Proto_(CodeLine__Trylon), Str_(3));
				t2_ = Call_(append_co_, t0_, t1_);
				t0_ = Call_(pending_blank_lines, this_);
				t1_ = Call_(_, t0_, SmallInt_(1));
				t2_ = Call_(pending_blank_lines_co_, this_, t1_);
				}
				}
			
			/*  Get the line's text. */
			t0_ = Call_(p, this_);
			line_start = t0_;
			while (1) {
				ContinuePoint_(5)
				t0_ = Call_(p, this_);
				t1_ = Call_(stopper, this_);
				t2_ = Call_(_lt_, t0_, t1_);
				if (!(t2_))
					Break_(5)
				{
				t0_ = Call_(p, this_);
				t1_ = Call_(deref_char, t0_);
				c = t1_;
				t0_ = Call_(p, this_);
				t1_ = Call_(_pl_, t0_, SmallInt_(1));
				t2_ = Call_(p_co_, this_, t1_);
				t0_ = Call_(_eq__eq_, c, Int_(10));
				if ((t0_) == nil) {
					t1_ = Call_(_eq__eq_, c, Int_(13));
					t0_ = t1_;
					}
				if (t0_)
					{
					Break_(5)
					}
				}
				}
			t0_ = Call_(p, this_);
			t1_ = Call_(_, t0_, SmallInt_(1));
			t2_ = from_co_to_co___String__Standard(Proto_(String__Standard), line_start, t1_);
			text = t2_;
			
			/*  Handle line continuations. */
			while (1) {
				ContinuePoint_(6)
				t0_ = Call_(ends_with_co_, text, Str_(4));
				if (!(t0_))
					Break_(6)
				{
				obj_ continuation_line;
				t0_ = Call_(length, text);
				t1_ = Call_(_, t0_, SmallInt_(2));
				t2_ = Call_(substr_co_length_co_, text, SmallInt_(0), t1_);
				text = t2_;
				t0_ = Call_(_pl_, text, Str_(5));
				text = t0_;
				/*  Skip whitespace. */
				while (1) {
					ContinuePoint_(7)
					t0_ = Call_(p, this_);
					t1_ = Call_(stopper, this_);
					t2_ = Call_(_lt_, t0_, t1_);
					if (!(t2_))
						Break_(7)
					{
					t0_ = Call_(p, this_);
					t1_ = Call_(deref_char, t0_);
					c = t1_;
					t0_ = Call_(_nt__eq_, c, Int_(32));
					if (t0_) {
						t1_ = Call_(_nt__eq_, c, Int_(9));
						t0_ = t1_;
						}
					if (t0_)
						{
						Break_(7)
						}
					t0_ = Call_(p, this_);
					t1_ = Call_(_pl_, t0_, SmallInt_(1));
					t2_ = Call_(p_co_, this_, t1_);
					}
					}
				/*  Gather the line. */
				t0_ = Call_(p, this_);
				line_start = t0_;
				while (1) {
					ContinuePoint_(8)
					t0_ = Call_(p, this_);
					t1_ = Call_(stopper, this_);
					t2_ = Call_(_lt_, t0_, t1_);
					if (!(t2_))
						Break_(8)
					{
					t0_ = Call_(p, this_);
					t1_ = Call_(deref_char, t0_);
					c = t1_;
					t0_ = Call_(p, this_);
					t1_ = Call_(_pl_, t0_, SmallInt_(1));
					t2_ = Call_(p_co_, this_, t1_);
					t0_ = Call_(_eq__eq_, c, Int_(10));
					if ((t0_) == nil) {
						t1_ = Call_(_eq__eq_, c, Int_(13));
						t0_ = t1_;
						}
					if (t0_)
						{
						Break_(8)
						}
					}
					}
				t0_ = Call_(p, this_);
				t1_ = Call_(_, t0_, SmallInt_(1));
				t2_ = from_co_to_co___String__Standard(Proto_(String__Standard), line_start, t1_);
				continuation_line = t2_;
				t0_ = Call_(_pl_, text, continuation_line);
				text = t0_;
				}
				}
			
			/*  Add the line. */
			t0_ = Call_(cur_lines, this_);
			t1_ = new_co___CodeLine__Trylon(Proto_(CodeLine__Trylon), text);
			t2_ = Call_(append_co_, t0_, t1_);
			}
			}
		
		t0_ = Call_(lines, this_);
		return t0_;
		}
	return nil;
}


obj_ new_co___LinesLexer__Trylon(obj_ this_, obj_ text)
{
	UsingClass_(LinesLexer__Trylon)
	obj_ obj = AllocObj_(LinesLexer__Trylon);
	create_co___LinesLexer__Trylon(obj, text);
	return obj;
}


obj_ read_co___LinesLexer__Trylon(obj_ this_, obj_ text)
{
	extern obj_ new_co___LinesLexer__Trylon(obj_ this_, obj_ text);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(lex)
	UsingClass_(LinesLexer__Trylon)

		{
		t0_ = new_co___LinesLexer__Trylon(Proto_(LinesLexer__Trylon), text);
		t1_ = Call_(lex, t0_);
		return t1_;
		}
	return nil;
}


