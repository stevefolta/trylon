#include "Trylon_.h"

UsingSym_(NewSharedField)UsingClass_(X86Compiler)
UsingClass_(Object__Standard)
UsingClass_(NewSharedField__X86Compiler)
struct ClassInfo NewSharedField__X86Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 220, 2, Proto_(NewSharedField__X86Compiler), Proto_(X86Compiler), Proto_(Object__Standard), nil, Sym_(NewSharedField), nil, nil };
struct object NewSharedField__X86Compiler = 
	{ &NewSharedField__X86Compiler__classInfo_, {nil, nil} };


#define name__fld_	(0)
#define value__fld_	(1)


obj_ create_co___NewSharedField__X86Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	UsingMethod_(name_co_)

		{
		t0_ = Call_(name_co_, this_, name);
		}
	return nil;
}


obj_ new_co___NewSharedField__X86Compiler(obj_ this_, obj_ name)
{
	UsingClass_(NewSharedField__X86Compiler)
	obj_ obj = AllocObj_(NewSharedField__X86Compiler);
	create_co___NewSharedField__X86Compiler(obj, name);
	return obj;
}


obj_ value_ptr__NewSharedField__X86Compiler(obj_ this_)
{
return BuildBytePtr_(&Field_(value));
}


