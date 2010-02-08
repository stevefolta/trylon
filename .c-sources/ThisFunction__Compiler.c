#include "Trylon_.h"

UsingSym_(ThisFunction)UsingClass_(Compiler)
UsingClass_(TrylonFunction__Compiler)
UsingClass_(ThisFunction__Compiler)
struct ClassInfo ThisFunction__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 136, 0, Proto_(ThisFunction__Compiler), Proto_(Compiler), Proto_(TrylonFunction__Compiler), nil, Sym_(ThisFunction), nil, nil };
struct object ThisFunction__Compiler = 
	{ &ThisFunction__Compiler__classInfo_, {} };





obj_ compile_call_co_with_co___ThisFunction__Compiler(obj_ this_, obj_ builder, obj_ arguments)
{
	obj_ t0_;
	UsingMethod_(compile_this_call_co_)

		{
		t0_ = Call_(compile_this_call_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ create__ThisFunction__Compiler(obj_ this_)
{
	return nil;
}


obj_ emit_c_call_co_builder_co___ThisFunction__Compiler(obj_ this_, obj_ arguments, obj_ builder)
{
	extern obj_ new_co___NameResult__CCompiler(obj_ this_, obj_ name);
	obj_ t0_;
	DefineString_(0, "this_")
	UsingClass_(NameResult__CCompiler)

		{
		t0_ = new_co___NameResult__CCompiler(Proto_(NameResult__CCompiler), Str_(0));
		return t0_;
		}
	return nil;
}


obj_ interpret_call_with_co___ThisFunction__Compiler(obj_ this_, obj_ arguments)
{

		{
		/*  ... */
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


