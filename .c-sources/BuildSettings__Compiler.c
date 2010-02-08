#include "Trylon_.h"

UsingSym_(BuildSettings)UsingClass_(Compiler)
UsingClass_(Object__Standard)
UsingClass_(BuildSettings__Compiler)
struct ClassInfo BuildSettings__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 92, 1, Proto_(BuildSettings__Compiler), Proto_(Compiler), Proto_(Object__Standard), nil, Sym_(BuildSettings), nil, nil };
struct object BuildSettings__Compiler = 
	{ &BuildSettings__Compiler__classInfo_, {nil} };


#define dictionary__fld_	(0)


obj_ at_co___BuildSettings__Compiler(obj_ this_, obj_ key)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(at_co_) UsingMethod_(dictionary)

		{
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(at_co_, t0_, key);
		return t1_;
		}
	return nil;
}


obj_ c_compiler__BuildSettings__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "c-compiler")
	UsingMethod_(at_co_) UsingMethod_(dictionary)

		{
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(at_co_, t0_, Str_(0));
		return t1_;
		}
	return nil;
}


obj_ c_flags__BuildSettings__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "c-flags")
	UsingMethod_(at_co_) UsingMethod_(dictionary)

		{
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(at_co_, t0_, Str_(0));
		return t1_;
		}
	return nil;
}


obj_ c_sources_dir__BuildSettings__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "c-sources-dir")
	UsingMethod_(at_co_) UsingMethod_(dictionary)

		{
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(at_co_, t0_, Str_(0));
		return t1_;
		}
	return nil;
}


obj_ create__BuildSettings__Compiler(obj_ this_)
{
	extern obj_ new__Dictionary__Standard(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	UsingSym_(C)
	extern obj_ sysname__System__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "c-flags")
	DefineString_(1, "link-flags")
	DefineString_(2, "library-dirs")
	DefineString_(3, "c-compiler")
	DefineString_(4, "gcc")
	DefineString_(5, "linker")
	DefineString_(6, "gcc")
	DefineString_(7, "c-sources-dir")
	DefineString_(8, ".c-sources")
	DefineString_(9, "objects-dir")
	DefineString_(10, ".objects")
	DefineString_(11, "trylon-2")
	DefineString_(12, "true")
	UsingMethod_(at_co_put_co_) UsingMethod_(dictionary) UsingMethod_(dictionary_co_) UsingMethod_(is_empty) UsingMethod_(target_co_)
	UsingClass_(Dictionary__Standard)
	UsingClass_(List__Standard)
	UsingClass_(System__Standard)

		{
		obj_ sysname;
		t0_ = new__Dictionary__Standard(Proto_(Dictionary__Standard));
		t1_ = Call_(dictionary_co_, this_, t0_);
		t0_ = Call_(dictionary, this_);
		t1_ = new__List__Standard(Proto_(List__Standard));
		t2_ = Call_(at_co_put_co_, t0_, Str_(0), t1_);
		t0_ = Call_(dictionary, this_);
		t1_ = new__List__Standard(Proto_(List__Standard));
		t2_ = Call_(at_co_put_co_, t0_, Str_(1), t1_);
		t0_ = Call_(dictionary, this_);
		t1_ = new__List__Standard(Proto_(List__Standard));
		t2_ = Call_(at_co_put_co_, t0_, Str_(2), t1_);
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(at_co_put_co_, t0_, Str_(3), Str_(4));
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(at_co_put_co_, t0_, Str_(5), Str_(6));
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(at_co_put_co_, t0_, Str_(7), Str_(8));
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(at_co_put_co_, t0_, Str_(9), Str_(10));
		t0_ = Call_(target_co_, this_, Sym_(C));
		
		t0_ = sysname__System__Standard(Proto_(System__Standard));
		sysname = t0_;
		t0_ = Call_(is_empty, sysname);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = Call_(dictionary, this_);
			t1_ = Call_(at_co_put_co_, t0_, sysname, sysname);
			}
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(at_co_put_co_, t0_, Str_(11), Str_(12));
		}
	return nil;
}


obj_ debugger__BuildSettings__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "debugger")
	UsingMethod_(at_co_) UsingMethod_(dictionary)

		{
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(at_co_, t0_, Str_(0));
		return t1_;
		}
	return nil;
}


obj_ error_co_in_co___BuildSettings__Compiler(obj_ this_, obj_ message, obj_ line)
{
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	obj_ t0_;
	UsingClass_(MessageException__Standard)

		{
		t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), message);
		Throw_(t0_);
		}
	return nil;
}


obj_ has_symbol_co___BuildSettings__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(at_co_) UsingMethod_(dictionary)

		{
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(at_co_, t0_, name);
		t2_ = Bool_(t1_);
		return t2_;
		}
	return nil;
}


obj_ include_selector_symbols__BuildSettings__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "include-selector-symbols")
	UsingMethod_(at_co_) UsingMethod_(dictionary)

		{
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(at_co_, t0_, Str_(0));
		return t1_;
		}
	return nil;
}


obj_ is_verbose__BuildSettings__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "is-verbose")
	UsingMethod_(at_co_) UsingMethod_(dictionary)

		{
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(at_co_, t0_, Str_(0));
		return t1_;
		}
	return nil;
}


obj_ is_verbose_co___BuildSettings__Compiler(obj_ this_, obj_ new_value)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "is-verbose")
	UsingMethod_(at_co_put_co_) UsingMethod_(dictionary)

		{
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(at_co_put_co_, t0_, Str_(0), new_value);
		}
	return nil;
}


obj_ library_dirs__BuildSettings__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "library-dirs")
	UsingMethod_(at_co_) UsingMethod_(dictionary)

		{
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(at_co_, t0_, Str_(0));
		return t1_;
		}
	return nil;
}


obj_ link_flags__BuildSettings__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "link-flags")
	UsingMethod_(at_co_) UsingMethod_(dictionary)

		{
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(at_co_, t0_, Str_(0));
		return t1_;
		}
	return nil;
}


obj_ linker__BuildSettings__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "linker")
	UsingMethod_(at_co_) UsingMethod_(dictionary)

		{
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(at_co_, t0_, Str_(0));
		return t1_;
		}
	return nil;
}


obj_ load__BuildSettings__Compiler(obj_ this_)
{
	extern obj_ find_library_path__Compiler(obj_ this_);
	extern obj_ environment_variable_named_co___System__Standard(obj_ this_, obj_ name);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "/build-settings")
	DefineString_(1, "HOME")
	DefineString_(2, "/.trylon-build-settings")
	DefineString_(3, "build-settings.local")
	DefineString_(4, "build-settings")
	DefineString_(5, "symbol-dispatch")
	DefineString_(6, "support-perform")
	UsingMethod_(_pl_) UsingMethod_(at_co_) UsingMethod_(at_co_put_co_) UsingMethod_(dictionary) UsingMethod_(is_empty) UsingMethod_(load_from_co_)
	UsingClass_(Compiler)
	UsingClass_(System__Standard)

		{
		obj_ home_path, library_path;
		/*  Load global build-settings first. */
		t0_ = find_library_path__Compiler(Proto_(Compiler));
		library_path = t0_;
		if (library_path)
			{
			t0_ = Call_(_pl_, library_path, Str_(0));
			t1_ = Call_(load_from_co_, this_, t0_);
			}
		/*  Then user's semi-global build-settings. */
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
			t0_ = Call_(_pl_, home_path, Str_(2));
			t1_ = Call_(load_from_co_, this_, t0_);
			}
		/*  The project-specific build-settings. */
		t0_ = Call_(load_from_co_, this_, Str_(3));
		t0_ = Call_(load_from_co_, this_, Str_(4));
		
		/*  'symbol-dispatch' requires 'support-perform'. */
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(at_co_, t0_, Str_(5));
		if (t1_)
			{
			t0_ = Call_(dictionary, this_);
			t1_ = Call_(at_co_put_co_, t0_, Str_(6), true_);
			}
		}
	return nil;
}


obj_ load_from_co___BuildSettings__Compiler(obj_ this_, obj_ file_name)
{
	extern obj_ new_co___File__Standard(obj_ this_, obj_ path);
	extern obj_ read_co___LinesLexer__Trylon(obj_ this_, obj_ text);
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineString_(0, "Error in \"")
	DefineString_(1, "\": ")
	UsingMethod_(_pl_) UsingMethod_(contents) UsingMethod_(exists) UsingMethod_(load_lines_co_) UsingMethod_(message)
	UsingClass_(File__Standard)
	UsingClass_(LinesLexer__Trylon)
	UsingClass_(MessageException__Standard)

		{
		obj_ file;
		t0_ = new_co___File__Standard(Proto_(File__Standard), file_name);
		file = t0_;
		t0_ = Call_(exists, file);
		t1_ = Not_(t0_);
		if (t1_)
			{
			return nil;
			}
		
		Try_
			{
			t0_ = Call_(contents, file);
			t1_ = read_co___LinesLexer__Trylon(Proto_(LinesLexer__Trylon), t0_);
			t2_ = Call_(load_lines_co_, this_, t1_);
			}
		TryElse_
			{
			t0_ = Call_(_pl_, Str_(0), file_name);
			t1_ = Call_(_pl_, t0_, Str_(1));
			t2_ = Call_(message, exception);
			t3_ = Call_(_pl_, t1_, t2_);
			t4_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), t3_);
			Throw_(t4_);
			}
		EndTry_
		}
	return nil;
}


obj_ load_line_co___BuildSettings__Compiler(obj_ this_, obj_ line)
{
	extern obj_ with_co_and_co___List__Standard(obj_ this_, obj_ value_1, obj_ value_2);
	extern obj_ with_co_and_co___List__Standard(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(C)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(1)
	UsingInt_(0)
	UsingInt_(2)
	DefineString_(0, "#")
	DefineString_(1, "if")
	DefineString_(2, "iff")
	DefineString_(3, "#")
	DefineString_(4, "\"if\" line needs a condition")
	DefineString_(5, "!")
	DefineString_(6, "!")
	DefineString_(7, "")
	DefineString_(8, ":")
	DefineString_(9, "+=")
	DefineString_(10, "=")
	DefineString_(11, "'=' or '+=' expected")
	DefineString_(12, "#")
	DefineString_(13, "value expected")
	DefineString_(14, "#")
	DefineString_(15, "targeting-c")
	UsingMethod_(_nt__eq_) UsingMethod_(_) UsingMethod_(_eq__eq_) UsingMethod_(append_co_) UsingMethod_(at_co_) UsingMethod_(at_co_put_co_) UsingMethod_(block) UsingMethod_(dictionary) UsingMethod_(ends_with_co_) UsingMethod_(error_co_in_co_) UsingMethod_(is_a_co_) UsingMethod_(is_empty) UsingMethod_(length) UsingMethod_(load_lines_co_) UsingMethod_(next) UsingMethod_(require_eol) UsingMethod_(resolve_value_co_) UsingMethod_(starts_with_co_) UsingMethod_(substr_co_) UsingMethod_(substr_co_length_co_) UsingMethod_(target_co_) UsingMethod_(words)
	UsingClass_(List__Standard)

		{
		obj_ first_word, words;
		t0_ = Call_(words, line);
		words = t0_;
		t0_ = Call_(next, words);
		first_word = t0_;
		
		/*  Comments and blank lines. */
		t0_ = Not_(first_word);
		if ((t0_) == nil) {
			t1_ = Call_(starts_with_co_, first_word, Str_(0));
			t0_ = t1_;
			}
		if (t0_)
			{
			/*  Nothing to do. */
			}
		else
			{
			t0_ = Call_(_eq__eq_, first_word, Str_(1));
			if ((t0_) == nil) {
				t1_ = Call_(_eq__eq_, first_word, Str_(2));
				t0_ = t1_;
				}
			if (t0_)
				{
				obj_ reverse_sense, symbol, test_succeeded, value;
				/*  Get the symbol and the sense. */
				reverse_sense = nil;
				t0_ = Call_(next, words);
				symbol = t0_;
				t0_ = Not_(symbol);
				if ((t0_) == nil) {
					t1_ = Call_(starts_with_co_, symbol, Str_(3));
					t0_ = t1_;
					}
				if (t0_)
					{
					t0_ = Call_(error_co_in_co_, this_, Str_(4), line);
					}
				t0_ = Call_(starts_with_co_, symbol, Str_(5));
				if (t0_)
					{
					reverse_sense = true_;
					t0_ = Call_(_eq__eq_, symbol, Str_(6));
					if (t0_)
						{
						/*  "if ! foo" */
						t0_ = Call_(next, words);
						symbol = t0_;
						}
					else
						{
						/*  "if !foo" */
						t0_ = Call_(substr_co_, symbol, SmallInt_(1));
						symbol = t0_;
						}
					}
				t0_ = Call_(require_eol, words);
				
				/*  Test it. */
				t0_ = Call_(dictionary, this_);
				t1_ = Call_(at_co_, t0_, symbol);
				value = t1_;
				t0_ = Not_(value);
				if (t0_)
					{
					value = Str_(7);
					}
				t0_ = Call_(is_empty, value);
				t1_ = Not_(t0_);
				test_succeeded = t1_;
				if (reverse_sense)
					{
					t0_ = Not_(test_succeeded);
					test_succeeded = t0_;
					}
				
				/*  Do, or do not. */
				if (test_succeeded)
					{
					t0_ = Call_(block, line);
					t1_ = Call_(load_lines_co_, this_, t0_);
					}
				}
			else
				{
				obj_ appending, name, value;
				/*  Name and flavor. */
				name = first_word;
				appending = nil;
				t0_ = Call_(ends_with_co_, name, Str_(8));
				if (t0_)
					{
					t0_ = Call_(length, name);
					t1_ = Call_(_, t0_, SmallInt_(2));
					t2_ = Call_(substr_co_length_co_, name, SmallInt_(0), t1_);
					name = t2_;
					}
				else
					{
					obj_ operator;
					t0_ = Call_(next, words);
					operator = t0_;
					t0_ = Call_(_eq__eq_, operator, Str_(9));
					if (t0_)
						{
						appending = true_;
						}
					else
						{
						t0_ = Call_(_nt__eq_, operator, Str_(10));
						if (t0_)
							{
							t0_ = Call_(error_co_in_co_, this_, Str_(11), line);
							}
						}
					}
				
				/*  Get the value, as a string. */
				t0_ = Call_(next, words);
				value = t0_;
				t0_ = Not_(value);
				if ((t0_) == nil) {
					t1_ = Call_(starts_with_co_, value, Str_(12));
					t0_ = t1_;
					}
				if (t0_)
					{
					t0_ = Call_(error_co_in_co_, this_, Str_(13), line);
					}
				t0_ = Call_(resolve_value_co_, this_, value);
				value = t0_;
				
				/*  Appending to a list. */
				if (appending)
					{
					obj_ old_value;
					/*  Append the first value. */
					t0_ = Not_(value);
					if (t0_)
						{
						return nil;
						}
					t0_ = Call_(dictionary, this_);
					t1_ = Call_(at_co_, t0_, name);
					old_value = t1_;
					t0_ = Not_(old_value);
					if (t0_)
						{
						/*  Just use the new value. */
						}
					else
						{
						t0_ = Call_(is_a_co_, old_value, Proto_(List__Standard));
						if (t0_)
							{
							t0_ = Call_(append_co_, old_value, value);
							value = old_value;
							}
						else
							{
							t0_ = with_co_and_co___List__Standard(Proto_(List__Standard), old_value, value);
							value = t0_;
							}
						}
					t0_ = Call_(dictionary, this_);
					t1_ = Call_(at_co_put_co_, t0_, name, value);
					}
				else
					{
					t0_ = Call_(dictionary, this_);
					t1_ = Call_(at_co_put_co_, t0_, name, value);
					}
				
				/*  Setting a value. */
				
				/*  Append any more values we find on the line. */
				while (1) {
					ContinuePoint_(0)
					{
					obj_ old_value;
					t0_ = Call_(next, words);
					value = t0_;
					t0_ = Not_(value);
					if ((t0_) == nil) {
						t1_ = Call_(starts_with_co_, value, Str_(14));
						t0_ = t1_;
						}
					if (t0_)
						{
						Break_(0)
						}
					t0_ = Call_(resolve_value_co_, this_, value);
					value = t0_;
					t0_ = Call_(dictionary, this_);
					t1_ = Call_(at_co_, t0_, name);
					old_value = t1_;
					t0_ = old_value;
					if (t0_) {
						t1_ = Call_(is_a_co_, old_value, Proto_(List__Standard));
						t0_ = t1_;
						}
					if (t0_)
						{
						t0_ = Call_(append_co_, old_value, value);
						value = old_value;
						}
					else
						{
						t0_ = with_co_and_co___List__Standard(Proto_(List__Standard), old_value, value);
						value = t0_;
						}
					t0_ = Call_(dictionary, this_);
					t1_ = Call_(at_co_put_co_, t0_, name, value);
					}
				}
				
				/*  Special-case 'targeting-c' and any other target (formerly */
				/*  'targeting-jolt' was available), which are mutually exclusive. */
				t0_ = Call_(_eq__eq_, name, Str_(15));
				if (t0_) {
					t1_ = Call_(dictionary, this_);
					t2_ = Call_(at_co_, t1_, name);
					t0_ = t2_;
					}
				if (t0_)
					{
					t0_ = Call_(target_co_, this_, Sym_(C));
					}
				}
			}
		
		/*  "if" is the only special form. */
		
		/*  Anything else is a sort of assignment expression. */
		}
	return nil;
}


obj_ load_lines_co___BuildSettings__Compiler(obj_ this_, obj_ lines)
{
	obj_ t0_;
	UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(load_line_co_)

		{
		ForStart_(0, lines, line)
			{
			t0_ = Call_(load_line_co_, this_, line);
			}
		ForEnd_(0)
		}
	return nil;
}


obj_ new__BuildSettings__Compiler(obj_ this_)
{
	UsingClass_(BuildSettings__Compiler)
	obj_ obj = AllocObj_(BuildSettings__Compiler);
	create__BuildSettings__Compiler(obj);
	return obj;
}


obj_ objects_dir__BuildSettings__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "objects-dir")
	UsingMethod_(at_co_) UsingMethod_(dictionary)

		{
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(at_co_, t0_, Str_(0));
		return t1_;
		}
	return nil;
}


obj_ program_name__BuildSettings__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "program")
	UsingMethod_(at_co_) UsingMethod_(dictionary)

		{
		/*  Note!: This one uses a different name. */
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(at_co_, t0_, Str_(0));
		return t1_;
		}
	return nil;
}


obj_ resolve_value_co___BuildSettings__Compiler(obj_ this_, obj_ value)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(1)
	UsingInt_(2)
	DefineString_(0, "false")
	DefineString_(1, "nil")
	DefineString_(2, "\"")
	DefineString_(3, "'")
	UsingMethod_(_) UsingMethod_(_eq__eq_) UsingMethod_(length) UsingMethod_(starts_with_co_) UsingMethod_(substr_co_length_co_)

		{
		t0_ = Not_(value);
		if ((t0_) == nil) {
			t1_ = Call_(_eq__eq_, value, Str_(0));
			t0_ = t1_;
			}
		if ((t0_) == nil) {
			t2_ = Call_(_eq__eq_, value, Str_(1));
			t0_ = t2_;
			}
		if (t0_)
			{
			return nil;
			}
		else
			{
			t0_ = Call_(starts_with_co_, value, Str_(2));
			if ((t0_) == nil) {
				t1_ = Call_(starts_with_co_, value, Str_(3));
				t0_ = t1_;
				}
			if (t0_)
				{
				t0_ = Call_(length, value);
				t1_ = Call_(_, t0_, SmallInt_(2));
				t2_ = Call_(substr_co_length_co_, value, SmallInt_(1), t1_);
				return t2_;
				}
			}
		return value;
		}
	return nil;
}


obj_ shared_field_accessors__BuildSettings__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "shared-field-accessors")
	UsingMethod_(at_co_) UsingMethod_(dictionary)

		{
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(at_co_, t0_, Str_(0));
		return t1_;
		}
	return nil;
}


obj_ shared_ints__BuildSettings__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "shared-ints")
	UsingMethod_(at_co_) UsingMethod_(dictionary)

		{
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(at_co_, t0_, Str_(0));
		return t1_;
		}
	return nil;
}


obj_ support_perform__BuildSettings__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "support-perform")
	UsingMethod_(at_co_) UsingMethod_(dictionary)

		{
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(at_co_, t0_, Str_(0));
		return t1_;
		}
	return nil;
}


obj_ target_co___BuildSettings__Compiler(obj_ this_, obj_ target)
{
	UsingSym_(C)
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "targeting-c")
	DefineString_(1, "true")
	UsingMethod_(at_co_put_co_) UsingMethod_(dictionary)

		{
		Switch_(target)
		if (SwitchMatches_(Sym_(C)))
			{
			t0_ = Call_(dictionary, this_);
			t1_ = Call_(at_co_put_co_, t0_, Str_(0), Str_(1));
			}
		EndSwitch_
		}
	return nil;
}


obj_ targeting_c__BuildSettings__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "targeting-c")
	UsingMethod_(at_co_) UsingMethod_(dictionary)

		{
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(at_co_, t0_, Str_(0));
		return t1_;
		}
	return nil;
}


