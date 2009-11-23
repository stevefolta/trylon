#include "Trylon_.h"

UsingSym_(LabelRef)UsingClass_(MethodBuilder__X86Compiler)
UsingClass_(Object__Standard)
UsingClass_(LabelRef__MethodBuilder__X86Compiler)
struct ClassInfo LabelRef__MethodBuilder__X86Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 91, 2, Proto_(LabelRef__MethodBuilder__X86Compiler), Proto_(MethodBuilder__X86Compiler), Proto_(Object__Standard), nil, Sym_(LabelRef), nil, nil };
struct object LabelRef__MethodBuilder__X86Compiler = 
	{ &LabelRef__MethodBuilder__X86Compiler__classInfo_, {nil, nil} };


#define label__fld_	(0)
#define offset__fld_	(1)


obj_ create_co_at_co___LabelRef__MethodBuilder__X86Compiler(obj_ this_, obj_ label, obj_ offset)
{
	obj_ t0_;
	UsingMethod_(label_co_) UsingMethod_(offset_co_)

		{
		t0_ = Call_(label_co_, this_, label);
		t0_ = Call_(offset_co_, this_, offset);
		}
	return nil;
}


obj_ new_co_at_co___LabelRef__MethodBuilder__X86Compiler(obj_ this_, obj_ label, obj_ offset)
{
	UsingClass_(LabelRef__MethodBuilder__X86Compiler)
	obj_ obj = AllocObj_(LabelRef__MethodBuilder__X86Compiler);
	create_co_at_co___LabelRef__MethodBuilder__X86Compiler(obj, label, offset);
	return obj;
}


