#include "Trylon_.h"

UsingSym_(Context)UsingClass_(Compiler)
UsingClass_(Object__Standard)
UsingClass_(Context__Compiler)
struct ClassInfo Context__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 98, 0, Proto_(Context__Compiler), Proto_(Compiler), Proto_(Object__Standard), nil, Sym_(Context), nil, nil };
struct object Context__Compiler = 
	{ &Context__Compiler__classInfo_, {} };




obj_ enclosing_method_context__Context__Compiler(obj_ this_)
{

		{
		/*  Default: not in one. */
		return nil;
		}
	return nil;
}


obj_ lookup_function_autodeclaring_co___Context__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	UsingMethod_(lookup_function_co_)

		{
		/*  Default: just lookup. */
		t0_ = Call_(lookup_function_co_, this_, name);
		return t0_;
		}
	return nil;
}


obj_ lookup_function_co___Context__Compiler(obj_ this_, obj_ name)
{
	extern obj_ virtual__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		}
	return nil;
}


