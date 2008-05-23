#include "Trylon_.h"

UsingSym_(IfStatement)UsingClass_(Compiler)
UsingClass_(Statement__Compiler)
UsingClass_(IfStatement__Compiler)
struct ClassInfo IfStatement__Compiler__classInfo_ = 
	{ 131, 24, Proto_(IfStatement__Compiler), Proto_(Compiler), Proto_(Statement__Compiler), nil, Sym_(IfStatement) ,nil };
struct object IfStatement__Compiler = 
	{ &IfStatement__Compiler__classInfo_, {nil, nil, nil, nil, nil, nil} };


#define comment__fld_	(0)

#define condition__fld_	(1)
#define body__fld_	(2)
#define else_block__fld_	(3)
#define else_comment__fld_	(4)
#define pre_else_comments__fld_	(5)


obj_ attach_else_co_line_co___IfStatement__Compiler(obj_ this_, obj_ statement, obj_ line)
{
	obj_ t0_;
	UsingMethod_(else_block_co_)

		{
		t0_ = Call_(else_block_co_, this_, statement);
		
		
		}
	return nil;
}


obj_ body__IfStatement__Compiler(obj_ this_)
{
	return Field_(body);
}


obj_ body_co___IfStatement__Compiler(obj_ this_, obj_ value)
{
	Field_(body) = value;
	return value;
}


obj_ condition__IfStatement__Compiler(obj_ this_)
{
	return Field_(condition);
}


obj_ condition_co___IfStatement__Compiler(obj_ this_, obj_ value)
{
	Field_(condition) = value;
	return value;
}


obj_ create_co_body_co_comment_co___IfStatement__Compiler(obj_ this_, obj_ condition, obj_ body, obj_ comment)
{
	obj_ t0_;
	UsingMethod_(body_co_) UsingMethod_(comment_co_) UsingMethod_(condition_co_)

		{
		t0_ = Call_(condition_co_, this_, condition);
		t0_ = Call_(body_co_, this_, body);
		t0_ = Call_(comment_co_, this_, comment);
		
		
		}
	return nil;
}


obj_ create_co_body_co_else_block_co_comment_co_else_comment_co_pre_else_comments_co___IfStatement__Compiler(obj_ this_, obj_ condition, obj_ body, obj_ else_block, obj_ comment, obj_ else_comment, obj_ pre_else_comments)
{
	obj_ t0_;
	UsingMethod_(body_co_) UsingMethod_(comment_co_) UsingMethod_(condition_co_) UsingMethod_(else_block_co_) UsingMethod_(else_comment_co_) UsingMethod_(pre_else_comments_co_)

		{
		t0_ = Call_(condition_co_, this_, condition);
		t0_ = Call_(body_co_, this_, body);
		t0_ = Call_(else_block_co_, this_, else_block);
		t0_ = Call_(comment_co_, this_, comment);
		t0_ = Call_(else_comment_co_, this_, else_comment);
		t0_ = Call_(pre_else_comments_co_, this_, pre_else_comments);
		
		}
	return nil;
}


obj_ else_block__IfStatement__Compiler(obj_ this_)
{
	return Field_(else_block);
}


obj_ else_block_co___IfStatement__Compiler(obj_ this_, obj_ value)
{
	Field_(else_block) = value;
	return value;
}


obj_ else_comment__IfStatement__Compiler(obj_ this_)
{
	return Field_(else_comment);
}


obj_ else_comment_co___IfStatement__Compiler(obj_ this_, obj_ value)
{
	Field_(else_comment) = value;
	return value;
}


obj_ emit_code_co___IfStatement__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineString_(0, "if (")
	DefineString_(1, ")")
	DefineString_(2, "else")
	UsingMethod_(_pl_) UsingMethod_(access) UsingMethod_(add_comment_co_) UsingMethod_(add_comment_co_comment_co_) UsingMethod_(add_line_co_) UsingMethod_(body) UsingMethod_(condition) UsingMethod_(current_item) UsingMethod_(else_block) UsingMethod_(else_comment) UsingMethod_(emit_code_co_) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(pre_else_comments) UsingMethod_(reset_temporaries)

		{
		obj_ cond_result;
		t0_ = Call_(condition, this_);
		t1_ = Call_(emit_code_co_, t0_, builder);
		cond_result = t1_;
		t0_ = Call_(access, cond_result);
		t1_ = Call_(_pl_, Str_(0), t0_);
		t2_ = Call_(_pl_, t1_, Str_(1));
		t3_ = Call_(add_comment_co_, this_, t2_);
		t4_ = Call_(add_line_co_, builder, t3_);
		t0_ = Call_(reset_temporaries, builder);
		t0_ = Call_(body, this_);
		t1_ = Call_(emit_code_co_, t0_, builder);
		t0_ = Call_(pre_else_comments, this_);
		if (t0_)
			{
			t0_ = Call_(pre_else_comments, this_);
			ForStart_(0, t0_, statement)
				{
				t0_ = Call_(emit_code_co_, statement, builder);
				}
			ForEnd_(0)
			}
		t0_ = Call_(else_block, this_);
		if (t0_)
			{
			t0_ = Call_(else_comment, this_);
			t1_ = Call_(add_comment_co_comment_co_, this_, Str_(2), t0_);
			t2_ = Call_(add_line_co_, builder, t1_);
			t0_ = Call_(else_block, this_);
			t1_ = Call_(emit_code_co_, t0_, builder);
			
			
			}
		}
	return nil;
}


obj_ interpreted__IfStatement__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(body) UsingMethod_(condition) UsingMethod_(else_block) UsingMethod_(interpreted)

		{
		t0_ = Call_(condition, this_);
		t1_ = Call_(interpreted, t0_);
		if (t1_)
			{
			t0_ = Call_(body, this_);
			t1_ = Call_(interpreted, t0_);
			return t1_;
			}
		else
			{
			t2_ = Call_(else_block, this_);
			if (t2_)
				{
				t0_ = Call_(else_block, this_);
				t1_ = Call_(interpreted, t0_);
				return t1_;
				}
			}
		return nil;
		
		
		}
	return nil;
}


obj_ jolt_expression__IfStatement__Compiler(obj_ this_)
{
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	UsingSym_(begin)
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(comment)
	UsingSym_(nil)
	extern obj_ with_co_with_co_with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2, obj_ value_3, obj_ value_4);
	UsingSym_(if)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineInt_(0, 2)
	DefineInt_(1, 1)
	DefineInt_(2, 2)
	DefineInt_(3, 0)
	DefineInt_(4, 1)
	DefineInt_(5, 1)
	DefineInt_(6, 1)
	UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(at_co_put_co_) UsingMethod_(body) UsingMethod_(condition) UsingMethod_(count) UsingMethod_(current_item) UsingMethod_(else_block) UsingMethod_(else_comment) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(jolt_expression) UsingMethod_(pre_else_comments)
	UsingClass_(Expression)

		{
		obj_ else_expression;
		else_expression = nil;
		t0_ = Call_(else_block, this_);
		if (t0_)
			{
			obj_ size;
			size = Int_(0);
			t0_ = Call_(pre_else_comments, this_);
			if (t0_)
				{
				t0_ = Call_(pre_else_comments, this_);
				t1_ = Call_(count, t0_);
				t2_ = Call_(_pl_, size, t1_);
				size = t2_;
				}
			t0_ = Call_(else_comment, this_);
			if (t0_)
				{
				t0_ = Call_(_pl_, size, Int_(1));
				size = t0_;
				}
			t0_ = Call_(_eq__eq_, size, Int_(2));
			if (t0_)
				{
				/* No comments. */
				t0_ = Call_(else_block, this_);
				t1_ = Call_(jolt_expression, t0_);
				else_expression = t1_;
				}
			else
				{
				obj_ index;
				t0_ = new_co___Expression(Proto_(Expression), size);
				else_expression = t0_;
				t0_ = Call_(at_co_put_co_, else_expression, Int_(3), Sym_(begin));
				index = Int_(4);
				t0_ = Call_(pre_else_comments, this_);
				if (t0_)
					{
					t0_ = Call_(pre_else_comments, this_);
					ForStart_(0, t0_, statement)
						{
						t0_ = Call_(jolt_expression, statement);
						t1_ = Call_(at_co_put_co_, else_expression, index, t0_);
						t0_ = Call_(_pl_, index, Int_(5));
						index = t0_;
						}
					ForEnd_(0)
					}
				t0_ = Call_(else_comment, this_);
				if (t0_)
					{
					t0_ = Call_(else_comment, this_);
					t1_ = with_co_with_co___Expression(Proto_(Expression), Sym_(comment), t0_);
					t2_ = Call_(at_co_put_co_, else_expression, index, t1_);
					t0_ = Call_(_pl_, index, Int_(6));
					index = t0_;
					}
				t0_ = Call_(else_block, this_);
				t1_ = Call_(jolt_expression, t0_);
				t2_ = Call_(at_co_put_co_, else_expression, index, t1_);
				}
			}
		else
			{
			else_expression = Sym_(nil);
			
			}
		t0_ = Call_(condition, this_);
		t1_ = Call_(jolt_expression, t0_);
		t2_ = Call_(body, this_);
		t3_ = Call_(jolt_expression, t2_);
		t4_ = with_co_with_co_with_co_with_co___Expression(Proto_(Expression), Sym_(if), t1_, t3_, else_expression);
		return t4_;
		
		}
	return nil;
}


obj_ new_co_body_co_comment_co___IfStatement__Compiler(obj_ this_, obj_ condition, obj_ body, obj_ comment)
{
	UsingClass_(IfStatement__Compiler)
	obj_ obj = AllocObj_(IfStatement__Compiler);
	create_co_body_co_comment_co___IfStatement__Compiler(obj, condition, body, comment);
	return obj;
}


obj_ new_co_body_co_else_block_co_comment_co_else_comment_co_pre_else_comments_co___IfStatement__Compiler(obj_ this_, obj_ condition, obj_ body, obj_ else_block, obj_ comment, obj_ else_comment, obj_ pre_else_comments)
{
	UsingClass_(IfStatement__Compiler)
	obj_ obj = AllocObj_(IfStatement__Compiler);
	create_co_body_co_else_block_co_comment_co_else_comment_co_pre_else_comments_co___IfStatement__Compiler(obj, condition, body, else_block, comment, else_comment, pre_else_comments);
	return obj;
}


obj_ pre_else_comments__IfStatement__Compiler(obj_ this_)
{
	return Field_(pre_else_comments);
}


obj_ pre_else_comments_co___IfStatement__Compiler(obj_ this_, obj_ value)
{
	Field_(pre_else_comments) = value;
	return value;
}


obj_ prepare_to_emit__IfStatement__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(body) UsingMethod_(condition) UsingMethod_(else_block) UsingMethod_(prepare_to_emit)

		{
		t0_ = Call_(condition, this_);
		t1_ = Call_(prepare_to_emit, t0_);
		t0_ = Call_(body, this_);
		t1_ = Call_(prepare_to_emit, t0_);
		t0_ = Call_(else_block, this_);
		if (t0_)
			{
			t0_ = Call_(else_block, this_);
			t1_ = Call_(prepare_to_emit, t0_);
			
			
			
			
			}
		}
	return nil;
}


obj_ translate_co___IfStatement__Compiler(obj_ this_, obj_ compiler)
{
	UsingSym_(nil)
	extern obj_ with_co_with_co_with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2, obj_ value_3, obj_ value_4);
	UsingSym_(if)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(body) UsingMethod_(condition) UsingMethod_(else_block) UsingMethod_(translateExpression_co_)
	UsingClass_(Expression)

		{
		obj_ else_expr, expr;
		t0_ = Call_(else_block, this_);
		else_expr = t0_;
		t0_ = Call_(else_block, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			else_expr = Sym_(nil);
			}
		t0_ = Call_(condition, this_);
		t1_ = Call_(body, this_);
		t2_ = with_co_with_co_with_co_with_co___Expression(Proto_(Expression), Sym_(if), t0_, t1_, else_expr);
		expr = t2_;
		t0_ = Call_(translateExpression_co_, compiler, expr);
		return t0_;
		
		
		}
	return nil;
}


