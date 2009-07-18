#include "Trylon_.h"

UsingClass_(BreakParser__TrylonCodeParser__Compiler) UsingClass_(CatchParser__TrylonCodeParser__Compiler) UsingClass_(CommentParser__TrylonCodeParser__Compiler) UsingClass_(ContinueParser__TrylonCodeParser__Compiler) UsingClass_(ElseParser__TrylonCodeParser__Compiler) UsingClass_(ForParser__TrylonCodeParser__Compiler) UsingClass_(IfParser__TrylonCodeParser__Compiler) UsingClass_(IffParser__TrylonCodeParser__Compiler) UsingClass_(LoopParser__TrylonCodeParser__Compiler) UsingClass_(ReturnParser__TrylonCodeParser__Compiler) UsingClass_(SwitchParser__TrylonCodeParser__Compiler) UsingClass_(ThrowParser__TrylonCodeParser__Compiler) UsingClass_(TryParser__TrylonCodeParser__Compiler) UsingClass_(WhileParser__TrylonCodeParser__Compiler) 
static obj_ tu0_[];
UsingSym_(TrylonCodeParser)UsingClass_(Compiler)
UsingClass_(Object__Standard)
UsingClass_(TrylonCodeParser__Compiler)
struct ClassInfo TrylonCodeParser__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 85, 5, Proto_(TrylonCodeParser__Compiler), Proto_(Compiler), Proto_(Object__Standard), nil, Sym_(TrylonCodeParser), nil, ((obj_) tu0_) };
struct object TrylonCodeParser__Compiler = 
	{ &TrylonCodeParser__Compiler__classInfo_, {nil, nil, nil, nil, nil} };

	UsingInt_(14)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(14), Proto_(BreakParser__TrylonCodeParser__Compiler), Proto_(CatchParser__TrylonCodeParser__Compiler), Proto_(CommentParser__TrylonCodeParser__Compiler), Proto_(ContinueParser__TrylonCodeParser__Compiler), Proto_(ElseParser__TrylonCodeParser__Compiler), Proto_(ForParser__TrylonCodeParser__Compiler), Proto_(IfParser__TrylonCodeParser__Compiler), Proto_(IffParser__TrylonCodeParser__Compiler), Proto_(LoopParser__TrylonCodeParser__Compiler), Proto_(ReturnParser__TrylonCodeParser__Compiler), Proto_(SwitchParser__TrylonCodeParser__Compiler), Proto_(ThrowParser__TrylonCodeParser__Compiler), Proto_(TryParser__TrylonCodeParser__Compiler), Proto_(WhileParser__TrylonCodeParser__Compiler) };

#define lines__fld_	(0)
#define context__fld_	(1)
#define else_target__fld_	(2)
#define cur_line__fld_	(3)
#define cur_context__fld_	(4)

DeclareSharedField_(special_forms, TrylonCodeParser__Compiler, nil)

obj_ BreakParser__TrylonCodeParser__Compiler__accessor_(obj_ this_)
{
	UsingClass_(BreakParser__TrylonCodeParser__Compiler)
	return Proto_(BreakParser__TrylonCodeParser__Compiler);
}


obj_ CatchParser__TrylonCodeParser__Compiler__accessor_(obj_ this_)
{
	UsingClass_(CatchParser__TrylonCodeParser__Compiler)
	return Proto_(CatchParser__TrylonCodeParser__Compiler);
}


obj_ CommentParser__TrylonCodeParser__Compiler__accessor_(obj_ this_)
{
	UsingClass_(CommentParser__TrylonCodeParser__Compiler)
	return Proto_(CommentParser__TrylonCodeParser__Compiler);
}


obj_ ContinueParser__TrylonCodeParser__Compiler__accessor_(obj_ this_)
{
	UsingClass_(ContinueParser__TrylonCodeParser__Compiler)
	return Proto_(ContinueParser__TrylonCodeParser__Compiler);
}


obj_ ElseParser__TrylonCodeParser__Compiler__accessor_(obj_ this_)
{
	UsingClass_(ElseParser__TrylonCodeParser__Compiler)
	return Proto_(ElseParser__TrylonCodeParser__Compiler);
}


obj_ ForParser__TrylonCodeParser__Compiler__accessor_(obj_ this_)
{
	UsingClass_(ForParser__TrylonCodeParser__Compiler)
	return Proto_(ForParser__TrylonCodeParser__Compiler);
}


obj_ IfParser__TrylonCodeParser__Compiler__accessor_(obj_ this_)
{
	UsingClass_(IfParser__TrylonCodeParser__Compiler)
	return Proto_(IfParser__TrylonCodeParser__Compiler);
}


obj_ IffParser__TrylonCodeParser__Compiler__accessor_(obj_ this_)
{
	UsingClass_(IffParser__TrylonCodeParser__Compiler)
	return Proto_(IffParser__TrylonCodeParser__Compiler);
}


obj_ LoopParser__TrylonCodeParser__Compiler__accessor_(obj_ this_)
{
	UsingClass_(LoopParser__TrylonCodeParser__Compiler)
	return Proto_(LoopParser__TrylonCodeParser__Compiler);
}


obj_ ReturnParser__TrylonCodeParser__Compiler__accessor_(obj_ this_)
{
	UsingClass_(ReturnParser__TrylonCodeParser__Compiler)
	return Proto_(ReturnParser__TrylonCodeParser__Compiler);
}


obj_ SwitchParser__TrylonCodeParser__Compiler__accessor_(obj_ this_)
{
	UsingClass_(SwitchParser__TrylonCodeParser__Compiler)
	return Proto_(SwitchParser__TrylonCodeParser__Compiler);
}


obj_ ThrowParser__TrylonCodeParser__Compiler__accessor_(obj_ this_)
{
	UsingClass_(ThrowParser__TrylonCodeParser__Compiler)
	return Proto_(ThrowParser__TrylonCodeParser__Compiler);
}


obj_ TryParser__TrylonCodeParser__Compiler__accessor_(obj_ this_)
{
	UsingClass_(TryParser__TrylonCodeParser__Compiler)
	return Proto_(TryParser__TrylonCodeParser__Compiler);
}


obj_ WhileParser__TrylonCodeParser__Compiler__accessor_(obj_ this_)
{
	UsingClass_(WhileParser__TrylonCodeParser__Compiler)
	return Proto_(WhileParser__TrylonCodeParser__Compiler);
}


obj_ attach_else_co_line_co___TrylonCodeParser__Compiler(obj_ this_, obj_ statement, obj_ line)
{
	extern obj_ new_co_in_co___ParseException__Compiler(obj_ this_, obj_ error_message, obj_ line);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "Illegal \"else\".")
	UsingMethod_(attach_else_co_line_co_) UsingMethod_(else_target) UsingMethod_(else_target_co_)
	UsingClass_(ParseException__Compiler)

		{
		t0_ = Call_(else_target, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = new_co_in_co___ParseException__Compiler(Proto_(ParseException__Compiler), Str_(0), line);
			Throw_(t0_);
			}
		t1_ = Call_(else_target, this_);
		t2_ = Call_(attach_else_co_line_co_, t1_, statement, line);
		t0_ = Call_(else_target_co_, this_, nil);
		 	/*  Because you can't have two elses. */
		}
	return nil;
}


obj_ create_co_in_co___TrylonCodeParser__Compiler(obj_ this_, obj_ lines, obj_ context)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(context_co_) UsingMethod_(cur_context_co_) UsingMethod_(initialize) UsingMethod_(lines_co_) UsingMethod_(special_forms)

		{
		t0_ = Call_(special_forms, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = Call_(initialize, this_);
			}
		t0_ = Call_(lines_co_, this_, lines);
		t0_ = Call_(context_co_, this_, context);
		t0_ = Call_(cur_context_co_, this_, context);
		}
	return nil;
}


obj_ error_co___TrylonCodeParser__Compiler(obj_ this_, obj_ message)
{
	extern obj_ new_co_in_co___ParseException__Compiler(obj_ this_, obj_ error_message, obj_ line);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(cur_line)
	UsingClass_(ParseException__Compiler)

		{
		t0_ = Call_(cur_line, this_);
		t1_ = new_co_in_co___ParseException__Compiler(Proto_(ParseException__Compiler), message, t0_);
		Throw_(t1_);
		}
	return nil;
}


obj_ get_comment_co___TrylonCodeParser__Compiler(obj_ this_, obj_ words)
{
	extern obj_ new_co_in_co___ParseException__Compiler(obj_ this_, obj_ error_message, obj_ line);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "#")
	DefineString_(1, "Extra words at end of line.")
	UsingMethod_(_eq__eq_) UsingMethod_(cur_line) UsingMethod_(is_empty) UsingMethod_(next) UsingMethod_(remainder)
	UsingClass_(ParseException__Compiler)

		{
		t0_ = Call_(is_empty, words);
		if (t0_)
			{
			return nil;
			}
		t0_ = Call_(next, words);
		t1_ = Call_(_eq__eq_, t0_, Str_(0));
		if (t1_)
			{
			t0_ = Call_(remainder, words);
			return t0_;
			}
		t1_ = Call_(cur_line, this_);
		t2_ = new_co_in_co___ParseException__Compiler(Proto_(ParseException__Compiler), Str_(1), t1_);
		Throw_(t2_);
		}
	return nil;
}


obj_ initialize__TrylonCodeParser__Compiler(obj_ this_)
{
	extern obj_ new__Dictionary__Standard(obj_ this_);
	extern obj_ new__IfParser__TrylonCodeParser__Compiler(obj_ this_);
	extern obj_ new__ElseParser__TrylonCodeParser__Compiler(obj_ this_);
	extern obj_ new__LoopParser__TrylonCodeParser__Compiler(obj_ this_);
	extern obj_ new__WhileParser__TrylonCodeParser__Compiler(obj_ this_);
	extern obj_ new__ForParser__TrylonCodeParser__Compiler(obj_ this_);
	extern obj_ new__ContinueParser__TrylonCodeParser__Compiler(obj_ this_);
	extern obj_ new__BreakParser__TrylonCodeParser__Compiler(obj_ this_);
	extern obj_ new__ReturnParser__TrylonCodeParser__Compiler(obj_ this_);
	extern obj_ new__SwitchParser__TrylonCodeParser__Compiler(obj_ this_);
	extern obj_ new__TryParser__TrylonCodeParser__Compiler(obj_ this_);
	extern obj_ new__CatchParser__TrylonCodeParser__Compiler(obj_ this_);
	extern obj_ new__ThrowParser__TrylonCodeParser__Compiler(obj_ this_);
	extern obj_ new__CommentParser__TrylonCodeParser__Compiler(obj_ this_);
	extern obj_ new__IffParser__TrylonCodeParser__Compiler(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "if")
	DefineString_(1, "else")
	DefineString_(2, "loop")
	DefineString_(3, "while")
	DefineString_(4, "for")
	DefineString_(5, "continue")
	DefineString_(6, "break")
	DefineString_(7, "return")
	DefineString_(8, "switch")
	DefineString_(9, "try")
	DefineString_(10, "catch")
	DefineString_(11, "throw")
	DefineString_(12, "#")
	DefineString_(13, "iff")
	UsingMethod_(at_co_put_co_) UsingMethod_(special_forms) UsingMethod_(special_forms_co_)
	UsingClass_(BreakParser__TrylonCodeParser__Compiler)
	UsingClass_(CatchParser__TrylonCodeParser__Compiler)
	UsingClass_(CommentParser__TrylonCodeParser__Compiler)
	UsingClass_(ContinueParser__TrylonCodeParser__Compiler)
	UsingClass_(Dictionary__Standard)
	UsingClass_(ElseParser__TrylonCodeParser__Compiler)
	UsingClass_(ForParser__TrylonCodeParser__Compiler)
	UsingClass_(IfParser__TrylonCodeParser__Compiler)
	UsingClass_(IffParser__TrylonCodeParser__Compiler)
	UsingClass_(LoopParser__TrylonCodeParser__Compiler)
	UsingClass_(ReturnParser__TrylonCodeParser__Compiler)
	UsingClass_(SwitchParser__TrylonCodeParser__Compiler)
	UsingClass_(ThrowParser__TrylonCodeParser__Compiler)
	UsingClass_(TryParser__TrylonCodeParser__Compiler)
	UsingClass_(WhileParser__TrylonCodeParser__Compiler)

		{
		t0_ = new__Dictionary__Standard(Proto_(Dictionary__Standard));
		t1_ = Call_(special_forms_co_, this_, t0_);
		t0_ = Call_(special_forms, this_);
		t1_ = new__IfParser__TrylonCodeParser__Compiler(Proto_(IfParser__TrylonCodeParser__Compiler));
		t2_ = Call_(at_co_put_co_, t0_, Str_(0), t1_);
		t0_ = Call_(special_forms, this_);
		t1_ = new__ElseParser__TrylonCodeParser__Compiler(Proto_(ElseParser__TrylonCodeParser__Compiler));
		t2_ = Call_(at_co_put_co_, t0_, Str_(1), t1_);
		t0_ = Call_(special_forms, this_);
		t1_ = new__LoopParser__TrylonCodeParser__Compiler(Proto_(LoopParser__TrylonCodeParser__Compiler));
		t2_ = Call_(at_co_put_co_, t0_, Str_(2), t1_);
		t0_ = Call_(special_forms, this_);
		t1_ = new__WhileParser__TrylonCodeParser__Compiler(Proto_(WhileParser__TrylonCodeParser__Compiler));
		t2_ = Call_(at_co_put_co_, t0_, Str_(3), t1_);
		t0_ = Call_(special_forms, this_);
		t1_ = new__ForParser__TrylonCodeParser__Compiler(Proto_(ForParser__TrylonCodeParser__Compiler));
		t2_ = Call_(at_co_put_co_, t0_, Str_(4), t1_);
		t0_ = Call_(special_forms, this_);
		t1_ = new__ContinueParser__TrylonCodeParser__Compiler(Proto_(ContinueParser__TrylonCodeParser__Compiler));
		t2_ = Call_(at_co_put_co_, t0_, Str_(5), t1_);
		t0_ = Call_(special_forms, this_);
		t1_ = new__BreakParser__TrylonCodeParser__Compiler(Proto_(BreakParser__TrylonCodeParser__Compiler));
		t2_ = Call_(at_co_put_co_, t0_, Str_(6), t1_);
		t0_ = Call_(special_forms, this_);
		t1_ = new__ReturnParser__TrylonCodeParser__Compiler(Proto_(ReturnParser__TrylonCodeParser__Compiler));
		t2_ = Call_(at_co_put_co_, t0_, Str_(7), t1_);
		t0_ = Call_(special_forms, this_);
		t1_ = new__SwitchParser__TrylonCodeParser__Compiler(Proto_(SwitchParser__TrylonCodeParser__Compiler));
		t2_ = Call_(at_co_put_co_, t0_, Str_(8), t1_);
		t0_ = Call_(special_forms, this_);
		t1_ = new__TryParser__TrylonCodeParser__Compiler(Proto_(TryParser__TrylonCodeParser__Compiler));
		t2_ = Call_(at_co_put_co_, t0_, Str_(9), t1_);
		t0_ = Call_(special_forms, this_);
		t1_ = new__CatchParser__TrylonCodeParser__Compiler(Proto_(CatchParser__TrylonCodeParser__Compiler));
		t2_ = Call_(at_co_put_co_, t0_, Str_(10), t1_);
		t0_ = Call_(special_forms, this_);
		t1_ = new__ThrowParser__TrylonCodeParser__Compiler(Proto_(ThrowParser__TrylonCodeParser__Compiler));
		t2_ = Call_(at_co_put_co_, t0_, Str_(11), t1_);
		t0_ = Call_(special_forms, this_);
		t1_ = new__CommentParser__TrylonCodeParser__Compiler(Proto_(CommentParser__TrylonCodeParser__Compiler));
		t2_ = Call_(at_co_put_co_, t0_, Str_(12), t1_);
		t0_ = Call_(special_forms, this_);
		t1_ = new__IffParser__TrylonCodeParser__Compiler(Proto_(IffParser__TrylonCodeParser__Compiler));
		t2_ = Call_(at_co_put_co_, t0_, Str_(13), t1_);
		}
	return nil;
}


obj_ new_co_in_co___TrylonCodeParser__Compiler(obj_ this_, obj_ lines, obj_ context)
{
	UsingClass_(TrylonCodeParser__Compiler)
	obj_ obj = AllocObj_(TrylonCodeParser__Compiler);
	create_co_in_co___TrylonCodeParser__Compiler(obj, lines, context);
	return obj;
}


obj_ parse__TrylonCodeParser__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(lines) UsingMethod_(parse_block_co_)

		{
		t0_ = Call_(lines, this_);
		t1_ = Call_(parse_block_co_, this_, t0_);
		return t1_;
		}
	return nil;
}


obj_ parse_block_co___TrylonCodeParser__Compiler(obj_ this_, obj_ lines)
{
	extern obj_ new_co___Block__Compiler(obj_ this_, obj_ parent);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(append_co_) UsingMethod_(cur_context) UsingMethod_(cur_context_co_) UsingMethod_(cur_line_co_) UsingMethod_(current_item) UsingMethod_(else_target) UsingMethod_(else_target_co_) UsingMethod_(go_forward) UsingMethod_(ignored_for_else) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(parse_line_co_)
	UsingClass_(Block__Compiler)

		{
		obj_ block, old_context, old_else_target;
		t0_ = Call_(cur_context, this_);
		t1_ = new_co___Block__Compiler(Proto_(Block__Compiler), t0_);
		block = t1_;
		t0_ = Call_(cur_context, this_);
		old_context = t0_;
		t0_ = Call_(cur_context_co_, this_, block);
		t0_ = Call_(else_target, this_);
		old_else_target = t0_;
		ForStart_(0, lines, line)
			{
			obj_ statement;
			t0_ = Call_(cur_line_co_, this_, line);
			t0_ = Call_(parse_line_co_, this_, line);
			statement = t0_;
			if (statement)
				{
				t0_ = Call_(ignored_for_else, statement);
				t1_ = Not_(t0_);
				if (t1_)
					{
					t0_ = Call_(else_target_co_, this_, statement);
					}
				t0_ = Call_(append_co_, block, statement);
				}
			}
		ForEnd_(0)
		t0_ = Call_(cur_context_co_, this_, old_context);
		t0_ = Call_(else_target_co_, this_, old_else_target);
		return block;
		}
	return nil;
}


obj_ parse_expression_co___TrylonCodeParser__Compiler(obj_ this_, obj_ words)
{
	extern obj_ new_co_line_co_context_co___TrylonExpressionParser__Compiler(obj_ this_, obj_ words, obj_ line, obj_ context);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "Missing expression.")
	UsingMethod_(cur_context) UsingMethod_(cur_line) UsingMethod_(error_co_) UsingMethod_(parse_expression)
	UsingClass_(TrylonExpressionParser__Compiler)

		{
		obj_ expression;
		t0_ = Call_(cur_line, this_);
		t1_ = Call_(cur_context, this_);
		t2_ = new_co_line_co_context_co___TrylonExpressionParser__Compiler(Proto_(TrylonExpressionParser__Compiler), words, t0_, t1_);
		t3_ = Call_(parse_expression, t2_);
		expression = t3_;
		t0_ = Not_(expression);
		if (t0_)
			{
			t0_ = Call_(error_co_, this_, Str_(0));
			}
		return expression;
		}
	return nil;
}


obj_ parse_line_co___TrylonCodeParser__Compiler(obj_ this_, obj_ line)
{
	extern obj_ new__BlankLine__Compiler(obj_ this_);
	extern obj_ new_co___Comment__Compiler(obj_ this_, obj_ text);
	extern obj_ new_co_line_co_context_co___TrylonExpressionParser__Compiler(obj_ this_, obj_ words, obj_ line, obj_ context);
	extern obj_ new_co_comment_co___ExpressionStatement__Compiler(obj_ this_, obj_ expression, obj_ comment);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineString_(0, "#")
	UsingMethod_(at_co_) UsingMethod_(cur_context) UsingMethod_(current) UsingMethod_(get_comment_co_) UsingMethod_(is_done) UsingMethod_(next) UsingMethod_(parse_expression) UsingMethod_(parse_co_line_co_parser_co_) UsingMethod_(peek) UsingMethod_(remainder) UsingMethod_(special_forms) UsingMethod_(starts_with_co_) UsingMethod_(words)
	UsingClass_(BlankLine__Compiler)
	UsingClass_(Comment__Compiler)
	UsingClass_(ExpressionStatement__Compiler)
	UsingClass_(TrylonExpressionParser__Compiler)

		{
		obj_ comment, expression, syntax, words;
		t0_ = Call_(words, line);
		words = t0_;
		t0_ = Call_(is_done, words);
		if (t0_)
			{
			t0_ = new__BlankLine__Compiler(Proto_(BlankLine__Compiler));
			return t0_;
			}
		
		/*  Is it a special form? */
		t1_ = Call_(special_forms, this_);
		t2_ = Call_(current, words);
		t3_ = Call_(at_co_, t1_, t2_);
		syntax = t3_;
		if (syntax)
			{
			t0_ = Call_(next, words);
			t0_ = Call_(parse_co_line_co_parser_co_, syntax, words, line, this_);
			return t0_;
			}
		
		/*  Handle "#" that isn't a standalone word. */
		t1_ = Call_(peek, words);
		t2_ = Call_(starts_with_co_, t1_, Str_(0));
		if (t2_)
			{
			t0_ = Call_(remainder, words);
			t1_ = new_co___Comment__Compiler(Proto_(Comment__Compiler), t0_);
			return t1_;
			}
		
		/*  Otherwise, it's an expression. */
		/*  It could be an assignment with a block on the RHS, so we give the block too. */
		t2_ = Call_(cur_context, this_);
		t3_ = new_co_line_co_context_co___TrylonExpressionParser__Compiler(Proto_(TrylonExpressionParser__Compiler), words, line, t2_);
		t4_ = Call_(parse_expression, t3_);
		expression = t4_;
		t0_ = Call_(get_comment_co_, this_, words);
		comment = t0_;
		t0_ = new_co_comment_co___ExpressionStatement__Compiler(Proto_(ExpressionStatement__Compiler), expression, comment);
		return t0_;
		}
	return nil;
}


obj_ parse_optional_expression_co___TrylonCodeParser__Compiler(obj_ this_, obj_ words)
{
	extern obj_ new_co_line_co_context_co___TrylonExpressionParser__Compiler(obj_ this_, obj_ words, obj_ line, obj_ context);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(cur_context) UsingMethod_(cur_line) UsingMethod_(parse_expression)
	UsingClass_(TrylonExpressionParser__Compiler)

		{
		t0_ = Call_(cur_line, this_);
		t1_ = Call_(cur_context, this_);
		t2_ = new_co_line_co_context_co___TrylonExpressionParser__Compiler(Proto_(TrylonExpressionParser__Compiler), words, t0_, t1_);
		t3_ = Call_(parse_expression, t2_);
		return t3_;
		}
	return nil;
}


obj_ pop_context_co___TrylonCodeParser__Compiler(obj_ this_, obj_ context)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(cur_context_co_) UsingMethod_(parent)

		{
		t0_ = Call_(parent, context);
		t1_ = Call_(cur_context_co_, this_, t0_);
		}
	return nil;
}


obj_ push_context_co___TrylonCodeParser__Compiler(obj_ this_, obj_ context)
{
	obj_ t0_;
	UsingMethod_(cur_context_co_)

		{
		t0_ = Call_(cur_context_co_, this_, context);
		}
	return nil;
}


obj_ special_forms__TrylonCodeParser__Compiler(obj_ this_)
{
	return SharedField_(special_forms, TrylonCodeParser__Compiler);
}


obj_ special_forms_co___TrylonCodeParser__Compiler(obj_ this_, obj_ value)
{
	SetSharedField_(special_forms, TrylonCodeParser__Compiler, value);
	return value;
}


