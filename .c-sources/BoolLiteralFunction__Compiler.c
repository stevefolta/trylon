#include "Trylon_.h"

UsingSym_(BoolLiteralFunction)UsingClass_(Compiler)
UsingClass_(TrylonFunction__Compiler)
UsingClass_(BoolLiteralFunction__Compiler)
struct ClassInfo BoolLiteralFunction__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 125, 1, Proto_(BoolLiteralFunction__Compiler), Proto_(Compiler), Proto_(TrylonFunction__Compiler), nil, Sym_(BoolLiteralFunction), nil, nil };
struct object BoolLiteralFunction__Compiler = 
	{ &BoolLiteralFunction__Compiler__classInfo_, {nil} };



#define value__fld_	(0)


obj_ c_signature__BoolLiteralFunction__Compiler(obj_ this_)
{
	obj_ t0_;
	DefineString_(0, "Standard__true")
	DefineString_(1, "Standard__false")
	UsingMethod_(value)

		{
		t0_ = Call_(value, this_);
		if (t0_)
			{
			return Str_(0);
			}
		else
			{
			return Str_(1);
			}
		}
	return nil;
}


obj_ compile_co___BoolLiteralFunction__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	UsingMethod_(compile_bool_literal_call_co_)

		{
		t0_ = Call_(compile_bool_literal_call_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ create_co___BoolLiteralFunction__Compiler(obj_ this_, obj_ value)
{
	obj_ t0_;
	UsingMethod_(value_co_)

		{
		t0_ = Call_(value_co_, this_, value);
		}
	return nil;
}


obj_ emit_c_call_co_builder_co___BoolLiteralFunction__Compiler(obj_ this_, obj_ arguments, obj_ builder)
{
	extern obj_ new_co___NameResult__CCompiler(obj_ this_, obj_ name);
	extern obj_ new_co___NameResult__CCompiler(obj_ this_, obj_ name);
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "true_")
	DefineString_(1, "nil")
	UsingMethod_(value)
	UsingClass_(NameResult__CCompiler)

		{
		t0_ = Call_(value, this_);
		if (t0_)
			{
			t0_ = new_co___NameResult__CCompiler(Proto_(NameResult__CCompiler), Str_(0));
			return t0_;
			}
		else
			{
			t1_ = new_co___NameResult__CCompiler(Proto_(NameResult__CCompiler), Str_(1));
			return t1_;
			}
		}
	return nil;
}


obj_ interpret_call_with_co___BoolLiteralFunction__Compiler(obj_ this_, obj_ arguments)
{
	obj_ t0_;
	UsingMethod_(value)

		{
		t0_ = Call_(value, this_);
		return t0_;
		}
	return nil;
}


obj_ name__BoolLiteralFunction__Compiler(obj_ this_)
{
	obj_ t0_;
	DefineString_(0, "true")
	DefineString_(1, "false")
	UsingMethod_(value)

		{
		t0_ = Call_(value, this_);
		if (t0_)
			{
			return Str_(0);
			}
		else
			{
			return Str_(1);
			}
		}
	return nil;
}


obj_ new_co___BoolLiteralFunction__Compiler(obj_ this_, obj_ value)
{
	UsingClass_(BoolLiteralFunction__Compiler)
	obj_ obj = AllocObj_(BoolLiteralFunction__Compiler);
	create_co___BoolLiteralFunction__Compiler(obj, value);
	return obj;
}


