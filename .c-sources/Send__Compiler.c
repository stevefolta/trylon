#include "Trylon_.h"

UsingSym_(Send)UsingClass_(Compiler)
UsingClass_(TrylonExpression__Compiler)
UsingClass_(Send__Compiler)
struct ClassInfo Send__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 146, 4, Proto_(Send__Compiler), Proto_(Compiler), Proto_(TrylonExpression__Compiler), nil, Sym_(Send), nil, nil };
struct object Send__Compiler = 
	{ &Send__Compiler__classInfo_, {nil, nil, nil, nil} };



#define name__fld_	(0)
#define object__fld_	(1)
#define arguments__fld_	(2)
#define proto_result_function__fld_	(3)


obj_ compile_co___Send__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	UsingMethod_(compile_send_co_)

		{
		t0_ = Call_(compile_send_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ convert_to_setter_call_co___Send__Compiler(obj_ this_, obj_ value)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, ":")
	DefineString_(1, "put:")
	DefineString_(2, ":")
	UsingMethod_(_pl_) UsingMethod_(append_co_) UsingMethod_(arguments) UsingMethod_(ends_with_co_) UsingMethod_(name) UsingMethod_(name_co_)

		{
		t0_ = Call_(name, this_);
		t1_ = Call_(ends_with_co_, t0_, Str_(0));
		if (t1_)
			{
			t0_ = Call_(name, this_);
			t1_ = Call_(_pl_, t0_, Str_(1));
			t2_ = Call_(name_co_, this_, t1_);
			}
		else
			{
			t0_ = Call_(name, this_);
			t1_ = Call_(_pl_, t0_, Str_(2));
			t2_ = Call_(name_co_, this_, t1_);
			}
		t0_ = Call_(arguments, this_);
		t1_ = Call_(append_co_, t0_, value);
		}
	return nil;
}


obj_ copy__Send__Compiler(obj_ this_)
{
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co_object_co_arguments_co___Send__Compiler(obj_ this_, obj_ name, obj_ object, obj_ arguments);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(append_co_) UsingMethod_(arguments) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(name) UsingMethod_(object)
	UsingClass_(List__Standard)
	UsingClass_(Send__Compiler)

		{
		obj_ copied_args;
		t0_ = new__List__Standard(Proto_(List__Standard));
		copied_args = t0_;
		t0_ = Call_(arguments, this_);
		ForStart_(0, t0_, arg)
			{
			t0_ = Call_(append_co_, copied_args, arg);
			}
		ForEnd_(0)
		t0_ = Call_(name, this_);
		t1_ = Call_(object, this_);
		t2_ = new_co_object_co_arguments_co___Send__Compiler(Proto_(Send__Compiler), t0_, t1_, copied_args);
		return t2_;
		}
	return nil;
}


obj_ create_co_object_co_arguments_co___Send__Compiler(obj_ this_, obj_ name, obj_ object, obj_ arguments)
{
	obj_ t0_;
	UsingMethod_(arguments_co_) UsingMethod_(name_co_) UsingMethod_(object_co_)

		{
		t0_ = Call_(name_co_, this_, name);
		t0_ = Call_(object_co_, this_, object);
		t0_ = Call_(arguments_co_, this_, arguments);
		}
	return nil;
}


obj_ emit_code_co___Send__Compiler(obj_ this_, obj_ builder)
{
	extern obj_ emit_send_co_to_string_co_with_co_builder_co___CCompiler(obj_ this_, obj_ name, obj_ receiver, obj_ arguments, obj_ builder);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	UsingMethod_(access) UsingMethod_(arguments) UsingMethod_(emit_c_call_co_builder_co_) UsingMethod_(emit_code_co_) UsingMethod_(name) UsingMethod_(object) UsingMethod_(proto_result_function)
	UsingClass_(CCompiler)

		{
		obj_ object_result;
		/*  Special-case calls on prototypes. */
		/*  "Compiler Send resolve" has found the ProtoFunction for us. */
		t0_ = Call_(proto_result_function, this_);
		if (t0_)
			{
			t0_ = Call_(proto_result_function, this_);
			t1_ = Call_(arguments, this_);
			t2_ = Call_(emit_c_call_co_builder_co_, t0_, t1_, builder);
			return t2_;
			}
		
		/*  Normal send. */
		t3_ = Call_(object, this_);
		t4_ = Call_(emit_code_co_, t3_, builder);
		object_result = t4_;
		t0_ = Call_(name, this_);
		t1_ = Call_(access, object_result);
		t2_ = Call_(arguments, this_);
		t3_ = emit_send_co_to_string_co_with_co_builder_co___CCompiler(Proto_(CCompiler), t0_, t1_, t2_, builder);
		return t3_;
		}
	return nil;
}


obj_ interpreted__Send__Compiler(obj_ this_)
{
	extern obj_ interpret_send_of_co_to_co_with_co___Interpreter(obj_ this_, obj_ name, obj_ object, obj_ arguments);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(arguments) UsingMethod_(name) UsingMethod_(object)
	UsingClass_(Interpreter)

		{
		t0_ = Call_(name, this_);
		t1_ = Call_(object, this_);
		t2_ = Call_(arguments, this_);
		t3_ = interpret_send_of_co_to_co_with_co___Interpreter(Proto_(Interpreter), t0_, t1_, t2_);
		return t3_;
		}
	return nil;
}


obj_ message_co_to_co_with_co___Send__Compiler(obj_ this_, obj_ name, obj_ object, obj_ arguments)
{
	obj_ t0_;
	UsingMethod_(new_co_object_co_arguments_co_)

		{
		t0_ = Call_(new_co_object_co_arguments_co_, this_, name, object, arguments);
		return t0_;
		}
	return nil;
}


obj_ new_co_object_co_arguments_co___Send__Compiler(obj_ this_, obj_ name, obj_ object, obj_ arguments)
{
	UsingClass_(Send__Compiler)
	obj_ obj = AllocObj_(Send__Compiler);
	create_co_object_co_arguments_co___Send__Compiler(obj, name, object, arguments);
	return obj;
}


obj_ resolve__Send__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(arguments) UsingMethod_(calling_selector_co_) UsingMethod_(current_item) UsingMethod_(function) UsingMethod_(go_forward) UsingMethod_(is_a_co_) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(lookup_function_co_) UsingMethod_(name) UsingMethod_(object) UsingMethod_(proto) UsingMethod_(proto_result_function) UsingMethod_(proto_result_function_co_) UsingMethod_(resolve)
	UsingSharedField_(compiler, Main) 
	UsingClass_(FunctionCall__Compiler)
	UsingClass_(ProtoFunction__Compiler)
	UsingClass_(Send__Compiler)

		{
		obj_ function;
		t0_ = Call_(name, this_);
		t1_ = Call_(calling_selector_co_, SharedField_(compiler, Main), t0_);
		t0_ = Call_(object, this_);
		t1_ = Call_(resolve, t0_);
		t0_ = Call_(arguments, this_);
		ForStart_(0, t0_, arg)
			{
			t0_ = Call_(resolve, arg);
			}
		ForEnd_(0)
		
		/*  Handle proto functions, to ensure the proto is loaded. */
		function = nil;
		t0_ = Call_(object, this_);
		t1_ = Call_(is_a_co_, t0_, Proto_(FunctionCall__Compiler));
		if (t1_)
			{
			t0_ = Call_(object, this_);
			t1_ = Call_(function, t0_);
			function = t1_;
			}
		else
			{
			t0_ = Call_(object, this_);
			t1_ = Call_(is_a_co_, t0_, Proto_(Send__Compiler));
			if (t1_)
				{
				t0_ = Call_(object, this_);
				t1_ = Call_(proto_result_function, t0_);
				function = t1_;
				}
			}
		t0_ = function;
		if (t0_) {
			t1_ = Call_(is_a_co_, function, Proto_(ProtoFunction__Compiler));
			t0_ = t1_;
			}
		if (t0_)
			{
			t0_ = Call_(proto, function);
			t1_ = Call_(name, this_);
			t2_ = Call_(lookup_function_co_, t0_, t1_);
			t3_ = Call_(proto_result_function_co_, this_, t2_);
			}
		}
	return nil;
}


