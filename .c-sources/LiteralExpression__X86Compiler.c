#include "Trylon_.h"

UsingSym_(LiteralExpression)UsingClass_(X86Compiler)
UsingClass_(TrylonExpression__Compiler)
UsingClass_(LiteralExpression__X86Compiler)
struct ClassInfo LiteralExpression__X86Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 153, 1, Proto_(LiteralExpression__X86Compiler), Proto_(X86Compiler), Proto_(TrylonExpression__Compiler), nil, Sym_(LiteralExpression), nil, nil };
struct object LiteralExpression__X86Compiler = 
	{ &LiteralExpression__X86Compiler__classInfo_, {nil} };



#define value__fld_	(0)


obj_ compile_co___LiteralExpression__X86Compiler(obj_ this_, obj_ builder)
{
	extern obj_ new_co___LiteralResult__X86Compiler(obj_ this_, obj_ value);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(value)
	UsingClass_(LiteralResult__X86Compiler)

		{
		t0_ = Call_(value, this_);
		t1_ = new_co___LiteralResult__X86Compiler(Proto_(LiteralResult__X86Compiler), t0_);
		return t1_;
		}
	return nil;
}


obj_ create_co___LiteralExpression__X86Compiler(obj_ this_, obj_ value)
{
	obj_ t0_;
	UsingMethod_(value_co_)

		{
		t0_ = Call_(value_co_, this_, value);
		}
	return nil;
}


obj_ new_co___LiteralExpression__X86Compiler(obj_ this_, obj_ value)
{
	UsingClass_(LiteralExpression__X86Compiler)
	obj_ obj = AllocObj_(LiteralExpression__X86Compiler);
	create_co___LiteralExpression__X86Compiler(obj, value);
	return obj;
}


