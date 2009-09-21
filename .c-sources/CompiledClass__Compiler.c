#include "Trylon_.h"

UsingSym_(CompiledClass)UsingClass_(Compiler)
UsingClass_(Class__Compiler)
UsingClass_(CompiledClass__Compiler)
struct ClassInfo CompiledClass__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 92, 17, Proto_(CompiledClass__Compiler), Proto_(Compiler), Proto_(Class__Compiler), nil, Sym_(CompiledClass), nil, nil };
struct object CompiledClass__Compiler = 
	{ &CompiledClass__Compiler__classInfo_, {nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil} };



#define compile_info__fld_	(0)

#define name__fld_	(1)
#define parent__fld_	(2)
#define functions__fld_	(3)
#define fields__fld_	(4)
#define shared_fields__fld_	(5)
#define superclass__fld_	(6)
#define directories__fld_	(7)
#define uses_protos__fld_	(8)
#define subclasses__fld_	(9)
#define source_name__fld_	(10)
#define is_main__fld_	(11)
#define is_root_object__fld_	(12)
#define has_destroy__fld_	(13)
#define class_num__fld_	(14)
#define c_preamble__fld_	(15)
#define _dt_c_name__fld_	(16)


obj_ add_directory_co___CompiledClass__Compiler(obj_ this_, obj_ directory)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "main")
	DefineString_(1, "main")
	UsingMethod_(append_co_) UsingMethod_(at_co_) UsingMethod_(contains_co_) UsingMethod_(directories) UsingMethod_(load_class_file_co_into_co_)

		{
		t0_ = Call_(directories, this_);
		t1_ = Call_(append_co_, t0_, directory);
		
		t0_ = Call_(contains_co_, directory, Str_(0));
		if (t0_)
			{
			t0_ = Call_(at_co_, directory, Str_(1));
			t1_ = Call_(load_class_file_co_into_co_, this_, t0_, this_);
			}
		}
	return nil;
}


obj_ add_field_co___CompiledClass__Compiler(obj_ this_, obj_ field)
{
	extern obj_ new_co_on_proto_co___FieldGetter__Compiler(obj_ this_, obj_ field, obj_ on_proto);
	extern obj_ new_co_on_proto_co___FieldSetter__Compiler(obj_ this_, obj_ field, obj_ on_proto);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, ":")
	UsingMethod_(_pl_) UsingMethod_(add_function_co_function_co_) UsingMethod_(append_co_) UsingMethod_(fields) UsingMethod_(name)
	UsingClass_(FieldGetter__Compiler)
	UsingClass_(FieldSetter__Compiler)

		{
		t0_ = Call_(fields, this_);
		t1_ = Call_(append_co_, t0_, field);
		t0_ = Call_(name, field);
		t1_ = new_co_on_proto_co___FieldGetter__Compiler(Proto_(FieldGetter__Compiler), field, this_);
		t2_ = Call_(add_function_co_function_co_, this_, t0_, t1_);
		t0_ = Call_(name, field);
		t1_ = Call_(_pl_, t0_, Str_(0));
		t2_ = new_co_on_proto_co___FieldSetter__Compiler(Proto_(FieldSetter__Compiler), field, this_);
		t3_ = Call_(add_function_co_function_co_, this_, t1_, t2_);
		}
	return nil;
}


obj_ add_function_co___CompiledClass__Compiler(obj_ this_, obj_ function)
{
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	extern obj_ new_co_on_proto_co___NewFunction__Compiler(obj_ this_, obj_ creator, obj_ on_proto);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	obj_ t7_;
	DefineString_(0, "\"")
	DefineString_(1, " ")
	DefineString_(2, "\" is defined twice.")
	DefineString_(3, "create")
	DefineString_(4, "create:")
	DefineString_(5, "create-")
	DefineString_(6, "destroy")
	UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(at_co_) UsingMethod_(at_co_put_co_) UsingMethod_(declaring_selector_co_) UsingMethod_(functions) UsingMethod_(has_code) UsingMethod_(has_destroy_co_) UsingMethod_(is_a_co_) UsingMethod_(name) UsingMethod_(starts_with_co_)
	UsingSharedField_(compiler, Main) 
	UsingClass_(CompiledFunction__Compiler)
	UsingClass_(MessageException__Standard)
	UsingClass_(NewFunction__Compiler)

		{
		obj_ function_name;
		t0_ = Call_(name, function);
		function_name = t0_;
		t0_ = Call_(has_code, function);
		if (t0_)
			{
			obj_ existing_function;
			t0_ = Call_(functions, this_);
			t1_ = Call_(at_co_, t0_, function_name);
			existing_function = t1_;
			t0_ = existing_function;
			if (t0_) {
				t1_ = Call_(has_code, existing_function);
				t0_ = t1_;
				}
			if (t0_)
				{
				t0_ = Call_(name, this_);
				t1_ = Call_(_pl_, Str_(0), t0_);
				t2_ = Call_(_pl_, t1_, Str_(1));
				t3_ = Call_(_pl_, t2_, function_name);
				t4_ = Call_(_pl_, t3_, Str_(2));
				t5_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), t4_);
				Throw_(t5_);
				}
			}
		
		t6_ = Call_(functions, this_);
		t7_ = Call_(at_co_put_co_, t6_, function_name, function);
		t0_ = Call_(declaring_selector_co_, SharedField_(compiler, Main), function_name);
		
		/*  "create" functions automatically add a corresponding "new:" function. */
		t0_ = Call_(is_a_co_, function, Proto_(CompiledFunction__Compiler));
		if (t0_) {
			t1_ = Call_(_eq__eq_, function_name, Str_(3));
			if ((t1_) == nil) {
				t2_ = Call_(starts_with_co_, function_name, Str_(4));
				t1_ = t2_;
				}
			if ((t1_) == nil) {
				t3_ = Call_(starts_with_co_, function_name, Str_(5));
				t1_ = t3_;
				}
			t0_ = t1_;
			}
		if (t0_)
			{
			obj_ new_function;
			/*  Add the corresponding "new" function. */
			t0_ = new_co_on_proto_co___NewFunction__Compiler(Proto_(NewFunction__Compiler), function, this_);
			new_function = t0_;
			t0_ = Call_(functions, this_);
			t1_ = Call_(name, new_function);
			t2_ = Call_(at_co_put_co_, t0_, t1_, new_function);
			t0_ = Call_(name, new_function);
			t1_ = Call_(declaring_selector_co_, SharedField_(compiler, Main), t0_);
			}
		
		/*  "destroy" functions mean a finalizer is needed. */
		t0_ = Call_(_eq__eq_, function_name, Str_(6));
		if (t0_)
			{
			t0_ = Call_(has_destroy_co_, this_, true_);
			}
		}
	return nil;
}


obj_ add_function_co_function_co___CompiledClass__Compiler(obj_ this_, obj_ name, obj_ function)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(at_co_put_co_) UsingMethod_(declaring_selector_co_) UsingMethod_(functions)
	UsingSharedField_(compiler, Main) 

		{
		t0_ = Call_(functions, this_);
		t1_ = Call_(at_co_put_co_, t0_, name, function);
		t0_ = Call_(declaring_selector_co_, SharedField_(compiler, Main), name);
		}
	return nil;
}


obj_ add_proto_co___CompiledClass__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	UsingMethod_(add_proto_co_directory_co_)

		{
		t0_ = Call_(add_proto_co_directory_co_, this_, name, nil);
		return t0_;
		}
	return nil;
}


obj_ add_proto_co_directory_co___CompiledClass__Compiler(obj_ this_, obj_ name, obj_ directory)
{
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	extern obj_ new_co_parent_co___CompiledClass__Compiler(obj_ this_, obj_ name, obj_ parent);
	extern obj_ new_co___ProtoFunction__Compiler(obj_ this_, obj_ proto);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineString_(0, "Adding \"")
	DefineString_(1, "\" as a proto, when it's already a non-proto.")
	DefineString_(2, "Loading ")
	DefineString_(3, " into ")
	DefineString_(4, "...")
	UsingMethod_(_pl_) UsingMethod_(add_directory_co_) UsingMethod_(add_function_co_function_co_) UsingMethod_(adding_class_co_) UsingMethod_(at_co_) UsingMethod_(full_name) UsingMethod_(functions) UsingMethod_(indent) UsingMethod_(is_a_co_) UsingMethod_(proto) UsingMethod_(report_co_) UsingMethod_(status_reporter) UsingMethod_(unindent)
	UsingSharedField_(compiler, Main) 
	UsingClass_(CompiledClass__Compiler)
	UsingClass_(MessageException__Standard)
	UsingClass_(ProtoFunction__Compiler)

		{
		obj_ existing_function, new_proto, proto_function, status_reporter;
		/*  If it already exists, return it. */
		t0_ = Call_(functions, this_);
		t1_ = Call_(at_co_, t0_, name);
		existing_function = t1_;
		if (existing_function)
			{
			t0_ = Call_(is_a_co_, existing_function, Proto_(ProtoFunction__Compiler));
			t1_ = Not_(t0_);
			if (t1_)
				{
				t0_ = Call_(_pl_, Str_(0), name);
				t1_ = Call_(_pl_, t0_, Str_(1));
				t2_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), t1_);
				Throw_(t2_);
				}
			t3_ = Call_(proto, existing_function);
			return t3_;
			}
		
		/*  Add the new one. */
		t4_ = Call_(status_reporter, SharedField_(compiler, Main));
		status_reporter = t4_;
		t0_ = Call_(_pl_, Str_(2), name);
		t1_ = Call_(_pl_, t0_, Str_(3));
		t2_ = Call_(full_name, this_);
		t3_ = Call_(_pl_, t1_, t2_);
		t4_ = Call_(_pl_, t3_, Str_(4));
		t5_ = Call_(report_co_, status_reporter, t4_);
		t0_ = Call_(indent, status_reporter);
		t0_ = new_co_parent_co___CompiledClass__Compiler(Proto_(CompiledClass__Compiler), name, this_);
		new_proto = t0_;
		if (directory)
			{
			t0_ = Call_(add_directory_co_, new_proto, directory);
			}
		t0_ = new_co___ProtoFunction__Compiler(Proto_(ProtoFunction__Compiler), new_proto);
		proto_function = t0_;
		t0_ = Call_(add_function_co_function_co_, this_, name, proto_function);
		t0_ = Call_(adding_class_co_, SharedField_(compiler, Main), new_proto);
		t0_ = Call_(unindent, status_reporter);
		return new_proto;
		}
	return nil;
}


obj_ add_shared_field_co___CompiledClass__Compiler(obj_ this_, obj_ field)
{
	extern obj_ new_co_on_proto_co___SharedFieldGetter__Compiler(obj_ this_, obj_ field, obj_ on_proto);
	extern obj_ new_co_on_proto_co___SharedFieldSetter__Compiler(obj_ this_, obj_ field, obj_ on_proto);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, ":")
	UsingMethod_(_pl_) UsingMethod_(add_function_co_function_co_) UsingMethod_(at_co_put_co_) UsingMethod_(name) UsingMethod_(shared_fields)
	UsingClass_(SharedFieldGetter__Compiler)
	UsingClass_(SharedFieldSetter__Compiler)

		{
		t0_ = Call_(shared_fields, this_);
		t1_ = Call_(name, field);
		t2_ = Call_(at_co_put_co_, t0_, t1_, field);
		t0_ = Call_(name, field);
		t1_ = new_co_on_proto_co___SharedFieldGetter__Compiler(Proto_(SharedFieldGetter__Compiler), field, this_);
		t2_ = Call_(add_function_co_function_co_, this_, t0_, t1_);
		t0_ = Call_(name, field);
		t1_ = Call_(_pl_, t0_, Str_(0));
		t2_ = new_co_on_proto_co___SharedFieldSetter__Compiler(Proto_(SharedFieldSetter__Compiler), field, this_);
		t3_ = Call_(add_function_co_function_co_, this_, t1_, t2_);
		}
	return nil;
}


obj_ add_used_namespace_co___CompiledClass__Compiler(obj_ this_, obj_ namespace_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(append_co_) UsingMethod_(uses_protos)

		{
		t0_ = Call_(uses_protos, this_);
		t1_ = Call_(append_co_, t0_, namespace_);
		}
	return nil;
}


obj_ assign_field_indices__CompiledClass__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingInt_(0)
	UsingInt_(1)
	UsingMethod_(_pl_) UsingMethod_(current_item) UsingMethod_(fields) UsingMethod_(go_forward) UsingMethod_(index_co_) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(superclass) UsingMethod_(total_num_fields)

		{
		obj_ index;
		index = SmallInt_(0);
		t0_ = Call_(superclass, this_);
		if (t0_)
			{
			t0_ = Call_(superclass, this_);
			t1_ = Call_(total_num_fields, t0_);
			index = t1_;
			}
		t0_ = Call_(fields, this_);
		ForStart_(0, t0_, field)
			{
			t0_ = Call_(index_co_, field, index);
			t0_ = Call_(_pl_, index, SmallInt_(1));
			index = t0_;
			}
		ForEnd_(0)
		}
	return nil;
}


obj_ c_name__CompiledClass__Compiler(obj_ this_)
{
	extern obj_ mangle_name_co___Compiler(obj_ this_, obj_ name);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineString_(0, "__")
	UsingMethod_(_pl_) UsingMethod_(_dt_c_name) UsingMethod_(_dt_c_name_co_) UsingMethod_(c_name) UsingMethod_(is_main) UsingMethod_(name) UsingMethod_(parent)
	UsingClass_(Compiler)

		{
		t0_ = Call_(_dt_c_name, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = Call_(name, this_);
			t1_ = mangle_name_co___Compiler(Proto_(Compiler), t0_);
			t2_ = Call_(_dt_c_name_co_, this_, t1_);
			t0_ = Call_(parent, this_);
			if (t0_) {
				t1_ = Call_(parent, this_);
				t2_ = Call_(is_main, t1_);
				t3_ = Not_(t2_);
				t0_ = t3_;
				}
			if (t0_)
				{
				t0_ = Call_(_dt_c_name, this_);
				t1_ = Call_(parent, this_);
				t2_ = Call_(c_name, t1_);
				t3_ = Call_(_pl_, Str_(0), t2_);
				t4_ = Call_(_pl_, t0_, t3_);
				t5_ = Call_(_dt_c_name_co_, this_, t4_);
				}
			}
		t0_ = Call_(_dt_c_name, this_);
		return t0_;
		}
	return nil;
}


obj_ create_co_parent_co___CompiledClass__Compiler(obj_ this_, obj_ name, obj_ parent)
{
	extern obj_ new__Dictionary__Standard(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new__Dictionary__Standard(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ new_co_on_proto_co___PrimitiveFunction__Compiler(obj_ this_, obj_ name, obj_ on_proto);
	extern obj_ new_co_on_proto_co___PrimitiveFunction__Compiler(obj_ this_, obj_ name, obj_ on_proto);
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, ".proto")
	DefineString_(1, ".superclass")
	UsingMethod_(add_function_co_) UsingMethod_(directories_co_) UsingMethod_(fields_co_) UsingMethod_(functions_co_) UsingMethod_(has_destroy_co_) UsingMethod_(is_main_co_) UsingMethod_(is_root_object_co_) UsingMethod_(name_co_) UsingMethod_(parent_co_) UsingMethod_(shared_fields_co_) UsingMethod_(subclasses_co_) UsingMethod_(targeting_jolt) UsingMethod_(uses_protos_co_)
	UsingClass_(Dictionary__Standard)
	UsingClass_(List__Standard)
	UsingClass_(Main)
	UsingClass_(PrimitiveFunction__Compiler)

		{
		t0_ = Call_(name_co_, this_, name);
		t0_ = Call_(parent_co_, this_, parent);
		t0_ = new__Dictionary__Standard(Proto_(Dictionary__Standard));
		t1_ = Call_(functions_co_, this_, t0_);
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(fields_co_, this_, t0_);
		t0_ = new__Dictionary__Standard(Proto_(Dictionary__Standard));
		t1_ = Call_(shared_fields_co_, this_, t0_);
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(directories_co_, this_, t0_);
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(uses_protos_co_, this_, t0_);
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(subclasses_co_, this_, t0_);
		t0_ = Call_(is_main_co_, this_, nil);
		t0_ = Call_(is_root_object_co_, this_, nil);
		t0_ = Call_(has_destroy_co_, this_, nil);
		
		/*  Will be added by Jolt code: */
		t0_ = build_settings__Main(Proto_(Main));
		t1_ = Call_(targeting_jolt, t0_);
		if (t1_)
			{
			t0_ = new_co_on_proto_co___PrimitiveFunction__Compiler(Proto_(PrimitiveFunction__Compiler), Str_(0), this_);
			t1_ = Call_(add_function_co_, this_, t0_);
			t0_ = new_co_on_proto_co___PrimitiveFunction__Compiler(Proto_(PrimitiveFunction__Compiler), Str_(1), this_);
			t1_ = Call_(add_function_co_, this_, t0_);
			}
		}
	return nil;
}


obj_ emit_all_function_declarations_co___CompiledClass__Compiler(obj_ this_, obj_ stream)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "extern ")
	DefineString_(1, ";")
	UsingMethod_(c_signature) UsingMethod_(current_item) UsingMethod_(emit_all_function_declarations_co_) UsingMethod_(functions) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(subclasses) UsingMethod_(values) UsingMethod_(write_line_co_) UsingMethod_(write_co_)

		{
		t0_ = Call_(functions, this_);
		t1_ = Call_(values, t0_);
		ForStart_(0, t1_, function)
			{
			t0_ = Call_(write_co_, stream, Str_(0));
			t0_ = Call_(c_signature, function);
			t1_ = Call_(write_co_, stream, t0_);
			t0_ = Call_(write_line_co_, stream, Str_(1));
			}
		ForEnd_(0)
		
		t0_ = Call_(subclasses, this_);
		ForStart_(1, t0_, subclass)
			{
			t0_ = Call_(emit_all_function_declarations_co_, subclass, stream);
			}
		ForEnd_(1)
		}
	return nil;
}


obj_ emit_field_indices_co___CompiledClass__Compiler(obj_ this_, obj_ stream)
{
	extern obj_ mangle_name_co___Compiler(obj_ this_, obj_ name);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(0)
	UsingInt_(1)
	DefineString_(0, "#define ")
	DefineString_(1, "__fld_\t(")
	DefineString_(2, ")")
	UsingMethod_(_pl_) UsingMethod_(current_item) UsingMethod_(emit_field_indices_co_) UsingMethod_(fields) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(name) UsingMethod_(string) UsingMethod_(superclass) UsingMethod_(write_line) UsingMethod_(write_line_co_) UsingMethod_(write_co_)
	UsingClass_(Compiler)

		{
		obj_ index;
		index = SmallInt_(0);
		t0_ = Call_(superclass, this_);
		if (t0_)
			{
			t0_ = Call_(superclass, this_);
			t1_ = Call_(emit_field_indices_co_, t0_, stream);
			index = t1_;
			}
		
		t0_ = Call_(fields, this_);
		ForStart_(0, t0_, field)
			{
			t0_ = Call_(write_co_, stream, Str_(0));
			t0_ = Call_(name, field);
			t1_ = mangle_name_co___Compiler(Proto_(Compiler), t0_);
			t2_ = Call_(write_co_, stream, t1_);
			t0_ = Call_(write_co_, stream, Str_(1));
			t0_ = Call_(string, index);
			t1_ = Call_(write_co_, stream, t0_);
			t0_ = Call_(_pl_, index, SmallInt_(1));
			index = t0_;
			t0_ = Call_(write_line_co_, stream, Str_(2));
			}
		ForEnd_(0)
		
		t0_ = Call_(write_line, stream);
		
		return index;
		}
	return nil;
}


obj_ ensure_superclasses_co___CompiledClass__Compiler(obj_ this_, obj_ object_proto)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(_nt__eq_) UsingMethod_(current_item) UsingMethod_(ensure_superclasses_co_) UsingMethod_(functions) UsingMethod_(go_forward) UsingMethod_(is_a_co_) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(make_subclass_of_co_) UsingMethod_(proto) UsingMethod_(superclass) UsingMethod_(values)
	UsingClass_(ProtoFunction__Compiler)

		{
		t0_ = Call_(superclass, this_);
		t1_ = Not_(t0_);
		if (t1_) {
			t2_ = Call_(_nt__eq_, object_proto, this_);
			t1_ = t2_;
			}
		if (t1_)
			{
			t0_ = Call_(make_subclass_of_co_, this_, object_proto);
			}
		t0_ = Call_(functions, this_);
		t1_ = Call_(values, t0_);
		ForStart_(0, t1_, function)
			{
			t0_ = Call_(is_a_co_, function, Proto_(ProtoFunction__Compiler));
			if (t0_)
				{
				obj_ proto;
				t0_ = Call_(proto, function);
				proto = t0_;
				t0_ = Call_(_nt__eq_, proto, this_);
				if (t0_)
					{
					t0_ = Call_(ensure_superclasses_co_, proto, object_proto);
					}
				}
			}
		ForEnd_(0)
		}
	return nil;
}


obj_ get_proto_co___CompiledClass__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(at_co_) UsingMethod_(functions) UsingMethod_(is_a_co_) UsingMethod_(lookup_function_co_) UsingMethod_(proto)
	UsingClass_(ProtoFunction__Compiler)

		{
		obj_ function;
		t0_ = Call_(functions, this_);
		t1_ = Call_(at_co_, t0_, name);
		function = t1_;
		t0_ = Not_(function);
		if (t0_)
			{
			t0_ = Call_(lookup_function_co_, this_, name);
			function = t0_;
			}
		t0_ = function;
		if (t0_) {
			t1_ = Call_(is_a_co_, function, Proto_(ProtoFunction__Compiler));
			t0_ = t1_;
			}
		if (t0_)
			{
			t0_ = Call_(proto, function);
			return t0_;
			}
		return nil;
		}
	return nil;
}


obj_ get_subproto_co___CompiledClass__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(at_co_) UsingMethod_(functions) UsingMethod_(is_a_co_) UsingMethod_(load_subproto_co_) UsingMethod_(proto)
	UsingClass_(ProtoFunction__Compiler)

		{
		obj_ function, subproto;
		/*  Has it been loaded already? */
		t0_ = Call_(functions, this_);
		t1_ = Call_(at_co_, t0_, name);
		function = t1_;
		t0_ = function;
		if (t0_) {
			t1_ = Call_(is_a_co_, function, Proto_(ProtoFunction__Compiler));
			t0_ = t1_;
			}
		if (t0_)
			{
			t0_ = Call_(proto, function);
			return t0_;
			}
		
		/*  Look for it. */
		t1_ = Call_(load_subproto_co_, this_, name);
		subproto = t1_;
		if (subproto)
			{
			return subproto;
			}
		
		return nil;
		}
	return nil;
}


obj_ in_co_for_co_parent_co___CompiledClass__Compiler(obj_ this_, obj_ directory, obj_ name, obj_ parent)
{
	extern obj_ new_co_parent_co___CompiledClass__Compiler(obj_ this_, obj_ name, obj_ parent);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineString_(0, "Loading ")
	DefineString_(1, " into ")
	DefineString_(2, "...")
	UsingMethod_(_pl_) UsingMethod_(add_directory_co_) UsingMethod_(at_co_) UsingMethod_(contains_co_) UsingMethod_(entry_is_directory_co_) UsingMethod_(full_name) UsingMethod_(indent) UsingMethod_(load_class_file_co_into_co_) UsingMethod_(report_co_) UsingMethod_(status_reporter) UsingMethod_(unindent)
	UsingSharedField_(compiler, Main) 
	UsingClass_(CompiledClass__Compiler)

		{
		obj_ new_proto;
		new_proto = nil;
		
		t0_ = Call_(contains_co_, directory, name);
		if (t0_)
			{
			obj_ status_reporter;
			t0_ = Call_(status_reporter, SharedField_(compiler, Main));
			status_reporter = t0_;
			t0_ = Call_(_pl_, Str_(0), name);
			t1_ = Call_(_pl_, t0_, Str_(1));
			t2_ = Call_(full_name, parent);
			t3_ = Call_(_pl_, t1_, t2_);
			t4_ = Call_(_pl_, t3_, Str_(2));
			t5_ = Call_(report_co_, status_reporter, t4_);
			t0_ = Call_(indent, status_reporter);
			
			t0_ = new_co_parent_co___CompiledClass__Compiler(Proto_(CompiledClass__Compiler), name, parent);
			new_proto = t0_;
			t0_ = Call_(entry_is_directory_co_, directory, name);
			if (t0_)
				{
				t0_ = Call_(at_co_, directory, name);
				t1_ = Call_(add_directory_co_, new_proto, t0_);
				}
			else
				{
				t0_ = Call_(at_co_, directory, name);
				t1_ = Call_(load_class_file_co_into_co_, this_, t0_, new_proto);
				}
			
			t0_ = Call_(unindent, status_reporter);
			}
		
		return new_proto;
		}
	return nil;
}


obj_ load_class_file_co_into_co___CompiledClass__Compiler(obj_ this_, obj_ file, obj_ class_)
{
	extern obj_ new_co___LinesLexer__Trylon(obj_ this_, obj_ text);
	extern obj_ parse_class_contents_co_into_co___ClassParser__Compiler(obj_ this_, obj_ block, obj_ class_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(contents) UsingMethod_(lex)
	UsingClass_(ClassParser__Compiler)
	UsingClass_(LinesLexer__Trylon)

		{
		obj_ lines;
		t0_ = Call_(contents, file);
		t1_ = new_co___LinesLexer__Trylon(Proto_(LinesLexer__Trylon), t0_);
		t2_ = Call_(lex, t1_);
		lines = t2_;
		t0_ = parse_class_contents_co_into_co___ClassParser__Compiler(Proto_(ClassParser__Compiler), lines, class_);
		}
	return nil;
}


obj_ load_subproto_co___CompiledClass__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(add_proto_co_) UsingMethod_(add_proto_co_directory_co_) UsingMethod_(at_co_) UsingMethod_(contains_co_) UsingMethod_(current_item) UsingMethod_(directories) UsingMethod_(entry_is_directory_co_) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(load_class_file_co_into_co_)

		{
		t0_ = Call_(directories, this_);
		ForStart_(0, t0_, directory)
			{
			t0_ = Call_(entry_is_directory_co_, directory, name);
			if (t0_)
				{
				t0_ = Call_(at_co_, directory, name);
				t1_ = Call_(add_proto_co_directory_co_, this_, name, t0_);
				return t1_;
				}
			else
				{
				t2_ = Call_(contains_co_, directory, name);
				if (t2_)
					{
					obj_ proto;
					t0_ = Call_(add_proto_co_, this_, name);
					proto = t0_;
					t0_ = Call_(at_co_, directory, name);
					t1_ = Call_(load_class_file_co_into_co_, this_, t0_, proto);
					return proto;
					}
				}
			}
		ForEnd_(0)
		
		return nil;
		}
	return nil;
}


obj_ lookup_function_co___CompiledClass__Compiler(obj_ this_, obj_ name)
{
	extern obj_ new__ObjectMap__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(lookup_function_co_visited_protos_co_)
	UsingClass_(ObjectMap__Standard)

		{
		t0_ = new__ObjectMap__Standard(Proto_(ObjectMap__Standard));
		t1_ = Call_(lookup_function_co_visited_protos_co_, this_, name, t0_);
		return t1_;
		}
	return nil;
}


obj_ lookup_function_co_visited_protos_co___CompiledClass__Compiler(obj_ this_, obj_ name, obj_ visited_protos)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(at_co_) UsingMethod_(at_co_put_co_) UsingMethod_(contains_co_) UsingMethod_(current_item) UsingMethod_(functions) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(load_subproto_co_) UsingMethod_(lookup_function_co_visited_protos_co_) UsingMethod_(parent) UsingMethod_(uses_protos)

		{
		obj_ function;
		/*  Recursion control. */
		t0_ = Call_(contains_co_, visited_protos, this_);
		if (t0_)
			{
			return nil;
			}
		t0_ = Call_(at_co_put_co_, visited_protos, this_, this_);
		
		/*  Do we know it already? */
		t0_ = Call_(functions, this_);
		t1_ = Call_(at_co_, t0_, name);
		function = t1_;
		if (function)
			{
			return function;
			}
		
		/*  If not, see if it's in one of our directories. */
		t0_ = Call_(load_subproto_co_, this_, name);
		if (t0_)
			{
			t0_ = Call_(functions, this_);
			t1_ = Call_(at_co_, t0_, name);
			return t1_;
			}
		
		/*  Check the parent. */
		t2_ = Call_(parent, this_);
		if (t2_)
			{
			t0_ = Call_(parent, this_);
			t1_ = Call_(lookup_function_co_visited_protos_co_, t0_, name, visited_protos);
			function = t1_;
			if (function)
				{
				return function;
				}
			}
		
		/*  Next, check the used protos. */
		t0_ = Call_(uses_protos, this_);
		ForStart_(0, t0_, used_proto)
			{
			t0_ = Call_(lookup_function_co_visited_protos_co_, used_proto, name, visited_protos);
			function = t0_;
			if (function)
				{
				return function;
				}
			}
		ForEnd_(0)
		
		return nil;
		}
	return nil;
}


obj_ lookup_instance_function_co___CompiledClass__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(at_co_) UsingMethod_(functions) UsingMethod_(lookup_instance_function_co_) UsingMethod_(superclass)

		{
		obj_ function;
		t0_ = Call_(functions, this_);
		t1_ = Call_(at_co_, t0_, name);
		function = t1_;
		if (function)
			{
			return function;
			}
		
		t0_ = Call_(superclass, this_);
		if (t0_)
			{
			t0_ = Call_(superclass, this_);
			t1_ = Call_(lookup_instance_function_co_, t0_, name);
			return t1_;
			}
		
		return nil;
		}
	return nil;
}


obj_ make_subclass_of_co___CompiledClass__Compiler(obj_ this_, obj_ superclass)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(append_co_) UsingMethod_(remove_co_) UsingMethod_(subclasses) UsingMethod_(superclass) UsingMethod_(superclass_co_) UsingMethod_(uses_protos)

		{
		t0_ = Call_(superclass, this_);
		if (t0_)
			{
			/*  Already had a superclass (perhaps the default Standard Object);  */
			/*  replace it. */
			t0_ = Call_(uses_protos, this_);
			t1_ = Call_(superclass, this_);
			t2_ = Call_(remove_co_, t0_, t1_);
			}
		
		/*  Install the superclass. */
		t0_ = Call_(superclass_co_, this_, superclass);
		t0_ = Call_(subclasses, superclass);
		t1_ = Call_(append_co_, t0_, this_);
		}
	return nil;
}


obj_ needs_finalizer__CompiledClass__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(has_destroy) UsingMethod_(needs_finalizer) UsingMethod_(superclass)

		{
		t0_ = Call_(has_destroy, this_);
		if (t0_)
			{
			return true_;
			}
		t0_ = Call_(superclass, this_);
		if (t0_)
			{
			t0_ = Call_(superclass, this_);
			t1_ = Call_(needs_finalizer, t0_);
			return t1_;
			}
		return nil;
		}
	return nil;
}


obj_ new_co_parent_co___CompiledClass__Compiler(obj_ this_, obj_ name, obj_ parent)
{
	UsingClass_(CompiledClass__Compiler)
	obj_ obj = AllocObj_(CompiledClass__Compiler);
	create_co_parent_co___CompiledClass__Compiler(obj, name, parent);
	return obj;
}


obj_ newly_defined_functions__CompiledClass__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(functions) UsingMethod_(pairs)

		{
		t0_ = Call_(functions, this_);
		t1_ = Call_(pairs, t0_);
		return t1_;
		}
	return nil;
}


obj_ number_classes_co___CompiledClass__Compiler(obj_ this_, obj_ numberer)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(class_num_co_) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(next_number) UsingMethod_(number_classes_co_) UsingMethod_(subclasses)

		{
		/*  Depth-first. */
		t0_ = Call_(subclasses, this_);
		ForStart_(0, t0_, subclass)
			{
			t0_ = Call_(number_classes_co_, subclass, numberer);
			}
		ForEnd_(0)
		
		t0_ = Call_(next_number, numberer);
		t1_ = Call_(class_num_co_, this_, t0_);
		}
	return nil;
}


obj_ resolve__CompiledClass__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "Object")
	UsingMethod_(current_item) UsingMethod_(ensure_superclasses_co_) UsingMethod_(functions) UsingMethod_(get_standard_class_co_) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(resolve) UsingMethod_(superclass) UsingMethod_(values)
	UsingSharedField_(compiler, Main) 

		{
		t0_ = Call_(superclass, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = Call_(get_standard_class_co_, SharedField_(compiler, Main), Str_(0));
			t1_ = Call_(ensure_superclasses_co_, this_, t0_);
			}
		
		t0_ = Call_(functions, this_);
		t1_ = Call_(values, t0_);
		ForStart_(0, t1_, function)
			{
			t0_ = Call_(resolve, function);
			}
		ForEnd_(0)
		}
	return nil;
}


obj_ setup_dispatch_row_co_inherited_function_co___CompiledClass__Compiler(obj_ this_, obj_ row, obj_ inherited_function)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(append_co_function_co_) UsingMethod_(at_co_) UsingMethod_(class_num) UsingMethod_(current_item) UsingMethod_(functions) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(name) UsingMethod_(setup_dispatch_row_co_inherited_function_co_) UsingMethod_(subclasses)

		{
		obj_ function;
		/*  Find the function. */
		t0_ = Call_(functions, this_);
		t1_ = Call_(name, row);
		t2_ = Call_(at_co_, t0_, t1_);
		function = t2_;
		t0_ = Not_(function);
		if (t0_)
			{
			function = inherited_function;
			}
		
		/*  Do this in depth-first order, which is the same order as the class  */
		/*  numbers.  By doing that, we don't need a separate step for sorting  */
		/*  by class number. */
		
		t0_ = Call_(subclasses, this_);
		ForStart_(0, t0_, subclass)
			{
			t0_ = Call_(setup_dispatch_row_co_inherited_function_co_, subclass, row, function);
			}
		ForEnd_(0)
		
		if (function)
			{
			t0_ = Call_(class_num, this_);
			t1_ = Call_(append_co_function_co_, row, t0_, function);
			}
		}
	return nil;
}


obj_ setup_main_co_library_directory_co___CompiledClass__Compiler(obj_ this_, obj_ main_directory, obj_ library_directory)
{
	extern obj_ new_co___ProtoFunction__Compiler(obj_ this_, obj_ proto);
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ new_co___FileDirectory__Standard(obj_ this_, obj_ path);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "Standard")
	DefineString_(1, "CImplementation")
	UsingMethod_(add_directory_co_) UsingMethod_(at_co_put_co_) UsingMethod_(build_settings) UsingMethod_(current_item) UsingMethod_(functions) UsingMethod_(get_subproto_co_) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(is_main_co_) UsingMethod_(iterator) UsingMethod_(library_dirs) UsingMethod_(name) UsingMethod_(targeting_c)
	UsingSharedField_(compiler, Main) 
	UsingClass_(FileDirectory__Standard)
	UsingClass_(Main)
	UsingClass_(ProtoFunction__Compiler)

		{
		obj_ standard_proto;
		t0_ = Call_(is_main_co_, this_, true_);
		
		/*  Self. */
		t0_ = Call_(functions, this_);
		t1_ = Call_(name, this_);
		t2_ = new_co___ProtoFunction__Compiler(Proto_(ProtoFunction__Compiler), this_);
		t3_ = Call_(at_co_put_co_, t0_, t1_, t2_);
		
		/*  Directories. */
		/*  The library must come first, as it loads/"uses" Standard. */
		/*  The main directory comes last, so everything is in place for its "main". */
		t0_ = Call_(add_directory_co_, this_, library_directory);
		t0_ = build_settings__Main(Proto_(Main));
		t1_ = Call_(library_dirs, t0_);
		ForStart_(0, t1_, directory)
			{
			t0_ = new_co___FileDirectory__Standard(Proto_(FileDirectory__Standard), directory);
			t1_ = Call_(add_directory_co_, this_, t0_);
			}
		ForEnd_(0)
		t0_ = Call_(add_directory_co_, this_, main_directory);
		
		t0_ = Call_(get_subproto_co_, this_, Str_(0));
		standard_proto = t0_;
		
		/*  Targeting Jolt. */
		
		/*  Targeting C. */
		t0_ = Call_(build_settings, SharedField_(compiler, Main));
		t1_ = Call_(targeting_c, t0_);
		if (t1_)
			{
			t0_ = Call_(get_subproto_co_, standard_proto, Str_(1));
			}
		}
	return nil;
}


obj_ total_num_fields__CompiledClass__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(_pl_) UsingMethod_(count) UsingMethod_(fields) UsingMethod_(superclass) UsingMethod_(total_num_fields)

		{
		obj_ total;
		t0_ = Call_(fields, this_);
		t1_ = Call_(count, t0_);
		total = t1_;
		t0_ = Call_(superclass, this_);
		if (t0_)
			{
			t0_ = Call_(superclass, this_);
			t1_ = Call_(total_num_fields, t0_);
			t2_ = Call_(_pl_, total, t1_);
			total = t2_;
			}
		return total;
		}
	return nil;
}


