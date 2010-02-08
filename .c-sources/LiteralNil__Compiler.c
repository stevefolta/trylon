#include "Trylon_.h"

UsingSym_(LiteralNil)UsingClass_(Compiler)
UsingClass_(TrylonExpression__Compiler)
UsingClass_(LiteralNil__Compiler)
struct ClassInfo LiteralNil__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 153, 0, Proto_(LiteralNil__Compiler), Proto_(Compiler), Proto_(TrylonExpression__Compiler), nil, Sym_(LiteralNil), nil, nil };
struct object LiteralNil__Compiler = 
	{ &LiteralNil__Compiler__classInfo_, {} };





obj_ compile_co___LiteralNil__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	UsingMethod_(compile_literal_nil_co_)

		{
		t0_ = Call_(compile_literal_nil_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ create__LiteralNil__Compiler(obj_ this_)
{
	return nil;
}


obj_ emit_code_co___LiteralNil__Compiler(obj_ this_, obj_ builder)
{
	extern obj_ new_co_is_constant_co___NameResult__CCompiler(obj_ this_, obj_ name, obj_ is_constant);
	obj_ t0_;
	DefineString_(0, "nil")
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


obj_ new__LiteralNil__Compiler(obj_ this_)
{
	UsingClass_(LiteralNil__Compiler)
	obj_ obj = AllocObj_(LiteralNil__Compiler);
	create__LiteralNil__Compiler(obj);
	return obj;
}


obj_ resolve__LiteralNil__Compiler(obj_ this_)
{

		{
		/*  Nothing to do. */
		}
	return nil;
}


