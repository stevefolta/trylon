#include "Trylon_.h"

UsingSym_(CaughtExceptionFunction)UsingClass_(Compiler)
UsingClass_(TrylonFunction__Compiler)
UsingClass_(CaughtExceptionFunction__Compiler)
struct ClassInfo CaughtExceptionFunction__Compiler__classInfo_ = 
	{ 121, 0, Proto_(CaughtExceptionFunction__Compiler), Proto_(Compiler), Proto_(TrylonFunction__Compiler), nil, Sym_(CaughtExceptionFunction) ,nil };
struct object CaughtExceptionFunction__Compiler = 
	{ &CaughtExceptionFunction__Compiler__classInfo_, {} };





obj_ create__CaughtExceptionFunction__Compiler(obj_ this_)
{

		{
		}
	return nil;
}


obj_ emit_c_call_co_builder_co___CaughtExceptionFunction__Compiler(obj_ this_, obj_ arguments, obj_ builder)
{
	obj_ t0_;
	DefineString_(0, "exception")
	extern obj_ new_co___NameResult__CCompiler(obj_ this_, obj_ name);
	UsingClass_(NameResult__CCompiler)

		{
		t0_ = new_co___NameResult__CCompiler(Proto_(NameResult__CCompiler), Str_(0));
		return t0_;
		
		
		
		}
	return nil;
}


obj_ emit_call_co___CaughtExceptionFunction__Compiler(obj_ this_, obj_ arguments)
{
	UsingSym_(exception)

		{
		return Sym_(exception);
		
		
		
		}
	return nil;
}


obj_ interpret_call_with_co___CaughtExceptionFunction__Compiler(obj_ this_, obj_ arguments)
{
	UsingSharedField_(cur_interpreted_exception, TryStatement__Compiler) 

		{
		return SharedField_(cur_interpreted_exception, TryStatement__Compiler);
		
		}
	return nil;
}


obj_ new__CaughtExceptionFunction__Compiler(obj_ this_)
{
	UsingClass_(CaughtExceptionFunction__Compiler)
	obj_ obj = AllocObj_(CaughtExceptionFunction__Compiler);
	create__CaughtExceptionFunction__Compiler(obj);
	return obj;
}


