#include "Trylon_.h"

UsingSym_(CatchClause)UsingClass_(Compiler)
UsingClass_(Context__Compiler)
UsingClass_(CatchClause__Compiler)
struct ClassInfo CatchClause__Compiler__classInfo_ = 
	{ 75, 16, Proto_(CatchClause__Compiler), Proto_(Compiler), Proto_(Context__Compiler), nil, Sym_(CatchClause) ,nil };
struct object CatchClause__Compiler = 
	{ &CatchClause__Compiler__classInfo_, {nil, nil, nil, nil} };



#define body__fld_	(0)
#define parent__fld_	(1)
#define comment__fld_	(2)
#define pre_clause_comments__fld_	(3)


obj_ body__CatchClause__Compiler(obj_ this_)
{
	return Field_(body);
}


obj_ body_co___CatchClause__Compiler(obj_ this_, obj_ value)
{
	Field_(body) = value;
	return value;
}


obj_ comment__CatchClause__Compiler(obj_ this_)
{
	return Field_(comment);
}


obj_ comment_co___CatchClause__Compiler(obj_ this_, obj_ value)
{
	Field_(comment) = value;
	return value;
}


obj_ create_co_comment_co___CatchClause__Compiler(obj_ this_, obj_ parent, obj_ comment)
{
	obj_ t0_;
	UsingMethod_(comment_co_) UsingMethod_(parent_co_)

		{
		t0_ = Call_(parent_co_, this_, parent);
		t0_ = Call_(comment_co_, this_, comment);
		
		
		}
	return nil;
}


obj_ emit_code_co___CatchClause__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(body) UsingMethod_(emit_code_co_)

		{
		t0_ = Call_(body, this_);
		t1_ = Call_(emit_code_co_, t0_, builder);
		
		}
	return nil;
}


obj_ enclosing_method_context__CatchClause__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(enclosing_method_context) UsingMethod_(parent)

		{
		t0_ = Call_(parent, this_);
		t1_ = Call_(enclosing_method_context, t0_);
		return t1_;
		
		
		}
	return nil;
}


obj_ interpreted__CatchClause__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(body) UsingMethod_(interpreted)

		{
		t0_ = Call_(body, this_);
		t1_ = Call_(interpreted, t0_);
		return t1_;
		
		}
	return nil;
}


obj_ jolt_expression__CatchClause__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(body) UsingMethod_(jolt_expression)

		{
		t0_ = Call_(body, this_);
		t1_ = Call_(jolt_expression, t0_);
		return t1_;
		
		
		}
	return nil;
}


obj_ lookup_function_co___CatchClause__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "exception")
	UsingMethod_(_eq__eq_) UsingMethod_(lookup_function_co_) UsingMethod_(parent)
	extern obj_ new__CaughtExceptionFunction__Compiler(obj_ this_);
	UsingClass_(CaughtExceptionFunction__Compiler)

		{
		t0_ = Call_(_eq__eq_, name, Str_(0));
		if (t0_)
			{
			t0_ = new__CaughtExceptionFunction__Compiler(Proto_(CaughtExceptionFunction__Compiler));
			return t0_;
			
			}
		t1_ = Call_(parent, this_);
		t2_ = Call_(lookup_function_co_, t1_, name);
		return t2_;
		
		
		}
	return nil;
}


obj_ new_co_comment_co___CatchClause__Compiler(obj_ this_, obj_ parent, obj_ comment)
{
	UsingClass_(CatchClause__Compiler)
	obj_ obj = AllocObj_(CatchClause__Compiler);
	create_co_comment_co___CatchClause__Compiler(obj, parent, comment);
	return obj;
}


obj_ parent__CatchClause__Compiler(obj_ this_)
{
	return Field_(parent);
}


obj_ parent_co___CatchClause__Compiler(obj_ this_, obj_ value)
{
	Field_(parent) = value;
	return value;
}


obj_ pre_clause_comments__CatchClause__Compiler(obj_ this_)
{
	return Field_(pre_clause_comments);
}


obj_ pre_clause_comments_co___CatchClause__Compiler(obj_ this_, obj_ value)
{
	Field_(pre_clause_comments) = value;
	return value;
}


obj_ prepare_to_emit__CatchClause__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(body) UsingMethod_(prepare_to_emit)

		{
		t0_ = Call_(body, this_);
		t1_ = Call_(prepare_to_emit, t0_);
		
		
		
		
		}
	return nil;
}


