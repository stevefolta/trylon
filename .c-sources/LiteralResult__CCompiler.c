#include "Trylon_.h"

UsingSym_(LiteralResult)UsingClass_(CCompiler)
UsingClass_(Object__Standard)
UsingClass_(LiteralResult__CCompiler)
struct ClassInfo LiteralResult__CCompiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 208, 1, Proto_(LiteralResult__CCompiler), Proto_(CCompiler), Proto_(Object__Standard), nil, Sym_(LiteralResult), nil, nil };
struct object LiteralResult__CCompiler = 
	{ &LiteralResult__CCompiler__classInfo_, {nil} };


#define expression__fld_	(0)


obj_ access__LiteralResult__CCompiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(access) UsingMethod_(expression)

		{
		t0_ = Call_(expression, this_);
		t1_ = Call_(access, t0_);
		return t1_;
		}
	return nil;
}


obj_ create_co___LiteralResult__CCompiler(obj_ this_, obj_ expression)
{
	obj_ t0_;
	UsingMethod_(expression_co_)

		{
		t0_ = Call_(expression_co_, this_, expression);
		}
	return nil;
}


obj_ new_co___LiteralResult__CCompiler(obj_ this_, obj_ expression)
{
	UsingClass_(LiteralResult__CCompiler)
	obj_ obj = AllocObj_(LiteralResult__CCompiler);
	create_co___LiteralResult__CCompiler(obj, expression);
	return obj;
}


