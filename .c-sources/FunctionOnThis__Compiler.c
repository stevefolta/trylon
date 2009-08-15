#include "Trylon_.h"

UsingSym_(FunctionOnThis)UsingClass_(Compiler)
UsingClass_(TrylonFunction__Compiler)
UsingClass_(FunctionOnThis__Compiler)
struct ClassInfo FunctionOnThis__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 132, 2, Proto_(FunctionOnThis__Compiler), Proto_(Compiler), Proto_(TrylonFunction__Compiler), nil, Sym_(FunctionOnThis), nil, nil };
struct object FunctionOnThis__Compiler = 
	{ &FunctionOnThis__Compiler__classInfo_, {nil, nil} };



#define name__fld_	(0)
#define on_proto__fld_	(1)


obj_ compile_call_co_with_co___FunctionOnThis__Compiler(obj_ this_, obj_ builder, obj_ arguments)
{
	obj_ t0_;
	UsingMethod_(compile_function_on_this_call_co_with_co_)

		{
		t0_ = Call_(compile_function_on_this_call_co_with_co_, builder, this_, arguments);
		return t0_;
		}
	return nil;
}


obj_ create_co_on_proto_co___FunctionOnThis__Compiler(obj_ this_, obj_ name, obj_ on_proto)
{
	obj_ t0_;
	UsingMethod_(name_co_) UsingMethod_(on_proto_co_)

		{
		t0_ = Call_(name_co_, this_, name);
		t0_ = Call_(on_proto_co_, this_, on_proto);
		}
	return nil;
}


obj_ emit_c_call_co_builder_co___FunctionOnThis__Compiler(obj_ this_, obj_ arguments, obj_ builder)
{
	extern obj_ emit_send_co_to_string_co_with_co_builder_co___CCompiler(obj_ this_, obj_ name, obj_ receiver, obj_ arguments, obj_ builder);
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "this_")
	UsingMethod_(name)
	UsingClass_(CCompiler)

		{
		t0_ = Call_(name, this_);
		t1_ = emit_send_co_to_string_co_with_co_builder_co___CCompiler(Proto_(CCompiler), t0_, Str_(0), arguments, builder);
		return t1_;
		}
	return nil;
}


obj_ interpret_call_with_co___FunctionOnThis__Compiler(obj_ this_, obj_ arguments)
{

		{
		/*  ... */
		}
	return nil;
}


obj_ new_co_on_proto_co___FunctionOnThis__Compiler(obj_ this_, obj_ name, obj_ on_proto)
{
	UsingClass_(FunctionOnThis__Compiler)
	obj_ obj = AllocObj_(FunctionOnThis__Compiler);
	create_co_on_proto_co___FunctionOnThis__Compiler(obj, name, on_proto);
	return obj;
}


