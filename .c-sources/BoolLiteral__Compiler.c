#include "Trylon_.h"

UsingSym_(BoolLiteral)UsingClass_(Compiler)
UsingClass_(TrylonExpression__Compiler)
UsingClass_(BoolLiteral__Compiler)
struct ClassInfo BoolLiteral__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 145, 1, Proto_(BoolLiteral__Compiler), Proto_(Compiler), Proto_(TrylonExpression__Compiler), nil, Sym_(BoolLiteral), nil, nil };
struct object BoolLiteral__Compiler = 
	{ &BoolLiteral__Compiler__classInfo_, {nil} };



#define value__fld_	(0)


obj_ compile_co___BoolLiteral__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	UsingMethod_(compile_bool_literal_co_)

		{
		t0_ = Call_(compile_bool_literal_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ create_co___BoolLiteral__Compiler(obj_ this_, obj_ value)
{
	obj_ t0_;
	UsingMethod_(value_co_)

		{
		t0_ = Call_(value_co_, this_, value);
		}
	return nil;
}


obj_ emit_code_co___BoolLiteral__Compiler(obj_ this_, obj_ builder)
{
	UsingSym_(true_ul_)
	UsingSym_(nil)
	extern obj_ new_co_is_constant_co___NameResult__CCompiler(obj_ this_, obj_ name, obj_ is_constant);
	obj_ t0_;
	UsingMethod_(value)
	UsingClass_(NameResult__CCompiler)

		{
		obj_ result;
		result = nil;
		t0_ = Call_(value, this_);
		if (t0_)
			{
			result = Sym_(true_ul_);
			}
		else
			{
			result = Sym_(nil);
			}
		t0_ = new_co_is_constant_co___NameResult__CCompiler(Proto_(NameResult__CCompiler), result, true_);
		return t0_;
		}
	return nil;
}


obj_ interpreted__BoolLiteral__Compiler(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(value)

		{
		t0_ = Call_(value, this_);
		return t0_;
		}
	return nil;
}


obj_ is_literal__BoolLiteral__Compiler(obj_ this_)
{

		{
		return true_;
		}
	return nil;
}


obj_ new_co___BoolLiteral__Compiler(obj_ this_, obj_ value)
{
	UsingClass_(BoolLiteral__Compiler)
	obj_ obj = AllocObj_(BoolLiteral__Compiler);
	create_co___BoolLiteral__Compiler(obj, value);
	return obj;
}


obj_ resolve__BoolLiteral__Compiler(obj_ this_)
{

		{
		/*  Nothing to do. */
		}
	return nil;
}


