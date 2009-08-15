#include "Trylon_.h"

UsingSym_(LiteralResult)UsingClass_(X86Compiler)
UsingClass_(Result__X86Compiler)
UsingClass_(LiteralResult__X86Compiler)
struct ClassInfo LiteralResult__X86Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 199, 1, Proto_(LiteralResult__X86Compiler), Proto_(X86Compiler), Proto_(Result__X86Compiler), nil, Sym_(LiteralResult), nil, nil };
struct object LiteralResult__X86Compiler = 
	{ &LiteralResult__X86Compiler__classInfo_, {nil} };



#define value__fld_	(0)


obj_ create_co___LiteralResult__X86Compiler(obj_ this_, obj_ value)
{
	obj_ t0_;
	UsingMethod_(value_co_)

		{
		t0_ = Call_(value_co_, this_, value);
		}
	return nil;
}


obj_ is_literal__LiteralResult__X86Compiler(obj_ this_)
{

		{
		return true_;
		}
	return nil;
}


obj_ new_co___LiteralResult__X86Compiler(obj_ this_, obj_ value)
{
	UsingClass_(LiteralResult__X86Compiler)
	obj_ obj = AllocObj_(LiteralResult__X86Compiler);
	create_co___LiteralResult__X86Compiler(obj, value);
	return obj;
}


obj_ ptr__LiteralResult__X86Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(object_ptr) UsingMethod_(value)

		{
		t0_ = Call_(value, this_);
		t1_ = Call_(object_ptr, t0_);
		return t1_;
		}
	return nil;
}


