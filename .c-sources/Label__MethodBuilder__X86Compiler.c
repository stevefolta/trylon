#include "Trylon_.h"

UsingSym_(Label)UsingClass_(MethodBuilder__X86Compiler)
UsingClass_(Object__Standard)
UsingClass_(Label__MethodBuilder__X86Compiler)
struct ClassInfo Label__MethodBuilder__X86Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 187, 1, Proto_(Label__MethodBuilder__X86Compiler), Proto_(MethodBuilder__X86Compiler), Proto_(Object__Standard), nil, Sym_(Label), nil, nil };
struct object Label__MethodBuilder__X86Compiler = 
	{ &Label__MethodBuilder__X86Compiler__classInfo_, {nil} };


#define offset__fld_	(0)


obj_ create__Label__MethodBuilder__X86Compiler(obj_ this_)
{
	return nil;
}


obj_ define_co___Label__MethodBuilder__X86Compiler(obj_ this_, obj_ offset)
{
	obj_ t0_;
	UsingMethod_(offset_co_)

		{
		t0_ = Call_(offset_co_, this_, offset);
		}
	return nil;
}


obj_ new__Label__MethodBuilder__X86Compiler(obj_ this_)
{
	UsingClass_(Label__MethodBuilder__X86Compiler)
	obj_ obj = AllocObj_(Label__MethodBuilder__X86Compiler);
	create__Label__MethodBuilder__X86Compiler(obj);
	return obj;
}


