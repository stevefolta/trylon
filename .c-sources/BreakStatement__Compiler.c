#include "Trylon_.h"

UsingSym_(BreakStatement)UsingClass_(Compiler)
UsingClass_(Statement__Compiler)
UsingClass_(BreakStatement__Compiler)
struct ClassInfo BreakStatement__Compiler__classInfo_ = 
	{ 137, 1, Proto_(BreakStatement__Compiler), Proto_(Compiler), Proto_(Statement__Compiler), nil, Sym_(BreakStatement) ,nil };
struct object BreakStatement__Compiler = 
	{ &BreakStatement__Compiler__classInfo_, {nil} };


#define comment__fld_	(0)



obj_ create_co___BreakStatement__Compiler(obj_ this_, obj_ comment)
{
	obj_ t0_;
	UsingMethod_(comment_co_)

		{
		t0_ = Call_(comment_co_, this_, comment);
		
		
		
		}
	return nil;
}


obj_ emit_code_co___BreakStatement__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineString_(0, "Break_(")
	DefineString_(1, ")")
	UsingMethod_(_pl_) UsingMethod_(add_line_co_) UsingMethod_(cur_loop_index) UsingMethod_(string)

		{
		t0_ = Call_(cur_loop_index, builder);
		t1_ = Call_(string, t0_);
		t2_ = Call_(_pl_, Str_(0), t1_);
		t3_ = Call_(_pl_, t2_, Str_(1));
		t4_ = Call_(add_line_co_, builder, t3_);
		
		}
	return nil;
}


obj_ interpreted__BreakStatement__Compiler(obj_ this_)
{
	UsingClass_(Break__Statements__Interpreter)

		{
		Throw_(Proto_(Break__Statements__Interpreter));
		
		}
	return nil;
}


obj_ jolt_expression__BreakStatement__Compiler(obj_ this_)
{
	extern obj_ with_co___Expression(obj_ this_, obj_ value);
	UsingSym_(fixed_break)
	obj_ t0_;
	UsingClass_(Expression)

		{
		t0_ = with_co___Expression(Proto_(Expression), Sym_(fixed_break));
		return t0_;
		
		
		}
	return nil;
}


obj_ new_co___BreakStatement__Compiler(obj_ this_, obj_ comment)
{
	UsingClass_(BreakStatement__Compiler)
	obj_ obj = AllocObj_(BreakStatement__Compiler);
	create_co___BreakStatement__Compiler(obj, comment);
	return obj;
}


