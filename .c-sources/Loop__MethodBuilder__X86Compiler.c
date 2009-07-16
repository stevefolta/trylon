#include "Trylon_.h"

UsingSym_(Loop)UsingClass_(MethodBuilder__X86Compiler)
UsingClass_(Object__Standard)
UsingClass_(Loop__MethodBuilder__X86Compiler)
struct ClassInfo Loop__MethodBuilder__X86Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 189, 2, Proto_(Loop__MethodBuilder__X86Compiler), Proto_(MethodBuilder__X86Compiler), Proto_(Object__Standard), nil, Sym_(Loop), nil, nil };
struct object Loop__MethodBuilder__X86Compiler = 
	{ &Loop__MethodBuilder__X86Compiler__classInfo_, {nil, nil} };


#define continue_label__fld_	(0)
#define break_label__fld_	(1)


obj_ create_continue_co_break_co___Loop__MethodBuilder__X86Compiler(obj_ this_, obj_ continue_label, obj_ break_label)
{
	obj_ t0_;
	UsingMethod_(break_label_co_) UsingMethod_(continue_label_co_)

		{
		t0_ = Call_(continue_label_co_, this_, continue_label);
		t0_ = Call_(break_label_co_, this_, break_label);
		}
	return nil;
}


obj_ new_continue_co_break_co___Loop__MethodBuilder__X86Compiler(obj_ this_, obj_ continue_label, obj_ break_label)
{
	UsingClass_(Loop__MethodBuilder__X86Compiler)
	obj_ obj = AllocObj_(Loop__MethodBuilder__X86Compiler);
	create_continue_co_break_co___Loop__MethodBuilder__X86Compiler(obj, continue_label, break_label);
	return obj;
}


