#include "Trylon_.h"

UsingSym_(SetArgumentFunction)UsingClass_(Compiler)
UsingClass_(TrylonFunction__Compiler)
UsingClass_(SetArgumentFunction__Compiler)
struct ClassInfo SetArgumentFunction__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 138, 1, Proto_(SetArgumentFunction__Compiler), Proto_(Compiler), Proto_(TrylonFunction__Compiler), nil, Sym_(SetArgumentFunction), nil, nil };
struct object SetArgumentFunction__Compiler = 
	{ &SetArgumentFunction__Compiler__classInfo_, {nil} };



#define name__fld_	(0)


obj_ compile_call_co_with_co___SetArgumentFunction__Compiler(obj_ this_, obj_ builder, obj_ arguments)
{
	obj_ t0_;
	UsingMethod_(compile_set_argument_call_co_with_co_)

		{
		t0_ = Call_(compile_set_argument_call_co_with_co_, builder, this_, arguments);
		return t0_;
		}
	return nil;
}


obj_ create_co___SetArgumentFunction__Compiler(obj_ this_, obj_ arg)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(name) UsingMethod_(name_co_)

		{
		t0_ = Call_(name, arg);
		t1_ = Call_(name_co_, this_, t0_);
		}
	return nil;
}


obj_ emit_c_call_co_builder_co___SetArgumentFunction__Compiler(obj_ this_, obj_ arguments, obj_ builder)
{
	extern obj_ mangle_name_co___Compiler(obj_ this_, obj_ name);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineString_(0, " = ")
	DefineString_(1, ";")
	UsingMethod_(_pl_) UsingMethod_(access) UsingMethod_(add_line_co_) UsingMethod_(emit_code_co_) UsingMethod_(first_item) UsingMethod_(name)
	UsingClass_(Compiler)

		{
		obj_ mangled_name, value;
		t0_ = Call_(name, this_);
		t1_ = mangle_name_co___Compiler(Proto_(Compiler), t0_);
		mangled_name = t1_;
		t0_ = Call_(first_item, arguments);
		t1_ = Call_(emit_code_co_, t0_, builder);
		value = t1_;
		t0_ = Call_(_pl_, mangled_name, Str_(0));
		t1_ = Call_(access, value);
		t2_ = Call_(_pl_, t0_, t1_);
		t3_ = Call_(_pl_, t2_, Str_(1));
		t4_ = Call_(add_line_co_, builder, t3_);
		return value;
		}
	return nil;
}


obj_ interpret_call_with_co___SetArgumentFunction__Compiler(obj_ this_, obj_ arguments)
{

		{
		/*  ... */
		}
	return nil;
}


obj_ new_co___SetArgumentFunction__Compiler(obj_ this_, obj_ arg)
{
	UsingClass_(SetArgumentFunction__Compiler)
	obj_ obj = AllocObj_(SetArgumentFunction__Compiler);
	create_co___SetArgumentFunction__Compiler(obj, arg);
	return obj;
}


