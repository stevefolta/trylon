#include "Trylon_.h"

UsingSym_(LambdaExpression)UsingClass_(Compiler)
UsingClass_(TrylonExpression__Compiler)
UsingClass_(LambdaExpression__Compiler)
struct ClassInfo LambdaExpression__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 121, 1, Proto_(LambdaExpression__Compiler), Proto_(Compiler), Proto_(TrylonExpression__Compiler), nil, Sym_(LambdaExpression), nil, nil };
struct object LambdaExpression__Compiler = 
	{ &LambdaExpression__Compiler__classInfo_, {nil} };



#define block__fld_	(0)


obj_ create_co___LambdaExpression__Compiler(obj_ this_, obj_ block)
{
	obj_ t0_;
	UsingMethod_(block_co_)

		{
		t0_ = Call_(block_co_, this_, block);
		}
	return nil;
}


obj_ jolt_expression__LambdaExpression__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(block) UsingMethod_(jolt_expression)

		{
		t0_ = Call_(block, this_);
		t1_ = Call_(jolt_expression, t0_);
		return t1_;
		}
	return nil;
}


obj_ new_co___LambdaExpression__Compiler(obj_ this_, obj_ block)
{
	UsingClass_(LambdaExpression__Compiler)
	obj_ obj = AllocObj_(LambdaExpression__Compiler);
	create_co___LambdaExpression__Compiler(obj, block);
	return obj;
}


obj_ prepare_to_emit__LambdaExpression__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(block) UsingMethod_(prepare_to_emit)

		{
		t0_ = Call_(block, this_);
		t1_ = Call_(prepare_to_emit, t0_);
		}
	return nil;
}


obj_ translate_co___LambdaExpression__Compiler(obj_ this_, obj_ compiler)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(block) UsingMethod_(translate_co_)

		{
		t0_ = Call_(block, this_);
		t1_ = Call_(translate_co_, t0_, compiler);
		return t1_;
		}
	return nil;
}


