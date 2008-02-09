#include "Trylon_.h"

UsingSym_(ClassBuilder)UsingClass_(CCompiler)
UsingClass_(Object__Standard)
UsingClass_(ClassBuilder__CCompiler)
struct ClassInfo ClassBuilder__CCompiler__classInfo_ = 
	{ 143, 32, Proto_(ClassBuilder__CCompiler), Proto_(CCompiler), Proto_(Object__Standard), nil, Sym_(ClassBuilder) ,nil };
struct object ClassBuilder__CCompiler = 
	{ &ClassBuilder__CCompiler__classInfo_, {nil, nil, nil, nil, nil, nil, nil, nil} };


#define proto__fld_	(0)
#define int_literals__fld_	(1)
#define float_literals__fld_	(2)
#define string_literals__fld_	(3)
#define dict_literals__fld_	(4)
#define tuple_literals__fld_	(5)
#define extern_declarations__fld_	(6)
#define _dt_object_file_name__fld_	(7)


obj_ _dt_object_file_name__ClassBuilder__CCompiler(obj_ this_)
{
	return Field_(_dt_object_file_name);
}


obj_ _dt_object_file_name_co___ClassBuilder__CCompiler(obj_ this_, obj_ value)
{
	Field_(_dt_object_file_name) = value;
	return value;
}


obj_ add_extern_declaration_co___ClassBuilder__CCompiler(obj_ this_, obj_ declaration)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(append_co_) UsingMethod_(extern_declarations)

		{
		t0_ = Call_(extern_declarations, this_);
		t1_ = Call_(append_co_, t0_, declaration);
		
		
		}
	return nil;
}


obj_ create_co___ClassBuilder__CCompiler(obj_ this_, obj_ proto)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(dict_literals_co_) UsingMethod_(extern_declarations_co_) UsingMethod_(float_literals_co_) UsingMethod_(int_literals_co_) UsingMethod_(proto_co_) UsingMethod_(string_literals_co_) UsingMethod_(tuple_literals_co_)
	extern obj_ new__IndexedResources__CCompiler(obj_ this_);
	extern obj_ new__IndexedResources__CCompiler(obj_ this_);
	extern obj_ new__IndexedResources__CCompiler(obj_ this_);
	extern obj_ new__IndexedResources__CCompiler(obj_ this_);
	extern obj_ new__IndexedResources__CCompiler(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	UsingClass_(List__Standard)
	UsingClass_(IndexedResources__CCompiler)

		{
		t0_ = Call_(proto_co_, this_, proto);
		t0_ = new__IndexedResources__CCompiler(Proto_(IndexedResources__CCompiler));
		t1_ = Call_(int_literals_co_, this_, t0_);
		t0_ = new__IndexedResources__CCompiler(Proto_(IndexedResources__CCompiler));
		t1_ = Call_(string_literals_co_, this_, t0_);
		t0_ = new__IndexedResources__CCompiler(Proto_(IndexedResources__CCompiler));
		t1_ = Call_(float_literals_co_, this_, t0_);
		t0_ = new__IndexedResources__CCompiler(Proto_(IndexedResources__CCompiler));
		t1_ = Call_(dict_literals_co_, this_, t0_);
		t0_ = new__IndexedResources__CCompiler(Proto_(IndexedResources__CCompiler));
		t1_ = Call_(tuple_literals_co_, this_, t0_);
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(extern_declarations_co_, this_, t0_);
		
		
		}
	return nil;
}


obj_ dict_literals__ClassBuilder__CCompiler(obj_ this_)
{
	return Field_(dict_literals);
}


obj_ dict_literals_co___ClassBuilder__CCompiler(obj_ this_, obj_ value)
{
	Field_(dict_literals) = value;
	return value;
}


obj_ emit_on_co___ClassBuilder__CCompiler(obj_ this_, obj_ stream)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineInt_(0, 3)
	DefineInt_(1, 3)
	DefineInt_(2, 3)
	DefineInt_(3, 3)
	DefineInt_(4, 3)
	DefineInt_(5, 4)
	DefineInt_(6, 3)
	DefineInt_(7, 0)
	DefineInt_(8, 0)
	DefineInt_(9, 1)
	DefineString_(0, "#include \"Trylon_.h\"")
	DefineString_(1, "nil")
	DefineString_(2, "nil")
	DefineString_(3, "UsingClass_(")
	DefineString_(4, ")\n")
	DefineString_(5, "UsingSym_(")
	DefineString_(6, ")")
	DefineString_(7, "nil")
	DefineString_(8, "UsingClass_(")
	DefineString_(9, ")\n")
	DefineString_(10, "Proto_(")
	DefineString_(11, ")")
	DefineString_(12, "nil")
	DefineString_(13, "UsingClass_(")
	DefineString_(14, ")\n")
	DefineString_(15, "Proto_(")
	DefineString_(16, ")")
	DefineString_(17, "UsingClass_(")
	DefineString_(18, ")\n")
	DefineString_(19, "struct ClassInfo ")
	DefineString_(20, "__classInfo_ = \n\t{ ")
	DefineString_(21, ", ")
	DefineString_(22, ", ")
	DefineString_(23, "Proto_(")
	DefineString_(24, ")")
	DefineString_(25, ", ")
	DefineString_(26, ", ")
	DefineString_(27, ", ")
	DefineString_(28, ", Sym_(")
	DefineString_(29, ") ,")
	DefineString_(30, " };\n")
	DefineString_(31, "struct object ")
	DefineString_(32, " = \n\t{ &")
	DefineString_(33, "__classInfo_, {")
	DefineString_(34, ", ")
	DefineString_(35, "nil")
	DefineString_(36, "} };\n\n")
	DefineString_(37, "\t")
	DefineString_(38, "DeclareSharedField_(")
	DefineString_(39, ", ")
	DefineString_(40, ", ")
	DefineString_(41, ")\n")
	UsingMethod_(_st_) UsingMethod_(_pl_) UsingMethod_(_lt_) UsingMethod_(_gt_) UsingMethod_(access) UsingMethod_(add_member_co_) UsingMethod_(c_name) UsingMethod_(c_preamble) UsingMethod_(class_num) UsingMethod_(current_item) UsingMethod_(debugger) UsingMethod_(dict_literals) UsingMethod_(emit_c_function_on_co_) UsingMethod_(emit_code_co_) UsingMethod_(emit_declarations_on_co_) UsingMethod_(emit_field_indices_co_) UsingMethod_(extern_declarations) UsingMethod_(fields) UsingMethod_(float_literals) UsingMethod_(forward_declaration) UsingMethod_(functions) UsingMethod_(go_forward) UsingMethod_(initial_value) UsingMethod_(initial_value_result) UsingMethod_(initial_value_result_co_) UsingMethod_(int_literals) UsingMethod_(is_a_co_) UsingMethod_(is_done) UsingMethod_(is_empty) UsingMethod_(iterator) UsingMethod_(name) UsingMethod_(parent) UsingMethod_(proto) UsingMethod_(shared_fields) UsingMethod_(string) UsingMethod_(string_literals) UsingMethod_(superclass) UsingMethod_(total_num_fields) UsingMethod_(tuple_literals) UsingMethod_(uses_protos) UsingMethod_(using_symbol_co_) UsingMethod_(values) UsingMethod_(write_all_co_) UsingMethod_(write_line) UsingMethod_(write_line_co_) UsingMethod_(write_co_)
	UsingSharedField_(compiler, Main) 
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ new__TupleExpression__Compiler(obj_ this_);
	extern obj_ new_co___SymbolLiteral__Compiler(obj_ this_, obj_ name);
	extern obj_ new__TupleExpression__Compiler(obj_ this_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ new_co___ProtoExpression__CCompiler(obj_ this_, obj_ proto);
	extern obj_ mangle_name_co___CCompiler(obj_ this_, obj_ name);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ mangle_name_co___CCompiler(obj_ this_, obj_ name);
	UsingClass_(Main)
	UsingClass_(TupleExpression__Compiler)
	UsingClass_(SymbolLiteral__Compiler)
	UsingClass_(CCompiler)
	UsingClass_(CompiledProto__Compiler)
	UsingClass_(ProtoExpression__CCompiler)

		{
		obj_ added_fields_access, i, mangled_name, num_fields, parent_context_ref, superclass_ref, used_contexts_access;
		t0_ = Call_(write_line_co_, stream, Str_(0));
		t0_ = Call_(write_line, stream);
		
		/* Debugging info. */
		added_fields_access = Str_(1);
		t0_ = build_settings__Main(Proto_(Main));
		t1_ = Call_(debugger, t0_);
		if (t1_)
			{
			obj_ tuple;
			t0_ = new__TupleExpression__Compiler(Proto_(TupleExpression__Compiler));
			tuple = t0_;
			t0_ = Call_(proto, this_);
			t1_ = Call_(fields, t0_);
			ForStart_(0, t1_, field)
				{
				t0_ = Call_(name, field);
				t1_ = new_co___SymbolLiteral__Compiler(Proto_(SymbolLiteral__Compiler), t0_);
				t2_ = Call_(add_member_co_, tuple, t1_);
				}
			ForEnd_(0)
			t0_ = Call_(emit_code_co_, tuple, this_);
			t0_ = Call_(forward_declaration, tuple);
			t1_ = Call_(write_line_co_, stream, t0_);
			t0_ = Call_(access, tuple);
			added_fields_access = t0_;
			
			}
		/* Used protos. */
		used_contexts_access = Str_(2);
		t0_ = Call_(proto, this_);
		t1_ = Call_(uses_protos, t0_);
		if (t1_) {
			t2_ = Call_(proto, this_);
			t3_ = Call_(uses_protos, t2_);
			t4_ = Call_(is_empty, t3_);
			t5_ = Not_(t4_);
			t1_ = t5_;
			}
		if (t1_)
			{
			obj_ tuple;
			t0_ = new__TupleExpression__Compiler(Proto_(TupleExpression__Compiler));
			tuple = t0_;
			t0_ = Call_(proto, this_);
			t1_ = Call_(uses_protos, t0_);
			ForStart_(1, t1_, used_proto)
				{
				t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), Int_(0));
				t0_->fields[1] = Str_(3);
				t1_ = Call_(c_name, used_proto);
				t0_->fields[2] = t1_;
				t0_->fields[3] = Str_(4);
				t2_ = Call_(write_all_co_, stream, t0_);
				t0_ = new_co___ProtoExpression__CCompiler(Proto_(ProtoExpression__CCompiler), used_proto);
				t1_ = Call_(add_member_co_, tuple, t0_);
				}
			ForEnd_(1)
			t0_ = Call_(emit_code_co_, tuple, this_);
			t0_ = Call_(forward_declaration, tuple);
			t1_ = Call_(write_line_co_, stream, t0_);
			t0_ = Call_(access, tuple);
			used_contexts_access = t0_;
			
			}
		/* Class info. */
		t0_ = Call_(proto, this_);
		t1_ = Call_(name, t0_);
		t2_ = Call_(using_symbol_co_, SharedField_(compiler, Main), t1_);
		t0_ = Call_(proto, this_);
		t1_ = Call_(name, t0_);
		t2_ = mangle_name_co___CCompiler(Proto_(CCompiler), t1_);
		mangled_name = t2_;
		t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), Int_(1));
		t0_->fields[1] = Str_(5);
		t0_->fields[2] = mangled_name;
		t0_->fields[3] = Str_(6);
		t1_ = Call_(write_all_co_, stream, t0_);
		parent_context_ref = Str_(7);
		t0_ = Call_(proto, this_);
		t1_ = Call_(parent, t0_);
		if (t1_) {
			t2_ = Call_(proto, this_);
			t3_ = Call_(parent, t2_);
			t4_ = Call_(is_a_co_, t3_, Proto_(CompiledProto__Compiler));
			t1_ = t4_;
			}
		if (t1_)
			{
			t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), Int_(2));
			t0_->fields[1] = Str_(8);
			t1_ = Call_(proto, this_);
			t2_ = Call_(parent, t1_);
			t3_ = Call_(c_name, t2_);
			t0_->fields[2] = t3_;
			t0_->fields[3] = Str_(9);
			t4_ = Call_(write_all_co_, stream, t0_);
			t0_ = Call_(proto, this_);
			t1_ = Call_(parent, t0_);
			t2_ = Call_(c_name, t1_);
			t3_ = Call_(_pl_, Str_(10), t2_);
			t4_ = Call_(_pl_, t3_, Str_(11));
			parent_context_ref = t4_;
			}
		superclass_ref = Str_(12);
		t0_ = Call_(proto, this_);
		t1_ = Call_(superclass, t0_);
		if (t1_)
			{
			t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), Int_(3));
			t0_->fields[1] = Str_(13);
			t1_ = Call_(proto, this_);
			t2_ = Call_(superclass, t1_);
			t3_ = Call_(c_name, t2_);
			t0_->fields[2] = t3_;
			t0_->fields[3] = Str_(14);
			t4_ = Call_(write_all_co_, stream, t0_);
			t0_ = Call_(proto, this_);
			t1_ = Call_(superclass, t0_);
			t2_ = Call_(c_name, t1_);
			t3_ = Call_(_pl_, Str_(15), t2_);
			t4_ = Call_(_pl_, t3_, Str_(16));
			superclass_ref = t4_;
			}
		t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), Int_(4));
		t0_->fields[1] = Str_(17);
		t1_ = Call_(proto, this_);
		t2_ = Call_(c_name, t1_);
		t0_->fields[2] = t2_;
		t0_->fields[3] = Str_(18);
		t3_ = Call_(write_all_co_, stream, t0_);
		t0_ = Call_(write_co_, stream, Str_(19));
		t0_ = Call_(proto, this_);
		t1_ = Call_(c_name, t0_);
		t2_ = Call_(write_co_, stream, t1_);
		t0_ = Call_(write_co_, stream, Str_(20));
		t0_ = Call_(proto, this_);
		t1_ = Call_(class_num, t0_);
		t2_ = Call_(string, t1_);
		t3_ = Call_(write_co_, stream, t2_);
		t0_ = Call_(write_co_, stream, Str_(21));
		t0_ = Call_(proto, this_);
		t1_ = Call_(total_num_fields, t0_);
		t2_ = Call_(_st_, t1_, Int_(5));
		t3_ = Call_(string, t2_);
		t4_ = Call_(write_co_, stream, t3_);
		t0_ = Call_(write_co_, stream, Str_(22));
		t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), Int_(6));
		t0_->fields[1] = Str_(23);
		t1_ = Call_(proto, this_);
		t2_ = Call_(c_name, t1_);
		t0_->fields[2] = t2_;
		t0_->fields[3] = Str_(24);
		t3_ = Call_(write_all_co_, stream, t0_);
		t0_ = Call_(write_co_, stream, Str_(25));
		t0_ = Call_(write_co_, stream, parent_context_ref);
		t0_ = Call_(write_co_, stream, Str_(26));
		t0_ = Call_(write_co_, stream, superclass_ref);
		t0_ = Call_(write_co_, stream, Str_(27));
		t0_ = Call_(write_co_, stream, used_contexts_access);
		t0_ = Call_(write_co_, stream, Str_(28));
		t0_ = Call_(write_co_, stream, mangled_name);
		t0_ = Call_(write_co_, stream, Str_(29));
		t0_ = Call_(write_co_, stream, added_fields_access);
		t0_ = Call_(write_co_, stream, Str_(30));
		
		/* Prototype. */
		t0_ = Call_(write_co_, stream, Str_(31));
		t0_ = Call_(proto, this_);
		t1_ = Call_(c_name, t0_);
		t2_ = Call_(write_co_, stream, t1_);
		t0_ = Call_(write_co_, stream, Str_(32));
		t0_ = Call_(proto, this_);
		t1_ = Call_(c_name, t0_);
		t2_ = Call_(write_co_, stream, t1_);
		t0_ = Call_(write_co_, stream, Str_(33));
		t0_ = Call_(proto, this_);
		t1_ = Call_(total_num_fields, t0_);
		num_fields = t1_;
		i = Int_(7);
		while (1) {
			ContinuePoint_(2)
			t0_ = Call_(_lt_, i, num_fields);
			if (!(t0_))
				Break_(2)
			{
			t0_ = Call_(_gt_, i, Int_(8));
			if (t0_)
				{
				t0_ = Call_(write_co_, stream, Str_(34));
				}
			t0_ = Call_(write_co_, stream, Str_(35));
			t0_ = Call_(_pl_, i, Int_(9));
			i = t0_;
			}
			}
		t0_ = Call_(write_co_, stream, Str_(36));
		
		/* Shared fields initial values. */
		t0_ = Call_(proto, this_);
		t1_ = Call_(shared_fields, t0_);
		t2_ = Call_(values, t1_);
		ForStart_(3, t2_, field)
			{
			t0_ = Call_(initial_value, field);
			t1_ = Call_(emit_code_co_, t0_, this_);
			t2_ = Call_(initial_value_result_co_, field, t1_);
			}
		ForEnd_(3)
		t0_ = Call_(extern_declarations, this_);
		t1_ = Call_(is_empty, t0_);
		t2_ = Not_(t1_);
		if (t2_)
			{
			t0_ = Call_(extern_declarations, this_);
			ForStart_(4, t0_, declaration)
				{
				t0_ = Call_(write_co_, stream, Str_(37));
				t0_ = Call_(write_line_co_, stream, declaration);
				}
			ForEnd_(4)
			}
		t0_ = Call_(int_literals, this_);
		t1_ = Call_(emit_declarations_on_co_, t0_, stream);
		t0_ = Call_(string_literals, this_);
		t1_ = Call_(emit_declarations_on_co_, t0_, stream);
		t0_ = Call_(float_literals, this_);
		t1_ = Call_(emit_declarations_on_co_, t0_, stream);
		t0_ = Call_(tuple_literals, this_);
		t1_ = Call_(emit_declarations_on_co_, t0_, stream);
		t0_ = Call_(dict_literals, this_);
		t1_ = Call_(emit_declarations_on_co_, t0_, stream);
		
		/* Fields. */
		t0_ = Call_(proto, this_);
		t1_ = Call_(emit_field_indices_co_, t0_, stream);
		t0_ = Call_(proto, this_);
		t1_ = Call_(shared_fields, t0_);
		t2_ = Call_(values, t1_);
		ForStart_(5, t2_, field)
			{
			t0_ = Call_(write_co_, stream, Str_(38));
			t0_ = Call_(name, field);
			t1_ = mangle_name_co___CCompiler(Proto_(CCompiler), t0_);
			t2_ = Call_(write_co_, stream, t1_);
			t0_ = Call_(write_co_, stream, Str_(39));
			t0_ = Call_(proto, this_);
			t1_ = Call_(c_name, t0_);
			t2_ = Call_(write_co_, stream, t1_);
			t0_ = Call_(write_co_, stream, Str_(40));
			t0_ = Call_(initial_value_result, field);
			t1_ = Call_(access, t0_);
			t2_ = Call_(write_co_, stream, t1_);
			t0_ = Call_(write_co_, stream, Str_(41));
			}
		ForEnd_(5)
		t0_ = Call_(write_line, stream);
		
		t0_ = Call_(proto, this_);
		t1_ = Call_(c_preamble, t0_);
		if (t1_)
			{
			t0_ = Call_(proto, this_);
			t1_ = Call_(c_preamble, t0_);
			t2_ = Call_(write_co_, stream, t1_);
			
			}
		t0_ = Call_(proto, this_);
		t1_ = Call_(functions, t0_);
		t2_ = Call_(values, t1_);
		ForStart_(6, t2_, function)
			{
			t0_ = Call_(emit_c_function_on_co_, function, stream);
			
			
			}
		ForEnd_(6)
		}
	return nil;
}


obj_ emit_co___ClassBuilder__CCompiler(obj_ this_, obj_ force_compile)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineInt_(0, 0)
	DefineString_(0, "Emitting C for ")
	DefineString_(1, "...")
	DefineString_(2, "/")
	DefineString_(3, ".c")
	DefineString_(4, "Compiling ")
	DefineString_(5, ".c...")
	DefineString_(6, "-c")
	DefineString_(7, "-o")
	DefineString_(8, "C compilation failed.")
	UsingMethod_(_nt__eq_) UsingMethod_(_pl_) UsingMethod_(append_co_) UsingMethod_(build_settings) UsingMethod_(c_compiler) UsingMethod_(c_flags) UsingMethod_(c_name) UsingMethod_(c_sources_dir) UsingMethod_(close) UsingMethod_(current_item) UsingMethod_(emit_on_co_) UsingMethod_(exists) UsingMethod_(go_forward) UsingMethod_(is_changed) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(name) UsingMethod_(object_file_name) UsingMethod_(proto) UsingMethod_(report_run_program_co_arguments_co_) UsingMethod_(report_co_)
	UsingSharedField_(compiler, Main) 
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ new_co___ExistingFileStream__Standard(obj_ this_, obj_ file);
	extern obj_ new_co___File__Standard(obj_ this_, obj_ path);
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ run_program_co_arguments_co___System__Standard(obj_ this_, obj_ name, obj_ arguments);
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	UsingClass_(File__Standard)
	UsingClass_(System__Standard)
	UsingClass_(MessageException__Standard)
	UsingClass_(List__Standard)
	UsingClass_(Main)
	UsingClass_(ExistingFileStream__Standard)

		{
		obj_ build_settings, c_file_name, need_recompile, stream;
		t0_ = Call_(build_settings, SharedField_(compiler, Main));
		build_settings = t0_;
		
		/* Emit the C code. */
		t0_ = status_reporter__Main(Proto_(Main));
		t1_ = Call_(proto, this_);
		t2_ = Call_(name, t1_);
		t3_ = Call_(_pl_, Str_(0), t2_);
		t4_ = Call_(_pl_, t3_, Str_(1));
		t5_ = Call_(report_co_, t0_, t4_);
		t0_ = Call_(c_sources_dir, build_settings);
		t1_ = Call_(_pl_, t0_, Str_(2));
		t2_ = Call_(proto, this_);
		t3_ = Call_(c_name, t2_);
		t4_ = Call_(_pl_, t1_, t3_);
		t5_ = Call_(_pl_, t4_, Str_(3));
		c_file_name = t5_;
		t0_ = new_co___ExistingFileStream__Standard(Proto_(ExistingFileStream__Standard), c_file_name);
		stream = t0_;
		t0_ = Call_(emit_on_co_, this_, stream);
		t0_ = Call_(is_changed, stream);
		need_recompile = t0_;
		t0_ = Call_(close, stream);
		
		/* Compile the C code. */
		t0_ = need_recompile;
		if ((t0_) == nil) {
			t0_ = force_compile;
			}
		if ((t0_) == nil) {
			t1_ = Call_(object_file_name, this_);
			t2_ = new_co___File__Standard(Proto_(File__Standard), t1_);
			t3_ = Call_(exists, t2_);
			t4_ = Not_(t3_);
			t0_ = t4_;
			}
		if (t0_)
			{
			obj_ args, status;
			t0_ = status_reporter__Main(Proto_(Main));
			t1_ = Call_(proto, this_);
			t2_ = Call_(c_name, t1_);
			t3_ = Call_(_pl_, Str_(4), t2_);
			t4_ = Call_(_pl_, t3_, Str_(5));
			t5_ = Call_(report_co_, t0_, t4_);
			t0_ = new__List__Standard(Proto_(List__Standard));
			args = t0_;
			t0_ = Call_(append_co_, args, Str_(6));
			t0_ = Call_(append_co_, args, c_file_name);
			t0_ = Call_(append_co_, args, Str_(7));
			t0_ = Call_(object_file_name, this_);
			t1_ = Call_(append_co_, args, t0_);
			t0_ = Call_(c_flags, build_settings);
			ForStart_(0, t0_, flag)
				{
				t0_ = Call_(append_co_, args, flag);
				}
			ForEnd_(0)
			t0_ = Call_(c_compiler, build_settings);
			t1_ = Call_(report_run_program_co_arguments_co_, this_, t0_, args);
			t0_ = Call_(c_compiler, build_settings);
			t1_ = run_program_co_arguments_co___System__Standard(Proto_(System__Standard), t0_, args);
			status = t1_;
			t0_ = Call_(_nt__eq_, status, Int_(0));
			if (t0_)
				{
				t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(8));
				Throw_(t0_);
				
				
				}
			}
		}
	return nil;
}


obj_ extern_declarations__ClassBuilder__CCompiler(obj_ this_)
{
	return Field_(extern_declarations);
}


obj_ extern_declarations_co___ClassBuilder__CCompiler(obj_ this_, obj_ value)
{
	Field_(extern_declarations) = value;
	return value;
}


obj_ float_literals__ClassBuilder__CCompiler(obj_ this_)
{
	return Field_(float_literals);
}


obj_ float_literals_co___ClassBuilder__CCompiler(obj_ this_, obj_ value)
{
	Field_(float_literals) = value;
	return value;
}


obj_ int_literals__ClassBuilder__CCompiler(obj_ this_)
{
	return Field_(int_literals);
}


obj_ int_literals_co___ClassBuilder__CCompiler(obj_ this_, obj_ value)
{
	Field_(int_literals) = value;
	return value;
}


obj_ new_co___ClassBuilder__CCompiler(obj_ this_, obj_ proto)
{
	UsingClass_(ClassBuilder__CCompiler)
	obj_ obj = AllocObj_(ClassBuilder__CCompiler);
	create_co___ClassBuilder__CCompiler(obj, proto);
	return obj;
}


obj_ object_file_name__ClassBuilder__CCompiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	obj_ t7_;
	DefineString_(0, "/")
	DefineString_(1, ".o")
	UsingMethod_(_pl_) UsingMethod_(_dt_object_file_name) UsingMethod_(_dt_object_file_name_co_) UsingMethod_(build_settings) UsingMethod_(c_name) UsingMethod_(objects_dir) UsingMethod_(proto)
	UsingSharedField_(compiler, Main) 

		{
		/* Will be called by the ProgramBuilder when it needs the name at link time. */
		t0_ = Call_(_dt_object_file_name, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = Call_(build_settings, SharedField_(compiler, Main));
			t1_ = Call_(objects_dir, t0_);
			t2_ = Call_(_pl_, t1_, Str_(0));
			t3_ = Call_(proto, this_);
			t4_ = Call_(c_name, t3_);
			t5_ = Call_(_pl_, t2_, t4_);
			t6_ = Call_(_pl_, t5_, Str_(1));
			t7_ = Call_(_dt_object_file_name_co_, this_, t6_);
			}
		t0_ = Call_(_dt_object_file_name, this_);
		return t0_;
		}
	return nil;
}


obj_ proto__ClassBuilder__CCompiler(obj_ this_)
{
	return Field_(proto);
}


obj_ proto_co___ClassBuilder__CCompiler(obj_ this_, obj_ value)
{
	Field_(proto) = value;
	return value;
}


obj_ report_run_program_co_arguments_co___ClassBuilder__CCompiler(obj_ this_, obj_ program, obj_ args)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, " ")
	DefineString_(1, " ")
	UsingMethod_(_pl_) UsingMethod_(build_settings) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(indent) UsingMethod_(is_done) UsingMethod_(is_verbose) UsingMethod_(iterator) UsingMethod_(report_co_) UsingMethod_(string) UsingMethod_(unindent)
	UsingSharedField_(compiler, Main) 
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ new__StringBuilder__Standard(obj_ this_);
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ status_reporter__Main(obj_ this_);
	UsingClass_(Main)
	UsingClass_(StringBuilder__Standard)

		{
		t0_ = Call_(build_settings, SharedField_(compiler, Main));
		t1_ = Call_(is_verbose, t0_);
		if (t1_)
			{
			obj_ command;
			t0_ = status_reporter__Main(Proto_(Main));
			t1_ = Call_(indent, t0_);
			
			t0_ = new__StringBuilder__Standard(Proto_(StringBuilder__Standard));
			command = t0_;
			t0_ = Call_(_pl_, command, program);
			command = t0_;
			t0_ = Call_(_pl_, command, Str_(0));
			command = t0_;
			ForStart_(0, args, arg)
				{
				t0_ = Call_(_pl_, command, arg);
				command = t0_;
				t0_ = Call_(_pl_, command, Str_(1));
				command = t0_;
				}
			ForEnd_(0)
			t0_ = status_reporter__Main(Proto_(Main));
			t1_ = Call_(string, command);
			t2_ = Call_(report_co_, t0_, t1_);
			
			t0_ = status_reporter__Main(Proto_(Main));
			t1_ = Call_(unindent, t0_);
			
			
			
			}
		}
	return nil;
}


obj_ string_literals__ClassBuilder__CCompiler(obj_ this_)
{
	return Field_(string_literals);
}


obj_ string_literals_co___ClassBuilder__CCompiler(obj_ this_, obj_ value)
{
	Field_(string_literals) = value;
	return value;
}


obj_ supports_only_literals__ClassBuilder__CCompiler(obj_ this_)
{

		{
		return true_;
		
		}
	return nil;
}


obj_ tuple_literals__ClassBuilder__CCompiler(obj_ this_)
{
	return Field_(tuple_literals);
}


obj_ tuple_literals_co___ClassBuilder__CCompiler(obj_ this_, obj_ value)
{
	Field_(tuple_literals) = value;
	return value;
}


obj_ using_proto_co___ClassBuilder__CCompiler(obj_ this_, obj_ proto)
{

		{
		/* ... */
		
		}
	return nil;
}


