#include "Trylon_.h"

UsingSym_(CompiledProto)UsingClass_(Compiler)
UsingClass_(Context__Compiler)
UsingClass_(CompiledProto__Compiler)
struct ClassInfo CompiledProto__Compiler__classInfo_ = 
	{ 78, 60, Proto_(CompiledProto__Compiler), Proto_(Compiler), Proto_(Context__Compiler), nil, Sym_(CompiledProto) ,nil };
struct object CompiledProto__Compiler = 
	{ &CompiledProto__Compiler__classInfo_, {nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil} };



#define name__fld_	(0)
#define parent__fld_	(1)
#define functions__fld_	(2)
#define fields__fld_	(3)
#define shared_fields__fld_	(4)
#define superclass__fld_	(5)
#define directories__fld_	(6)
#define uses_protos__fld_	(7)
#define subclasses__fld_	(8)
#define source_name__fld_	(9)
#define is_main__fld_	(10)
#define is_root_object__fld_	(11)
#define class_num__fld_	(12)
#define c_preamble__fld_	(13)
#define _dt_c_name__fld_	(14)


obj_ _dt_c_name__CompiledProto__Compiler(obj_ this_)
{
	return Field_(_dt_c_name);
}


obj_ _dt_c_name_co___CompiledProto__Compiler(obj_ this_, obj_ value)
{
	Field_(_dt_c_name) = value;
	return value;
}


obj_ access__CompiledProto__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 1)
	DefineInt_(1, 0)
	DefineInt_(2, 1)
	DefineInt_(3, 1)
	UsingMethod_(_pl_) UsingMethod_(at_co_put_co_) UsingMethod_(count) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(intern) UsingMethod_(is_done) UsingMethod_(is_main) UsingMethod_(is_root_object) UsingMethod_(iterator) UsingMethod_(name) UsingMethod_(parent) UsingMethod_(push_front_co_)
	UsingSym_(Trylon)
	UsingSym_(trylon_root_object)
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	UsingSym_(trylon_proto)
	UsingClass_(List__Standard)
	UsingClass_(Expression)

		{
		t0_ = Call_(is_main, this_);
		if (t0_)
			{
			return Sym_(Trylon);
			}
		else
			{
			t0_ = Call_(is_root_object, this_);
			if (t0_)
				{
				return Sym_(trylon_root_object);
				}
			else
				{
				obj_ expr, index, list, namespace_;
				t0_ = new__List__Standard(Proto_(List__Standard));
				list = t0_;
				namespace_ = this_;
				while (1) {
					ContinuePoint_(0)
					t0_ = Call_(is_main, namespace_);
					t1_ = Not_(t0_);
					if (!(t1_))
						Break_(0)
					{
					t0_ = Call_(push_front_co_, list, namespace_);
					t0_ = Call_(parent, namespace_);
					namespace_ = t0_;
					}
					}
				t0_ = Call_(count, list);
				t1_ = Call_(_pl_, t0_, Int_(0));
				t2_ = new_co___Expression(Proto_(Expression), t1_);
				expr = t2_;
				t0_ = Call_(at_co_put_co_, expr, Int_(1), Sym_(trylon_proto));
				index = Int_(2);
				ForStart_(1, list, namespace_)
					{
					t0_ = Call_(name, namespace_);
					t1_ = Call_(intern, t0_);
					t2_ = Call_(at_co_put_co_, expr, index, t1_);
					t0_ = Call_(_pl_, index, Int_(3));
					index = t0_;
					}
				ForEnd_(1)
				return expr;
				
				
				
				}
			}
		}
	return nil;
}


obj_ add_directory_co___CompiledProto__Compiler(obj_ this_, obj_ directory)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "main")
	DefineString_(1, "main")
	UsingMethod_(append_co_) UsingMethod_(at_co_) UsingMethod_(contains_co_) UsingMethod_(contents) UsingMethod_(directories) UsingMethod_(parse_proto_file_co_)
	extern obj_ new_co_context_co___Parser__Compiler(obj_ this_, obj_ source, obj_ context);
	UsingClass_(Parser__Compiler)

		{
		t0_ = Call_(directories, this_);
		t1_ = Call_(append_co_, t0_, directory);
		
		t0_ = Call_(contains_co_, directory, Str_(0));
		if (t0_)
			{
			obj_ parser;
			t0_ = Call_(at_co_, directory, Str_(1));
			t1_ = Call_(contents, t0_);
			t2_ = new_co_context_co___Parser__Compiler(Proto_(Parser__Compiler), t1_, this_);
			parser = t2_;
			t0_ = Call_(parse_proto_file_co_, parser, this_);
			
			
			}
		}
	return nil;
}


obj_ add_field_co___CompiledProto__Compiler(obj_ this_, obj_ field)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, ":")
	UsingMethod_(_pl_) UsingMethod_(add_function_co_function_co_) UsingMethod_(append_co_) UsingMethod_(fields) UsingMethod_(name)
	extern obj_ new_co_on_proto_co___FieldGetter__Compiler(obj_ this_, obj_ field, obj_ on_proto);
	extern obj_ new_co_on_proto_co___FieldSetter__Compiler(obj_ this_, obj_ field, obj_ on_proto);
	UsingClass_(FieldSetter__Compiler)
	UsingClass_(FieldGetter__Compiler)

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


obj_ add_function_co___CompiledProto__Compiler(obj_ this_, obj_ function)
{
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
	UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(at_co_) UsingMethod_(at_co_put_co_) UsingMethod_(declaring_selector_co_) UsingMethod_(functions) UsingMethod_(has_code) UsingMethod_(is_a_co_) UsingMethod_(name) UsingMethod_(starts_with_co_)
	UsingSharedField_(compiler, Main) 
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	extern obj_ new_co_on_proto_co___NewFunction__Compiler(obj_ this_, obj_ creator, obj_ on_proto);
	UsingClass_(MessageException__Standard)
	UsingClass_(NewFunction__Compiler)
	UsingClass_(CompiledFunction__Compiler)

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
		
		/* "create" functions automatically add a corresponding "new:" function. */
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
			/* Add the corresponding "new" function. */
			t0_ = new_co_on_proto_co___NewFunction__Compiler(Proto_(NewFunction__Compiler), function, this_);
			new_function = t0_;
			t0_ = Call_(functions, this_);
			t1_ = Call_(name, new_function);
			t2_ = Call_(at_co_put_co_, t0_, t1_, new_function);
			t0_ = Call_(name, new_function);
			t1_ = Call_(declaring_selector_co_, SharedField_(compiler, Main), t0_);
			
			
			}
		}
	return nil;
}


obj_ add_function_co_function_co___CompiledProto__Compiler(obj_ this_, obj_ name, obj_ function)
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


obj_ add_proto_co___CompiledProto__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	UsingMethod_(add_proto_co_directory_co_)

		{
		t0_ = Call_(add_proto_co_directory_co_, this_, name, nil);
		return t0_;
		
		
		}
	return nil;
}


obj_ add_proto_co_directory_co___CompiledProto__Compiler(obj_ this_, obj_ name, obj_ directory)
{
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
	UsingMethod_(_pl_) UsingMethod_(add_directory_co_) UsingMethod_(add_function_co_function_co_) UsingMethod_(append_co_) UsingMethod_(at_co_) UsingMethod_(full_name) UsingMethod_(functions) UsingMethod_(indent) UsingMethod_(is_a_co_) UsingMethod_(proto) UsingMethod_(proto_queue) UsingMethod_(report_co_) UsingMethod_(status_reporter) UsingMethod_(unindent)
	UsingSharedField_(compiler, Main) 
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	extern obj_ new_co_parent_co___CompiledProto__Compiler(obj_ this_, obj_ name, obj_ parent);
	extern obj_ new_co___ProtoFunction__Compiler(obj_ this_, obj_ proto);
	UsingClass_(MessageException__Standard)
	UsingClass_(ProtoFunction__Compiler)
	UsingClass_(CompiledProto__Compiler)

		{
		obj_ existing_function, new_proto, proto_function, status_reporter;
		/* If it already exists, return it. */
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
		/* Add the new one. */
		t4_ = Call_(status_reporter, SharedField_(compiler, Main));
		status_reporter = t4_;
		t0_ = Call_(_pl_, Str_(2), name);
		t1_ = Call_(_pl_, t0_, Str_(3));
		t2_ = Call_(full_name, this_);
		t3_ = Call_(_pl_, t1_, t2_);
		t4_ = Call_(_pl_, t3_, Str_(4));
		t5_ = Call_(report_co_, status_reporter, t4_);
		t0_ = Call_(indent, status_reporter);
		t0_ = new_co_parent_co___CompiledProto__Compiler(Proto_(CompiledProto__Compiler), name, this_);
		new_proto = t0_;
		if (directory)
			{
			t0_ = Call_(add_directory_co_, new_proto, directory);
			}
		t0_ = new_co___ProtoFunction__Compiler(Proto_(ProtoFunction__Compiler), new_proto);
		proto_function = t0_;
		t0_ = Call_(add_function_co_function_co_, this_, name, proto_function);
		t0_ = Call_(proto_queue, SharedField_(compiler, Main));
		t1_ = Call_(append_co_, t0_, new_proto);
		t0_ = Call_(unindent, status_reporter);
		return new_proto;
		
		
		}
	return nil;
}


obj_ add_shared_field_co___CompiledProto__Compiler(obj_ this_, obj_ field)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, ":")
	UsingMethod_(_pl_) UsingMethod_(add_function_co_function_co_) UsingMethod_(at_co_put_co_) UsingMethod_(name) UsingMethod_(shared_fields)
	extern obj_ new_co_on_proto_co___SharedFieldGetter__Compiler(obj_ this_, obj_ field, obj_ on_proto);
	extern obj_ new_co_on_proto_co___SharedFieldSetter__Compiler(obj_ this_, obj_ field, obj_ on_proto);
	UsingClass_(SharedFieldSetter__Compiler)
	UsingClass_(SharedFieldGetter__Compiler)

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


obj_ c_name__CompiledProto__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineString_(0, "__")
	UsingMethod_(_pl_) UsingMethod_(_dt_c_name) UsingMethod_(_dt_c_name_co_) UsingMethod_(c_name) UsingMethod_(is_main) UsingMethod_(name) UsingMethod_(parent)
	extern obj_ mangle_name_co___Compiler(obj_ this_, obj_ name);
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


obj_ c_preamble__CompiledProto__Compiler(obj_ this_)
{
	return Field_(c_preamble);
}


obj_ c_preamble_co___CompiledProto__Compiler(obj_ this_, obj_ value)
{
	Field_(c_preamble) = value;
	return value;
}


obj_ class_num__CompiledProto__Compiler(obj_ this_)
{
	return Field_(class_num);
}


obj_ class_num_co___CompiledProto__Compiler(obj_ this_, obj_ value)
{
	Field_(class_num) = value;
	return value;
}


obj_ create_co_parent_co___CompiledProto__Compiler(obj_ this_, obj_ name, obj_ parent)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, ".proto")
	DefineString_(1, ".superclass")
	UsingMethod_(add_function_co_) UsingMethod_(directories_co_) UsingMethod_(fields_co_) UsingMethod_(functions_co_) UsingMethod_(is_main_co_) UsingMethod_(is_root_object_co_) UsingMethod_(name_co_) UsingMethod_(parent_co_) UsingMethod_(shared_fields_co_) UsingMethod_(subclasses_co_) UsingMethod_(targeting_jolt) UsingMethod_(uses_protos_co_)
	extern obj_ new__Dictionary__Standard(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new__Dictionary__Standard(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ new_co_on_proto_co___PrimitiveFunction__Compiler(obj_ this_, obj_ name, obj_ on_proto);
	extern obj_ new_co_on_proto_co___PrimitiveFunction__Compiler(obj_ this_, obj_ name, obj_ on_proto);
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
		
		/* Will be added by Jolt code: */
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


obj_ directories__CompiledProto__Compiler(obj_ this_)
{
	return Field_(directories);
}


obj_ directories_co___CompiledProto__Compiler(obj_ this_, obj_ value)
{
	Field_(directories) = value;
	return value;
}


obj_ emit_all_function_declarations_co___CompiledProto__Compiler(obj_ this_, obj_ stream)
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


obj_ emit_code__CompiledProto__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "Generating code for ")
	DefineString_(1, "...")
	DefineString_(2, " has these functions:")
	UsingMethod_(_pl_) UsingMethod_(build_settings) UsingMethod_(current_item) UsingMethod_(emit_jolt_file) UsingMethod_(functions) UsingMethod_(go_forward) UsingMethod_(indent) UsingMethod_(is_done) UsingMethod_(is_verbose) UsingMethod_(iterator) UsingMethod_(keys) UsingMethod_(name) UsingMethod_(report_co_) UsingMethod_(status_reporter) UsingMethod_(unindent)
	UsingSharedField_(compiler, Main) 

		{
		obj_ is_changed, status_reporter;
		t0_ = Call_(status_reporter, SharedField_(compiler, Main));
		status_reporter = t0_;
		t0_ = Call_(name, this_);
		t1_ = Call_(_pl_, Str_(0), t0_);
		t2_ = Call_(_pl_, t1_, Str_(1));
		t3_ = Call_(report_co_, status_reporter, t2_);
		t0_ = Call_(indent, status_reporter);
		
		t0_ = Call_(build_settings, SharedField_(compiler, Main));
		t1_ = Call_(is_verbose, t0_);
		if (t1_)
			{
			t0_ = Call_(name, this_);
			t1_ = Call_(_pl_, t0_, Str_(2));
			t2_ = Call_(report_co_, status_reporter, t1_);
			t0_ = Call_(indent, status_reporter);
			t0_ = Call_(functions, this_);
			t1_ = Call_(keys, t0_);
			ForStart_(0, t1_, name)
				{
				t0_ = Call_(report_co_, status_reporter, name);
				}
			ForEnd_(0)
			t0_ = Call_(unindent, status_reporter);
			
			}
		t0_ = Call_(emit_jolt_file, this_);
		is_changed = t0_;
		
		t0_ = Call_(unindent, status_reporter);
		
		is_changed = true_;
		return is_changed;
		
		
		}
	return nil;
}


obj_ emit_field_indices_co___CompiledProto__Compiler(obj_ this_, obj_ stream)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 0)
	DefineInt_(1, 1)
	DefineString_(0, "#define ")
	DefineString_(1, "__fld_\t(")
	DefineString_(2, ")")
	UsingMethod_(_pl_) UsingMethod_(current_item) UsingMethod_(emit_field_indices_co_) UsingMethod_(fields) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(name) UsingMethod_(string) UsingMethod_(superclass) UsingMethod_(write_line) UsingMethod_(write_line_co_) UsingMethod_(write_co_)
	extern obj_ mangle_name_co___Compiler(obj_ this_, obj_ name);
	UsingClass_(Compiler)

		{
		obj_ index;
		index = Int_(0);
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
			t0_ = Call_(_pl_, index, Int_(1));
			index = t0_;
			t0_ = Call_(write_line_co_, stream, Str_(2));
			
			}
		ForEnd_(0)
		t0_ = Call_(write_line, stream);
		
		return index;
		
		
		}
	return nil;
}


obj_ emit_jolt_file__CompiledProto__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	DefineInt_(0, 0)
	DefineInt_(1, 1)
	DefineInt_(2, 1)
	DefineInt_(3, 0)
	DefineInt_(4, 1)
	DefineInt_(5, 1)
	DefineString_(0, "/")
	DefineString_(1, ".k")
	UsingMethod_(_pl_) UsingMethod_(access) UsingMethod_(at_co_put_co_) UsingMethod_(build_settings) UsingMethod_(close) UsingMethod_(count) UsingMethod_(current_item) UsingMethod_(emit_code) UsingMethod_(emit_co_) UsingMethod_(fields) UsingMethod_(full_name) UsingMethod_(functions) UsingMethod_(go_forward) UsingMethod_(intern) UsingMethod_(is_a_co_) UsingMethod_(is_done) UsingMethod_(is_empty) UsingMethod_(iterator) UsingMethod_(jolt_sources_dir) UsingMethod_(name) UsingMethod_(parent) UsingMethod_(status_reporter) UsingMethod_(superclass) UsingMethod_(uses_protos) UsingMethod_(values) UsingMethod_(write_line)
	UsingSharedField_(compiler, Main) 
	extern obj_ new_co___File__Standard(obj_ this_, obj_ path);
	extern obj_ new_co___ExistingFileStream__Standard(obj_ this_, obj_ file);
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	extern obj_ with_co_with_co_with_co_with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2, obj_ value_3, obj_ value_4, obj_ value_5);
	UsingSym_(define_trylon_proto)
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	UsingSym_(trylon_tuple)
	extern obj_ with_co_with_co_with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2, obj_ value_3, obj_ value_4);
	UsingSym_(add_constant_field)
	UsingSym_(_dt_used_contexts)
	UsingClass_(File__Standard)
	UsingClass_(Expression)
	UsingClass_(ProtoFunction__Compiler)
	UsingClass_(ExistingFileStream__Standard)

		{
		obj_ file, got_one, status_reporter, stream;
		t0_ = Call_(status_reporter, SharedField_(compiler, Main));
		status_reporter = t0_;
		/* Open the file. */
		t0_ = Call_(build_settings, SharedField_(compiler, Main));
		t1_ = Call_(jolt_sources_dir, t0_);
		t2_ = Call_(_pl_, t1_, Str_(0));
		t3_ = Call_(full_name, this_);
		t4_ = Call_(_pl_, t2_, t3_);
		t5_ = Call_(_pl_, t4_, Str_(1));
		t6_ = new_co___File__Standard(Proto_(File__Standard), t5_);
		file = t6_;
		t0_ = new_co___ExistingFileStream__Standard(Proto_(ExistingFileStream__Standard), file);
		stream = t0_;
		
		/* Define the proto. */
		/* ...but not for Trylon or Standard Object (which are created specially in */
		/* (setup-Trylon)). */
		t0_ = Call_(parent, this_);
		if (t0_) {
			t1_ = Call_(superclass, this_);
			t0_ = t1_;
			}
		if (t0_)
			{
			obj_ expr, index, parent_access, slots, superclass_access;
			t0_ = Call_(parent, this_);
			t1_ = Call_(access, t0_);
			parent_access = t1_;
			t0_ = Call_(superclass, this_);
			t1_ = Call_(access, t0_);
			superclass_access = t1_;
			t0_ = Call_(fields, this_);
			t1_ = Call_(count, t0_);
			t2_ = new_co___Expression(Proto_(Expression), t1_);
			slots = t2_;
			index = Int_(0);
			t0_ = Call_(fields, this_);
			ForStart_(0, t0_, field)
				{
				t0_ = Call_(name, field);
				t1_ = Call_(intern, t0_);
				t2_ = Call_(at_co_put_co_, slots, index, t1_);
				t0_ = Call_(_pl_, index, Int_(1));
				index = t0_;
				}
			ForEnd_(0)
			t0_ = Call_(name, this_);
			t1_ = Call_(intern, t0_);
			t2_ = with_co_with_co_with_co_with_co_with_co___Expression(Proto_(Expression), Sym_(define_trylon_proto), t1_, parent_access, superclass_access, slots);
			expr = t2_;
			t0_ = Call_(emit_co_, expr, stream);
			t0_ = Call_(write_line, stream);
			t0_ = Call_(write_line, stream);
			
			}
		/* Add loaders for the subprotos. */
		got_one = nil;
		t0_ = Call_(functions, this_);
		t1_ = Call_(values, t0_);
		ForStart_(1, t1_, function)
			{
			t0_ = Call_(is_a_co_, function, Proto_(ProtoFunction__Compiler));
			if (t0_)
				{
				obj_ compiled_code;
				t0_ = Call_(emit_code, function);
				compiled_code = t0_;
				if (compiled_code)
					{
					t0_ = Call_(emit_co_, compiled_code, stream);
					t0_ = Call_(write_line, stream);
					got_one = true_;
					}
				}
			}
		ForEnd_(1)
		if (got_one)
			{
			t0_ = Call_(write_line, stream);
			
			}
		/* Add '.used-contexts'. */
		t0_ = Call_(uses_protos, this_);
		t1_ = Call_(is_empty, t0_);
		t2_ = Not_(t1_);
		if (t2_)
			{
			obj_ expr, index, tuple_expr;
			t0_ = Call_(uses_protos, this_);
			t1_ = Call_(count, t0_);
			t2_ = Call_(_pl_, t1_, Int_(2));
			t3_ = new_co___Expression(Proto_(Expression), t2_);
			tuple_expr = t3_;
			t0_ = Call_(at_co_put_co_, tuple_expr, Int_(3), Sym_(trylon_tuple));
			index = Int_(4);
			t0_ = Call_(uses_protos, this_);
			ForStart_(2, t0_, proto)
				{
				t0_ = Call_(access, proto);
				t1_ = Call_(at_co_put_co_, tuple_expr, index, t0_);
				t0_ = Call_(_pl_, index, Int_(5));
				index = t0_;
				}
			ForEnd_(2)
			t0_ = Call_(access, this_);
			t1_ = with_co_with_co_with_co_with_co___Expression(Proto_(Expression), Sym_(add_constant_field), Sym_(_dt_used_contexts), t0_, tuple_expr);
			expr = t1_;
			t0_ = Call_(emit_co_, expr, stream);
			t0_ = Call_(write_line, stream);
			t0_ = Call_(write_line, stream);
			
			}
		/* Compile all the functions. */
		t0_ = Call_(functions, this_);
		t1_ = Call_(values, t0_);
		ForStart_(3, t1_, function)
			{
			obj_ compiled_code;
			t0_ = Call_(is_a_co_, function, Proto_(ProtoFunction__Compiler));
			if (t0_)
				{
				Continue_(3)
				}
			t0_ = Call_(emit_code, function);
			compiled_code = t0_;
			if (compiled_code)
				{
				t0_ = Call_(emit_co_, compiled_code, stream);
				t0_ = Call_(write_line, stream);
				t0_ = Call_(write_line, stream);
				}
			}
		ForEnd_(3)
		t0_ = Call_(close, stream);
		}
	return nil;
}


obj_ ensure_superclasses_co___CompiledProto__Compiler(obj_ this_, obj_ object_proto)
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


obj_ fields__CompiledProto__Compiler(obj_ this_)
{
	return Field_(fields);
}


obj_ fields_co___CompiledProto__Compiler(obj_ this_, obj_ value)
{
	Field_(fields) = value;
	return value;
}


obj_ full_name__CompiledProto__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, " ")
	UsingMethod_(_pl_) UsingMethod_(is_main) UsingMethod_(name) UsingMethod_(parent)

		{
		obj_ proto, result;
		t0_ = Call_(is_main, this_);
		if (t0_)
			{
			t0_ = Call_(name, this_);
			return t0_;
			}
		t1_ = Call_(name, this_);
		result = t1_;
		t0_ = Call_(parent, this_);
		proto = t0_;
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(is_main, proto);
			t1_ = Not_(t0_);
			if (!(t1_))
				Break_(0)
			{
			t0_ = Call_(name, proto);
			t1_ = Call_(_pl_, t0_, Str_(0));
			t2_ = Call_(_pl_, t1_, result);
			result = t2_;
			t0_ = Call_(parent, proto);
			proto = t0_;
			}
			}
		return result;
		
		
		
		}
	return nil;
}


obj_ functions__CompiledProto__Compiler(obj_ this_)
{
	return Field_(functions);
}


obj_ functions_co___CompiledProto__Compiler(obj_ this_, obj_ value)
{
	Field_(functions) = value;
	return value;
}


obj_ get_proto_co___CompiledProto__Compiler(obj_ this_, obj_ name)
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


obj_ get_subproto_co___CompiledProto__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(add_proto_co_) UsingMethod_(add_proto_co_directory_co_) UsingMethod_(at_co_) UsingMethod_(contains_co_) UsingMethod_(contents) UsingMethod_(current_item) UsingMethod_(directories) UsingMethod_(entry_is_directory_co_) UsingMethod_(functions) UsingMethod_(go_forward) UsingMethod_(is_a_co_) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(parse_proto_file_co_) UsingMethod_(proto)
	extern obj_ new_co_context_co___Parser__Compiler(obj_ this_, obj_ source, obj_ context);
	UsingClass_(ProtoFunction__Compiler)
	UsingClass_(Parser__Compiler)

		{
		obj_ function;
		/* Has it been loaded already? */
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
		/* Look for it. */
		t1_ = Call_(directories, this_);
		ForStart_(0, t1_, directory)
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
					obj_ parser, proto;
					t0_ = Call_(add_proto_co_, this_, name);
					proto = t0_;
					t0_ = Call_(at_co_, directory, name);
					t1_ = Call_(contents, t0_);
					t2_ = new_co_context_co___Parser__Compiler(Proto_(Parser__Compiler), t1_, this_);
					parser = t2_;
					t0_ = Call_(parse_proto_file_co_, parser, proto);
					return proto;
					
					}
				}
			}
		ForEnd_(0)
		return nil;
		
		
		}
	return nil;
}


obj_ is_main__CompiledProto__Compiler(obj_ this_)
{
	return Field_(is_main);
}


obj_ is_main_co___CompiledProto__Compiler(obj_ this_, obj_ value)
{
	Field_(is_main) = value;
	return value;
}


obj_ is_root_object__CompiledProto__Compiler(obj_ this_)
{
	return Field_(is_root_object);
}


obj_ is_root_object_co___CompiledProto__Compiler(obj_ this_, obj_ value)
{
	Field_(is_root_object) = value;
	return value;
}


obj_ lookup_function_co___CompiledProto__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(lookup_function_co_visited_protos_co_)
	extern obj_ new__ObjectMap__Standard(obj_ this_);
	UsingClass_(ObjectMap__Standard)

		{
		t0_ = new__ObjectMap__Standard(Proto_(ObjectMap__Standard));
		t1_ = Call_(lookup_function_co_visited_protos_co_, this_, name, t0_);
		return t1_;
		
		
		}
	return nil;
}


obj_ lookup_function_co_visited_protos_co___CompiledProto__Compiler(obj_ this_, obj_ name, obj_ visited_protos)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(add_proto_co_) UsingMethod_(add_proto_co_directory_co_) UsingMethod_(at_co_) UsingMethod_(at_co_put_co_) UsingMethod_(contains_co_) UsingMethod_(contents) UsingMethod_(current_item) UsingMethod_(directories) UsingMethod_(entry_is_directory_co_) UsingMethod_(functions) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(lookup_function_co_visited_protos_co_) UsingMethod_(parent) UsingMethod_(parse_proto_file_co_) UsingMethod_(uses_protos)
	extern obj_ new_co_context_co___Parser__Compiler(obj_ this_, obj_ source, obj_ context);
	UsingClass_(Parser__Compiler)

		{
		obj_ function;
		/* Recursion control. */
		t0_ = Call_(contains_co_, visited_protos, this_);
		if (t0_)
			{
			return nil;
			}
		t0_ = Call_(at_co_put_co_, visited_protos, this_, this_);
		
		/* Do we know it already? */
		t0_ = Call_(functions, this_);
		t1_ = Call_(at_co_, t0_, name);
		function = t1_;
		if (function)
			{
			return function;
			
			}
		/* If not, see if it's in one of our directories. */
		t0_ = Call_(directories, this_);
		ForStart_(0, t0_, directory)
			{
			/* A file? */
			t0_ = Call_(contains_co_, directory, name);
			if (t0_) {
				t1_ = Call_(entry_is_directory_co_, directory, name);
				t2_ = Not_(t1_);
				t0_ = t2_;
				}
			if (t0_)
				{
				obj_ parser, proto;
				t0_ = Call_(add_proto_co_, this_, name);
				proto = t0_;
				t0_ = Call_(at_co_, directory, name);
				t1_ = Call_(contents, t0_);
				t2_ = new_co_context_co___Parser__Compiler(Proto_(Parser__Compiler), t1_, this_);
				parser = t2_;
				t0_ = Call_(parse_proto_file_co_, parser, proto);
				t0_ = Call_(functions, this_);
				t1_ = Call_(at_co_, t0_, name);
				return t1_;
				
				}
			/* A directory? */
			t2_ = Call_(entry_is_directory_co_, directory, name);
			if (t2_)
				{
				t0_ = Call_(at_co_, directory, name);
				t1_ = Call_(add_proto_co_directory_co_, this_, name, t0_);
				t0_ = Call_(functions, this_);
				t1_ = Call_(at_co_, t0_, name);
				return t1_;
				
				}
			}
		ForEnd_(0)
		/* Check the parent. */
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
		/* Next, check the used protos. */
		t0_ = Call_(uses_protos, this_);
		ForStart_(1, t0_, used_proto)
			{
			t0_ = Call_(lookup_function_co_visited_protos_co_, used_proto, name, visited_protos);
			function = t0_;
			if (function)
				{
				return function;
				
				}
			}
		ForEnd_(1)
		return nil;
		
		
		}
	return nil;
}


obj_ lookup_instance_function_co___CompiledProto__Compiler(obj_ this_, obj_ name)
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


obj_ make_subclass_of_co___CompiledProto__Compiler(obj_ this_, obj_ superclass)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(append_co_) UsingMethod_(remove_co_) UsingMethod_(subclasses) UsingMethod_(superclass) UsingMethod_(superclass_co_) UsingMethod_(uses_protos)

		{
		t0_ = Call_(superclass, this_);
		if (t0_)
			{
			/* Already had a superclass (perhaps the default Standard Object);  */
			/* replace it. */
			t0_ = Call_(uses_protos, this_);
			t1_ = Call_(superclass, this_);
			t2_ = Call_(remove_co_, t0_, t1_);
			
			}
		/* Install the superclass. */
		t0_ = Call_(superclass_co_, this_, superclass);
		t0_ = Call_(subclasses, superclass);
		t1_ = Call_(append_co_, t0_, this_);
		
		
		}
	return nil;
}


obj_ name__CompiledProto__Compiler(obj_ this_)
{
	return Field_(name);
}


obj_ name_co___CompiledProto__Compiler(obj_ this_, obj_ value)
{
	Field_(name) = value;
	return value;
}


obj_ new_co_parent_co___CompiledProto__Compiler(obj_ this_, obj_ name, obj_ parent)
{
	UsingClass_(CompiledProto__Compiler)
	obj_ obj = AllocObj_(CompiledProto__Compiler);
	create_co_parent_co___CompiledProto__Compiler(obj, name, parent);
	return obj;
}


obj_ number_classes_co___CompiledProto__Compiler(obj_ this_, obj_ numberer)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(class_num_co_) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(next_number) UsingMethod_(number_classes_co_) UsingMethod_(subclasses)

		{
		/* Depth-first. */
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


obj_ parent__CompiledProto__Compiler(obj_ this_)
{
	return Field_(parent);
}


obj_ parent_co___CompiledProto__Compiler(obj_ this_, obj_ value)
{
	Field_(parent) = value;
	return value;
}


obj_ prepare_to_emit__CompiledProto__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "Object")
	UsingMethod_(current_item) UsingMethod_(ensure_superclasses_co_) UsingMethod_(functions) UsingMethod_(get_standard_class_co_) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(prepare_to_emit) UsingMethod_(superclass) UsingMethod_(values)
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
			t0_ = Call_(prepare_to_emit, function);
			
			
			
			}
		ForEnd_(0)
		}
	return nil;
}


obj_ setup_dispatch_row_co_inherited_function_co___CompiledProto__Compiler(obj_ this_, obj_ row, obj_ inherited_function)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(append_co_function_co_) UsingMethod_(at_co_) UsingMethod_(class_num) UsingMethod_(current_item) UsingMethod_(functions) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(name) UsingMethod_(setup_dispatch_row_co_inherited_function_co_) UsingMethod_(subclasses)

		{
		obj_ function;
		/* Find the function. */
		t0_ = Call_(functions, this_);
		t1_ = Call_(name, row);
		t2_ = Call_(at_co_, t0_, t1_);
		function = t2_;
		t0_ = Not_(function);
		if (t0_)
			{
			function = inherited_function;
			
			}
		/* Do this in depth-first order, which is the same order as the class  */
		/* numbers.  By doing that, we don't need a separate step for sorting  */
		/* by class number. */
		
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


obj_ setup_main_co_library_directory_co___CompiledProto__Compiler(obj_ this_, obj_ main_directory, obj_ library_directory)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineInt_(0, 7)
	DefineString_(0, "Standard")
	DefineString_(1, "The Standard proto can't be found!")
	DefineString_(2, "JoltImplementation")
	DefineString_(3, "IdPosix")
	DefineString_(4, "Posix")
	DefineString_(5, "Posix")
	DefineString_(6, "Standard")
	DefineString_(7, "Pepsi")
	DefineString_(8, "Pepsi")
	DefineString_(9, "Pepsi")
	DefineString_(10, "CImplementation")
	DefineString_(11, "nil")
	DefineString_(12, "true")
	DefineString_(13, "false")
	DefineString_(14, "main")
	DefineString_(15, "main")
	DefineString_(16, "BytePtr")
	DefineString_(17, "Int")
	DefineString_(18, "String")
	DefineString_(19, "Float")
	DefineString_(20, "Symbol")
	DefineString_(21, "Tuple")
	DefineString_(22, "List")
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), Int_(0), Str_(16), Str_(17), Str_(18), Str_(19), Str_(20), Str_(21), Str_(22) };
	UsingMethod_(append_co_) UsingMethod_(at_co_) UsingMethod_(at_co_put_co_) UsingMethod_(build_settings) UsingMethod_(contains_co_) UsingMethod_(contents) UsingMethod_(current_item) UsingMethod_(directories) UsingMethod_(functions) UsingMethod_(get_subproto_co_) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(is_main_co_) UsingMethod_(iterator) UsingMethod_(lookup_function_co_) UsingMethod_(name) UsingMethod_(parse_proto_file_co_) UsingMethod_(proto_queue) UsingMethod_(targeting_c) UsingMethod_(targeting_jolt) UsingMethod_(uses_protos)
	UsingSharedField_(compiler, Main) 
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ new_co_parent_co_directory_co___PosixProto__JoltCompiler(obj_ this_, obj_ name, obj_ parent, obj_ directory);
	extern obj_ new_co___ProtoFunction__Compiler(obj_ this_, obj_ proto);
	extern obj_ new_co_parent_co___PepsiProto__Compiler(obj_ this_, obj_ name, obj_ parent);
	extern obj_ new_co___ProtoFunction__Compiler(obj_ this_, obj_ proto);
	extern obj_ new_co_context_co___Parser__Compiler(obj_ this_, obj_ source, obj_ context);
	extern obj_ new__NilFunction__Compiler(obj_ this_);
	extern obj_ new_co___BoolLiteralFunction__Compiler(obj_ this_, obj_ value);
	extern obj_ new_co___BoolLiteralFunction__Compiler(obj_ this_, obj_ value);
	extern obj_ new_co_context_co___Parser__Compiler(obj_ this_, obj_ source, obj_ context);
	extern obj_ new_co___ProtoFunction__Compiler(obj_ this_, obj_ proto);
	UsingClass_(MessageException__Standard)
	UsingClass_(Tuple__Standard)
	UsingClass_(Main)
	UsingClass_(BoolLiteralFunction__Compiler)
	UsingClass_(NilFunction__Compiler)
	UsingClass_(ProtoFunction__Compiler)
	UsingClass_(Parser__Compiler)
	UsingClass_(PepsiProto__Compiler)
	UsingClass_(PosixProto__JoltCompiler)

		{
		obj_ standard_proto, std_protos;
		t0_ = Call_(is_main_co_, this_, true_);
		
		/* We want the main-directory to have precedence when looking up names, */
		/* but we won't be able to compile its "main" until the library directory */
		/* is in the "directories" and Standard is visible.  So add both, *then* */
		/* compile the "main"s. */
		t0_ = Call_(directories, this_);
		t1_ = Call_(append_co_, t0_, main_directory);
		t0_ = Call_(directories, this_);
		t1_ = Call_(append_co_, t0_, library_directory);
		
		/* Load Standard. */
		t0_ = Call_(get_subproto_co_, this_, Str_(0));
		standard_proto = t0_;
		t0_ = Not_(standard_proto);
		if (t0_)
			{
			t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(1));
			Throw_(t0_);
			}
		t1_ = Call_(uses_protos, this_);
		t2_ = Call_(append_co_, t1_, standard_proto);
		
		/* Targeting Jolt. */
		t0_ = build_settings__Main(Proto_(Main));
		t1_ = Call_(targeting_jolt, t0_);
		if (t1_)
			{
			obj_ parser, pepsi_proto, posix_directory, posix_proto, proto_function, standard_directory;
			t0_ = Call_(get_subproto_co_, standard_proto, Str_(2));
			
			/* Set up Posix. */
			t0_ = Call_(at_co_, library_directory, Str_(3));
			posix_directory = t0_;
			t0_ = new_co_parent_co_directory_co___PosixProto__JoltCompiler(Proto_(PosixProto__JoltCompiler), Str_(4), this_, posix_directory);
			posix_proto = t0_;
			t0_ = new_co___ProtoFunction__Compiler(Proto_(ProtoFunction__Compiler), posix_proto);
			proto_function = t0_;
			t0_ = Call_(functions, this_);
			t1_ = Call_(at_co_put_co_, t0_, Str_(5), proto_function);
			t0_ = Call_(proto_queue, SharedField_(compiler, Main));
			t1_ = Call_(append_co_, t0_, posix_proto);
			
			/* Set up Standard Pepsi. */
			t0_ = Call_(at_co_, library_directory, Str_(6));
			standard_directory = t0_;
			t0_ = new_co_parent_co___PepsiProto__Compiler(Proto_(PepsiProto__Compiler), Str_(7), standard_proto);
			pepsi_proto = t0_;
			t0_ = new_co___ProtoFunction__Compiler(Proto_(ProtoFunction__Compiler), pepsi_proto);
			proto_function = t0_;
			t0_ = Call_(functions, standard_proto);
			t1_ = Call_(at_co_put_co_, t0_, Str_(8), proto_function);
			t0_ = Call_(at_co_, standard_directory, Str_(9));
			t1_ = Call_(contents, t0_);
			t2_ = new_co_context_co___Parser__Compiler(Proto_(Parser__Compiler), t1_, standard_proto);
			parser = t2_;
			t0_ = Call_(parse_proto_file_co_, parser, pepsi_proto);
			t0_ = Call_(proto_queue, SharedField_(compiler, Main));
			t1_ = Call_(append_co_, t0_, pepsi_proto);
			
			}
		/* Targeting C. */
		t0_ = Call_(build_settings, SharedField_(compiler, Main));
		t1_ = Call_(targeting_c, t0_);
		if (t1_)
			{
			t0_ = Call_(get_subproto_co_, standard_proto, Str_(10));
			
			}
		/* Add "nil", "true", and "false" to Standard. */
		t0_ = Call_(functions, standard_proto);
		t1_ = new__NilFunction__Compiler(Proto_(NilFunction__Compiler));
		t2_ = Call_(at_co_put_co_, t0_, Str_(11), t1_);
		t0_ = Call_(functions, standard_proto);
		t1_ = new_co___BoolLiteralFunction__Compiler(Proto_(BoolLiteralFunction__Compiler), true_);
		t2_ = Call_(at_co_put_co_, t0_, Str_(12), t1_);
		t0_ = Call_(functions, standard_proto);
		t1_ = new_co___BoolLiteralFunction__Compiler(Proto_(BoolLiteralFunction__Compiler), nil);
		t2_ = Call_(at_co_put_co_, t0_, Str_(13), t1_);
		
		/* Load our "main"s */
		t0_ = Call_(directories, this_);
		ForStart_(0, t0_, directory)
			{
			t0_ = Call_(contains_co_, directory, Str_(14));
			if (t0_)
				{
				obj_ parser;
				t0_ = Call_(at_co_, directory, Str_(15));
				t1_ = Call_(contents, t0_);
				t2_ = new_co_context_co___Parser__Compiler(Proto_(Parser__Compiler), t1_, this_);
				parser = t2_;
				t0_ = Call_(parse_proto_file_co_, parser, this_);
				
				}
			}
		ForEnd_(0)
		/* Load up standard protos. */
		std_protos = ((obj_) tu0_);
		ForStart_(1, std_protos, proto_name)
			{
			t0_ = Call_(lookup_function_co_, standard_proto, proto_name);
			
			}
		ForEnd_(1)
		/* Self. */
		t0_ = Call_(functions, this_);
		t1_ = Call_(name, this_);
		t2_ = new_co___ProtoFunction__Compiler(Proto_(ProtoFunction__Compiler), this_);
		t3_ = Call_(at_co_put_co_, t0_, t1_, t2_);
		
		
		}
	return nil;
}


obj_ shared_fields__CompiledProto__Compiler(obj_ this_)
{
	return Field_(shared_fields);
}


obj_ shared_fields_co___CompiledProto__Compiler(obj_ this_, obj_ value)
{
	Field_(shared_fields) = value;
	return value;
}


obj_ source_name__CompiledProto__Compiler(obj_ this_)
{
	return Field_(source_name);
}


obj_ source_name_co___CompiledProto__Compiler(obj_ this_, obj_ value)
{
	Field_(source_name) = value;
	return value;
}


obj_ subclasses__CompiledProto__Compiler(obj_ this_)
{
	return Field_(subclasses);
}


obj_ subclasses_co___CompiledProto__Compiler(obj_ this_, obj_ value)
{
	Field_(subclasses) = value;
	return value;
}


obj_ superclass__CompiledProto__Compiler(obj_ this_)
{
	return Field_(superclass);
}


obj_ superclass_co___CompiledProto__Compiler(obj_ this_, obj_ value)
{
	Field_(superclass) = value;
	return value;
}


obj_ total_num_fields__CompiledProto__Compiler(obj_ this_)
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


obj_ uses_protos__CompiledProto__Compiler(obj_ this_)
{
	return Field_(uses_protos);
}


obj_ uses_protos_co___CompiledProto__Compiler(obj_ this_, obj_ value)
{
	Field_(uses_protos) = value;
	return value;
}


