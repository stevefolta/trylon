#include "Trylon_.h"

UsingSym_(ClassBuilder)UsingClass_(CCompiler)
UsingClass_(Object__Standard)
UsingClass_(ClassBuilder__CCompiler)
struct ClassInfo ClassBuilder__CCompiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 178, 8, Proto_(ClassBuilder__CCompiler), Proto_(CCompiler), Proto_(Object__Standard), nil, Sym_(ClassBuilder), nil, nil };
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
	extern obj_ new__IndexedResources__CCompiler(obj_ this_);
	extern obj_ new__IndexedResources__CCompiler(obj_ this_);
	extern obj_ new__IndexedResources__CCompiler(obj_ this_);
	extern obj_ new__IndexedResources__CCompiler(obj_ this_);
	extern obj_ new__IndexedResources__CCompiler(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(dict_literals_co_) UsingMethod_(extern_declarations_co_) UsingMethod_(float_literals_co_) UsingMethod_(int_literals_co_) UsingMethod_(proto_co_) UsingMethod_(string_literals_co_) UsingMethod_(tuple_literals_co_)
	UsingClass_(IndexedResources__CCompiler)
	UsingClass_(List__Standard)

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


obj_ emit_on_co___ClassBuilder__CCompiler(obj_ this_, obj_ stream)
{
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ new__TupleExpression__Compiler(obj_ this_);
	extern obj_ new_co___SymbolLiteral__Compiler(obj_ this_, obj_ name);
	extern obj_ new__TupleExpression__Compiler(obj_ this_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ new_co___ProtoExpression__CCompiler(obj_ this_, obj_ proto);
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ new__TupleExpression__Compiler(obj_ this_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ new_co___ProtoExpression__CCompiler(obj_ this_, obj_ proto);
	extern obj_ mangle_name_co___CCompiler(obj_ this_, obj_ name);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ error_co___Standard(obj_ this_, obj_ message);
	extern obj_ mangle_name_co___CCompiler(obj_ this_, obj_ name);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	UsingInt_(3)
	UsingInt_(3)
	UsingInt_(3)
	UsingInt_(3)
	UsingInt_(3)
	UsingInt_(3)
	UsingInt_(3)
	UsingInt_(0)
	UsingInt_(0)
	UsingInt_(1)
	DefineString_(0, "#include \"Trylon_.h\"")
	DefineString_(1, "nil")
	DefineString_(2, "nil")
	DefineString_(3, "UsingClass_(")
	DefineString_(4, ")\n")
	DefineString_(5, "nil")
	DefineString_(6, "support-subprotos")
	DefineString_(7, "UsingClass_(")
	DefineString_(8, ") ")
	DefineString_(9, "UsingSym_(")
	DefineString_(10, ")")
	DefineString_(11, "nil")
	DefineString_(12, "UsingClass_(")
	DefineString_(13, ")\n")
	DefineString_(14, "Proto_(")
	DefineString_(15, ")")
	DefineString_(16, "nil")
	DefineString_(17, "UsingClass_(")
	DefineString_(18, ")\n")
	DefineString_(19, "Proto_(")
	DefineString_(20, ")")
	DefineString_(21, "UsingClass_(")
	DefineString_(22, ")\n")
	DefineString_(23, "struct ClassInfo ")
	DefineString_(24, "__classInfo_ = \n\t{ ")
	DefineString_(25, "class-objects")
	DefineString_(26, "StdClassRef_(Class__CImplementation), ")
	DefineString_(27, ", ")
	DefineString_(28, ", ")
	DefineString_(29, "Proto_(")
	DefineString_(30, ")")
	DefineString_(31, ", ")
	DefineString_(32, ", ")
	DefineString_(33, ", ")
	DefineString_(34, ", Sym_(")
	DefineString_(35, "), ")
	DefineString_(36, ", ")
	DefineString_(37, " };\n")
	DefineString_(38, "struct object ")
	DefineString_(39, " = \n\t{ &")
	DefineString_(40, "__classInfo_, {")
	DefineString_(41, ", ")
	DefineString_(42, "nil")
	DefineString_(43, "} };\n\n")
	DefineString_(44, "Initial value for \"")
	DefineString_(45, "\" is not literal.")
	DefineString_(46, "\t")
	DefineString_(47, "DeclareSharedField_(")
	DefineString_(48, ", ")
	DefineString_(49, ", ")
	DefineString_(50, ")\n")
	UsingMethod_(_pl_) UsingMethod_(_lt_) UsingMethod_(_gt_) UsingMethod_(access) UsingMethod_(add_member_co_) UsingMethod_(at_co_) UsingMethod_(c_name) UsingMethod_(c_preamble) UsingMethod_(class_num) UsingMethod_(current_item) UsingMethod_(debugger) UsingMethod_(dict_literals) UsingMethod_(emit_c_function_on_co_) UsingMethod_(emit_code_co_) UsingMethod_(emit_declarations_on_co_) UsingMethod_(emit_field_indices_co_) UsingMethod_(extern_declarations) UsingMethod_(fields) UsingMethod_(float_literals) UsingMethod_(forward_declaration) UsingMethod_(functions) UsingMethod_(go_forward) UsingMethod_(has_symbol_co_) UsingMethod_(initial_value) UsingMethod_(initial_value_result) UsingMethod_(initial_value_result_co_) UsingMethod_(int_literals) UsingMethod_(is_a_co_) UsingMethod_(is_done) UsingMethod_(is_empty) UsingMethod_(is_literal) UsingMethod_(iterator) UsingMethod_(name) UsingMethod_(parent) UsingMethod_(proto) UsingMethod_(shared_fields) UsingMethod_(string) UsingMethod_(string_literals) UsingMethod_(superclass) UsingMethod_(total_num_fields) UsingMethod_(tuple_literals) UsingMethod_(uses_protos) UsingMethod_(using_symbol_co_) UsingMethod_(values) UsingMethod_(write_all_co_) UsingMethod_(write_line) UsingMethod_(write_line_co_) UsingMethod_(write_co_)
	UsingSharedField_(compiler, Main) 
	UsingClass_(CCompiler)
	UsingClass_(CompiledClass__Compiler)
	UsingClass_(Main)
	UsingClass_(ProtoExpression__CCompiler)
	UsingClass_(ProtoFunction__Compiler)
	UsingClass_(Standard)
	UsingClass_(SymbolLiteral__Compiler)
	UsingClass_(TupleExpression__Compiler)

		{
		obj_ added_fields_access, i, mangled_name, num_fields, parent_context_ref, subprotos_access, superclass_ref, used_contexts_access;
		t0_ = Call_(write_line_co_, stream, Str_(0));
		t0_ = Call_(write_line, stream);
		
		/*  Debugging info. */
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
		
		/*  Used protos. */
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
				t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(3));
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
		
		/*  Subprotos. */
		subprotos_access = Str_(5);
		t0_ = build_settings__Main(Proto_(Main));
		t1_ = Call_(at_co_, t0_, Str_(6));
		if (t1_)
			{
			obj_ tuple;
			tuple = nil;
			t0_ = Call_(proto, this_);
			t1_ = Call_(functions, t0_);
			t2_ = Call_(values, t1_);
			ForStart_(2, t2_, function)
				{
				obj_ subproto;
				t0_ = Call_(is_a_co_, function, Proto_(ProtoFunction__Compiler));
				t1_ = Not_(t0_);
				if (t1_)
					{
					Continue_(2)
					}
				t0_ = Not_(tuple);
				if (t0_)
					{
					t0_ = new__TupleExpression__Compiler(Proto_(TupleExpression__Compiler));
					tuple = t0_;
					}
				t0_ = Call_(proto, function);
				subproto = t0_;
				t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(3));
				t0_->fields[1] = Str_(7);
				t1_ = Call_(c_name, subproto);
				t0_->fields[2] = t1_;
				t0_->fields[3] = Str_(8);
				t2_ = Call_(write_all_co_, stream, t0_);
				t0_ = new_co___ProtoExpression__CCompiler(Proto_(ProtoExpression__CCompiler), subproto);
				t1_ = Call_(add_member_co_, tuple, t0_);
				}
			ForEnd_(2)
			if (tuple)
				{
				t0_ = Call_(write_line, stream);
				t0_ = Call_(emit_code_co_, tuple, this_);
				t0_ = Call_(forward_declaration, tuple);
				t1_ = Call_(write_line_co_, stream, t0_);
				t0_ = Call_(access, tuple);
				subprotos_access = t0_;
				}
			}
		
		/*  Class info. */
		t0_ = Call_(proto, this_);
		t1_ = Call_(name, t0_);
		t2_ = Call_(using_symbol_co_, SharedField_(compiler, Main), t1_);
		t0_ = Call_(proto, this_);
		t1_ = Call_(name, t0_);
		t2_ = mangle_name_co___CCompiler(Proto_(CCompiler), t1_);
		mangled_name = t2_;
		t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(3));
		t0_->fields[1] = Str_(9);
		t0_->fields[2] = mangled_name;
		t0_->fields[3] = Str_(10);
		t1_ = Call_(write_all_co_, stream, t0_);
		parent_context_ref = Str_(11);
		t0_ = Call_(proto, this_);
		t1_ = Call_(parent, t0_);
		if (t1_) {
			t2_ = Call_(proto, this_);
			t3_ = Call_(parent, t2_);
			t4_ = Call_(is_a_co_, t3_, Proto_(CompiledClass__Compiler));
			t1_ = t4_;
			}
		if (t1_)
			{
			t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(3));
			t0_->fields[1] = Str_(12);
			t1_ = Call_(proto, this_);
			t2_ = Call_(parent, t1_);
			t3_ = Call_(c_name, t2_);
			t0_->fields[2] = t3_;
			t0_->fields[3] = Str_(13);
			t4_ = Call_(write_all_co_, stream, t0_);
			t0_ = Call_(proto, this_);
			t1_ = Call_(parent, t0_);
			t2_ = Call_(c_name, t1_);
			t3_ = Call_(_pl_, Str_(14), t2_);
			t4_ = Call_(_pl_, t3_, Str_(15));
			parent_context_ref = t4_;
			}
		superclass_ref = Str_(16);
		t0_ = Call_(proto, this_);
		t1_ = Call_(superclass, t0_);
		if (t1_)
			{
			t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(3));
			t0_->fields[1] = Str_(17);
			t1_ = Call_(proto, this_);
			t2_ = Call_(superclass, t1_);
			t3_ = Call_(c_name, t2_);
			t0_->fields[2] = t3_;
			t0_->fields[3] = Str_(18);
			t4_ = Call_(write_all_co_, stream, t0_);
			t0_ = Call_(proto, this_);
			t1_ = Call_(superclass, t0_);
			t2_ = Call_(c_name, t1_);
			t3_ = Call_(_pl_, Str_(19), t2_);
			t4_ = Call_(_pl_, t3_, Str_(20));
			superclass_ref = t4_;
			}
		t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(3));
		t0_->fields[1] = Str_(21);
		t1_ = Call_(proto, this_);
		t2_ = Call_(c_name, t1_);
		t0_->fields[2] = t2_;
		t0_->fields[3] = Str_(22);
		t3_ = Call_(write_all_co_, stream, t0_);
		t0_ = Call_(write_co_, stream, Str_(23));
		t0_ = Call_(proto, this_);
		t1_ = Call_(c_name, t0_);
		t2_ = Call_(write_co_, stream, t1_);
		t0_ = Call_(write_co_, stream, Str_(24));
		t0_ = build_settings__Main(Proto_(Main));
		t1_ = Call_(has_symbol_co_, t0_, Str_(25));
		if (t1_)
			{
			t0_ = Call_(write_co_, stream, Str_(26));
			}
		t0_ = Call_(proto, this_);
		t1_ = Call_(class_num, t0_);
		t2_ = Call_(string, t1_);
		t3_ = Call_(write_co_, stream, t2_);
		t0_ = Call_(write_co_, stream, Str_(27));
		t0_ = Call_(proto, this_);
		t1_ = Call_(total_num_fields, t0_);
		t2_ = Call_(string, t1_);
		t3_ = Call_(write_co_, stream, t2_);
		t0_ = Call_(write_co_, stream, Str_(28));
		t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(3));
		t0_->fields[1] = Str_(29);
		t1_ = Call_(proto, this_);
		t2_ = Call_(c_name, t1_);
		t0_->fields[2] = t2_;
		t0_->fields[3] = Str_(30);
		t3_ = Call_(write_all_co_, stream, t0_);
		t0_ = Call_(write_co_, stream, Str_(31));
		t0_ = Call_(write_co_, stream, parent_context_ref);
		t0_ = Call_(write_co_, stream, Str_(32));
		t0_ = Call_(write_co_, stream, superclass_ref);
		t0_ = Call_(write_co_, stream, Str_(33));
		t0_ = Call_(write_co_, stream, used_contexts_access);
		t0_ = Call_(write_co_, stream, Str_(34));
		t0_ = Call_(write_co_, stream, mangled_name);
		t0_ = Call_(write_co_, stream, Str_(35));
		t0_ = Call_(write_co_, stream, added_fields_access);
		t0_ = Call_(write_co_, stream, Str_(36));
		t0_ = Call_(write_co_, stream, subprotos_access);
		t0_ = Call_(write_co_, stream, Str_(37));
		
		/*  Prototype. */
		t0_ = Call_(write_co_, stream, Str_(38));
		t0_ = Call_(proto, this_);
		t1_ = Call_(c_name, t0_);
		t2_ = Call_(write_co_, stream, t1_);
		t0_ = Call_(write_co_, stream, Str_(39));
		t0_ = Call_(proto, this_);
		t1_ = Call_(c_name, t0_);
		t2_ = Call_(write_co_, stream, t1_);
		t0_ = Call_(write_co_, stream, Str_(40));
		t0_ = Call_(proto, this_);
		t1_ = Call_(total_num_fields, t0_);
		num_fields = t1_;
		i = SmallInt_(0);
		while (1) {
			ContinuePoint_(3)
			t0_ = Call_(_lt_, i, num_fields);
			if (!(t0_))
				Break_(3)
			{
			t0_ = Call_(_gt_, i, SmallInt_(0));
			if (t0_)
				{
				t0_ = Call_(write_co_, stream, Str_(41));
				}
			t0_ = Call_(write_co_, stream, Str_(42));
			t0_ = Call_(_pl_, i, SmallInt_(1));
			i = t0_;
			}
			}
		t0_ = Call_(write_co_, stream, Str_(43));
		
		/*  Shared fields initial values. */
		t0_ = Call_(proto, this_);
		t1_ = Call_(shared_fields, t0_);
		t2_ = Call_(values, t1_);
		ForStart_(4, t2_, field)
			{
			t0_ = Call_(initial_value, field);
			t1_ = Call_(is_literal, t0_);
			t2_ = Not_(t1_);
			if (t2_)
				{
				t0_ = Call_(name, field);
				t1_ = Call_(_pl_, Str_(44), t0_);
				t2_ = Call_(_pl_, t1_, Str_(45));
				t3_ = error_co___Standard(Proto_(Standard), t2_);
				}
			t0_ = Call_(initial_value, field);
			t1_ = Call_(emit_code_co_, t0_, this_);
			t2_ = Call_(initial_value_result_co_, field, t1_);
			}
		ForEnd_(4)
		t0_ = Call_(extern_declarations, this_);
		t1_ = Call_(is_empty, t0_);
		t2_ = Not_(t1_);
		if (t2_)
			{
			t0_ = Call_(extern_declarations, this_);
			ForStart_(5, t0_, declaration)
				{
				t0_ = Call_(write_co_, stream, Str_(46));
				t0_ = Call_(write_line_co_, stream, declaration);
				}
			ForEnd_(5)
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
		
		/*  Fields. */
		t0_ = Call_(proto, this_);
		t1_ = Call_(emit_field_indices_co_, t0_, stream);
		t0_ = Call_(proto, this_);
		t1_ = Call_(shared_fields, t0_);
		t2_ = Call_(values, t1_);
		ForStart_(6, t2_, field)
			{
			t0_ = Call_(write_co_, stream, Str_(47));
			t0_ = Call_(name, field);
			t1_ = mangle_name_co___CCompiler(Proto_(CCompiler), t0_);
			t2_ = Call_(write_co_, stream, t1_);
			t0_ = Call_(write_co_, stream, Str_(48));
			t0_ = Call_(proto, this_);
			t1_ = Call_(c_name, t0_);
			t2_ = Call_(write_co_, stream, t1_);
			t0_ = Call_(write_co_, stream, Str_(49));
			t0_ = Call_(initial_value_result, field);
			t1_ = Call_(access, t0_);
			t2_ = Call_(write_co_, stream, t1_);
			t0_ = Call_(write_co_, stream, Str_(50));
			}
		ForEnd_(6)
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
		ForStart_(7, t2_, function)
			{
			t0_ = Call_(emit_c_function_on_co_, function, stream);
			}
		ForEnd_(7)
		}
	return nil;
}


obj_ emit_co___ClassBuilder__CCompiler(obj_ this_, obj_ force_compile)
{
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ new_co___ExistingFileStream__Standard(obj_ this_, obj_ file);
	extern obj_ new_co___File__Standard(obj_ this_, obj_ path);
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ run_program_co_arguments_co___System__Standard(obj_ this_, obj_ name, obj_ arguments);
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	UsingInt_(0)
	DefineString_(0, "Emitting C for ")
	DefineString_(1, "...")
	DefineString_(2, "/")
	DefineString_(3, ".c")
	DefineString_(4, "Compiling ")
	DefineString_(5, ".c...")
	DefineString_(6, "-c")
	DefineString_(7, "-o")
	DefineString_(8, "C compilation failed.")
	UsingMethod_(_nt__eq_) UsingMethod_(_pl_) UsingMethod_(append_co_) UsingMethod_(build_settings) UsingMethod_(c_compiler) UsingMethod_(c_flags) UsingMethod_(c_name) UsingMethod_(c_sources_dir) UsingMethod_(close) UsingMethod_(current_item) UsingMethod_(emit_on_co_) UsingMethod_(exists) UsingMethod_(full_name) UsingMethod_(go_forward) UsingMethod_(is_changed) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(object_file_name) UsingMethod_(proto) UsingMethod_(report_run_program_co_arguments_co_) UsingMethod_(report_co_)
	UsingSharedField_(compiler, Main) 
	UsingClass_(ExistingFileStream__Standard)
	UsingClass_(File__Standard)
	UsingClass_(List__Standard)
	UsingClass_(Main)
	UsingClass_(MessageException__Standard)
	UsingClass_(System__Standard)

		{
		obj_ build_settings, c_file_name, need_recompile, stream;
		t0_ = Call_(build_settings, SharedField_(compiler, Main));
		build_settings = t0_;
		
		/*  Emit the C code. */
		t0_ = status_reporter__Main(Proto_(Main));
		t1_ = Call_(proto, this_);
		t2_ = Call_(full_name, t1_);
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
		
		/*  Compile the C code. */
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
			t0_ = Call_(_nt__eq_, status, SmallInt_(0));
			if (t0_)
				{
				t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(8));
				Throw_(t0_);
				}
			}
		}
	return nil;
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
		/*  Will be called by the ProgramBuilder when it needs the name at link time. */
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


obj_ report_run_program_co_arguments_co___ClassBuilder__CCompiler(obj_ this_, obj_ program, obj_ args)
{
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ new__StringBuilder__Standard(obj_ this_);
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ status_reporter__Main(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, " ")
	DefineString_(1, " ")
	UsingMethod_(_pl_) UsingMethod_(build_settings) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(indent) UsingMethod_(is_done) UsingMethod_(is_verbose) UsingMethod_(iterator) UsingMethod_(report_co_) UsingMethod_(string) UsingMethod_(unindent)
	UsingSharedField_(compiler, Main) 
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


obj_ supports_only_literals__ClassBuilder__CCompiler(obj_ this_)
{

		{
		return true_;
		}
	return nil;
}


obj_ using_proto_co___ClassBuilder__CCompiler(obj_ this_, obj_ proto)
{

		{
		/*  ... */
		}
	return nil;
}


