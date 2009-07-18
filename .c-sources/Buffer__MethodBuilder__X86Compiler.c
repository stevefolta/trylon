#include "Trylon_.h"

UsingSym_(Buffer)UsingClass_(MethodBuilder__X86Compiler)
UsingClass_(Object__Standard)
UsingClass_(Buffer__MethodBuilder__X86Compiler)
struct ClassInfo Buffer__MethodBuilder__X86Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 176, 2, Proto_(Buffer__MethodBuilder__X86Compiler), Proto_(MethodBuilder__X86Compiler), Proto_(Object__Standard), nil, Sym_(Buffer), nil, nil };
struct object Buffer__MethodBuilder__X86Compiler = 
	{ &Buffer__MethodBuilder__X86Compiler__classInfo_, {nil, nil} };


#define ptr__fld_	(0)
#define used_size__fld_	(1)


obj_ create__Buffer__MethodBuilder__X86Compiler(obj_ this_)
{
	extern obj_ new_co___BytePtr__Standard(obj_ this_, obj_ size);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(ptr_co_)
	UsingSharedField_(buffer_size, MethodBuilder__X86Compiler) 
	UsingClass_(BytePtr__Standard)

		{
		t0_ = new_co___BytePtr__Standard(Proto_(BytePtr__Standard), SharedField_(buffer_size, MethodBuilder__X86Compiler));
		t1_ = Call_(ptr_co_, this_, t0_);
		}
	return nil;
}


obj_ create_co___Buffer__MethodBuilder__X86Compiler(obj_ this_, obj_ size)
{
	extern obj_ new_co___BytePtr__Standard(obj_ this_, obj_ size);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(ptr_co_)
	UsingClass_(BytePtr__Standard)

		{
		t0_ = new_co___BytePtr__Standard(Proto_(BytePtr__Standard), size);
		t1_ = Call_(ptr_co_, this_, t0_);
		}
	return nil;
}


obj_ new__Buffer__MethodBuilder__X86Compiler(obj_ this_)
{
	UsingClass_(Buffer__MethodBuilder__X86Compiler)
	obj_ obj = AllocObj_(Buffer__MethodBuilder__X86Compiler);
	create__Buffer__MethodBuilder__X86Compiler(obj);
	return obj;
}


obj_ new_co___Buffer__MethodBuilder__X86Compiler(obj_ this_, obj_ size)
{
	UsingClass_(Buffer__MethodBuilder__X86Compiler)
	obj_ obj = AllocObj_(Buffer__MethodBuilder__X86Compiler);
	create_co___Buffer__MethodBuilder__X86Compiler(obj, size);
	return obj;
}


