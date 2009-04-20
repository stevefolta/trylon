#include "Trylon_.h"

UsingSym_(ShortCircuitNot)UsingClass_(Compiler)
UsingClass_(TrylonExpression__Compiler)
UsingClass_(ShortCircuitNot__Compiler)
struct ClassInfo ShortCircuitNot__Compiler__classInfo_ = 
	{ 99, 1, Proto_(ShortCircuitNot__Compiler), Proto_(Compiler), Proto_(TrylonExpression__Compiler), nil, Sym_(ShortCircuitNot) ,nil };
struct object ShortCircuitNot__Compiler = 
	{ &ShortCircuitNot__Compiler__classInfo_, {nil} };



#define expr__fld_	(0)


obj_ create_co___ShortCircuitNot__Compiler(obj_ this_, obj_ expr)
{
	obj_ t0_;
	UsingMethod_(expr_co_)

		{
		t0_ = Call_(expr_co_, this_, expr);
		
		
		}
	return nil;
}


obj_ emit_code_co___ShortCircuitNot__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineString_(0, " = Not_(")
	DefineString_(1, ");")
	UsingMethod_(_pl_) UsingMethod_(access) UsingMethod_(add_line_co_) UsingMethod_(emit_code_co_) UsingMethod_(expr) UsingMethod_(get_temporary) UsingMethod_(name)

		{
		obj_ expr_result, temp;
		t0_ = Call_(expr, this_);
		t1_ = Call_(emit_code_co_, t0_, builder);
		expr_result = t1_;
		t0_ = Call_(get_temporary, builder);
		temp = t0_;
		t0_ = Call_(name, temp);
		t1_ = Call_(_pl_, t0_, Str_(0));
		t2_ = Call_(access, expr_result);
		t3_ = Call_(_pl_, t1_, t2_);
		t4_ = Call_(_pl_, t3_, Str_(1));
		t5_ = Call_(add_line_co_, builder, t4_);
		return temp;
		
		
		}
	return nil;
}


obj_ expr__ShortCircuitNot__Compiler(obj_ this_)
{
	return Field_(expr);
}


obj_ expr_co___ShortCircuitNot__Compiler(obj_ this_, obj_ value)
{
	Field_(expr) = value;
	return value;
}


obj_ interpreted__ShortCircuitNot__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(expr) UsingMethod_(interpreted)

		{
		t0_ = Call_(expr, this_);
		t1_ = Call_(interpreted, t0_);
		t2_ = Not_(t1_);
		return t2_;
		
		
		}
	return nil;
}


obj_ jolt_expression__ShortCircuitNot__Compiler(obj_ this_)
{
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(not)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(expr) UsingMethod_(jolt_expression)
	UsingClass_(Expression)

		{
		t0_ = Call_(expr, this_);
		t1_ = Call_(jolt_expression, t0_);
		t2_ = with_co_with_co___Expression(Proto_(Expression), Sym_(not), t1_);
		return t2_;
		
		}
	return nil;
}


obj_ new_co___ShortCircuitNot__Compiler(obj_ this_, obj_ expr)
{
	UsingClass_(ShortCircuitNot__Compiler)
	obj_ obj = AllocObj_(ShortCircuitNot__Compiler);
	create_co___ShortCircuitNot__Compiler(obj, expr);
	return obj;
}


obj_ prepare_to_emit__ShortCircuitNot__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(expr) UsingMethod_(prepare_to_emit)

		{
		t0_ = Call_(expr, this_);
		t1_ = Call_(prepare_to_emit, t0_);
		
		
		
		
		}
	return nil;
}


obj_ translate_co___ShortCircuitNot__Compiler(obj_ this_, obj_ compiler)
{
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(not)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(expr) UsingMethod_(expr_co_) UsingMethod_(translateExpression_co_)
	UsingClass_(Expression)

		{
		t0_ = Call_(expr, this_);
		t1_ = with_co_with_co___Expression(Proto_(Expression), Sym_(not), t0_);
		t2_ = Call_(expr_co_, this_, t1_);
		t0_ = Call_(expr, this_);
		t1_ = Call_(translateExpression_co_, compiler, t0_);
		return t1_;
		
		
		}
	return nil;
}


