#include "Trylon_.h"

UsingSym_(LocalSetter)UsingClass_(Compiler)
UsingClass_(TrylonFunction__Compiler)
UsingClass_(LocalSetter__Compiler)
struct ClassInfo LocalSetter__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 133, 1, Proto_(LocalSetter__Compiler), Proto_(Compiler), Proto_(TrylonFunction__Compiler), nil, Sym_(LocalSetter), nil, nil };
struct object LocalSetter__Compiler = 
	{ &LocalSetter__Compiler__classInfo_, {nil} };



#define local__fld_	(0)


obj_ compile_call_co_with_co___LocalSetter__Compiler(obj_ this_, obj_ builder, obj_ arguments)
{
	obj_ t0_;
	UsingMethod_(compile_local_setter_call_co_with_co_)

		{
		t0_ = Call_(compile_local_setter_call_co_with_co_, builder, this_, arguments);
		return t0_;
		}
	return nil;
}


obj_ create_co___LocalSetter__Compiler(obj_ this_, obj_ local)
{
	obj_ t0_;
	UsingMethod_(local_co_)

		{
		t0_ = Call_(local_co_, this_, local);
		}
	return nil;
}


obj_ emit_c_call_co_builder_co___LocalSetter__Compiler(obj_ this_, obj_ arguments, obj_ builder)
{
	extern obj_ mangle_name_co___Compiler(obj_ this_, obj_ name);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineString_(0, " = ")
	DefineString_(1, ";")
	UsingMethod_(_pl_) UsingMethod_(access) UsingMethod_(add_line_co_) UsingMethod_(emit_code_co_) UsingMethod_(first_item) UsingMethod_(local) UsingMethod_(name)
	UsingClass_(Compiler)

		{
		obj_ mangled_name, value;
		t0_ = Call_(local, this_);
		t1_ = Call_(name, t0_);
		t2_ = mangle_name_co___Compiler(Proto_(Compiler), t1_);
		mangled_name = t2_;
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


obj_ interpret_call_with_co___LocalSetter__Compiler(obj_ this_, obj_ arguments)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(first_item) UsingMethod_(initial_value_co_) UsingMethod_(interpreted) UsingMethod_(local)

		{
		t0_ = Call_(local, this_);
		t1_ = Call_(first_item, arguments);
		t2_ = Call_(interpreted, t1_);
		t3_ = Call_(initial_value_co_, t0_, t2_);
		}
	return nil;
}


obj_ name__LocalSetter__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, ":")
	UsingMethod_(_pl_) UsingMethod_(local) UsingMethod_(name)

		{
		t0_ = Call_(local, this_);
		t1_ = Call_(name, t0_);
		t2_ = Call_(_pl_, t1_, Str_(0));
		return t2_;
		}
	return nil;
}


obj_ new_co___LocalSetter__Compiler(obj_ this_, obj_ local)
{
	UsingClass_(LocalSetter__Compiler)
	obj_ obj = AllocObj_(LocalSetter__Compiler);
	create_co___LocalSetter__Compiler(obj, local);
	return obj;
}


