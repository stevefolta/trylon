#include "Trylon_.h"

UsingSym_(ThisFunction)UsingClass_(Compiler)
UsingClass_(TrylonFunction__Compiler)
UsingClass_(ThisFunction__Compiler)
struct ClassInfo ThisFunction__Compiler__classInfo_ = 
	{ 115, 0, Proto_(ThisFunction__Compiler), Proto_(Compiler), Proto_(TrylonFunction__Compiler), nil, Sym_(ThisFunction) ,nil };
struct object ThisFunction__Compiler = 
	{ &ThisFunction__Compiler__classInfo_, {} };





obj_ create__ThisFunction__Compiler(obj_ this_)
{

		{
		}
	return nil;
}


obj_ emit_c_call_co_builder_co___ThisFunction__Compiler(obj_ this_, obj_ arguments, obj_ builder)
{
	obj_ t0_;
	DefineString_(0, "this_")
	extern obj_ new_co___NameResult__CCompiler(obj_ this_, obj_ name);
	UsingClass_(NameResult__CCompiler)

		{
		t0_ = new_co___NameResult__CCompiler(Proto_(NameResult__CCompiler), Str_(0));
		return t0_;
		
		
		}
	return nil;
}


obj_ emit_call_co___ThisFunction__Compiler(obj_ this_, obj_ arguments)
{
	UsingSym_(self)

		{
		return Sym_(self);
		
		
		}
	return nil;
}


obj_ interpret_call_with_co___ThisFunction__Compiler(obj_ this_, obj_ arguments)
{

		{
		/* ... */
		
		}
	return nil;
}


obj_ new__ThisFunction__Compiler(obj_ this_)
{
	UsingClass_(ThisFunction__Compiler)
	obj_ obj = AllocObj_(ThisFunction__Compiler);
	create__ThisFunction__Compiler(obj);
	return obj;
}


