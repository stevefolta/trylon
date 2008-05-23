#include "Trylon_.h"

UsingSym_(NilFunction)UsingClass_(Compiler)
UsingClass_(TrylonFunction__Compiler)
UsingClass_(NilFunction__Compiler)
struct ClassInfo NilFunction__Compiler__classInfo_ = 
	{ 112, 0, Proto_(NilFunction__Compiler), Proto_(Compiler), Proto_(TrylonFunction__Compiler), nil, Sym_(NilFunction) ,nil };
struct object NilFunction__Compiler = 
	{ &NilFunction__Compiler__classInfo_, {} };





obj_ c_signature__NilFunction__Compiler(obj_ this_)
{
	DefineString_(0, "Standard__nil")

		{
		return Str_(0);
		
		}
	return nil;
}


obj_ create__NilFunction__Compiler(obj_ this_)
{

		{
		}
	return nil;
}


obj_ emit_c_call_co_builder_co___NilFunction__Compiler(obj_ this_, obj_ arguments, obj_ builder)
{
	extern obj_ new_co___NameResult__CCompiler(obj_ this_, obj_ name);
	obj_ t0_;
	DefineString_(0, "nil")
	UsingClass_(NameResult__CCompiler)

		{
		t0_ = new_co___NameResult__CCompiler(Proto_(NameResult__CCompiler), Str_(0));
		return t0_;
		
		}
	return nil;
}


obj_ emit_call_co___NilFunction__Compiler(obj_ this_, obj_ arguments)
{
	UsingSym_(nil)

		{
		return Sym_(nil);
		
		
		}
	return nil;
}


obj_ interpret_call_with_co___NilFunction__Compiler(obj_ this_, obj_ arguments)
{

		{
		return nil;
		
		}
	return nil;
}


obj_ name__NilFunction__Compiler(obj_ this_)
{
	DefineString_(0, "nil")

		{
		return Str_(0);
		
		
		
		}
	return nil;
}


obj_ new__NilFunction__Compiler(obj_ this_)
{
	UsingClass_(NilFunction__Compiler)
	obj_ obj = AllocObj_(NilFunction__Compiler);
	create__NilFunction__Compiler(obj);
	return obj;
}


