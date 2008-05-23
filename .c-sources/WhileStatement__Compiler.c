#include "Trylon_.h"

UsingSym_(WhileStatement)UsingClass_(Compiler)
UsingClass_(Statement__Compiler)
UsingClass_(WhileStatement__Compiler)
struct ClassInfo WhileStatement__Compiler__classInfo_ = 
	{ 133, 16, Proto_(WhileStatement__Compiler), Proto_(Compiler), Proto_(Statement__Compiler), nil, Sym_(WhileStatement) ,nil };
struct object WhileStatement__Compiler = 
	{ &WhileStatement__Compiler__classInfo_, {nil, nil, nil, nil} };


#define comment__fld_	(0)

#define condition__fld_	(1)
#define body__fld_	(2)
#define index__fld_	(3)


obj_ body__WhileStatement__Compiler(obj_ this_)
{
	return Field_(body);
}


obj_ body_co___WhileStatement__Compiler(obj_ this_, obj_ value)
{
	Field_(body) = value;
	return value;
}


obj_ condition__WhileStatement__Compiler(obj_ this_)
{
	return Field_(condition);
}


obj_ condition_co___WhileStatement__Compiler(obj_ this_, obj_ value)
{
	Field_(condition) = value;
	return value;
}


obj_ create_co_body_co_comment_co___WhileStatement__Compiler(obj_ this_, obj_ condition, obj_ body, obj_ comment)
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


obj_ emit_code_co___WhileStatement__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineString_(0, "while (1) {")
	DefineString_(1, "ContinuePoint_(")
	DefineString_(2, ")")
	DefineString_(3, "if (!(")
	DefineString_(4, "))")
	DefineString_(5, "\tBreak_(")
	DefineString_(6, ")")
	DefineString_(7, "\t}")
	UsingMethod_(_pl_) UsingMethod_(access) UsingMethod_(add_comment_co_) UsingMethod_(add_line_co_) UsingMethod_(body) UsingMethod_(condition) UsingMethod_(emit_code_co_) UsingMethod_(end_loop) UsingMethod_(indent) UsingMethod_(index) UsingMethod_(reset_temporaries) UsingMethod_(start_loop_co_) UsingMethod_(string) UsingMethod_(unindent)

		{
		obj_ cond_result;
		t0_ = Call_(start_loop_co_, builder, this_);
		t0_ = Call_(add_comment_co_, this_, Str_(0));
		t1_ = Call_(add_line_co_, builder, t0_);
		t0_ = Call_(indent, builder);
		t0_ = Call_(index, this_);
		t1_ = Call_(string, t0_);
		t2_ = Call_(_pl_, Str_(1), t1_);
		t3_ = Call_(_pl_, t2_, Str_(2));
		t4_ = Call_(add_line_co_, builder, t3_);
		t0_ = Call_(condition, this_);
		t1_ = Call_(emit_code_co_, t0_, builder);
		cond_result = t1_;
		t0_ = Call_(access, cond_result);
		t1_ = Call_(_pl_, Str_(3), t0_);
		t2_ = Call_(_pl_, t1_, Str_(4));
		t3_ = Call_(add_line_co_, builder, t2_);
		t0_ = Call_(index, this_);
		t1_ = Call_(string, t0_);
		t2_ = Call_(_pl_, Str_(5), t1_);
		t3_ = Call_(_pl_, t2_, Str_(6));
		t4_ = Call_(add_line_co_, builder, t3_);
		t0_ = Call_(reset_temporaries, builder);
		t0_ = Call_(unindent, builder);
		t0_ = Call_(body, this_);
		t1_ = Call_(emit_code_co_, t0_, builder);
		t0_ = Call_(add_line_co_, builder, Str_(7));
		t0_ = Call_(end_loop, builder);
		
		
		}
	return nil;
}


obj_ index__WhileStatement__Compiler(obj_ this_)
{
	return Field_(index);
}


obj_ index_co___WhileStatement__Compiler(obj_ this_, obj_ value)
{
	Field_(index) = value;
	return value;
}


obj_ interpreted__WhileStatement__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_nt__eq_) UsingMethod_(body) UsingMethod_(condition) UsingMethod_(interpreted)
	UsingClass_(Continue__Statements__Interpreter)
	UsingClass_(Break__Statements__Interpreter)

		{
		Try_
			{
			while (1) {
				ContinuePoint_(0)
				t0_ = Call_(condition, this_);
				t1_ = Call_(interpreted, t0_);
				if (!(t1_))
					Break_(0)
				{
				Try_
					{
					t0_ = Call_(body, this_);
					t1_ = Call_(interpreted, t0_);
					}
				TryElse_
					{
					t0_ = Call_(_nt__eq_, exception, Proto_(Continue__Statements__Interpreter));
					if (t0_)
						{
						Throw_(exception);
						}
					}
				EndTry_
				}
				}
			}
		TryElse_
			{
			t0_ = Call_(_nt__eq_, exception, Proto_(Break__Statements__Interpreter));
			if (t0_)
				{
				Throw_(exception);
				
				}
			}
		EndTry_
		}
	return nil;
}


obj_ jolt_expression__WhileStatement__Compiler(obj_ this_)
{
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	UsingSym_(while)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineInt_(0, 3)
	DefineInt_(1, 1)
	DefineInt_(2, 0)
	DefineInt_(3, 1)
	DefineInt_(4, 2)
	DefineInt_(5, 1)
	UsingMethod_(_pl_) UsingMethod_(at_co_put_co_) UsingMethod_(body) UsingMethod_(comment) UsingMethod_(condition) UsingMethod_(index) UsingMethod_(index_co_) UsingMethod_(jolt_expression)
	UsingClass_(Expression)

		{
		obj_ expression, expression_size;
		expression_size = Int_(0);
		t0_ = Call_(comment, this_);
		if (t0_)
			{
			t0_ = Call_(_pl_, expression_size, Int_(1));
			expression_size = t0_;
			}
		t0_ = new_co___Expression(Proto_(Expression), expression_size);
		expression = t0_;
		t0_ = Call_(at_co_put_co_, expression, Int_(2), Sym_(while));
		t0_ = Call_(condition, this_);
		t1_ = Call_(jolt_expression, t0_);
		t2_ = Call_(at_co_put_co_, expression, Int_(3), t1_);
		t0_ = Call_(index_co_, this_, Int_(4));
		t0_ = Call_(comment, this_);
		if (t0_)
			{
			t0_ = Call_(index, this_);
			t1_ = Call_(comment, this_);
			t2_ = Call_(jolt_expression, t1_);
			t3_ = Call_(at_co_put_co_, expression, t0_, t2_);
			t0_ = Call_(index, this_);
			t1_ = Call_(_pl_, t0_, Int_(5));
			t2_ = Call_(index_co_, this_, t1_);
			}
		t0_ = Call_(index, this_);
		t1_ = Call_(body, this_);
		t2_ = Call_(jolt_expression, t1_);
		t3_ = Call_(at_co_put_co_, expression, t0_, t2_);
		return expression;
		
		}
	return nil;
}


obj_ new_co_body_co_comment_co___WhileStatement__Compiler(obj_ this_, obj_ condition, obj_ body, obj_ comment)
{
	UsingClass_(WhileStatement__Compiler)
	obj_ obj = AllocObj_(WhileStatement__Compiler);
	create_co_body_co_comment_co___WhileStatement__Compiler(obj, condition, body, comment);
	return obj;
}


obj_ prepare_to_emit__WhileStatement__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(body) UsingMethod_(condition) UsingMethod_(prepare_to_emit)

		{
		t0_ = Call_(condition, this_);
		t1_ = Call_(prepare_to_emit, t0_);
		t0_ = Call_(body, this_);
		t1_ = Call_(prepare_to_emit, t0_);
		
		
		
		
		}
	return nil;
}


obj_ translate_co___WhileStatement__Compiler(obj_ this_, obj_ compiler)
{
	extern obj_ with_co_with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2, obj_ value_3);
	UsingSym_(while)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(body) UsingMethod_(condition) UsingMethod_(translateExpression_co_)
	UsingClass_(Expression)

		{
		obj_ expr;
		t0_ = Call_(condition, this_);
		t1_ = Call_(body, this_);
		t2_ = with_co_with_co_with_co___Expression(Proto_(Expression), Sym_(while), t0_, t1_);
		expr = t2_;
		t0_ = Call_(translateExpression_co_, compiler, expr);
		return t0_;
		
		
		}
	return nil;
}


