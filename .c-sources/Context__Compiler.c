#include "Trylon_.h"

UsingSym_(Context)UsingClass_(Compiler)
UsingClass_(Object__Standard)
UsingClass_(Context__Compiler)
struct ClassInfo Context__Compiler__classInfo_ = 
	{ 83, 0, Proto_(Context__Compiler), Proto_(Compiler), Proto_(Object__Standard), nil, Sym_(Context) ,nil };
struct object Context__Compiler = 
	{ &Context__Compiler__classInfo_, {} };




obj_ add_class_co___Context__Compiler(obj_ this_, obj_ name)
{
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	obj_ t0_;
	DefineString_(0, "Internal error: bad \"Context add-class\" call.")
	UsingClass_(MessageException__Standard)

		{
		/* Default: not valid. */
		t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(0));
		Throw_(t0_);
		
		
		}
	return nil;
}


obj_ add_field_co___Context__Compiler(obj_ this_, obj_ field)
{
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	obj_ t0_;
	DefineString_(0, "Internal error: bad \"Context add-field\" call.")
	UsingClass_(MessageException__Standard)

		{
		/* Default: not valid. */
		t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(0));
		Throw_(t0_);
		
		
		}
	return nil;
}


obj_ add_function_co___Context__Compiler(obj_ this_, obj_ function)
{
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	obj_ t0_;
	DefineString_(0, "Internal error: bad \"Context add-function\" call.")
	UsingClass_(MessageException__Standard)

		{
		/* Default: not valid. */
		t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(0));
		Throw_(t0_);
		
		
		}
	return nil;
}


obj_ add_package_co_directory_co___Context__Compiler(obj_ this_, obj_ name, obj_ FileDirectory)
{
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	obj_ t0_;
	DefineString_(0, "Interanl error: bad \"Context add-package\" call.")
	UsingClass_(MessageException__Standard)

		{
		t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(0));
		Throw_(t0_);
		
		
		}
	return nil;
}


obj_ enclosing_method_context__Context__Compiler(obj_ this_)
{

		{
		/* Default: not in one. */
		return nil;
		
		
		}
	return nil;
}


obj_ get_subproto_co___Context__Compiler(obj_ this_, obj_ name)
{
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	obj_ t0_;
	DefineString_(0, "Internal error: bad \"Context get-subproto\" call.")
	UsingClass_(MessageException__Standard)

		{
		/* Default: not valid. */
		t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(0));
		Throw_(t0_);
		
		
		
		}
	return nil;
}


obj_ lookup_function_autodeclaring_co___Context__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	UsingMethod_(lookup_function_co_)

		{
		/* Default: just lookup. */
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


