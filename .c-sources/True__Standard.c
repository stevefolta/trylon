#include "Trylon_.h"

UsingSym_(True)UsingClass_(Standard)
UsingClass_(Object__Standard)
UsingClass_(True__Standard)
struct ClassInfo True__Standard__classInfo_ = 
	{ 59, 0, Proto_(True__Standard), Proto_(Standard), Proto_(Object__Standard), nil, Sym_(True) ,nil };
struct object True__Standard = 
	{ &True__Standard__classInfo_, {} };




obj_ debug_write__True__Standard(obj_ this_)
{
	extern obj_ print_line_co___Standard(obj_ this_, obj_ line);
	obj_ t0_;
	DefineString_(0, "true")
	UsingClass_(Standard)

		{
		t0_ = print_line_co___Standard(Proto_(Standard), Str_(0));
		
		}
	return nil;
}


obj_ string__True__Standard(obj_ this_)
{
	DefineString_(0, "true")

		{
		return Str_(0);
		
		}
	return nil;
}


