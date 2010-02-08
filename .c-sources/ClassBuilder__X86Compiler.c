#include "Trylon_.h"

UsingSym_(ClassBuilder)UsingClass_(X86Compiler)
UsingClass_(Object__Standard)
UsingClass_(ClassBuilder__X86Compiler)
struct ClassInfo ClassBuilder__X86Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 109, 2, Proto_(ClassBuilder__X86Compiler), Proto_(X86Compiler), Proto_(Object__Standard), nil, Sym_(ClassBuilder), nil, nil };
struct object ClassBuilder__X86Compiler = 
	{ &ClassBuilder__X86Compiler__classInfo_, {nil, nil} };


#define class_context__fld_	(0)
#define shared_fields__fld_	(1)

DeclareSharedField_(new_shared_fields, ClassBuilder__X86Compiler, nil)

obj_ build__ClassBuilder__X86Compiler(obj_ this_)
{
	extern obj_ virtual__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		}
	return nil;
}


obj_ build_compiled_function_co___ClassBuilder__X86Compiler(obj_ this_, obj_ function)
{
	extern obj_ compile_co___X86Compiler(obj_ this_, obj_ function);
	obj_ t0_;
	UsingClass_(X86Compiler)

		{
		t0_ = compile_co___X86Compiler(Proto_(X86Compiler), function);
		return t0_;
		}
	return nil;
}


obj_ build_field_getter_co___ClassBuilder__X86Compiler(obj_ this_, obj_ function)
{
	extern obj_ build_field_getter_co___MethodBuilder__X86Compiler(obj_ this_, obj_ index);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(index_for_field_co_) UsingMethod_(name)
	UsingClass_(MethodBuilder__X86Compiler)

		{
		obj_ field_index;
		t0_ = Call_(name, function);
		t1_ = Call_(index_for_field_co_, this_, t0_);
		field_index = t1_;
		t0_ = build_field_getter_co___MethodBuilder__X86Compiler(Proto_(MethodBuilder__X86Compiler), field_index);
		return t0_;
		}
	return nil;
}


obj_ build_field_setter_co___ClassBuilder__X86Compiler(obj_ this_, obj_ function)
{
	extern obj_ build_field_setter_co___MethodBuilder__X86Compiler(obj_ this_, obj_ index);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(field) UsingMethod_(index_for_field_co_) UsingMethod_(name)
	UsingClass_(MethodBuilder__X86Compiler)

		{
		obj_ field_index;
		t0_ = Call_(field, function);
		t1_ = Call_(name, t0_);
		t2_ = Call_(index_for_field_co_, this_, t1_);
		field_index = t2_;
		t0_ = build_field_setter_co___MethodBuilder__X86Compiler(Proto_(MethodBuilder__X86Compiler), field_index);
		return t0_;
		}
	return nil;
}


obj_ build_functions_into_co___ClassBuilder__X86Compiler(obj_ this_, obj_ object)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_dt_class) UsingMethod_(build_co_) UsingMethod_(class_context) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(install_method_co_machine_code_co_) UsingMethod_(intern) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(key) UsingMethod_(newly_defined_functions) UsingMethod_(value)

		{
		t0_ = Call_(class_context, this_);
		t1_ = Call_(newly_defined_functions, t0_);
		ForStart_(0, t1_, function)
			{
			obj_ machine_code;
			t0_ = Call_(value, function);
			t1_ = Call_(build_co_, t0_, this_);
			machine_code = t1_;
			if (machine_code)
				{
				obj_ symbol;
				t0_ = Call_(key, function);
				t1_ = Call_(intern, t0_);
				symbol = t1_;
				t0_ = Call_(_dt_class, object);
				t1_ = Call_(install_method_co_machine_code_co_, t0_, symbol, machine_code);
				}
			}
		ForEnd_(0)
		}
	return nil;
}


obj_ build_new_function_co___ClassBuilder__X86Compiler(obj_ this_, obj_ function)
{
	extern obj_ build_new_function_co___MethodBuilder__X86Compiler(obj_ this_, obj_ function);
	obj_ t0_;
	UsingClass_(MethodBuilder__X86Compiler)

		{
		t0_ = build_new_function_co___MethodBuilder__X86Compiler(Proto_(MethodBuilder__X86Compiler), function);
		return t0_;
		}
	return nil;
}


obj_ build_proto_function_co___ClassBuilder__X86Compiler(obj_ this_, obj_ function)
{
	extern obj_ build_co___ClassBuilder__X86Compiler(obj_ this_, obj_ class_context);
	extern obj_ build_object_returner_co___MethodBuilder__X86Compiler(obj_ this_, obj_ object);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(proto)
	UsingClass_(ClassBuilder__X86Compiler)
	UsingClass_(MethodBuilder__X86Compiler)

		{
		obj_ subproto;
		/*  Build the subproto first. */
		t0_ = Call_(proto, function);
		t1_ = build_co___ClassBuilder__X86Compiler(Proto_(ClassBuilder__X86Compiler), t0_);
		subproto = t1_;
		
		/*  Make a method that returns it. */
		t0_ = build_object_returner_co___MethodBuilder__X86Compiler(Proto_(MethodBuilder__X86Compiler), subproto);
		return t0_;
		}
	return nil;
}


obj_ build_shared_field_getter_co___ClassBuilder__X86Compiler(obj_ this_, obj_ function)
{
	extern obj_ build_location_getter_co___MethodBuilder__X86Compiler(obj_ this_, obj_ ptr);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(field) UsingMethod_(new_shared_field_for_co_) UsingMethod_(value_ptr)
	UsingClass_(MethodBuilder__X86Compiler)

		{
		obj_ shared_field;
		t0_ = Call_(field, function);
		t1_ = Call_(new_shared_field_for_co_, this_, t0_);
		shared_field = t1_;
		t0_ = Call_(value_ptr, shared_field);
		t1_ = build_location_getter_co___MethodBuilder__X86Compiler(Proto_(MethodBuilder__X86Compiler), t0_);
		return t1_;
		}
	return nil;
}


obj_ build_shared_field_setter_co___ClassBuilder__X86Compiler(obj_ this_, obj_ function)
{
	extern obj_ build_location_setter_co___MethodBuilder__X86Compiler(obj_ this_, obj_ ptr);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(field) UsingMethod_(new_shared_field_for_co_) UsingMethod_(value_ptr)
	UsingClass_(MethodBuilder__X86Compiler)

		{
		obj_ shared_field;
		t0_ = Call_(field, function);
		t1_ = Call_(new_shared_field_for_co_, this_, t0_);
		shared_field = t1_;
		t0_ = Call_(value_ptr, shared_field);
		t1_ = build_location_setter_co___MethodBuilder__X86Compiler(Proto_(MethodBuilder__X86Compiler), t0_);
		return t1_;
		}
	return nil;
}


obj_ build_co___ClassBuilder__X86Compiler(obj_ this_, obj_ class_context)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(build) UsingMethod_(builder_for_co_)

		{
		t0_ = Call_(builder_for_co_, this_, class_context);
		t1_ = Call_(build, t0_);
		return t1_;
		}
	return nil;
}


obj_ builder_for_co___ClassBuilder__X86Compiler(obj_ this_, obj_ class_context)
{
	extern obj_ new_co___ExistingClassBuilder__X86Compiler(obj_ this_, obj_ existing_class);
	extern obj_ new_co___CompiledClassBuilder__X86Compiler(obj_ this_, obj_ compiled_class);
	extern obj_ error_co___Standard(obj_ this_, obj_ message);
	obj_ t0_;
	DefineString_(0, "Internal error: unknown type of Class.")
	UsingMethod_(compile_info) UsingMethod_(compile_info_co_) UsingMethod_(is_a_co_)
	UsingClass_(CompiledClassBuilder__X86Compiler)
	UsingClass_(CompiledClass__Compiler)
	UsingClass_(ExistingClassBuilder__X86Compiler)
	UsingClass_(ExistingClass__Compiler)
	UsingClass_(Standard)

		{
		obj_ builder;
		t0_ = Call_(compile_info, class_context);
		if (t0_)
			{
			t0_ = Call_(compile_info, class_context);
			return t0_;
			}
		
		builder = nil;
		t0_ = Call_(is_a_co_, class_context, Proto_(ExistingClass__Compiler));
		if (t0_)
			{
			t0_ = new_co___ExistingClassBuilder__X86Compiler(Proto_(ExistingClassBuilder__X86Compiler), class_context);
			builder = t0_;
			}
		else
			{
			t0_ = Call_(is_a_co_, class_context, Proto_(CompiledClass__Compiler));
			if (t0_)
				{
				t0_ = new_co___CompiledClassBuilder__X86Compiler(Proto_(CompiledClassBuilder__X86Compiler), class_context);
				builder = t0_;
				}
			else
				{
				t0_ = error_co___Standard(Proto_(Standard), Str_(0));
				}
			}
		t0_ = Call_(compile_info_co_, class_context, builder);
		return builder;
		}
	return nil;
}


obj_ create_co___ClassBuilder__X86Compiler(obj_ this_, obj_ class_context)
{
	extern obj_ new__Dictionary__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(class_context_co_) UsingMethod_(init) UsingMethod_(shared_fields_co_)
	UsingClass_(Dictionary__Standard)

		{
		t0_ = Call_(init, this_);
		t0_ = Call_(class_context_co_, this_, class_context);
		t0_ = new__Dictionary__Standard(Proto_(Dictionary__Standard));
		t1_ = Call_(shared_fields_co_, this_, t0_);
		}
	return nil;
}


obj_ index_for_field_co___ClassBuilder__X86Compiler(obj_ this_, obj_ name)
{
	extern obj_ virtual__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		}
	return nil;
}


obj_ init__ClassBuilder__X86Compiler(obj_ this_)
{
	extern obj_ new__List__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(new_shared_fields) UsingMethod_(new_shared_fields_co_)
	UsingClass_(List__Standard)

		{
		t0_ = Call_(new_shared_fields, this_);
		if (t0_)
			{
			return nil;
			}
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(new_shared_fields_co_, this_, t0_);
		}
	return nil;
}


obj_ live_proto__ClassBuilder__X86Compiler(obj_ this_)
{
	extern obj_ virtual__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		}
	return nil;
}


obj_ live_proto_for_co___ClassBuilder__X86Compiler(obj_ this_, obj_ class_context)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(builder_for_co_) UsingMethod_(live_proto)

		{
		t0_ = Call_(builder_for_co_, this_, class_context);
		t1_ = Call_(live_proto, t0_);
		return t1_;
		}
	return nil;
}


obj_ new_shared_field_for_co___ClassBuilder__X86Compiler(obj_ this_, obj_ field)
{
	extern obj_ new_co___NewSharedField__X86Compiler(obj_ this_, obj_ name);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(append_co_) UsingMethod_(at_co_) UsingMethod_(at_co_put_co_) UsingMethod_(initial_value) UsingMethod_(interpreted) UsingMethod_(name) UsingMethod_(new_shared_fields) UsingMethod_(shared_fields) UsingMethod_(value_co_)
	UsingClass_(NewSharedField__X86Compiler)

		{
		obj_ name, shared_field;
		t0_ = Call_(name, field);
		name = t0_;
		t0_ = Call_(shared_fields, this_);
		t1_ = Call_(at_co_, t0_, name);
		shared_field = t1_;
		t0_ = Not_(shared_field);
		if (t0_)
			{
			t0_ = new_co___NewSharedField__X86Compiler(Proto_(NewSharedField__X86Compiler), name);
			shared_field = t0_;
			t0_ = Call_(initial_value, field);
			if (t0_)
				{
				t0_ = Call_(initial_value, field);
				t1_ = Call_(interpreted, t0_);
				t2_ = Call_(value_co_, shared_field, t1_);
				}
			t0_ = Call_(shared_fields, this_);
			t1_ = Call_(at_co_put_co_, t0_, name, shared_field);
			t0_ = Call_(new_shared_fields, this_);
			t1_ = Call_(append_co_, t0_, shared_field);
			}
		return shared_field;
		}
	return nil;
}


obj_ new_shared_fields__ClassBuilder__X86Compiler(obj_ this_)
{
	return SharedField_(new_shared_fields, ClassBuilder__X86Compiler);
}


obj_ new_shared_fields_co___ClassBuilder__X86Compiler(obj_ this_, obj_ value)
{
	SetSharedField_(new_shared_fields, ClassBuilder__X86Compiler, value);
	return value;
}


obj_ new_co___ClassBuilder__X86Compiler(obj_ this_, obj_ class_context)
{
	UsingClass_(ClassBuilder__X86Compiler)
	obj_ obj = AllocObj_(ClassBuilder__X86Compiler);
	create_co___ClassBuilder__X86Compiler(obj, class_context);
	return obj;
}


