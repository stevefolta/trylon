#include "Trylon_.h"

UsingClass_(ClassBuilder__CCompiler) UsingClass_(ClassNumberer__CCompiler) UsingClass_(DispatchRow__CCompiler) UsingClass_(DispatchRowEntry__CCompiler) UsingClass_(DispatchRowSet__CCompiler) UsingClass_(DispatchTableEntry__CCompiler) UsingClass_(ExpandoArray__CCompiler) UsingClass_(ExpandoBitmap__CCompiler) UsingClass_(ExpressionResult__CCompiler) UsingClass_(Expressions__CCompiler) UsingClass_(Functions__CCompiler) UsingClass_(IndexedResources__CCompiler) UsingClass_(LiteralResult__CCompiler) UsingClass_(MethodBuilder__CCompiler) UsingClass_(NameResult__CCompiler) UsingClass_(Objects__CCompiler) UsingClass_(ProtoExpression__CCompiler) UsingClass_(Statements__CCompiler) UsingClass_(Temporary__CCompiler) 
static obj_ tu0_[];
UsingSym_(CCompiler)UsingClass_(Main)
UsingClass_(Object__Standard)
UsingClass_(CCompiler)
struct ClassInfo CCompiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 70, 0, Proto_(CCompiler), Proto_(Main), Proto_(Object__Standard), nil, Sym_(CCompiler), nil, ((obj_) tu0_) };
struct object CCompiler = 
	{ &CCompiler__classInfo_, {} };

	UsingInt_(19)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(19), Proto_(ClassBuilder__CCompiler), Proto_(ClassNumberer__CCompiler), Proto_(DispatchRow__CCompiler), Proto_(DispatchRowEntry__CCompiler), Proto_(DispatchRowSet__CCompiler), Proto_(DispatchTableEntry__CCompiler), Proto_(ExpandoArray__CCompiler), Proto_(ExpandoBitmap__CCompiler), Proto_(ExpressionResult__CCompiler), Proto_(Expressions__CCompiler), Proto_(Functions__CCompiler), Proto_(IndexedResources__CCompiler), Proto_(LiteralResult__CCompiler), Proto_(MethodBuilder__CCompiler), Proto_(NameResult__CCompiler), Proto_(Objects__CCompiler), Proto_(ProtoExpression__CCompiler), Proto_(Statements__CCompiler), Proto_(Temporary__CCompiler) };



obj_ ClassBuilder__CCompiler__accessor_(obj_ this_)
{
	UsingClass_(ClassBuilder__CCompiler)
	return Proto_(ClassBuilder__CCompiler);
}


obj_ ClassNumberer__CCompiler__accessor_(obj_ this_)
{
	UsingClass_(ClassNumberer__CCompiler)
	return Proto_(ClassNumberer__CCompiler);
}


obj_ DispatchRow__CCompiler__accessor_(obj_ this_)
{
	UsingClass_(DispatchRow__CCompiler)
	return Proto_(DispatchRow__CCompiler);
}


obj_ DispatchRowEntry__CCompiler__accessor_(obj_ this_)
{
	UsingClass_(DispatchRowEntry__CCompiler)
	return Proto_(DispatchRowEntry__CCompiler);
}


obj_ DispatchRowSet__CCompiler__accessor_(obj_ this_)
{
	UsingClass_(DispatchRowSet__CCompiler)
	return Proto_(DispatchRowSet__CCompiler);
}


obj_ DispatchTableEntry__CCompiler__accessor_(obj_ this_)
{
	UsingClass_(DispatchTableEntry__CCompiler)
	return Proto_(DispatchTableEntry__CCompiler);
}


obj_ ExpandoArray__CCompiler__accessor_(obj_ this_)
{
	UsingClass_(ExpandoArray__CCompiler)
	return Proto_(ExpandoArray__CCompiler);
}


obj_ ExpandoBitmap__CCompiler__accessor_(obj_ this_)
{
	UsingClass_(ExpandoBitmap__CCompiler)
	return Proto_(ExpandoBitmap__CCompiler);
}


obj_ ExpressionResult__CCompiler__accessor_(obj_ this_)
{
	UsingClass_(ExpressionResult__CCompiler)
	return Proto_(ExpressionResult__CCompiler);
}


obj_ Expressions__CCompiler__accessor_(obj_ this_)
{
	UsingClass_(Expressions__CCompiler)
	return Proto_(Expressions__CCompiler);
}


obj_ Functions__CCompiler__accessor_(obj_ this_)
{
	UsingClass_(Functions__CCompiler)
	return Proto_(Functions__CCompiler);
}


obj_ IndexedResources__CCompiler__accessor_(obj_ this_)
{
	UsingClass_(IndexedResources__CCompiler)
	return Proto_(IndexedResources__CCompiler);
}


obj_ LiteralResult__CCompiler__accessor_(obj_ this_)
{
	UsingClass_(LiteralResult__CCompiler)
	return Proto_(LiteralResult__CCompiler);
}


obj_ MethodBuilder__CCompiler__accessor_(obj_ this_)
{
	UsingClass_(MethodBuilder__CCompiler)
	return Proto_(MethodBuilder__CCompiler);
}


obj_ NameResult__CCompiler__accessor_(obj_ this_)
{
	UsingClass_(NameResult__CCompiler)
	return Proto_(NameResult__CCompiler);
}


obj_ Objects__CCompiler__accessor_(obj_ this_)
{
	UsingClass_(Objects__CCompiler)
	return Proto_(Objects__CCompiler);
}


obj_ ProtoExpression__CCompiler__accessor_(obj_ this_)
{
	UsingClass_(ProtoExpression__CCompiler)
	return Proto_(ProtoExpression__CCompiler);
}


obj_ Statements__CCompiler__accessor_(obj_ this_)
{
	UsingClass_(Statements__CCompiler)
	return Proto_(Statements__CCompiler);
}


obj_ Temporary__CCompiler__accessor_(obj_ this_)
{
	UsingClass_(Temporary__CCompiler)
	return Proto_(Temporary__CCompiler);
}


obj_ compile_c_file_co_force_compile_co___CCompiler(obj_ this_, obj_ name, obj_ force_compile)
{
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
	UsingInt_(0)
	DefineString_(0, "/")
	DefineString_(1, ".o")
	DefineString_(2, "Compiling ")
	DefineString_(3, ".c...")
	DefineString_(4, "-c")
	DefineString_(5, "/")
	DefineString_(6, ".c")
	DefineString_(7, "-o")
	DefineString_(8, "C compilation failed.")
	UsingMethod_(_nt__eq_) UsingMethod_(_pl_) UsingMethod_(append_co_) UsingMethod_(build_settings) UsingMethod_(c_compiler) UsingMethod_(c_flags) UsingMethod_(c_sources_dir) UsingMethod_(current_item) UsingMethod_(exists) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(objects_dir) UsingMethod_(report_run_program_co_arguments_co_) UsingMethod_(report_co_)
	UsingSharedField_(compiler, Main) 
	UsingClass_(File__Standard)
	UsingClass_(List__Standard)
	UsingClass_(Main)
	UsingClass_(MessageException__Standard)
	UsingClass_(System__Standard)

		{
		obj_ build_settings, object_file_name;
		t0_ = Call_(build_settings, SharedField_(compiler, Main));
		build_settings = t0_;
		t0_ = Call_(objects_dir, build_settings);
		t1_ = Call_(_pl_, t0_, Str_(0));
		t2_ = Call_(_pl_, t1_, name);
		t3_ = Call_(_pl_, t2_, Str_(1));
		object_file_name = t3_;
		t0_ = force_compile;
		if ((t0_) == nil) {
			t1_ = new_co___File__Standard(Proto_(File__Standard), object_file_name);
			t2_ = Call_(exists, t1_);
			t3_ = Not_(t2_);
			t0_ = t3_;
			}
		if (t0_)
			{
			obj_ args, status;
			t0_ = status_reporter__Main(Proto_(Main));
			t1_ = Call_(_pl_, Str_(2), name);
			t2_ = Call_(_pl_, t1_, Str_(3));
			t3_ = Call_(report_co_, t0_, t2_);
			t0_ = new__List__Standard(Proto_(List__Standard));
			args = t0_;
			t0_ = Call_(append_co_, args, Str_(4));
			t0_ = Call_(c_sources_dir, build_settings);
			t1_ = Call_(_pl_, t0_, Str_(5));
			t2_ = Call_(_pl_, t1_, name);
			t3_ = Call_(_pl_, t2_, Str_(6));
			t4_ = Call_(append_co_, args, t3_);
			t0_ = Call_(append_co_, args, Str_(7));
			t0_ = Call_(append_co_, args, object_file_name);
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
		
		return object_file_name;
		}
	return nil;
}


obj_ emit_c_co___CCompiler(obj_ this_, obj_ compiler)
{
	extern obj_ new_co___FileDirectory__Standard(obj_ this_, obj_ path);
	extern obj_ new__ClassNumberer__CCompiler(obj_ this_);
	extern obj_ new_co___File__Standard(obj_ this_, obj_ path);
	extern obj_ new_co___ExistingFileStream__Standard(obj_ this_, obj_ file);
	extern obj_ new_co___File__Standard(obj_ this_, obj_ path);
	extern obj_ new_co___ExistingFileStream__Standard(obj_ this_, obj_ file);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ new_co___ClassBuilder__CCompiler(obj_ this_, obj_ proto);
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ run_program_co_arguments_co___System__Standard(obj_ this_, obj_ name, obj_ arguments);
	extern obj_ status_reporter__Main(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	UsingInt_(0)
	DefineString_(0, "program-binary")
	DefineString_(1, ".")
	DefineString_(2, "/Trylon_.h")
	DefineString_(3, "/Trylon_.h")
	DefineString_(4, "/Trylon_.c")
	DefineString_(5, "/Trylon_.c")
	DefineString_(6, "Trylon_")
	DefineString_(7, "Emitting code...")
	DefineString_(8, "methods_")
	DefineString_(9, "Emitting symbols...")
	DefineString_(10, "symbols_")
	DefineString_(11, "Emitting ints...")
	DefineString_(12, "ints_")
	DefineString_(13, "Emitting field accessors...")
	DefineString_(14, "field-accessors_")
	DefineString_(15, "Linking...")
	DefineString_(16, "-o")
	DefineString_(17, "'")
	DefineString_(18, "' is called but never defined.")
	UsingMethod_(_pl_) UsingMethod_(_gt_) UsingMethod_(all_protos) UsingMethod_(append_co_) UsingMethod_(assign_field_indices) UsingMethod_(build_settings) UsingMethod_(c_sources_dir) UsingMethod_(called) UsingMethod_(close) UsingMethod_(compile_c_file_co_force_compile_co_) UsingMethod_(contents) UsingMethod_(create_subdirectory_co_) UsingMethod_(current_item) UsingMethod_(declared) UsingMethod_(emit_dispatch_table_co_) UsingMethod_(emit_field_accessors_co_) UsingMethod_(emit_ints) UsingMethod_(emit_settings_co_) UsingMethod_(emit_symbols) UsingMethod_(emit_co_) UsingMethod_(entry_is_directory_co_) UsingMethod_(find_library_path) UsingMethod_(go_forward) UsingMethod_(indent) UsingMethod_(is_changed) UsingMethod_(is_done) UsingMethod_(is_empty) UsingMethod_(iterator) UsingMethod_(link_flags) UsingMethod_(linker) UsingMethod_(main_proto) UsingMethod_(name) UsingMethod_(number_classes_co_) UsingMethod_(object_file_name) UsingMethod_(objects_dir) UsingMethod_(program_name) UsingMethod_(report_run_program_co_arguments_co_) UsingMethod_(report_co_) UsingMethod_(shared_field_accessors) UsingMethod_(shared_ints) UsingMethod_(source_name) UsingMethod_(standard_object_proto) UsingMethod_(symbols) UsingMethod_(total_num_fields) UsingMethod_(unindent) UsingMethod_(values) UsingMethod_(warn_co_) UsingMethod_(write_co_)
	UsingClass_(ClassBuilder__CCompiler)
	UsingClass_(ClassNumberer__CCompiler)
	UsingClass_(ExistingFileStream__Standard)
	UsingClass_(FileDirectory__Standard)
	UsingClass_(File__Standard)
	UsingClass_(List__Standard)
	UsingClass_(Main)
	UsingClass_(System__Standard)

		{
		obj_ args, build_settings, c_file_name, compile_trylon_c, contents, directory, library_path, max_num_fields, object_class, objects, program_name, recompile, recompile_all, settings_changed, stream;
		t0_ = Call_(build_settings, compiler);
		build_settings = t0_;
		t0_ = Call_(find_library_path, compiler);
		library_path = t0_;
		recompile_all = nil;
		
		/*  Figure out the program name. */
		/*  Normally it's set in build-settings, but if not, use the "trylon" line from */
		/*  "main". */
		t0_ = Call_(program_name, build_settings);
		program_name = t0_;
		t0_ = Not_(program_name);
		if ((t0_) == nil) {
			t1_ = Call_(is_empty, program_name);
			t0_ = t1_;
			}
		if (t0_)
			{
			t0_ = Call_(main_proto, compiler);
			t1_ = Call_(source_name, t0_);
			program_name = t1_;
			t0_ = Not_(program_name);
			if ((t0_) == nil) {
				t1_ = Call_(is_empty, program_name);
				t0_ = t1_;
				}
			if (t0_)
				{
				/*  Have to default to something... */
				program_name = Str_(0);
				}
			}
		
		/*  Create sources/objects directories. */
		t0_ = new_co___FileDirectory__Standard(Proto_(FileDirectory__Standard), Str_(1));
		directory = t0_;
		t0_ = Call_(c_sources_dir, build_settings);
		t1_ = Call_(entry_is_directory_co_, directory, t0_);
		t2_ = Not_(t1_);
		if (t2_)
			{
			t0_ = Call_(c_sources_dir, build_settings);
			t1_ = Call_(create_subdirectory_co_, directory, t0_);
			}
		t0_ = Call_(objects_dir, build_settings);
		t1_ = Call_(entry_is_directory_co_, directory, t0_);
		t2_ = Not_(t1_);
		if (t2_)
			{
			t0_ = Call_(objects_dir, build_settings);
			t1_ = Call_(create_subdirectory_co_, directory, t0_);
			}
		
		/*  Number the classes. */
		t0_ = Call_(standard_object_proto, compiler);
		object_class = t0_;
		t0_ = new__ClassNumberer__CCompiler(Proto_(ClassNumberer__CCompiler));
		t1_ = Call_(number_classes_co_, object_class, t0_);
		
		/*  Assign field indices. */
		t0_ = Call_(shared_field_accessors, build_settings);
		if (t0_)
			{
			t0_ = Call_(all_protos, compiler);
			ForStart_(0, t0_, proto)
				{
				t0_ = Call_(assign_field_indices, proto);
				}
			ForEnd_(0)
			}
		
		/*  Emit the settings. */
		t0_ = Call_(emit_settings_co_, this_, build_settings);
		settings_changed = t0_;
		if (settings_changed)
			{
			recompile_all = true_;
			}
		
		/*  Copy Trylon_.h. */
		t0_ = Call_(_pl_, library_path, Str_(2));
		t1_ = new_co___File__Standard(Proto_(File__Standard), t0_);
		t2_ = Call_(contents, t1_);
		contents = t2_;
		t0_ = Call_(c_sources_dir, build_settings);
		t1_ = Call_(_pl_, t0_, Str_(3));
		t2_ = new_co___ExistingFileStream__Standard(Proto_(ExistingFileStream__Standard), t1_);
		stream = t2_;
		t0_ = Call_(write_co_, stream, contents);
		t0_ = Call_(is_changed, stream);
		if (t0_)
			{
			recompile_all = true_;
			}
		t0_ = Call_(close, stream);
		
		/*  Copy and compile Trylon_.c. */
		t0_ = Call_(_pl_, library_path, Str_(4));
		t1_ = new_co___File__Standard(Proto_(File__Standard), t0_);
		t2_ = Call_(contents, t1_);
		contents = t2_;
		t0_ = Call_(c_sources_dir, build_settings);
		t1_ = Call_(_pl_, t0_, Str_(5));
		c_file_name = t1_;
		t0_ = new_co___ExistingFileStream__Standard(Proto_(ExistingFileStream__Standard), c_file_name);
		stream = t0_;
		t0_ = Call_(write_co_, stream, contents);
		t0_ = Call_(is_changed, stream);
		if ((t0_) == nil) {
			t0_ = recompile_all;
			}
		compile_trylon_c = t0_;
		t0_ = Call_(close, stream);
		t0_ = new__List__Standard(Proto_(List__Standard));
		objects = t0_;
		t0_ = Call_(compile_c_file_co_force_compile_co_, this_, Str_(6), compile_trylon_c);
		t1_ = Call_(append_co_, objects, t0_);
		
		/*  Emit the classes and packages. */
		t0_ = status_reporter__Main(Proto_(Main));
		t1_ = Call_(report_co_, t0_, Str_(7));
		t0_ = status_reporter__Main(Proto_(Main));
		t1_ = Call_(indent, t0_);
		max_num_fields = SmallInt_(0);
		t0_ = Call_(all_protos, compiler);
		ForStart_(1, t0_, proto)
			{
			obj_ builder, num_fields;
			t0_ = new_co___ClassBuilder__CCompiler(Proto_(ClassBuilder__CCompiler), proto);
			builder = t0_;
			t0_ = Call_(emit_co_, builder, recompile_all);
			t0_ = Call_(object_file_name, builder);
			t1_ = Call_(append_co_, objects, t0_);
			t0_ = Call_(total_num_fields, proto);
			num_fields = t0_;
			t0_ = Call_(_gt_, num_fields, max_num_fields);
			if (t0_)
				{
				max_num_fields = num_fields;
				}
			}
		ForEnd_(1)
		t0_ = status_reporter__Main(Proto_(Main));
		t1_ = Call_(unindent, t0_);
		
		/*  Emit the dispatch table. */
		t0_ = Call_(main_proto, compiler);
		t1_ = Call_(emit_dispatch_table_co_, this_, t0_);
		recompile = t1_;
		if (recompile_all)
			{
			recompile = true_;
			}
		t0_ = Call_(compile_c_file_co_force_compile_co_, this_, Str_(8), recompile);
		t1_ = Call_(append_co_, objects, t0_);
		
		/*  Emit the symbols. */
		t0_ = status_reporter__Main(Proto_(Main));
		t1_ = Call_(report_co_, t0_, Str_(9));
		t0_ = Call_(emit_symbols, this_);
		if ((t0_) == nil) {
			t0_ = recompile_all;
			}
		recompile = t0_;
		t0_ = Call_(compile_c_file_co_force_compile_co_, this_, Str_(10), recompile);
		t1_ = Call_(append_co_, objects, t0_);
		
		/*  Emit the ints. */
		t0_ = Call_(shared_ints, build_settings);
		if (t0_)
			{
			t0_ = status_reporter__Main(Proto_(Main));
			t1_ = Call_(report_co_, t0_, Str_(11));
			t0_ = Call_(emit_ints, this_);
			if ((t0_) == nil) {
				t0_ = recompile_all;
				}
			recompile = t0_;
			t0_ = Call_(compile_c_file_co_force_compile_co_, this_, Str_(12), recompile);
			t1_ = Call_(append_co_, objects, t0_);
			}
		
		/*  Emit the field accessors. */
		t0_ = Call_(shared_field_accessors, build_settings);
		if (t0_)
			{
			t0_ = status_reporter__Main(Proto_(Main));
			t1_ = Call_(report_co_, t0_, Str_(13));
			t0_ = Call_(emit_field_accessors_co_, this_, max_num_fields);
			if ((t0_) == nil) {
				t0_ = recompile_all;
				}
			recompile = t0_;
			t0_ = Call_(compile_c_file_co_force_compile_co_, this_, Str_(14), recompile);
			t1_ = Call_(append_co_, objects, t0_);
			}
		
		/*  Link. */
		t0_ = status_reporter__Main(Proto_(Main));
		t1_ = Call_(report_co_, t0_, Str_(15));
		t0_ = new__List__Standard(Proto_(List__Standard));
		args = t0_;
		t0_ = Call_(append_co_, args, Str_(16));
		t0_ = Call_(append_co_, args, program_name);
		ForStart_(2, objects, object_file)
			{
			t0_ = Call_(append_co_, args, object_file);
			}
		ForEnd_(2)
		t0_ = Call_(link_flags, build_settings);
		ForStart_(3, t0_, flag)
			{
			t0_ = Call_(append_co_, args, flag);
			}
		ForEnd_(3)
		t0_ = Call_(linker, build_settings);
		t1_ = Call_(report_run_program_co_arguments_co_, this_, t0_, args);
		t0_ = Call_(linker, build_settings);
		t1_ = run_program_co_arguments_co___System__Standard(Proto_(System__Standard), t0_, args);
		
		/*  Check for undeclared selectors. */
		t0_ = Call_(symbols, compiler);
		t1_ = Call_(values, t0_);
		ForStart_(4, t1_, symbol_info)
			{
			t0_ = Call_(called, symbol_info);
			if (t0_) {
				t1_ = Call_(declared, symbol_info);
				t2_ = Not_(t1_);
				t0_ = t2_;
				}
			if (t0_)
				{
				t0_ = status_reporter__Main(Proto_(Main));
				t1_ = Call_(name, symbol_info);
				t2_ = Call_(_pl_, Str_(17), t1_);
				t3_ = Call_(_pl_, t2_, Str_(18));
				t4_ = Call_(warn_co_, t0_, t3_);
				}
			}
		ForEnd_(4)
		}
	return nil;
}


obj_ emit_dispatch_table_co___CCompiler(obj_ this_, obj_ main_package)
{
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ new__DispatchRowSet__CCompiler(obj_ this_);
	extern obj_ new_co___DispatchRow__CCompiler(obj_ this_, obj_ symbol_info);
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ new__ExpandoArray__CCompiler(obj_ this_);
	extern obj_ new__ExpandoBitmap__CCompiler(obj_ this_);
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ new_co___ExistingFileStream__Standard(obj_ this_, obj_ file);
	extern obj_ new_co___File__Standard(obj_ this_, obj_ path);
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	UsingInt_(0)
	UsingInt_(5)
	UsingInt_(1)
	UsingInt_(5)
	DefineString_(0, "Building dispatch table...")
	DefineString_(1, "Gathering rows.")
	DefineString_(2, "Fitting rows.")
	DefineString_(3, "Emitting dispatch table...")
	DefineString_(4, "/methods_.c")
	DefineString_(5, "#include \"Trylon_.h\"")
	DefineString_(6, "DefineSelector_(")
	DefineString_(7, ", ")
	DefineString_(8, ")")
	DefineString_(9, "struct RDTableEntry_ dispatchTable_[] = {")
	DefineString_(10, "\t{ nil, -1 },")
	DefineString_(11, "\t{ ")
	DefineString_(12, ", ")
	DefineString_(13, " },\n")
	DefineString_(14, "};")
	DefineString_(15, "/* Fill rate: ")
	DefineString_(16, ", num items: ")
	DefineString_(17, " */\n")
	UsingMethod_(_pl_) UsingMethod_(_dv_) UsingMethod_(add_co_) UsingMethod_(c_name) UsingMethod_(c_sources_dir) UsingMethod_(close) UsingMethod_(current_item) UsingMethod_(declared) UsingMethod_(emit_all_function_declarations_co_) UsingMethod_(fit_into_co_used_offsets_co_) UsingMethod_(float_) UsingMethod_(function) UsingMethod_(go_forward) UsingMethod_(indent) UsingMethod_(is_changed) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(mangle_name_co_) UsingMethod_(name) UsingMethod_(num_items) UsingMethod_(report_co_) UsingMethod_(root_proto_co_) UsingMethod_(selector) UsingMethod_(setup_dispatch_row_co_inherited_function_co_) UsingMethod_(string) UsingMethod_(support_perform) UsingMethod_(symbols) UsingMethod_(unindent) UsingMethod_(values) UsingMethod_(write_all_co_) UsingMethod_(write_line) UsingMethod_(write_line_co_) UsingMethod_(write_co_)
	UsingSharedField_(compiler, Main) 
	UsingClass_(DispatchRowSet__CCompiler)
	UsingClass_(DispatchRow__CCompiler)
	UsingClass_(ExistingFileStream__Standard)
	UsingClass_(ExpandoArray__CCompiler)
	UsingClass_(ExpandoBitmap__CCompiler)
	UsingClass_(File__Standard)
	UsingClass_(Main)

		{
		obj_ dispatch_table, fill_rate, is_changed, num_filled, object_class, rows, stream, used_offsets;
		t0_ = status_reporter__Main(Proto_(Main));
		t1_ = Call_(report_co_, t0_, Str_(0));
		t0_ = status_reporter__Main(Proto_(Main));
		t1_ = Call_(indent, t0_);
		
		t0_ = Call_(root_proto_co_, SharedField_(compiler, Main), main_package);
		object_class = t0_;
		
		/*  Gather up the rows. */
		t0_ = status_reporter__Main(Proto_(Main));
		t1_ = Call_(report_co_, t0_, Str_(1));
		t0_ = new__DispatchRowSet__CCompiler(Proto_(DispatchRowSet__CCompiler));
		rows = t0_;
		t0_ = Call_(symbols, SharedField_(compiler, Main));
		t1_ = Call_(values, t0_);
		ForStart_(0, t1_, symbol)
			{
			obj_ row;
			t0_ = Call_(declared, symbol);
			t1_ = Not_(t0_);
			if (t1_)
				{
				Continue_(0)
				}
			
			/*  Create the row and fill it in. */
			t0_ = new_co___DispatchRow__CCompiler(Proto_(DispatchRow__CCompiler), symbol);
			row = t0_;
			t0_ = Call_(setup_dispatch_row_co_inherited_function_co_, object_class, row, nil);
			
			/*  Add the row. */
			t0_ = Call_(add_co_, rows, row);
			}
		ForEnd_(0)
		
		/*  Fit the rows. */
		/*  "rows" has the rows sorted by number of entries. */
		t0_ = status_reporter__Main(Proto_(Main));
		t1_ = Call_(report_co_, t0_, Str_(2));
		t0_ = new__ExpandoArray__CCompiler(Proto_(ExpandoArray__CCompiler));
		dispatch_table = t0_;
		t0_ = new__ExpandoBitmap__CCompiler(Proto_(ExpandoBitmap__CCompiler));
		used_offsets = t0_;
		ForStart_(1, rows, row)
			{
			t0_ = Call_(fit_into_co_used_offsets_co_, row, dispatch_table, used_offsets);
			}
		ForEnd_(1)
		
		t0_ = status_reporter__Main(Proto_(Main));
		t1_ = Call_(unindent, t0_);
		
		/*  Now, emit the "methods_.c" file. */
		t0_ = status_reporter__Main(Proto_(Main));
		t1_ = Call_(report_co_, t0_, Str_(3));
		
		/*  Create the file. */
		t0_ = build_settings__Main(Proto_(Main));
		t1_ = Call_(c_sources_dir, t0_);
		t2_ = Call_(_pl_, t1_, Str_(4));
		t3_ = new_co___File__Standard(Proto_(File__Standard), t2_);
		t4_ = new_co___ExistingFileStream__Standard(Proto_(ExistingFileStream__Standard), t3_);
		stream = t4_;
		t0_ = Call_(write_line_co_, stream, Str_(5));
		t0_ = Call_(write_line, stream);
		
		/*  Define all selectors. */
		t0_ = build_settings__Main(Proto_(Main));
		t1_ = Call_(support_perform, t0_);
		t2_ = Not_(t1_);
		if (t2_)
			{
			ForStart_(2, rows, row)
				{
				t0_ = Call_(write_co_, stream, Str_(6));
				t0_ = Call_(name, row);
				t1_ = Call_(mangle_name_co_, this_, t0_);
				t2_ = Call_(write_co_, stream, t1_);
				t0_ = Call_(write_co_, stream, Str_(7));
				t0_ = Call_(selector, row);
				t1_ = Call_(string, t0_);
				t2_ = Call_(write_co_, stream, t1_);
				t0_ = Call_(write_co_, stream, Str_(8));
				t0_ = Call_(write_line, stream);
				}
			ForEnd_(2)
			t0_ = Call_(write_line, stream);
			}
		
		/*  Declare all functions. */
		t0_ = Call_(emit_all_function_declarations_co_, object_class, stream);
		t0_ = Call_(write_line, stream);
		
		/*  Emit the dispatch table. */
		num_filled = SmallInt_(0);
		t0_ = Call_(write_line_co_, stream, Str_(9));
		ForStart_(3, dispatch_table, entry)
			{
			t0_ = Not_(entry);
			if (t0_)
				{
				t0_ = Call_(write_line_co_, stream, Str_(10));
				Continue_(3)
				}
			
			t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(5));
			t0_->fields[1] = Str_(11);
			t1_ = Call_(function, entry);
			t2_ = Call_(c_name, t1_);
			t0_->fields[2] = t2_;
			t0_->fields[3] = Str_(12);
			t3_ = Call_(selector, entry);
			t4_ = Call_(string, t3_);
			t0_->fields[4] = t4_;
			t0_->fields[5] = Str_(13);
			t5_ = Call_(write_all_co_, stream, t0_);
			t0_ = Call_(_pl_, num_filled, SmallInt_(1));
			num_filled = t0_;
			}
		ForEnd_(3)
		t0_ = Call_(write_line_co_, stream, Str_(14));
		t0_ = Call_(write_line, stream);
		
		t0_ = Call_(float_, num_filled);
		t1_ = Call_(num_items, dispatch_table);
		t2_ = Call_(float_, t1_);
		t3_ = Call_(_dv_, t0_, t2_);
		fill_rate = t3_;
		t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(5));
		t0_->fields[1] = Str_(15);
		t1_ = Call_(string, fill_rate);
		t0_->fields[2] = t1_;
		t0_->fields[3] = Str_(16);
		t2_ = Call_(num_items, dispatch_table);
		t3_ = Call_(string, t2_);
		t0_->fields[4] = t3_;
		t0_->fields[5] = Str_(17);
		t4_ = Call_(write_all_co_, stream, t0_);
		
		/*  Finish up "methods_.c". */
		t0_ = Call_(is_changed, stream);
		is_changed = t0_;
		t0_ = Call_(close, stream);
		return is_changed;
		}
	return nil;
}


obj_ emit_field_accessors_co___CCompiler(obj_ this_, obj_ max_num_fields)
{
	extern obj_ new_co___ExistingFileStream__Standard(obj_ this_, obj_ file);
	extern obj_ new_co___File__Standard(obj_ this_, obj_ path);
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ new_co___Interval__Standard(obj_ this_, obj_ stop);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	UsingInt_(3)
	DefineString_(0, "/field-accessors_.c")
	DefineString_(1, "#include \"Trylon_.h\"")
	DefineString_(2, "DefineFieldAccessors_(")
	DefineString_(3, ")")
	UsingMethod_(_pl_) UsingMethod_(c_sources_dir) UsingMethod_(close) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_changed) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(send_co_) UsingMethod_(write_line)
	UsingClass_(ExistingFileStream__Standard)
	UsingClass_(File__Standard)
	UsingClass_(Interval__Standard)
	UsingClass_(Main)

		{
		obj_ is_changed, stream;
		t0_ = build_settings__Main(Proto_(Main));
		t1_ = Call_(c_sources_dir, t0_);
		t2_ = Call_(_pl_, t1_, Str_(0));
		t3_ = new_co___File__Standard(Proto_(File__Standard), t2_);
		t4_ = new_co___ExistingFileStream__Standard(Proto_(ExistingFileStream__Standard), t3_);
		stream = t4_;
		t0_ = Call_(send_co_, stream, Str_(1));
		t0_ = Call_(write_line, stream);
		
		t0_ = new_co___Interval__Standard(Proto_(Interval__Standard), max_num_fields);
		ForStart_(0, t0_, index)
			{
			t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(3));
			t0_->fields[1] = Str_(2);
			t0_->fields[2] = index;
			t0_->fields[3] = Str_(3);
			t1_ = Call_(send_co_, stream, t0_);
			}
		ForEnd_(0)
		t0_ = Call_(write_line, stream);
		
		t0_ = Call_(is_changed, stream);
		is_changed = t0_;
		t0_ = Call_(close, stream);
		return is_changed;
		}
	return nil;
}


obj_ emit_ints__CCompiler(obj_ this_)
{
	extern obj_ new_co___ExistingFileStream__Standard(obj_ this_, obj_ file);
	extern obj_ new_co___File__Standard(obj_ this_, obj_ path);
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	UsingInt_(0)
	UsingInt_(5)
	DefineString_(0, "/ints_.c")
	DefineString_(1, "#include \"Trylon_.h\"")
	DefineString_(2, "m")
	DefineString_(3, "DefineInt_(")
	DefineString_(4, ", ")
	DefineString_(5, ")")
	UsingMethod_(_pl_) UsingMethod_(_lt_) UsingMethod_(c_sources_dir) UsingMethod_(close) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(ints) UsingMethod_(is_changed) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(send_co_) UsingMethod_(string) UsingMethod_(unary_minus) UsingMethod_(values) UsingMethod_(write_line)
	UsingSharedField_(compiler, Main) 
	UsingClass_(ExistingFileStream__Standard)
	UsingClass_(File__Standard)
	UsingClass_(Main)

		{
		obj_ is_changed, stream;
		t0_ = build_settings__Main(Proto_(Main));
		t1_ = Call_(c_sources_dir, t0_);
		t2_ = Call_(_pl_, t1_, Str_(0));
		t3_ = new_co___File__Standard(Proto_(File__Standard), t2_);
		t4_ = new_co___ExistingFileStream__Standard(Proto_(ExistingFileStream__Standard), t3_);
		stream = t4_;
		t0_ = Call_(send_co_, stream, Str_(1));
		t0_ = Call_(write_line, stream);
		
		t0_ = Call_(ints, SharedField_(compiler, Main));
		t1_ = Call_(values, t0_);
		ForStart_(0, t1_, value)
			{
			obj_ name;
			name = nil;
			t0_ = Call_(_lt_, value, SmallInt_(0));
			if (t0_)
				{
				t0_ = Call_(unary_minus, value);
				t1_ = Call_(string, t0_);
				t2_ = Call_(_pl_, Str_(2), t1_);
				name = t2_;
				}
			else
				{
				t0_ = Call_(string, value);
				name = t0_;
				}
			t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(5));
			t0_->fields[1] = Str_(3);
			t0_->fields[2] = name;
			t0_->fields[3] = Str_(4);
			t0_->fields[4] = value;
			t0_->fields[5] = Str_(5);
			t1_ = Call_(send_co_, stream, t0_);
			}
		ForEnd_(0)
		t0_ = Call_(write_line, stream);
		
		t0_ = Call_(is_changed, stream);
		is_changed = t0_;
		t0_ = Call_(close, stream);
		return is_changed;
		}
	return nil;
}


obj_ emit_send_co_to_string_co_with_co_builder_co___CCompiler(obj_ this_, obj_ name, obj_ receiver, obj_ arguments, obj_ builder)
{
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new__StringBuilder__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, " = Call_(")
	DefineString_(1, ", ")
	DefineString_(2, ", ")
	DefineString_(3, ");")
	UsingMethod_(access) UsingMethod_(add_line_co_) UsingMethod_(add_co_) UsingMethod_(append_co_) UsingMethod_(calling_method_co_) UsingMethod_(current_item) UsingMethod_(emit_code_co_) UsingMethod_(get_temporary) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(mangle_name_co_) UsingMethod_(string)
	UsingClass_(List__Standard)
	UsingClass_(StringBuilder__Standard)

		{
		obj_ arg_results, line, result;
		t0_ = Call_(calling_method_co_, builder, name);
		t0_ = new__List__Standard(Proto_(List__Standard));
		arg_results = t0_;
		ForStart_(0, arguments, arg)
			{
			t0_ = Call_(emit_code_co_, arg, builder);
			t1_ = Call_(append_co_, arg_results, t0_);
			}
		ForEnd_(0)
		t0_ = Call_(get_temporary, builder);
		result = t0_;
		t0_ = new__StringBuilder__Standard(Proto_(StringBuilder__Standard));
		line = t0_;
		t0_ = Call_(access, result);
		t1_ = Call_(add_co_, line, t0_);
		t0_ = Call_(add_co_, line, Str_(0));
		t0_ = Call_(mangle_name_co_, this_, name);
		t1_ = Call_(add_co_, line, t0_);
		t0_ = Call_(add_co_, line, Str_(1));
		t0_ = Call_(add_co_, line, receiver);
		ForStart_(1, arg_results, arg)
			{
			t0_ = Call_(add_co_, line, Str_(2));
			t0_ = Call_(access, arg);
			t1_ = Call_(add_co_, line, t0_);
			}
		ForEnd_(1)
		t0_ = Call_(add_co_, line, Str_(3));
		t0_ = Call_(string, line);
		t1_ = Call_(add_line_co_, builder, t0_);
		return result;
		}
	return nil;
}


obj_ emit_settings_co___CCompiler(obj_ this_, obj_ build_settings)
{
	extern obj_ new_co___ExistingFileStream__Standard(obj_ this_, obj_ file);
	extern obj_ new_co___File__Standard(obj_ this_, obj_ path);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "/settings_.h")
	DefineString_(1, "#define SUPPORT_PERFORM_")
	DefineString_(2, "#define DEBUGGER_")
	DefineString_(3, "#define SHARED_INTS_")
	DefineString_(4, "#define SHARED_FIELD_ACCESSORS_")
	DefineString_(5, "nil-object")
	DefineString_(6, "#define NIL_OBJECT_")
	DefineString_(7, "tagged-ints")
	DefineString_(8, "#define TAGGED_INTS_")
	DefineString_(9, "support-new-methods")
	DefineString_(10, "#define SUPPORT_NEW_METHODS_")
	DefineString_(11, "class-objects")
	DefineString_(12, "#define CLASS_OBJECTS_")
	DefineString_(13, "symbol-dispatch")
	DefineString_(14, "#define SYMBOL_DISPATCH_")
	UsingMethod_(_pl_) UsingMethod_(at_co_) UsingMethod_(c_sources_dir) UsingMethod_(close) UsingMethod_(debugger) UsingMethod_(is_changed) UsingMethod_(send_co_) UsingMethod_(shared_field_accessors) UsingMethod_(shared_ints) UsingMethod_(support_perform) UsingMethod_(write_line)
	UsingClass_(ExistingFileStream__Standard)
	UsingClass_(File__Standard)

		{
		obj_ is_changed, stream;
		t0_ = Call_(c_sources_dir, build_settings);
		t1_ = Call_(_pl_, t0_, Str_(0));
		t2_ = new_co___File__Standard(Proto_(File__Standard), t1_);
		t3_ = new_co___ExistingFileStream__Standard(Proto_(ExistingFileStream__Standard), t2_);
		stream = t3_;
		
		t0_ = Call_(support_perform, build_settings);
		if (t0_)
			{
			t0_ = Call_(send_co_, stream, Str_(1));
			}
		t0_ = Call_(debugger, build_settings);
		if (t0_)
			{
			t0_ = Call_(send_co_, stream, Str_(2));
			}
		t0_ = Call_(shared_ints, build_settings);
		if (t0_)
			{
			t0_ = Call_(send_co_, stream, Str_(3));
			}
		t0_ = Call_(shared_field_accessors, build_settings);
		if (t0_)
			{
			t0_ = Call_(send_co_, stream, Str_(4));
			}
		t0_ = Call_(at_co_, build_settings, Str_(5));
		if (t0_)
			{
			t0_ = Call_(send_co_, stream, Str_(6));
			}
		t0_ = Call_(at_co_, build_settings, Str_(7));
		if (t0_)
			{
			t0_ = Call_(send_co_, stream, Str_(8));
			}
		t0_ = Call_(at_co_, build_settings, Str_(9));
		if (t0_)
			{
			t0_ = Call_(send_co_, stream, Str_(10));
			}
		t0_ = Call_(at_co_, build_settings, Str_(11));
		if (t0_)
			{
			t0_ = Call_(send_co_, stream, Str_(12));
			}
		t0_ = Call_(at_co_, build_settings, Str_(13));
		if (t0_)
			{
			t0_ = Call_(send_co_, stream, Str_(14));
			}
		
		t0_ = Call_(write_line, stream);
		t0_ = Call_(is_changed, stream);
		is_changed = t0_;
		t0_ = Call_(close, stream);
		return is_changed;
		}
	return nil;
}


obj_ emit_symbols__CCompiler(obj_ this_)
{
	extern obj_ new_co___ExistingFileStream__Standard(obj_ this_, obj_ file);
	extern obj_ new_co___File__Standard(obj_ this_, obj_ path);
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ escape_string_for_c_co___CCompiler(obj_ this_, obj_ string);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	UsingInt_(5)
	UsingInt_(5)
	UsingInt_(4)
	UsingInt_(4)
	DefineString_(0, "/symbols_.c")
	DefineString_(1, "#include \"Trylon_.h\"")
	DefineString_(2, "DefineSymbolData_(")
	DefineString_(3, ", \"")
	DefineString_(4, "\")\n")
	DefineString_(5, "DefineSymbolObject_(")
	DefineString_(6, ", ")
	DefineString_(7, ")\n")
	DefineString_(8, "struct Standard__Symbol__internal* firstSymbol_ = \n")
	DefineString_(9, "\t(struct Standard__Symbol__internal*) Sym_(")
	DefineString_(10, ");\n")
	DefineString_(11, "struct Standard__Symbol__internal* lastSymbol_ = \n")
	DefineString_(12, "\t(struct Standard__Symbol__internal*) Sym_(")
	DefineString_(13, ");\n")
	DefineString_(14, "struct Standard__Symbol__internal* firstSymbol_ = nil;\n")
	DefineString_(15, "struct Standard__Symbol__internal* lastSymbol_ = nil;\n")
	UsingMethod_(_pl_) UsingMethod_(c_sources_dir) UsingMethod_(close) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(include_selector_symbols) UsingMethod_(index) UsingMethod_(is_changed) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(mangle_name_co_) UsingMethod_(name) UsingMethod_(string) UsingMethod_(support_perform) UsingMethod_(symbols) UsingMethod_(used_as_symbol) UsingMethod_(values) UsingMethod_(write_all_co_) UsingMethod_(write_line) UsingMethod_(write_line_co_)
	UsingSharedField_(compiler, Main) 
	UsingClass_(CCompiler)
	UsingClass_(ExistingFileStream__Standard)
	UsingClass_(File__Standard)
	UsingClass_(Main)

		{
		obj_ first_symbol_name, include_selectors, is_changed, last_symbol_name, stream;
		t0_ = build_settings__Main(Proto_(Main));
		t1_ = Call_(c_sources_dir, t0_);
		t2_ = Call_(_pl_, t1_, Str_(0));
		t3_ = new_co___File__Standard(Proto_(File__Standard), t2_);
		t4_ = new_co___ExistingFileStream__Standard(Proto_(ExistingFileStream__Standard), t3_);
		stream = t4_;
		t0_ = Call_(write_line_co_, stream, Str_(1));
		t0_ = Call_(write_line, stream);
		
		/*  Symbols. */
		t0_ = build_settings__Main(Proto_(Main));
		t1_ = Call_(include_selector_symbols, t0_);
		if ((t1_) == nil) {
			t2_ = build_settings__Main(Proto_(Main));
			t3_ = Call_(support_perform, t2_);
			t1_ = t3_;
			}
		include_selectors = t1_;
		t0_ = Call_(symbols, SharedField_(compiler, Main));
		t1_ = Call_(values, t0_);
		ForStart_(0, t1_, symbol)
			{
			obj_ escaped_name, name;
			t0_ = Not_(include_selectors);
			if (t0_) {
				t1_ = Call_(used_as_symbol, symbol);
				t2_ = Not_(t1_);
				t0_ = t2_;
				}
			if (t0_)
				{
				Continue_(0)
				}
			t0_ = Call_(name, symbol);
			name = t0_;
			t0_ = escape_string_for_c_co___CCompiler(Proto_(CCompiler), name);
			escaped_name = t0_;
			t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(5));
			t0_->fields[1] = Str_(2);
			t1_ = Call_(mangle_name_co_, this_, name);
			t0_->fields[2] = t1_;
			t0_->fields[3] = Str_(3);
			t0_->fields[4] = escaped_name;
			t0_->fields[5] = Str_(4);
			t2_ = Call_(write_all_co_, stream, t0_);
			}
		ForEnd_(0)
		t0_ = Call_(write_line, stream);
		first_symbol_name = nil;
		last_symbol_name = nil;
		t0_ = Call_(symbols, SharedField_(compiler, Main));
		t1_ = Call_(values, t0_);
		ForStart_(1, t1_, symbol)
			{
			obj_ name;
			t0_ = Not_(include_selectors);
			if (t0_) {
				t1_ = Call_(used_as_symbol, symbol);
				t2_ = Not_(t1_);
				t0_ = t2_;
				}
			if (t0_)
				{
				Continue_(1)
				}
			t0_ = Call_(name, symbol);
			name = t0_;
			t0_ = Not_(first_symbol_name);
			if (t0_)
				{
				first_symbol_name = name;
				}
			last_symbol_name = name;
			t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(5));
			t0_->fields[1] = Str_(5);
			t1_ = Call_(mangle_name_co_, this_, name);
			t0_->fields[2] = t1_;
			t0_->fields[3] = Str_(6);
			t2_ = Call_(index, symbol);
			t3_ = Call_(string, t2_);
			t0_->fields[4] = t3_;
			t0_->fields[5] = Str_(7);
			t4_ = Call_(write_all_co_, stream, t0_);
			}
		ForEnd_(1)
		t0_ = Call_(write_line, stream);
		
		/*  First and last symbol (for lookup). */
		if (first_symbol_name)
			{
			t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(4));
			t0_->fields[1] = Str_(8);
			t0_->fields[2] = Str_(9);
			t1_ = Call_(mangle_name_co_, this_, first_symbol_name);
			t0_->fields[3] = t1_;
			t0_->fields[4] = Str_(10);
			t2_ = Call_(write_all_co_, stream, t0_);
			t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(4));
			t0_->fields[1] = Str_(11);
			t0_->fields[2] = Str_(12);
			t1_ = Call_(mangle_name_co_, this_, last_symbol_name);
			t0_->fields[3] = t1_;
			t0_->fields[4] = Str_(13);
			t2_ = Call_(write_all_co_, stream, t0_);
			}
		else
			{
			/*  No symbols at all. */
			t0_ = Call_(write_line_co_, stream, Str_(14));
			t0_ = Call_(write_line_co_, stream, Str_(15));
			}
		t0_ = Call_(write_line, stream);
		
		t0_ = Call_(is_changed, stream);
		is_changed = t0_;
		t0_ = Call_(close, stream);
		return is_changed;
		}
	return nil;
}


obj_ escape_string_for_c_co___CCompiler(obj_ this_, obj_ string)
{
	extern obj_ new__StringBuilder__Standard(obj_ this_);
	extern obj_ new_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	extern obj_ new_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(32)
	UsingInt_(126)
	UsingInt_(34)
	UsingInt_(92)
	UsingInt_(1)
	UsingInt_(10)
	UsingInt_(9)
	UsingInt_(13)
	UsingInt_(8)
	UsingInt_(34)
	UsingInt_(92)
	UsingInt_(4)
	UsingInt_(15)
	UsingInt_(9)
	UsingInt_(10)
	UsingInt_(65)
	UsingInt_(48)
	UsingInt_(15)
	UsingInt_(9)
	UsingInt_(10)
	UsingInt_(65)
	UsingInt_(48)
	UsingInt_(1)
	DefineString_(0, "\\")
	DefineString_(1, "n")
	DefineString_(2, "t")
	DefineString_(3, "r")
	DefineString_(4, "b")
	DefineString_(5, "x")
	UsingMethod_(_an_) UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(_lt_) UsingMethod_(_eq__eq_) UsingMethod_(_gt_) UsingMethod_(_gt__gt_) UsingMethod_(char_string) UsingMethod_(deref_char) UsingMethod_(start) UsingMethod_(stopper) UsingMethod_(string)
	UsingClass_(StringBuilder__Standard)
	UsingClass_(String__Standard)

		{
		obj_ p, result, run_start, stopper;
		t0_ = new__StringBuilder__Standard(Proto_(StringBuilder__Standard));
		result = t0_;
		t0_ = Call_(start, string);
		run_start = t0_;
		p = run_start;
		t0_ = Call_(stopper, string);
		stopper = t0_;
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(_lt_, p, stopper);
			if (!(t0_))
				Break_(0)
			{
			obj_ c;
			t0_ = Call_(deref_char, p);
			c = t0_;
			t0_ = Call_(_lt_, c, Int_(32));
			if ((t0_) == nil) {
				t1_ = Call_(_gt_, c, Int_(126));
				t0_ = t1_;
				}
			if ((t0_) == nil) {
				t2_ = Call_(_eq__eq_, c, Int_(34));
				t0_ = t2_;
				}
			if ((t0_) == nil) {
				t3_ = Call_(_eq__eq_, c, Int_(92));
				t0_ = t3_;
				}
			if (t0_)
				{
				obj_ escape_string;
				/*  Finish off the current run. */
				t0_ = new_co_to_co___String__Standard(Proto_(String__Standard), run_start, p);
				t1_ = Call_(_pl_, result, t0_);
				result = t1_;
				t0_ = Call_(_pl_, p, SmallInt_(1));
				p = t0_;
				run_start = p;
				
				/*  Add the escaped character. */
				t0_ = Call_(_pl_, result, Str_(0));
				result = t0_;
				escape_string = nil;
				Switch_(c)
				if (SwitchMatches_(Int_(10)))
					{
					escape_string = Str_(1);
					}
				else if (SwitchMatches_(Int_(9)))
					{
					escape_string = Str_(2);
					}
				else if (SwitchMatches_(Int_(13)))
					{
					escape_string = Str_(3);
					}
				else if (SwitchMatches_(Int_(8)))
					{
					escape_string = Str_(4);
					}
				else if (SwitchMatches_(Int_(34)) || SwitchMatches_(Int_(92)))
					{
					t0_ = Call_(char_string, c);
					escape_string = t0_;
					}
				else
					{
					obj_ digit;
					escape_string = Str_(5);
					t0_ = Call_(_gt__gt_, c, SmallInt_(4));
					t1_ = Call_(_an_, t0_, SmallInt_(15));
					digit = t1_;
					t0_ = Call_(_gt_, digit, SmallInt_(9));
					if (t0_)
						{
						t0_ = Call_(_, digit, SmallInt_(10));
						t1_ = Call_(_pl_, t0_, Int_(65));
						t2_ = Call_(char_string, t1_);
						t3_ = Call_(_pl_, escape_string, t2_);
						escape_string = t3_;
						}
					else
						{
						t0_ = Call_(_pl_, digit, Int_(48));
						t1_ = Call_(char_string, t0_);
						t2_ = Call_(_pl_, escape_string, t1_);
						escape_string = t2_;
						}
					t0_ = Call_(_an_, c, SmallInt_(15));
					digit = t0_;
					t0_ = Call_(_gt_, digit, SmallInt_(9));
					if (t0_)
						{
						t0_ = Call_(_, digit, SmallInt_(10));
						t1_ = Call_(_pl_, t0_, Int_(65));
						t2_ = Call_(char_string, t1_);
						t3_ = Call_(_pl_, escape_string, t2_);
						escape_string = t3_;
						}
					else
						{
						t0_ = Call_(_pl_, digit, Int_(48));
						t1_ = Call_(char_string, t0_);
						t2_ = Call_(_pl_, escape_string, t1_);
						escape_string = t2_;
						}
					}
				EndSwitch_
				t0_ = Call_(_pl_, result, escape_string);
				result = t0_;
				}
			else
				{
				/*  Unescaped character -- just add it to the run. */
				t0_ = Call_(_pl_, p, SmallInt_(1));
				p = t0_;
				}
			
			}
			}
		
		/*  Finish off the last run and return. */
		t0_ = new_co_to_co___String__Standard(Proto_(String__Standard), run_start, p);
		t1_ = Call_(_pl_, result, t0_);
		result = t1_;
		t0_ = Call_(string, result);
		return t0_;
		}
	return nil;
}


obj_ mangle_name_co___CCompiler(obj_ this_, obj_ name)
{
	extern obj_ new_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	extern obj_ new_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	UsingInt_(65)
	UsingInt_(90)
	UsingInt_(97)
	UsingInt_(122)
	UsingInt_(48)
	UsingInt_(57)
	UsingInt_(1)
	UsingInt_(45)
	UsingInt_(58)
	UsingInt_(32)
	UsingInt_(60)
	UsingInt_(62)
	UsingInt_(61)
	UsingInt_(43)
	UsingInt_(42)
	UsingInt_(47)
	UsingInt_(37)
	UsingInt_(91)
	UsingInt_(93)
	UsingInt_(33)
	UsingInt_(126)
	UsingInt_(38)
	UsingInt_(124)
	UsingInt_(94)
	UsingInt_(35)
	UsingInt_(95)
	UsingInt_(46)
	UsingInt_(255)
	UsingInt_(1)
	DefineString_(0, "class")
	DefineString_(1, "class_")
	DefineString_(2, "char")
	DefineString_(3, "char_")
	DefineString_(4, "int")
	DefineString_(5, "int_")
	DefineString_(6, "short")
	DefineString_(7, "short_")
	DefineString_(8, "long")
	DefineString_(9, "long_")
	DefineString_(10, "float")
	DefineString_(11, "float_")
	DefineString_(12, "double")
	DefineString_(13, "double_")
	DefineString_(14, "inline")
	DefineString_(15, "inline_")
	DefineString_(16, "static")
	DefineString_(17, "static_")
	DefineString_(18, "namespace")
	DefineString_(19, "namespace_")
	DefineString_(20, "")
	DefineString_(21, "_")
	DefineString_(22, "_co_")
	DefineString_(23, "__")
	DefineString_(24, "_lt_")
	DefineString_(25, "_gt_")
	DefineString_(26, "_eq_")
	DefineString_(27, "_pl_")
	DefineString_(28, "_st_")
	DefineString_(29, "_dv_")
	DefineString_(30, "_pc_")
	DefineString_(31, "_in_")
	DefineString_(32, "_dx_")
	DefineString_(33, "_nt_")
	DefineString_(34, "_tw_")
	DefineString_(35, "_an_")
	DefineString_(36, "_or_")
	DefineString_(37, "_xr_")
	DefineString_(38, "_lb_")
	DefineString_(39, "_ul_")
	DefineString_(40, "_dt_")
	DefineString_(41, "_")
	DefineString_(42, "_")
	UsingMethod_(_an_) UsingMethod_(_pl_) UsingMethod_(_lt_) UsingMethod_(_lt__eq_) UsingMethod_(_eq__eq_) UsingMethod_(_gt__eq_) UsingMethod_(deref_char) UsingMethod_(int_) UsingMethod_(start) UsingMethod_(stopper) UsingMethod_(string)
	UsingClass_(String__Standard)

		{
		obj_ p, result, run_start, stopper;
		/*  Certain names are reserved in C and/or C++ but not in Trylon. */
		t0_ = Call_(_eq__eq_, name, Str_(0));
		if (t0_)
			{
			return Str_(1);
			}
		else
			{
			t0_ = Call_(_eq__eq_, name, Str_(2));
			if (t0_)
				{
				return Str_(3);
				}
			else
				{
				t0_ = Call_(_eq__eq_, name, Str_(4));
				if (t0_)
					{
					return Str_(5);
					}
				else
					{
					t0_ = Call_(_eq__eq_, name, Str_(6));
					if (t0_)
						{
						return Str_(7);
						}
					else
						{
						t0_ = Call_(_eq__eq_, name, Str_(8));
						if (t0_)
							{
							return Str_(9);
							}
						else
							{
							t0_ = Call_(_eq__eq_, name, Str_(10));
							if (t0_)
								{
								return Str_(11);
								}
							else
								{
								t0_ = Call_(_eq__eq_, name, Str_(12));
								if (t0_)
									{
									return Str_(13);
									}
								else
									{
									t0_ = Call_(_eq__eq_, name, Str_(14));
									if (t0_)
										{
										return Str_(15);
										}
									else
										{
										t0_ = Call_(_eq__eq_, name, Str_(16));
										if (t0_)
											{
											return Str_(17);
											}
										else
											{
											t0_ = Call_(_eq__eq_, name, Str_(18));
											if (t0_)
												{
												return Str_(19);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		
		/*  Mangle the name. */
		result = Str_(20);
		t0_ = Call_(start, name);
		run_start = t0_;
		p = run_start;
		t0_ = Call_(stopper, name);
		stopper = t0_;
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(_lt_, p, stopper);
			if (!(t0_))
				Break_(0)
			{
			obj_ c;
			t0_ = Call_(deref_char, p);
			c = t0_;
			t0_ = Call_(_gt__eq_, c, Int_(65));
			if (t0_) {
				t1_ = Call_(_lt__eq_, c, Int_(90));
				t0_ = t1_;
				}
			if ((t0_) == nil) {
				t2_ = Call_(_gt__eq_, c, Int_(97));
				if (t2_) {
					t3_ = Call_(_lt__eq_, c, Int_(122));
					t2_ = t3_;
					}
				t0_ = t2_;
				}
			if ((t0_) == nil) {
				t4_ = Call_(_gt__eq_, c, Int_(48));
				if (t4_) {
					t5_ = Call_(_lt__eq_, c, Int_(57));
					t4_ = t5_;
					}
				t0_ = t4_;
				}
			t6_ = Not_(t0_);
			if (t6_)
				{
				obj_ mangled_char;
				/*  Finish off the current run. */
				t0_ = new_co_to_co___String__Standard(Proto_(String__Standard), run_start, p);
				t1_ = Call_(_pl_, result, t0_);
				result = t1_;
				t0_ = Call_(_pl_, p, SmallInt_(1));
				p = t0_;
				run_start = p;
				
				/*  Mangle the character. */
				mangled_char = nil;
				t0_ = Call_(_eq__eq_, c, Int_(45));
				if (t0_)
					{
					mangled_char = Str_(21);
					}
				else
					{
					t0_ = Call_(_eq__eq_, c, Int_(58));
					if (t0_)
						{
						mangled_char = Str_(22);
						}
					else
						{
						t0_ = Call_(_eq__eq_, c, Int_(32));
						if (t0_)
							{
							mangled_char = Str_(23);
							}
						else
							{
							t0_ = Call_(_eq__eq_, c, Int_(60));
							if (t0_)
								{
								mangled_char = Str_(24);
								}
							else
								{
								t0_ = Call_(_eq__eq_, c, Int_(62));
								if (t0_)
									{
									mangled_char = Str_(25);
									}
								else
									{
									t0_ = Call_(_eq__eq_, c, Int_(61));
									if (t0_)
										{
										mangled_char = Str_(26);
										}
									else
										{
										t0_ = Call_(_eq__eq_, c, Int_(43));
										if (t0_)
											{
											mangled_char = Str_(27);
											}
										else
											{
											t0_ = Call_(_eq__eq_, c, Int_(42));
											if (t0_)
												{
												mangled_char = Str_(28);
												}
											else
												{
												t0_ = Call_(_eq__eq_, c, Int_(47));
												if (t0_)
													{
													mangled_char = Str_(29);
													}
												else
													{
													t0_ = Call_(_eq__eq_, c, Int_(37));
													if (t0_)
														{
														mangled_char = Str_(30);
														}
													else
														{
														t0_ = Call_(_eq__eq_, c, Int_(91));
														if (t0_)
															{
															mangled_char = Str_(31);
															}
														else
															{
															t0_ = Call_(_eq__eq_, c, Int_(93));
															if (t0_)
																{
																mangled_char = Str_(32);
																}
															else
																{
																t0_ = Call_(_eq__eq_, c, Int_(33));
																if (t0_)
																	{
																	mangled_char = Str_(33);
																	}
																else
																	{
																	t0_ = Call_(_eq__eq_, c, Int_(126));
																	if (t0_)
																		{
																		mangled_char = Str_(34);
																		}
																	else
																		{
																		t0_ = Call_(_eq__eq_, c, Int_(38));
																		if (t0_)
																			{
																			mangled_char = Str_(35);
																			}
																		else
																			{
																			t0_ = Call_(_eq__eq_, c, Int_(124));
																			if (t0_)
																				{
																				mangled_char = Str_(36);
																				}
																			else
																				{
																				t0_ = Call_(_eq__eq_, c, Int_(94));
																				if (t0_)
																				{
																				mangled_char = Str_(37);
																				}
																				else
																				{
																				t0_ = Call_(_eq__eq_, c, Int_(35));
																				if (t0_)
																				{
																				mangled_char = Str_(38);
																				}
																				else
																				{
																				t0_ = Call_(_eq__eq_, c, Int_(95));
																				if (t0_)
																				{
																				mangled_char = Str_(39);
																				}
																				else
																				{
																				t0_ = Call_(_eq__eq_, c, Int_(46));
																				if (t0_)
																				{
																				mangled_char = Str_(40);
																				}
																				else
																				{
																				t0_ = Call_(_an_, c, SmallInt_(255));
																				t1_ = Call_(int_, t0_);
																				t2_ = Call_(string, t1_);
																				t3_ = Call_(_pl_, Str_(41), t2_);
																				t4_ = Call_(_pl_, t3_, Str_(42));
																				mangled_char = t4_;
																				}
																				}
																				}
																				}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				
				t0_ = Call_(_pl_, result, mangled_char);
				result = t0_;
				}
			else
				{
				t0_ = Call_(_pl_, p, SmallInt_(1));
				p = t0_;
				}
			
			}
			}
		
		t0_ = new_co_to_co___String__Standard(Proto_(String__Standard), run_start, p);
		t1_ = Call_(_pl_, result, t0_);
		result = t1_;
		return result;
		}
	return nil;
}


obj_ references__CCompiler(obj_ this_)
{
	UsingClass_(Expressions__CCompiler)
	UsingClass_(Functions__CCompiler)
	UsingClass_(Objects__CCompiler)
	UsingClass_(Statements__CCompiler)

		{
		}
	return nil;
}


obj_ report_run_program_co_arguments_co___CCompiler(obj_ this_, obj_ program, obj_ args)
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


obj_ report_co___CCompiler(obj_ this_, obj_ message)
{
	extern obj_ status_reporter__Main(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(report_co_)
	UsingClass_(Main)

		{
		t0_ = status_reporter__Main(Proto_(Main));
		t1_ = Call_(report_co_, t0_, message);
		}
	return nil;
}


obj_ string_literal_length_co___CCompiler(obj_ this_, obj_ string)
{
	obj_ t0_;
	obj_ t1_;
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(92)
	UsingInt_(48)
	UsingInt_(51)
	UsingInt_(3)
	UsingInt_(120)
	UsingInt_(3)
	UsingInt_(1)
	UsingInt_(1)
	UsingMethod_(_pl_) UsingMethod_(_lt_) UsingMethod_(_lt__eq_) UsingMethod_(_eq__eq_) UsingMethod_(_gt__eq_) UsingMethod_(deref_char) UsingMethod_(start) UsingMethod_(stopper)

		{
		obj_ length, p, stopper;
		/*  Count the characters. */
		t0_ = Call_(start, string);
		p = t0_;
		t0_ = Call_(stopper, string);
		stopper = t0_;
		length = SmallInt_(0);
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(_lt_, p, stopper);
			if (!(t0_))
				Break_(0)
			{
			obj_ c;
			t0_ = Call_(deref_char, p);
			c = t0_;
			t0_ = Call_(_pl_, p, SmallInt_(1));
			p = t0_;
			
			t0_ = Call_(_eq__eq_, c, Int_(92));
			if (t0_)
				{
				t0_ = Call_(deref_char, p);
				c = t0_;
				t0_ = Call_(_gt__eq_, c, Int_(48));
				if (t0_) {
					t1_ = Call_(_lt__eq_, c, Int_(51));
					t0_ = t1_;
					}
				if (t0_)
					{
					/*  Octal: 3 characters after the `\`. */
					t0_ = Call_(_pl_, p, SmallInt_(3));
					p = t0_;
					}
				else
					{
					t0_ = Call_(_eq__eq_, c, Int_(120));
					if (t0_)
						{
						/*  Hex: `x` and 2 more characters after the `\`. */
						t0_ = Call_(_pl_, p, SmallInt_(3));
						p = t0_;
						}
					else
						{
						/*  Only the single character after the `\` is quoted. */
						t0_ = Call_(_pl_, p, SmallInt_(1));
						p = t0_;
						}
					}
				}
			
			t0_ = Call_(_pl_, length, SmallInt_(1));
			length = t0_;
			}
			}
		
		return length;
		}
	return nil;
}


