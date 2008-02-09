#include "Trylon_.h"

UsingSym_(ExpressionStatement)UsingClass_(Compiler)
UsingClass_(Statement__Compiler)
UsingClass_(ExpressionStatement__Compiler)
struct ClassInfo ExpressionStatement__Compiler__classInfo_ = 
	{ 125, 8, Proto_(ExpressionStatement__Compiler), Proto_(Compiler), Proto_(Statement__Compiler), nil, Sym_(ExpressionStatement) ,nil };
struct object ExpressionStatement__Compiler = 
	{ &ExpressionStatement__Compiler__classInfo_, {nil, nil} };


#define comment__fld_	(0)

#define expression__fld_	(1)


obj_ create_co_comment_co___ExpressionStatement__Compiler(obj_ this_, obj_ expression, obj_ comment)
{
	obj_ t0_;
	UsingMethod_(comment_co_) UsingMethod_(expression_co_)

		{
		t0_ = Call_(expression_co_, this_, expression);
		t0_ = Call_(comment_co_, this_, comment);
		
		
		}
	return nil;
}


obj_ emit_code_co___ExpressionStatement__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "")
	UsingMethod_(add_comment_co_) UsingMethod_(add_line_co_) UsingMethod_(comment) UsingMethod_(emit_code_co_) UsingMethod_(expression) UsingMethod_(reset_temporaries)

		{
		t0_ = Call_(expression, this_);
		t1_ = Call_(emit_code_co_, t0_, builder);
		t0_ = Call_(reset_temporaries, builder);
		t0_ = Call_(comment, this_);
		if (t0_)
			{
			t0_ = Call_(add_comment_co_, this_, Str_(0));
			t1_ = Call_(add_line_co_, builder, t0_);
			
			
			}
		}
	return nil;
}


obj_ expression__ExpressionStatement__Compiler(obj_ this_)
{
	return Field_(expression);
}


obj_ expression_co___ExpressionStatement__Compiler(obj_ this_, obj_ value)
{
	Field_(expression) = value;
	return value;
}


obj_ interpreted__ExpressionStatement__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(expression) UsingMethod_(interpreted)

		{
		t0_ = Call_(expression, this_);
		t1_ = Call_(interpreted, t0_);
		return t1_;
		
		}
	return nil;
}


obj_ jolt_expression__ExpressionStatement__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	UsingMethod_(comment) UsingMethod_(expression) UsingMethod_(jolt_expression)
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(comment)
	extern obj_ with_co_with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2, obj_ value_3);
	UsingSym_(begin)
	UsingClass_(Expression)

		{
		t0_ = Call_(comment, this_);
		if (t0_)
			{
			obj_ comment_expression;
			t0_ = Call_(comment, this_);
			t1_ = with_co_with_co___Expression(Proto_(Expression), Sym_(comment), t0_);
			comment_expression = t1_;
			t0_ = Call_(expression, this_);
			t1_ = Call_(jolt_expression, t0_);
			t2_ = with_co_with_co_with_co___Expression(Proto_(Expression), Sym_(begin), t1_, comment_expression);
			return t2_;
			}
		else
			{
			t3_ = Call_(expression, this_);
			t4_ = Call_(jolt_expression, t3_);
			return t4_;
			
			}
		}
	return nil;
}


obj_ new_co_comment_co___ExpressionStatement__Compiler(obj_ this_, obj_ expression, obj_ comment)
{
	UsingClass_(ExpressionStatement__Compiler)
	obj_ obj = AllocObj_(ExpressionStatement__Compiler);
	create_co_comment_co___ExpressionStatement__Compiler(obj, expression, comment);
	return obj;
}


obj_ prepare_to_emit__ExpressionStatement__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(expression) UsingMethod_(prepare_to_emit)

		{
		t0_ = Call_(expression, this_);
		t1_ = Call_(prepare_to_emit, t0_);
		
		
		
		
		}
	return nil;
}


obj_ translate_co___ExpressionStatement__Compiler(obj_ this_, obj_ compiler)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(expression) UsingMethod_(translate_co_)

		{
		t0_ = Call_(expression, this_);
		t1_ = Call_(translate_co_, t0_, compiler);
		return t1_;
		
		
		}
	return nil;
}


