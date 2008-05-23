#include "Trylon_.h"

UsingSym_(Compiler)UsingClass_(Compiler)
UsingClass_(Object__Standard)
UsingClass_(Compiler__Compiler)
struct ClassInfo Compiler__Compiler__classInfo_ = 
	{ 67, 24, Proto_(Compiler__Compiler), Proto_(Compiler), Proto_(Object__Standard), nil, Sym_(Compiler) ,nil };
struct object Compiler__Compiler = 
	{ &Compiler__Compiler__classInfo_, {nil, nil, nil, nil, nil, nil} };


#define successful__fld_	(0)
#define build_settings__fld_	(1)
#define proto_queue__fld_	(2)
#define main_proto__fld_	(3)
#define symbols__fld_	(4)
#define status_reporter__fld_	(5)


obj_ all_protos__Compiler__Compiler(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(proto_queue)

		{
		t0_ = Call_(proto_queue, this_);
		return t0_;
		
		}
	return nil;
}


obj_ build_settings__Compiler__Compiler(obj_ this_)
{
	return Field_(build_settings);
}


obj_ build_settings_co___Compiler__Compiler(obj_ this_, obj_ value)
{
	Field_(build_settings) = value;
	return value;
}


obj_ calling_selector_co___Compiler__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(called_co_) UsingMethod_(symbol_info_for_co_)

		{
		t0_ = Call_(symbol_info_for_co_, this_, name);
		t1_ = Call_(called_co_, t0_, true_);
		
		}
	return nil;
}


obj_ compile_dir_co_as_co_into_co___Compiler__Compiler(obj_ this_, obj_ dir, obj_ name, obj_ parent_proto)
{
	extern obj_ new__VT100StatusReporter(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(add_proto_co_directory_co_) UsingMethod_(status_reporter_co_)
	UsingClass_(VT100StatusReporter)

		{
		obj_ proto;
		t0_ = new__VT100StatusReporter(Proto_(VT100StatusReporter));
		t1_ = Call_(status_reporter_co_, this_, t0_);
		t0_ = Call_(add_proto_co_directory_co_, parent_proto, name, dir);
		proto = t0_;
		 	/* Will compile. */
		return proto;
		
		
		}
	return nil;
}


obj_ compile_file_co_as_co_into_co___Compiler__Compiler(obj_ this_, obj_ file, obj_ name, obj_ parent_proto)
{
	extern obj_ new__VT100StatusReporter(obj_ this_);
	extern obj_ new_co_context_co___Parser__Compiler(obj_ this_, obj_ source, obj_ context);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(add_proto_co_) UsingMethod_(contents) UsingMethod_(parse_proto_file_co_) UsingMethod_(status_reporter_co_)
	UsingClass_(Parser__Compiler)
	UsingClass_(VT100StatusReporter)

		{
		obj_ parser, proto;
		t0_ = new__VT100StatusReporter(Proto_(VT100StatusReporter));
		t1_ = Call_(status_reporter_co_, this_, t0_);
		t0_ = Call_(add_proto_co_, parent_proto, name);
		proto = t0_;
		t0_ = Call_(contents, file);
		t1_ = new_co_context_co___Parser__Compiler(Proto_(Parser__Compiler), t0_, parent_proto);
		parser = t1_;
		t0_ = Call_(parse_proto_file_co_, parser, proto);
		return proto;
		
		}
	return nil;
}


obj_ compile_program_co___Compiler__Compiler(obj_ this_, obj_ compile_symbols)
{
	extern obj_ milliseconds__System__Standard(obj_ this_);
	UsingSym_(C)
	UsingSym_(Jolt)
	extern obj_ new__StdoutStatusReporter(obj_ this_);
	extern obj_ new__VT100StatusReporter(obj_ this_);
	extern obj_ new_co___FileDirectory__Standard(obj_ this_, obj_ path);
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	extern obj_ new_co___FileDirectory__Standard(obj_ this_, obj_ path);
	extern obj_ new_co_parent_co___CompiledProto__Compiler(obj_ this_, obj_ name, obj_ parent);
	extern obj_ emit_jolt_co___JoltCompiler(obj_ this_, obj_ compiler);
	extern obj_ emit_c_co___CCompiler(obj_ this_, obj_ compiler);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "verbose")
	DefineString_(1, "target-c")
	DefineString_(2, "targeting-c")
	DefineString_(3, "target-jolt")
	DefineString_(4, "targeting-jolt")
	DefineString_(5, ".")
	DefineString_(6, "sources")
	DefineString_(7, "sources")
	DefineString_(8, "Couldn't find the Trylon library.  You may need to set $TRYLON_LIBRARY.")
	DefineString_(9, "Main")
	DefineString_(10, "Trylon")
	DefineString_(11, "Loading ")
	DefineString_(12, "...")
	DefineString_(13, "Preparing to emit...")
	DefineString_(14, "Done.")
	UsingMethod_(_pl_) UsingMethod_(append_co_) UsingMethod_(at_co_) UsingMethod_(build_settings) UsingMethod_(current_item) UsingMethod_(entry_is_directory_co_) UsingMethod_(find_library_path) UsingMethod_(go_forward) UsingMethod_(indent) UsingMethod_(is_done) UsingMethod_(is_root_object_co_) UsingMethod_(is_verbose) UsingMethod_(is_verbose_co_) UsingMethod_(iterator) UsingMethod_(load) UsingMethod_(main_proto) UsingMethod_(main_proto_co_) UsingMethod_(prepare_to_emit) UsingMethod_(proto_queue) UsingMethod_(report_co_) UsingMethod_(root_proto_co_) UsingMethod_(setup_main_co_library_directory_co_) UsingMethod_(show_warnings) UsingMethod_(status_reporter) UsingMethod_(status_reporter_co_) UsingMethod_(target_co_) UsingMethod_(targeting_c) UsingMethod_(targeting_jolt) UsingMethod_(unindent)
	UsingSharedField_(compiler, Main) 
	UsingClass_(FileDirectory__Standard)
	UsingClass_(System__Standard)
	UsingClass_(MessageException__Standard)
	UsingClass_(JoltCompiler)
	UsingClass_(CCompiler)
	UsingClass_(StdoutStatusReporter)
	UsingClass_(VT100StatusReporter)
	UsingClass_(CompiledProto__Compiler)

		{
		obj_ library_directory, library_path, main_directory, main_name, object_class, start_ms;
		t0_ = milliseconds__System__Standard(Proto_(System__Standard));
		start_ms = t0_;
		
		/* Read the settings. */
		ForStart_(0, compile_symbols, setting)
			{
			Switch_(setting)
			if (SwitchMatches_(Str_(0)))
				{
				t0_ = Call_(build_settings, this_);
				t1_ = Call_(is_verbose_co_, t0_, true_);
				}
			else if (SwitchMatches_(Str_(1)) || SwitchMatches_(Str_(2)))
				{
				t0_ = Call_(build_settings, this_);
				t1_ = Call_(target_co_, t0_, Sym_(C));
				}
			else if (SwitchMatches_(Str_(3)) || SwitchMatches_(Str_(4)))
				{
				t0_ = Call_(build_settings, this_);
				t1_ = Call_(target_co_, t0_, Sym_(Jolt));
				}
			EndSwitch_
			}
		ForEnd_(0)
		t0_ = Call_(build_settings, this_);
		t1_ = Call_(load, t0_);
		
		/* Create the status reporter. */
		t0_ = Call_(status_reporter, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = Call_(build_settings, this_);
			t1_ = Call_(is_verbose, t0_);
			if (t1_)
				{
				t0_ = new__StdoutStatusReporter(Proto_(StdoutStatusReporter));
				t1_ = Call_(status_reporter_co_, this_, t0_);
				}
			else
				{
				t0_ = new__VT100StatusReporter(Proto_(VT100StatusReporter));
				t1_ = Call_(status_reporter_co_, this_, t0_);
				
				}
			}
		/* Load. */
		t0_ = new_co___FileDirectory__Standard(Proto_(FileDirectory__Standard), Str_(5));
		main_directory = t0_;
		t0_ = Call_(entry_is_directory_co_, main_directory, Str_(6));
		if (t0_)
			{
			t0_ = Call_(at_co_, main_directory, Str_(7));
			main_directory = t0_;
			}
		t0_ = Call_(find_library_path, this_);
		library_path = t0_;
		t0_ = Not_(library_path);
		if (t0_)
			{
			t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(8));
			Throw_(t0_);
			}
		t1_ = new_co___FileDirectory__Standard(Proto_(FileDirectory__Standard), library_path);
		library_directory = t1_;
		main_name = Str_(9);
		t0_ = Call_(build_settings, SharedField_(compiler, Main));
		t1_ = Call_(targeting_jolt, t0_);
		if (t1_)
			{
			main_name = Str_(10);
			}
		t0_ = Call_(status_reporter, this_);
		t1_ = Call_(_pl_, Str_(11), main_name);
		t2_ = Call_(_pl_, t1_, Str_(12));
		t3_ = Call_(report_co_, t0_, t2_);
		t0_ = Call_(status_reporter, this_);
		t1_ = Call_(indent, t0_);
		t0_ = new_co_parent_co___CompiledProto__Compiler(Proto_(CompiledProto__Compiler), main_name, nil);
		t1_ = Call_(main_proto_co_, this_, t0_);
		t0_ = Call_(main_proto, this_);
		t1_ = Call_(setup_main_co_library_directory_co_, t0_, main_directory, library_directory);
		t0_ = Call_(proto_queue, this_);
		t1_ = Call_(main_proto, this_);
		t2_ = Call_(append_co_, t0_, t1_);
		t0_ = Call_(status_reporter, this_);
		t1_ = Call_(unindent, t0_);
		
		/* Get ready to emit (mainly this makes sure all used classes are loaded). */
		t0_ = Call_(status_reporter, this_);
		t1_ = Call_(report_co_, t0_, Str_(13));
		t0_ = Call_(status_reporter, this_);
		t1_ = Call_(indent, t0_);
		t0_ = Call_(proto_queue, this_);
		ForStart_(1, t0_, proto)
			{
			t0_ = Call_(prepare_to_emit, proto);
			}
		ForEnd_(1)
		t0_ = Call_(status_reporter, this_);
		t1_ = Call_(unindent, t0_);
		
		/* Set up Standard Object. */
		t0_ = Call_(main_proto, this_);
		t1_ = Call_(root_proto_co_, this_, t0_);
		object_class = t1_;
		t0_ = Call_(is_root_object_co_, object_class, true_);
		
		/* Emit */
		t0_ = Call_(build_settings, this_);
		t1_ = Call_(targeting_jolt, t0_);
		if (t1_)
			{
			t0_ = emit_jolt_co___JoltCompiler(Proto_(JoltCompiler), this_);
			}
		t0_ = Call_(build_settings, this_);
		t1_ = Call_(targeting_c, t0_);
		if (t1_)
			{
			t0_ = emit_c_co___CCompiler(Proto_(CCompiler), this_);
			
			}
		/* Report. */
			{
			t0_ = Call_(status_reporter, this_);
			t1_ = Call_(report_co_, t0_, Str_(14));
			}
		t0_ = Call_(status_reporter, this_);
		t1_ = Call_(show_warnings, t0_);
		
		
		
		
		}
	return nil;
}


obj_ create__Compiler__Compiler(obj_ this_)
{
	extern obj_ new__BuildSettings__Compiler(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new__Dictionary__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(build_settings_co_) UsingMethod_(proto_queue_co_) UsingMethod_(successful_co_) UsingMethod_(symbols_co_)
	UsingClass_(Dictionary__Standard)
	UsingClass_(List__Standard)
	UsingClass_(BuildSettings__Compiler)

		{
		t0_ = Call_(successful_co_, this_, true_);
		t0_ = new__BuildSettings__Compiler(Proto_(BuildSettings__Compiler));
		t1_ = Call_(build_settings_co_, this_, t0_);
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(proto_queue_co_, this_, t0_);
		t0_ = new__Dictionary__Standard(Proto_(Dictionary__Standard));
		t1_ = Call_(symbols_co_, this_, t0_);
		
		
		}
	return nil;
}


obj_ declaring_selector_co___Compiler__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(declared_co_) UsingMethod_(symbol_info_for_co_)

		{
		t0_ = Call_(symbol_info_for_co_, this_, name);
		t1_ = Call_(declared_co_, t0_, true_);
		
		}
	return nil;
}


obj_ find_library_path__Compiler__Compiler(obj_ this_)
{
	extern obj_ environment_variable_named_co___System__Standard(obj_ this_, obj_ name);
	extern obj_ environment_variable_named_co___System__Standard(obj_ this_, obj_ name);
	extern obj_ new_co___FileDirectory__Standard(obj_ this_, obj_ path);
	extern obj_ new_co___FileDirectory__Standard(obj_ this_, obj_ path);
	extern obj_ new_co___FileDirectory__Standard(obj_ this_, obj_ path);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 4)
	DefineString_(0, "TRYLON_LIBRARY")
	DefineString_(1, "HOME")
	DefineString_(2, "trylon/library")
	DefineString_(3, "/trylon/library")
	DefineString_(4, ".")
	DefineString_(5, "library")
	DefineString_(6, "./library")
	DefineString_(7, "/usr/lib")
	DefineString_(8, "/usr/local/lib")
	DefineString_(9, "/usr/share")
	DefineString_(10, "/opt/lib")
	DefineString_(11, "trylon")
	DefineString_(12, "/trylon")
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), Int_(0), Str_(7), Str_(8), Str_(9), Str_(10) };
	UsingMethod_(_pl_) UsingMethod_(current_item) UsingMethod_(entry_is_directory_co_) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(is_empty) UsingMethod_(iterator)
	UsingClass_(FileDirectory__Standard)
	UsingClass_(System__Standard)
	UsingClass_(Tuple__Standard)

		{
		obj_ home_path, library_path;
		/* Use $TRYLON_LIBRARY if it's set. */
		t0_ = environment_variable_named_co___System__Standard(Proto_(System__Standard), Str_(0));
		library_path = t0_;
		t0_ = library_path;
		if (t0_) {
			t1_ = Call_(is_empty, library_path);
			t2_ = Not_(t1_);
			t0_ = t2_;
			}
		if (t0_)
			{
			return library_path;
			}
		/* Check $HOME/trylon. */
		t0_ = environment_variable_named_co___System__Standard(Proto_(System__Standard), Str_(1));
		home_path = t0_;
		t0_ = home_path;
		if (t0_) {
			t1_ = Call_(is_empty, home_path);
			t2_ = Not_(t1_);
			t0_ = t2_;
			}
		if (t0_)
			{
			obj_ home_dir;
			t0_ = new_co___FileDirectory__Standard(Proto_(FileDirectory__Standard), home_path);
			home_dir = t0_;
			t0_ = Call_(entry_is_directory_co_, home_dir, Str_(2));
			if (t0_)
				{
				t0_ = Call_(_pl_, home_path, Str_(3));
				return t0_;
				}
			}
		/* Check ./library. */
		t1_ = new_co___FileDirectory__Standard(Proto_(FileDirectory__Standard), Str_(4));
		t2_ = Call_(entry_is_directory_co_, t1_, Str_(5));
		if (t2_)
			{
			return Str_(6);
			}
		/* Look in some common places. */
		ForStart_(0, ((obj_) tu0_), prefix_path)
			{
			obj_ prefix_dir;
			t0_ = new_co___FileDirectory__Standard(Proto_(FileDirectory__Standard), prefix_path);
			prefix_dir = t0_;
			t0_ = Call_(entry_is_directory_co_, prefix_dir, Str_(11));
			if (t0_)
				{
				t0_ = Call_(_pl_, prefix_path, Str_(12));
				return t0_;
				}
			}
		ForEnd_(0)
		return nil;
		
		
		
		}
	return nil;
}


obj_ get_standard_class_co___Compiler__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "Standard")
	UsingMethod_(get_proto_co_) UsingMethod_(get_subproto_co_) UsingMethod_(main_proto)

		{
		t0_ = Call_(main_proto, this_);
		t1_ = Call_(get_subproto_co_, t0_, Str_(0));
		t2_ = Call_(get_proto_co_, t1_, name);
		return t2_;
		
		
		}
	return nil;
}


obj_ main_proto__Compiler__Compiler(obj_ this_)
{
	return Field_(main_proto);
}


obj_ main_proto_co___Compiler__Compiler(obj_ this_, obj_ value)
{
	Field_(main_proto) = value;
	return value;
}


obj_ new__Compiler__Compiler(obj_ this_)
{
	UsingClass_(Compiler__Compiler)
	obj_ obj = AllocObj_(Compiler__Compiler);
	create__Compiler__Compiler(obj);
	return obj;
}


obj_ proto_queue__Compiler__Compiler(obj_ this_)
{
	return Field_(proto_queue);
}


obj_ proto_queue_co___Compiler__Compiler(obj_ this_, obj_ value)
{
	Field_(proto_queue) = value;
	return value;
}


obj_ return_value__Compiler__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineInt_(0, 1)
	DefineInt_(1, 0)
	UsingMethod_(successful)

		{
		t0_ = Call_(successful, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			return Int_(0);
			}
		return Int_(1);
		
		
		
		}
	return nil;
}


obj_ root_proto_co___Compiler__Compiler(obj_ this_, obj_ main_proto)
{
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "Standard")
	DefineString_(1, "Standard package is missing!")
	DefineString_(2, "Object")
	DefineString_(3, "Standard Object is missing!")
	DefineString_(4, "Standard Object is not a prototype!")
	UsingMethod_(get_subproto_co_) UsingMethod_(is_a_co_) UsingMethod_(lookup_function_co_) UsingMethod_(proto)
	UsingClass_(MessageException__Standard)
	UsingClass_(ProtoFunction__Compiler)

		{
		obj_ object_function, standard_package;
		/* Find "Standard Object". */
		t0_ = Call_(get_subproto_co_, main_proto, Str_(0));
		standard_package = t0_;
		t0_ = Not_(standard_package);
		if (t0_)
			{
			t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(1));
			Throw_(t0_);
			}
		t1_ = Call_(lookup_function_co_, standard_package, Str_(2));
		object_function = t1_;
		t0_ = Not_(object_function);
		if (t0_)
			{
			t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(3));
			Throw_(t0_);
			}
		t1_ = Call_(is_a_co_, object_function, Proto_(ProtoFunction__Compiler));
		t2_ = Not_(t1_);
		if (t2_)
			{
			t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(4));
			Throw_(t0_);
			}
		t1_ = Call_(proto, object_function);
		return t1_;
		
		
		}
	return nil;
}


obj_ standard_object_proto__Compiler__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(main_proto) UsingMethod_(root_proto_co_)

		{
		t0_ = Call_(main_proto, this_);
		t1_ = Call_(root_proto_co_, this_, t0_);
		return t1_;
		
		
		}
	return nil;
}


obj_ status_reporter__Compiler__Compiler(obj_ this_)
{
	return Field_(status_reporter);
}


obj_ status_reporter_co___Compiler__Compiler(obj_ this_, obj_ value)
{
	Field_(status_reporter) = value;
	return value;
}


obj_ successful__Compiler__Compiler(obj_ this_)
{
	return Field_(successful);
}


obj_ successful_co___Compiler__Compiler(obj_ this_, obj_ value)
{
	Field_(successful) = value;
	return value;
}


obj_ symbol_info_for_co___Compiler__Compiler(obj_ this_, obj_ name)
{
	extern obj_ new_co___SymbolInfo__Compiler(obj_ this_, obj_ name);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(at_co_) UsingMethod_(at_co_put_co_) UsingMethod_(string) UsingMethod_(symbols)
	UsingClass_(SymbolInfo__Compiler)

		{
		obj_ info;
		t0_ = Call_(string, name);
		name = t0_;
		t0_ = Call_(symbols, this_);
		t1_ = Call_(at_co_, t0_, name);
		info = t1_;
		t0_ = Not_(info);
		if (t0_)
			{
			t0_ = new_co___SymbolInfo__Compiler(Proto_(SymbolInfo__Compiler), name);
			info = t0_;
			t0_ = Call_(symbols, this_);
			t1_ = Call_(at_co_put_co_, t0_, name, info);
			}
		return info;
		
		
		}
	return nil;
}


obj_ symbols__Compiler__Compiler(obj_ this_)
{
	return Field_(symbols);
}


obj_ symbols_co___Compiler__Compiler(obj_ this_, obj_ value)
{
	Field_(symbols) = value;
	return value;
}


obj_ using_symbol_co___Compiler__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(symbol_info_for_co_) UsingMethod_(used_as_symbol_co_)

		{
		t0_ = Call_(symbol_info_for_co_, this_, name);
		t1_ = Call_(used_as_symbol_co_, t0_, true_);
		
		}
	return nil;
}


