#include "Trylon_.h"

UsingSym_(PrimitiveFunction)UsingClass_(Compiler)
UsingClass_(TrylonFunction__Compiler)
UsingClass_(PrimitiveFunction__Compiler)
struct ClassInfo PrimitiveFunction__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 130, 2, Proto_(PrimitiveFunction__Compiler), Proto_(Compiler), Proto_(TrylonFunction__Compiler), nil, Sym_(PrimitiveFunction), nil, nil };
struct object PrimitiveFunction__Compiler = 
	{ &PrimitiveFunction__Compiler__classInfo_, {nil, nil} };



#define name__fld_	(0)
#define on_proto__fld_	(1)


obj_ c_name__PrimitiveFunction__Compiler(obj_ this_)
{
	extern obj_ mangle_name_co___Compiler(obj_ this_, obj_ name);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineString_(0, "__")
	UsingMethod_(_pl_) UsingMethod_(c_name) UsingMethod_(name) UsingMethod_(on_proto)
	UsingClass_(Compiler)

		{
		t0_ = Call_(on_proto, this_);
		t1_ = Call_(c_name, t0_);
		t2_ = Call_(_pl_, t1_, Str_(0));
		t3_ = Call_(name, this_);
		t4_ = mangle_name_co___Compiler(Proto_(Compiler), t3_);
		t5_ = Call_(_pl_, t2_, t4_);
		return t5_;
		}
	return nil;
}


obj_ c_signature__PrimitiveFunction__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "obj_ ")
	DefineString_(1, "(obj_ this_)")
	UsingMethod_(_pl_) UsingMethod_(c_name)

		{
		t0_ = Call_(c_name, this_);
		t1_ = Call_(_pl_, Str_(0), t0_);
		t2_ = Call_(_pl_, t1_, Str_(1));
		return t2_;
		}
	return nil;
}


obj_ compile_call_co_with_co___PrimitiveFunction__Compiler(obj_ this_, obj_ builder, obj_ arguments)
{
	obj_ t0_;
	UsingMethod_(compile_primitive_function_call_co_with_co_)

		{
		t0_ = Call_(compile_primitive_function_call_co_with_co_, builder, this_, arguments);
		return t0_;
		}
	return nil;
}


obj_ create_co_on_proto_co___PrimitiveFunction__Compiler(obj_ this_, obj_ name, obj_ on_proto)
{
	obj_ t0_;
	UsingMethod_(name_co_) UsingMethod_(on_proto_co_)

		{
		t0_ = Call_(name_co_, this_, name);
		t0_ = Call_(on_proto_co_, this_, on_proto);
		}
	return nil;
}


obj_ interpret_call_with_co___PrimitiveFunction__Compiler(obj_ this_, obj_ arguments)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(interpret_proto_send_of_co_to_co_with_co_) UsingMethod_(name) UsingMethod_(on_proto)

		{
		t0_ = Call_(name, this_);
		t1_ = Call_(on_proto, this_);
		t2_ = Call_(interpret_proto_send_of_co_to_co_with_co_, this_, t0_, t1_, arguments);
		return t2_;
		}
	return nil;
}


obj_ new_co_on_proto_co___PrimitiveFunction__Compiler(obj_ this_, obj_ name, obj_ on_proto)
{
	UsingClass_(PrimitiveFunction__Compiler)
	obj_ obj = AllocObj_(PrimitiveFunction__Compiler);
	create_co_on_proto_co___PrimitiveFunction__Compiler(obj, name, on_proto);
	return obj;
}


