#include "Trylon_.h"

UsingSym_(LiteralNil)UsingClass_(Compiler)
UsingClass_(TrylonExpression__Compiler)
UsingClass_(LiteralNil__Compiler)
struct ClassInfo LiteralNil__Compiler__classInfo_ = 
	{ 91, 0, Proto_(LiteralNil__Compiler), Proto_(Compiler), Proto_(TrylonExpression__Compiler), nil, Sym_(LiteralNil) ,nil };
struct object LiteralNil__Compiler = 
	{ &LiteralNil__Compiler__classInfo_, {} };





obj_ create__LiteralNil__Compiler(obj_ this_)
{

		{
		}
	return nil;
}


obj_ emit_code_co___LiteralNil__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	DefineString_(0, "nil")
	extern obj_ new_co_is_constant_co___NameResult__CCompiler(obj_ this_, obj_ name, obj_ is_constant);
	UsingClass_(NameResult__CCompiler)

		{
		t0_ = new_co_is_constant_co___NameResult__CCompiler(Proto_(NameResult__CCompiler), Str_(0), true_);
		return t0_;
		
		
		}
	return nil;
}


obj_ interpreted__LiteralNil__Compiler(obj_ this_)
{

		{
		return nil;
		
		
		}
	return nil;
}


obj_ is_literal__LiteralNil__Compiler(obj_ this_)
{

		{
		return true_;
		
		}
	return nil;
}


obj_ jolt_expression__LiteralNil__Compiler(obj_ this_)
{
	UsingSym_(nil)

		{
		return Sym_(nil);
		
		}
	return nil;
}


obj_ new__LiteralNil__Compiler(obj_ this_)
{
	UsingClass_(LiteralNil__Compiler)
	obj_ obj = AllocObj_(LiteralNil__Compiler);
	create__LiteralNil__Compiler(obj);
	return obj;
}


obj_ prepare_to_emit__LiteralNil__Compiler(obj_ this_)
{

		{
		/* Nothing to do. */
		
		
		
		}
	return nil;
}


obj_ translate_co___LiteralNil__Compiler(obj_ this_, obj_ compiler)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(translateExpression_co_)
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(quote)
	UsingClass_(Expression)

		{
		t0_ = with_co_with_co___Expression(Proto_(Expression), Sym_(quote), nil);
		t1_ = Call_(translateExpression_co_, compiler, t0_);
		return t1_;
		
		
		}
	return nil;
}


