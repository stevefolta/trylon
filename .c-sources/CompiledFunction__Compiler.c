#include "Trylon_.h"

UsingSym_(CompiledFunction)UsingClass_(Compiler)
UsingClass_(TrylonFunction__Compiler)
UsingClass_(CompiledFunction__Compiler)
struct ClassInfo CompiledFunction__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 121, 7, Proto_(CompiledFunction__Compiler), Proto_(Compiler), Proto_(TrylonFunction__Compiler), nil, Sym_(CompiledFunction), nil, nil };
struct object CompiledFunction__Compiler = 
	{ &CompiledFunction__Compiler__classInfo_, {nil, nil, nil, nil, nil, nil, nil} };



#define name__fld_	(0)
#define arguments__fld_	(1)
#define return_type__fld_	(2)
#define on_proto__fld_	(3)
#define body__fld_	(4)
#define method_context__fld_	(5)
#define is_primitive__fld_	(6)


obj_ build_co___CompiledFunction__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	UsingMethod_(build_compiled_function_co_)

		{
		t0_ = Call_(build_compiled_function_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ c_name__CompiledFunction__Compiler(obj_ this_)
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
		t0_ = Call_(name, this_);
		t1_ = mangle_name_co___Compiler(Proto_(Compiler), t0_);
		t2_ = Call_(_pl_, t1_, Str_(0));
		t3_ = Call_(on_proto, this_);
		t4_ = Call_(c_name, t3_);
		t5_ = Call_(_pl_, t2_, t4_);
		return t5_;
		}
	return nil;
}


obj_ c_signature__CompiledFunction__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(arguments) UsingMethod_(c_name) UsingMethod_(c_signature_co_arguments_co_)

		{
		t0_ = Call_(c_name, this_);
		t1_ = Call_(arguments, this_);
		t2_ = Call_(c_signature_co_arguments_co_, this_, t0_, t1_);
		return t2_;
		}
	return nil;
}


obj_ compile_call_co_with_co___CompiledFunction__Compiler(obj_ this_, obj_ builder, obj_ arguments)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(compile_send_of_co_to_proto_co_with_co_using_co_) UsingMethod_(name) UsingMethod_(on_proto)

		{
		t0_ = Call_(name, this_);
		t1_ = Call_(on_proto, this_);
		t2_ = Call_(compile_send_of_co_to_proto_co_with_co_using_co_, this_, t0_, t1_, arguments, builder);
		return t2_;
		}
	return nil;
}


obj_ create_co_arguments_co_return_type_co_on_proto_co_body_co_is_primitive_co___CompiledFunction__Compiler(obj_ this_, obj_ name, obj_ arguments, obj_ return_type, obj_ on_proto, obj_ body, obj_ is_primitive)
{
	obj_ t0_;
	UsingMethod_(arguments_co_) UsingMethod_(body_co_) UsingMethod_(is_primitive_co_) UsingMethod_(name_co_) UsingMethod_(on_proto_co_) UsingMethod_(return_type_co_)

		{
		t0_ = Call_(name_co_, this_, name);
		t0_ = Call_(arguments_co_, this_, arguments);
		t0_ = Call_(return_type_co_, this_, return_type);
		t0_ = Call_(on_proto_co_, this_, on_proto);
		t0_ = Call_(body_co_, this_, body);
		t0_ = Call_(is_primitive_co_, this_, is_primitive);
		}
	return nil;
}


obj_ emit_c_call_co_builder_co___CompiledFunction__Compiler(obj_ this_, obj_ arguments, obj_ builder)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(emit_proto_send_co_arguments_co_builder_co_) UsingMethod_(on_proto)

		{
		/*  This is a send to the prototype object. */
		t0_ = Call_(on_proto, this_);
		t1_ = Call_(emit_proto_send_co_arguments_co_builder_co_, this_, t0_, arguments, builder);
		return t1_;
		}
	return nil;
}


obj_ emit_c_function_on_co___CompiledFunction__Compiler(obj_ this_, obj_ stream)
{
	extern obj_ new_co___MethodBuilder__CCompiler(obj_ this_, obj_ function);
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "{")
	DefineString_(1, "return nil;")
	DefineString_(2, "}")
	DefineString_(3, "{\n\treturn nil;\n}\n")
	UsingMethod_(body) UsingMethod_(c_signature) UsingMethod_(emit_code_co_) UsingMethod_(emit_co_) UsingMethod_(is_primitive) UsingMethod_(write_line) UsingMethod_(write_line_co_) UsingMethod_(write_co_)
	UsingClass_(MethodBuilder__CCompiler)

		{
		t0_ = Call_(c_signature, this_);
		t1_ = Call_(write_line_co_, stream, t0_);
		t0_ = Call_(body, this_);
		if (t0_)
			{
			t0_ = Call_(is_primitive, this_);
			if (t0_)
				{
				t0_ = Call_(write_line_co_, stream, Str_(0));
				t0_ = Call_(body, this_);
				t1_ = Call_(write_co_, stream, t0_);
				t0_ = Call_(write_line_co_, stream, Str_(1));
				t0_ = Call_(write_line_co_, stream, Str_(2));
				}
			else
				{
				obj_ builder;
				t0_ = new_co___MethodBuilder__CCompiler(Proto_(MethodBuilder__CCompiler), this_);
				builder = t0_;
				t0_ = Call_(body, this_);
				t1_ = Call_(emit_code_co_, t0_, builder);
				t0_ = Call_(emit_co_, builder, stream);
				}
			}
		else
			{
			t0_ = Call_(write_co_, stream, Str_(3));
			}
		t0_ = Call_(write_line, stream);
		t0_ = Call_(write_line, stream);
		}
	return nil;
}


obj_ has_code__CompiledFunction__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(body) UsingMethod_(is_empty)

		{
		t0_ = Call_(body, this_);
		if (t0_)
			{
			t0_ = Call_(body, this_);
			t1_ = Call_(is_empty, t0_);
			t2_ = Not_(t1_);
			return t2_;
			}
		return nil;
		}
	return nil;
}


obj_ interpret_call_with_co___CompiledFunction__Compiler(obj_ this_, obj_ arguments)
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


obj_ new_co_arguments_co_return_type_co_on_proto_co_body_co_is_primitive_co___CompiledFunction__Compiler(obj_ this_, obj_ name, obj_ arguments, obj_ return_type, obj_ on_proto, obj_ body, obj_ is_primitive)
{
	UsingClass_(CompiledFunction__Compiler)
	obj_ obj = AllocObj_(CompiledFunction__Compiler);
	create_co_arguments_co_return_type_co_on_proto_co_body_co_is_primitive_co___CompiledFunction__Compiler(obj, name, arguments, return_type, on_proto, body, is_primitive);
	return obj;
}


obj_ resolve__CompiledFunction__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(body) UsingMethod_(is_primitive) UsingMethod_(resolve)

		{
		t0_ = Call_(body, this_);
		if (t0_) {
			t1_ = Call_(is_primitive, this_);
			t2_ = Not_(t1_);
			t0_ = t2_;
			}
		if (t0_)
			{
			t0_ = Call_(body, this_);
			t1_ = Call_(resolve, t0_);
			}
		}
	return nil;
}


