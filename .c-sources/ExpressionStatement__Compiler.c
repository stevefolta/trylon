#include "Trylon_.h"

UsingSym_(ExpressionStatement)UsingClass_(Compiler)
UsingClass_(Statement__Compiler)
UsingClass_(ExpressionStatement__Compiler)
struct ClassInfo ExpressionStatement__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 141, 2, Proto_(ExpressionStatement__Compiler), Proto_(Compiler), Proto_(Statement__Compiler), nil, Sym_(ExpressionStatement), nil, nil };
struct object ExpressionStatement__Compiler = 
	{ &ExpressionStatement__Compiler__classInfo_, {nil, nil} };


#define comment__fld_	(0)

#define expression__fld_	(1)


obj_ compile_co___ExpressionStatement__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	UsingMethod_(compile_expression_statement_co_)

		{
		t0_ = Call_(compile_expression_statement_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ create_co___ExpressionStatement__Compiler(obj_ this_, obj_ expression)
{
	obj_ t0_;
	UsingMethod_(expression_co_)

		{
		t0_ = Call_(expression_co_, this_, expression);
		}
	return nil;
}


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


obj_ new_co___ExpressionStatement__Compiler(obj_ this_, obj_ expression)
{
	UsingClass_(ExpressionStatement__Compiler)
	obj_ obj = AllocObj_(ExpressionStatement__Compiler);
	create_co___ExpressionStatement__Compiler(obj, expression);
	return obj;
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


