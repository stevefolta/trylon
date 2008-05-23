#include "Trylon_.h"

UsingSym_(BuildSettings)UsingClass_(Compiler)
UsingClass_(Object__Standard)
UsingClass_(BuildSettings__Compiler)
struct ClassInfo BuildSettings__Compiler__classInfo_ = 
	{ 71, 60, Proto_(BuildSettings__Compiler), Proto_(Compiler), Proto_(Object__Standard), nil, Sym_(BuildSettings) ,nil };
struct object BuildSettings__Compiler = 
	{ &BuildSettings__Compiler__classInfo_, {nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil} };


#define dictionary__fld_	(0)
#define program_name__fld_	(1)
#define c_flags__fld_	(2)
#define link_flags__fld_	(3)
#define c_compiler__fld_	(4)
#define linker__fld_	(5)
#define jolt_sources_dir__fld_	(6)
#define c_sources_dir__fld_	(7)
#define objects_dir__fld_	(8)
#define is_verbose__fld_	(9)
#define targeting_c__fld_	(10)
#define targeting_jolt__fld_	(11)
#define debugger__fld_	(12)
#define include_selector_symbols__fld_	(13)
#define support_perform__fld_	(14)


obj_ c_compiler__BuildSettings__Compiler(obj_ this_)
{
	return Field_(c_compiler);
}


obj_ c_compiler_co___BuildSettings__Compiler(obj_ this_, obj_ value)
{
	Field_(c_compiler) = value;
	return value;
}


obj_ c_flags__BuildSettings__Compiler(obj_ this_)
{
	return Field_(c_flags);
}


obj_ c_flags_co___BuildSettings__Compiler(obj_ this_, obj_ value)
{
	Field_(c_flags) = value;
	return value;
}


obj_ c_sources_dir__BuildSettings__Compiler(obj_ this_)
{
	return Field_(c_sources_dir);
}


obj_ c_sources_dir_co___BuildSettings__Compiler(obj_ this_, obj_ value)
{
	Field_(c_sources_dir) = value;
	return value;
}


obj_ create__BuildSettings__Compiler(obj_ this_)
{
	extern obj_ new__Dictionary__Standard(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	UsingSym_(C)
	extern obj_ sysname__System__Standard(obj_ this_);
	extern obj_ _dt_target_language__Implementation__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "")
	DefineString_(1, "gcc")
	DefineString_(2, "gcc")
	DefineString_(3, ".jolt-sources")
	DefineString_(4, ".c-sources")
	DefineString_(5, ".objects")
	DefineString_(6, "in-trylid")
	DefineString_(7, "true")
	DefineString_(8, "trylon-2")
	DefineString_(9, "true")
	DefineString_(10, "Coke")
	DefineString_(11, "in-jolt")
	DefineString_(12, "true")
	UsingMethod_(_eq__eq_) UsingMethod_(at_co_put_co_) UsingMethod_(c_compiler_co_) UsingMethod_(c_flags_co_) UsingMethod_(c_sources_dir_co_) UsingMethod_(dictionary) UsingMethod_(dictionary_co_) UsingMethod_(is_empty) UsingMethod_(is_verbose_co_) UsingMethod_(jolt_sources_dir_co_) UsingMethod_(link_flags_co_) UsingMethod_(linker_co_) UsingMethod_(objects_dir_co_) UsingMethod_(program_name_co_) UsingMethod_(target_co_)
	UsingClass_(Dictionary__Standard)
	UsingClass_(Implementation__Standard)
	UsingClass_(System__Standard)
	UsingClass_(List__Standard)

		{
		obj_ sysname;
		t0_ = new__Dictionary__Standard(Proto_(Dictionary__Standard));
		t1_ = Call_(dictionary_co_, this_, t0_);
		t0_ = Call_(program_name_co_, this_, Str_(0));
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(c_flags_co_, this_, t0_);
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(link_flags_co_, this_, t0_);
		t0_ = Call_(c_compiler_co_, this_, Str_(1));
		t0_ = Call_(linker_co_, this_, Str_(2));
		t0_ = Call_(jolt_sources_dir_co_, this_, Str_(3));
		t0_ = Call_(c_sources_dir_co_, this_, Str_(4));
		t0_ = Call_(objects_dir_co_, this_, Str_(5));
		t0_ = Call_(is_verbose_co_, this_, nil);
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
		t1_ = Call_(at_co_put_co_, t0_, Str_(6), Str_(7));
		t0_ = Call_(dictionary, this_);
		t1_ = Call_(at_co_put_co_, t0_, Str_(8), Str_(9));
		t0_ = _dt_target_language__Implementation__Standard(Proto_(Implementation__Standard));
		t1_ = Call_(_eq__eq_, t0_, Str_(10));
		if (t1_)
			{
			t0_ = Call_(dictionary, this_);
			t1_ = Call_(at_co_put_co_, t0_, Str_(11), Str_(12));
			
			
			}
		}
	return nil;
}


obj_ debugger__BuildSettings__Compiler(obj_ this_)
{
	return Field_(debugger);
}


obj_ debugger_co___BuildSettings__Compiler(obj_ this_, obj_ value)
{
	Field_(debugger) = value;
	return value;
}


obj_ dictionary__BuildSettings__Compiler(obj_ this_)
{
	return Field_(dictionary);
}


obj_ dictionary_co___BuildSettings__Compiler(obj_ this_, obj_ value)
{
	Field_(dictionary) = value;
	return value;
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
	return Field_(include_selector_symbols);
}


obj_ include_selector_symbols_co___BuildSettings__Compiler(obj_ this_, obj_ value)
{
	Field_(include_selector_symbols) = value;
	return value;
}


obj_ is_verbose__BuildSettings__Compiler(obj_ this_)
{
	return Field_(is_verbose);
}


obj_ is_verbose_co___BuildSettings__Compiler(obj_ this_, obj_ value)
{
	Field_(is_verbose) = value;
	return value;
}


obj_ jolt_sources_dir__BuildSettings__Compiler(obj_ this_)
{
	return Field_(jolt_sources_dir);
}


obj_ jolt_sources_dir_co___BuildSettings__Compiler(obj_ this_, obj_ value)
{
	Field_(jolt_sources_dir) = value;
	return value;
}


obj_ link_flags__BuildSettings__Compiler(obj_ this_)
{
	return Field_(link_flags);
}


obj_ link_flags_co___BuildSettings__Compiler(obj_ this_, obj_ value)
{
	Field_(link_flags) = value;
	return value;
}


obj_ linker__BuildSettings__Compiler(obj_ this_)
{
	return Field_(linker);
}


obj_ linker_co___BuildSettings__Compiler(obj_ this_, obj_ value)
{
	Field_(linker) = value;
	return value;
}


obj_ load__BuildSettings__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "/build-settings")
	DefineString_(1, "build-settings.local")
	DefineString_(2, "build-settings")
	UsingMethod_(_pl_) UsingMethod_(find_library_path) UsingMethod_(load_from_co_)
	UsingSharedField_(compiler, Main) 

		{
		obj_ library_path;
		t0_ = Call_(find_library_path, SharedField_(compiler, Main));
		library_path = t0_;
		if (library_path)
			{
			t0_ = Call_(_pl_, library_path, Str_(0));
			t1_ = Call_(load_from_co_, this_, t0_);
			}
		t0_ = Call_(load_from_co_, this_, Str_(1));
		t0_ = Call_(load_from_co_, this_, Str_(2));
		
		
		}
	return nil;
}


obj_ load_from_co___BuildSettings__Compiler(obj_ this_, obj_ file_name)
{
	extern obj_ new_co___File__Standard(obj_ this_, obj_ path);
	extern obj_ new_co___Lexer__Compiler(obj_ this_, obj_ text);
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineString_(0, "Error in \"")
	DefineString_(1, "\": ")
	UsingMethod_(_pl_) UsingMethod_(contents) UsingMethod_(exists) UsingMethod_(message) UsingMethod_(parse_block_co_)
	UsingClass_(File__Standard)
	UsingClass_(MessageException__Standard)
	UsingClass_(Lexer__Compiler)

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
			obj_ lexer;
			t0_ = Call_(contents, file);
			t1_ = new_co___Lexer__Compiler(Proto_(Lexer__Compiler), t0_);
			lexer = t1_;
			t0_ = Call_(parse_block_co_, this_, lexer);
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


obj_ new__BuildSettings__Compiler(obj_ this_)
{
	UsingClass_(BuildSettings__Compiler)
	obj_ obj = AllocObj_(BuildSettings__Compiler);
	create__BuildSettings__Compiler(obj);
	return obj;
}


obj_ objects_dir__BuildSettings__Compiler(obj_ this_)
{
	return Field_(objects_dir);
}


obj_ objects_dir_co___BuildSettings__Compiler(obj_ this_, obj_ value)
{
	Field_(objects_dir) = value;
	return value;
}


obj_ parse_block_co___BuildSettings__Compiler(obj_ this_, obj_ lexer)
{
	UsingSym_(eol)
	UsingSym_(comment)
	UsingSym_(name)
	UsingSym_(keyword)
	UsingSym_(keyword)
	UsingSym_(C)
	UsingSym_(Jolt)
	UsingSym_(indent)
	UsingSym_(eof)
	UsingSym_(unindent)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 0)
	DefineInt_(1, 1)
	DefineString_(0, "program")
	DefineString_(1, "c-flags")
	DefineString_(2, "link-flags")
	DefineString_(3, "c-compiler")
	DefineString_(4, "linker")
	DefineString_(5, "jolt-sources-dir")
	DefineString_(6, "c-sources-dir")
	DefineString_(7, "objects-dir")
	DefineString_(8, "debugger")
	DefineString_(9, "support-perform")
	DefineString_(10, "include-selector-symbols")
	DefineString_(11, "verbose")
	DefineString_(12, "targeting-c")
	DefineString_(13, "targeting-jolt")
	DefineString_(14, "if")
	DefineString_(15, "iff")
	UsingMethod_(_) UsingMethod_(_eq__eq_) UsingMethod_(c_compiler_co_) UsingMethod_(c_flags) UsingMethod_(c_sources_dir_co_) UsingMethod_(debugger_co_) UsingMethod_(include_selector_symbols_co_) UsingMethod_(is_verbose_co_) UsingMethod_(jolt_sources_dir_co_) UsingMethod_(length) UsingMethod_(link_flags) UsingMethod_(linker_co_) UsingMethod_(next_token) UsingMethod_(objects_dir_co_) UsingMethod_(parse_block_co_) UsingMethod_(parse_boolean_co_name_co_) UsingMethod_(parse_flags_co_into_co_name_co_) UsingMethod_(parse_if_co_) UsingMethod_(parse_name_co_name_co_) UsingMethod_(program_name_co_) UsingMethod_(substr_co_length_co_) UsingMethod_(support_perform_co_) UsingMethod_(target_co_) UsingMethod_(targeting_c) UsingMethod_(targeting_c_co_) UsingMethod_(targeting_jolt) UsingMethod_(targeting_jolt_co_) UsingMethod_(text) UsingMethod_(type)

		{
		while (1) {
			ContinuePoint_(0)
			{
			obj_ token, type;
			t0_ = Call_(next_token, lexer);
			token = t0_;
			t0_ = Call_(type, token);
			type = t0_;
			
			t0_ = Call_(_eq__eq_, type, Sym_(eol));
			if (t0_)
				{
				Continue_(0)
				
				}
			else
				{
				t0_ = Call_(_eq__eq_, type, Sym_(comment));
				if (t0_)
					{
					t0_ = Call_(next_token, lexer);
					token = t0_;
					 	/* It *will* be an 'eol'. */
					Continue_(0)
					
					}
				else
					{
					t0_ = Call_(_eq__eq_, type, Sym_(name));
					if ((t0_) == nil) {
						t1_ = Call_(_eq__eq_, type, Sym_(keyword));
						t0_ = t1_;
						}
					if (t0_)
						{
						obj_ name;
						t0_ = Call_(text, token);
						name = t0_;
						t0_ = Call_(_eq__eq_, type, Sym_(keyword));
						if (t0_)
							{
							t0_ = Call_(length, name);
							t1_ = Call_(_, t0_, Int_(1));
							t2_ = Call_(substr_co_length_co_, name, Int_(0), t1_);
							name = t2_;
							}
						t0_ = Call_(_eq__eq_, name, Str_(0));
						if (t0_)
							{
							t0_ = Call_(parse_name_co_name_co_, this_, lexer, name);
							t1_ = Call_(program_name_co_, this_, t0_);
							}
						else
							{
							t0_ = Call_(_eq__eq_, name, Str_(1));
							if (t0_)
								{
								t0_ = Call_(c_flags, this_);
								t1_ = Call_(parse_flags_co_into_co_name_co_, this_, lexer, t0_, name);
								}
							else
								{
								t0_ = Call_(_eq__eq_, name, Str_(2));
								if (t0_)
									{
									t0_ = Call_(link_flags, this_);
									t1_ = Call_(parse_flags_co_into_co_name_co_, this_, lexer, t0_, name);
									}
								else
									{
									t0_ = Call_(_eq__eq_, name, Str_(3));
									if (t0_)
										{
										t0_ = Call_(parse_name_co_name_co_, this_, lexer, name);
										t1_ = Call_(c_compiler_co_, this_, t0_);
										}
									else
										{
										t0_ = Call_(_eq__eq_, name, Str_(4));
										if (t0_)
											{
											t0_ = Call_(parse_name_co_name_co_, this_, lexer, name);
											t1_ = Call_(linker_co_, this_, t0_);
											}
										else
											{
											t0_ = Call_(_eq__eq_, name, Str_(5));
											if (t0_)
												{
												t0_ = Call_(parse_name_co_name_co_, this_, lexer, name);
												t1_ = Call_(jolt_sources_dir_co_, this_, t0_);
												}
											else
												{
												t0_ = Call_(_eq__eq_, name, Str_(6));
												if (t0_)
													{
													t0_ = Call_(parse_name_co_name_co_, this_, lexer, name);
													t1_ = Call_(c_sources_dir_co_, this_, t0_);
													}
												else
													{
													t0_ = Call_(_eq__eq_, name, Str_(7));
													if (t0_)
														{
														t0_ = Call_(parse_name_co_name_co_, this_, lexer, name);
														t1_ = Call_(objects_dir_co_, this_, t0_);
														}
													else
														{
														t0_ = Call_(_eq__eq_, name, Str_(8));
														if (t0_)
															{
															t0_ = Call_(parse_boolean_co_name_co_, this_, lexer, name);
															t1_ = Call_(debugger_co_, this_, t0_);
															}
														else
															{
															t0_ = Call_(_eq__eq_, name, Str_(9));
															if (t0_)
																{
																t0_ = Call_(parse_boolean_co_name_co_, this_, lexer, name);
																t1_ = Call_(support_perform_co_, this_, t0_);
																}
															else
																{
																t0_ = Call_(_eq__eq_, name, Str_(10));
																if (t0_)
																	{
																	t0_ = Call_(parse_boolean_co_name_co_, this_, lexer, name);
																	t1_ = Call_(include_selector_symbols_co_, this_, t0_);
																	}
																else
																	{
																	t0_ = Call_(_eq__eq_, name, Str_(11));
																	if (t0_)
																		{
																		t0_ = Call_(parse_boolean_co_name_co_, this_, lexer, name);
																		t1_ = Call_(is_verbose_co_, this_, t0_);
																		}
																	else
																		{
																		t0_ = Call_(_eq__eq_, name, Str_(12));
																		if (t0_)
																			{
																			t0_ = Call_(parse_boolean_co_name_co_, this_, lexer, name);
																			t1_ = Call_(targeting_c_co_, this_, t0_);
																			t0_ = Call_(targeting_c, this_);
																			if (t0_)
																				{
																				t0_ = Call_(target_co_, this_, Sym_(C));
																				}
																			}
																		else
																			{
																			t0_ = Call_(_eq__eq_, name, Str_(13));
																			if (t0_)
																				{
																				t0_ = Call_(parse_boolean_co_name_co_, this_, lexer, name);
																				t1_ = Call_(targeting_jolt_co_, this_, t0_);
																				t0_ = Call_(targeting_jolt, this_);
																				if (t0_)
																				{
																				t0_ = Call_(target_co_, this_, Sym_(Jolt));
																				
																				}
																				}
																			else
																				{
																				t0_ = Call_(_eq__eq_, name, Str_(14));
																				if ((t0_) == nil) {
																				t1_ = Call_(_eq__eq_, name, Str_(15));
																				t0_ = t1_;
																				}
																				if (t0_)
																				{
																				t0_ = Call_(parse_if_co_, this_, lexer);
																				
																				}
																				else
																				{
																				/* Anything else is just a boolean for the dictionary. */
																				t0_ = Call_(parse_boolean_co_name_co_, this_, lexer, name);
																				
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
					else
						{
						t0_ = Call_(_eq__eq_, type, Sym_(indent));
						if (t0_)
							{
							t0_ = Call_(parse_block_co_, this_, lexer);
							
							}
						else
							{
							t0_ = Call_(_eq__eq_, type, Sym_(eof));
							if ((t0_) == nil) {
								t1_ = Call_(_eq__eq_, type, Sym_(unindent));
								t0_ = t1_;
								}
							if (t0_)
								{
								Break_(0)
								
								
								}
							}
						}
					}
				}
			}
		}
		}
	return nil;
}


obj_ parse_boolean_co_name_co___BuildSettings__Compiler(obj_ this_, obj_ lexer, obj_ declaration)
{
	UsingSym_(_eq_)
	UsingSym_(eol)
	UsingSym_(comment)
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	UsingSym_(comment)
	UsingSym_(eol)
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineString_(0, "Empty \"")
	DefineString_(1, "\" declaration.")
	DefineString_(2, "Extra tokens in \"")
	DefineString_(3, "\" declaration.")
	DefineString_(4, "true")
	DefineString_(5, "on")
	UsingMethod_(_nt__eq_) UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(at_co_put_co_) UsingMethod_(dictionary) UsingMethod_(next_token) UsingMethod_(remove_co_) UsingMethod_(text)
	UsingClass_(MessageException__Standard)

		{
		obj_ name, on, token;
		t0_ = Call_(next_token, lexer);
		token = t0_;
		t0_ = Call_(_eq__eq_, token, Sym_(_eq_));
		if (t0_)
			{
			t0_ = Call_(next_token, lexer);
			token = t0_;
			}
		t0_ = Call_(_eq__eq_, token, Sym_(eol));
		if ((t0_) == nil) {
			t1_ = Call_(_eq__eq_, token, Sym_(comment));
			t0_ = t1_;
			}
		if (t0_)
			{
			t0_ = Call_(_pl_, Str_(0), declaration);
			t1_ = Call_(_pl_, t0_, Str_(1));
			t2_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), t1_);
			Throw_(t2_);
			
			}
		t3_ = Call_(text, token);
		name = t3_;
		t0_ = Call_(next_token, lexer);
		token = t0_;
		t0_ = Call_(_eq__eq_, token, Sym_(comment));
		if (t0_)
			{
			t0_ = Call_(next_token, lexer);
			 	/* It *will* be an 'eol'. */
			}
		else
			{
			t0_ = Call_(_nt__eq_, token, Sym_(eol));
			if (t0_)
				{
				t0_ = Call_(_pl_, Str_(2), declaration);
				t1_ = Call_(_pl_, t0_, Str_(3));
				t2_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), t1_);
				Throw_(t2_);
				
				}
			}
		t3_ = Call_(_eq__eq_, name, Str_(4));
		if ((t3_) == nil) {
			t4_ = Call_(_eq__eq_, name, Str_(5));
			t3_ = t4_;
			}
		on = t3_;
		if (on)
			{
			t0_ = Call_(dictionary, this_);
			t1_ = Call_(at_co_put_co_, t0_, declaration, declaration);
			}
		else
			{
			t0_ = Call_(dictionary, this_);
			t1_ = Call_(remove_co_, t0_, declaration);
			}
		return on;
		
		
		}
	return nil;
}


obj_ parse_flags_co_into_co_name_co___BuildSettings__Compiler(obj_ this_, obj_ lexer, obj_ flags, obj_ declaration)
{
	UsingSym_(_pl__eq_)
	UsingSym_(eol)
	UsingSym_(comment)
	UsingSym_(_)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "")
	DefineString_(1, "-")
	DefineString_(2, "")
	UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(append_co_) UsingMethod_(is_empty) UsingMethod_(next_token) UsingMethod_(text) UsingMethod_(type)

		{
		obj_ flag, have_started;
		flag = Str_(0);
		have_started = nil;
		while (1) {
			ContinuePoint_(0)
			{
			obj_ token;
			t0_ = Call_(next_token, lexer);
			token = t0_;
			
			t0_ = Not_(have_started);
			if (t0_) {
				t1_ = Call_(type, token);
				t2_ = Call_(_eq__eq_, t1_, Sym_(_pl__eq_));
				t0_ = t2_;
				}
			if (t0_)
				{
				/* Just go around again. */
				
				}
			else
				{
				t0_ = Call_(_eq__eq_, token, Sym_(eol));
				if (t0_)
					{
					t0_ = Call_(is_empty, flag);
					t1_ = Not_(t0_);
					if (t1_)
						{
						t0_ = Call_(append_co_, flags, flag);
						}
					Break_(0)
					
					}
				else
					{
					t0_ = Call_(_eq__eq_, token, Sym_(comment));
					if (t0_)
						{
						/* Just go around again; 'eol' will be next. */
						
						}
					else
						{
						t0_ = Call_(_eq__eq_, token, Sym_(_));
						if (t0_)
							{
							/* We want to allow flags starting with hyphens without quoting. */
							t0_ = Call_(_pl_, flag, Str_(1));
							flag = t0_;
							
							}
						else
							{
							t0_ = Call_(text, token);
							t1_ = Call_(_pl_, flag, t0_);
							flag = t1_;
							t0_ = Call_(append_co_, flags, flag);
							flag = Str_(2);
							
							}
						}
					}
				}
			have_started = true_;
			
			
			}
		}
		}
	return nil;
}


obj_ parse_if_co___BuildSettings__Compiler(obj_ this_, obj_ lexer)
{
	UsingSym_(_nt_)
	UsingSym_(comment)
	UsingSym_(eol)
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	UsingSym_(comment)
	UsingSym_(eol)
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	UsingSym_(indent)
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	UsingSym_(indent)
	UsingSym_(unindent)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineInt_(0, 1)
	DefineInt_(1, 1)
	DefineInt_(2, 1)
	DefineInt_(3, 0)
	DefineString_(0, "Invalid \"if\" statement.")
	DefineString_(1, "")
	DefineString_(2, "Extra tokens in \"if\" statement.")
	DefineString_(3, "Missing block in \"if\" statement.")
	UsingMethod_(_nt__eq_) UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(_lt__eq_) UsingMethod_(_eq__eq_) UsingMethod_(at_co_) UsingMethod_(dictionary) UsingMethod_(is_empty) UsingMethod_(next_token) UsingMethod_(parse_block_co_) UsingMethod_(text)
	UsingClass_(MessageException__Standard)

		{
		obj_ reverse_sense, test_is_true, token, value;
		/* Check for "!". */
		t0_ = Call_(next_token, lexer);
		token = t0_;
		reverse_sense = nil;
		t0_ = Call_(_eq__eq_, token, Sym_(_nt_));
		if (t0_)
			{
			reverse_sense = true_;
			t0_ = Call_(next_token, lexer);
			token = t0_;
			
			}
		/* Get the value. */
		t0_ = Call_(_eq__eq_, token, Sym_(comment));
		if ((t0_) == nil) {
			t1_ = Call_(_eq__eq_, token, Sym_(eol));
			t0_ = t1_;
			}
		if (t0_)
			{
			t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(0));
			Throw_(t0_);
			}
		t1_ = Call_(dictionary, this_);
		t2_ = Call_(text, token);
		t3_ = Call_(at_co_, t1_, t2_);
		value = t3_;
		t0_ = Not_(value);
		if (t0_)
			{
			value = Str_(1);
			}
		t0_ = Call_(is_empty, value);
		t1_ = Not_(t0_);
		test_is_true = t1_;
		if (reverse_sense)
			{
			t0_ = Not_(test_is_true);
			test_is_true = t0_;
			
			}
		/* Get the end of line. */
		t0_ = Call_(next_token, lexer);
		token = t0_;
		t0_ = Call_(_eq__eq_, token, Sym_(comment));
		if (t0_)
			{
			t0_ = Call_(next_token, lexer);
			token = t0_;
			}
		t0_ = Call_(_nt__eq_, token, Sym_(eol));
		if (t0_)
			{
			t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(2));
			Throw_(t0_);
			
			}
		/* Handle the block. */
		t1_ = Call_(next_token, lexer);
		token = t1_;
		t0_ = Call_(_nt__eq_, token, Sym_(indent));
		if (t0_)
			{
			t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(3));
			Throw_(t0_);
			}
		if (test_is_true)
			{
			t0_ = Call_(parse_block_co_, this_, lexer);
			}
		else
			{
			obj_ indent_count;
			/* Skip the block. */
			indent_count = Int_(0);
			while (1) {
				ContinuePoint_(0)
				{
				t0_ = Call_(next_token, lexer);
				token = t0_;
				t0_ = Call_(_eq__eq_, token, Sym_(indent));
				if (t0_)
					{
					t0_ = Call_(_pl_, indent_count, Int_(1));
					indent_count = t0_;
					}
				else
					{
					t0_ = Call_(_eq__eq_, token, Sym_(unindent));
					if (t0_)
						{
						t0_ = Call_(_, indent_count, Int_(2));
						indent_count = t0_;
						t0_ = Call_(_lt__eq_, indent_count, Int_(3));
						if (t0_)
							{
							Break_(0)
							
							
							
							}
						}
					}
				}
			}
			}
		}
	return nil;
}


obj_ parse_name_co_name_co___BuildSettings__Compiler(obj_ this_, obj_ lexer, obj_ declaration)
{
	UsingSym_(_eq_)
	UsingSym_(eol)
	UsingSym_(comment)
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	UsingSym_(comment)
	UsingSym_(eol)
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "Empty \"")
	DefineString_(1, "\" declaration.")
	DefineString_(2, "Extra tokens in \"")
	DefineString_(3, "\" declaration.")
	UsingMethod_(_nt__eq_) UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(next_token) UsingMethod_(text)
	UsingClass_(MessageException__Standard)

		{
		obj_ name, token;
		t0_ = Call_(next_token, lexer);
		token = t0_;
		t0_ = Call_(_eq__eq_, token, Sym_(_eq_));
		if (t0_)
			{
			t0_ = Call_(next_token, lexer);
			token = t0_;
			}
		t0_ = Call_(_eq__eq_, token, Sym_(eol));
		if ((t0_) == nil) {
			t1_ = Call_(_eq__eq_, token, Sym_(comment));
			t0_ = t1_;
			}
		if (t0_)
			{
			t0_ = Call_(_pl_, Str_(0), declaration);
			t1_ = Call_(_pl_, t0_, Str_(1));
			t2_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), t1_);
			Throw_(t2_);
			
			}
		t3_ = Call_(text, token);
		name = t3_;
		t0_ = Call_(next_token, lexer);
		token = t0_;
		t0_ = Call_(_eq__eq_, token, Sym_(comment));
		if (t0_)
			{
			t0_ = Call_(next_token, lexer);
			 	/* It *will* be an 'eol'. */
			}
		else
			{
			t0_ = Call_(_nt__eq_, token, Sym_(eol));
			if (t0_)
				{
				t0_ = Call_(_pl_, Str_(2), declaration);
				t1_ = Call_(_pl_, t0_, Str_(3));
				t2_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), t1_);
				Throw_(t2_);
				
				}
			}
		return name;
		
		
		}
	return nil;
}


obj_ program_name__BuildSettings__Compiler(obj_ this_)
{
	return Field_(program_name);
}


obj_ program_name_co___BuildSettings__Compiler(obj_ this_, obj_ value)
{
	Field_(program_name) = value;
	return value;
}


obj_ support_perform__BuildSettings__Compiler(obj_ this_)
{
	return Field_(support_perform);
}


obj_ support_perform_co___BuildSettings__Compiler(obj_ this_, obj_ value)
{
	Field_(support_perform) = value;
	return value;
}


obj_ target_co___BuildSettings__Compiler(obj_ this_, obj_ target)
{
	UsingSym_(C)
	UsingSym_(Jolt)
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "targeting-c")
	DefineString_(1, "true")
	DefineString_(2, "targeting-jolt")
	DefineString_(3, "targeting-jolt")
	DefineString_(4, "true")
	DefineString_(5, "targeting-c")
	UsingMethod_(at_co_put_co_) UsingMethod_(dictionary) UsingMethod_(targeting_c_co_) UsingMethod_(targeting_jolt_co_)

		{
		Switch_(target)
		if (SwitchMatches_(Sym_(C)))
			{
			t0_ = Call_(targeting_c_co_, this_, true_);
			t0_ = Call_(targeting_jolt_co_, this_, nil);
			t0_ = Call_(dictionary, this_);
			t1_ = Call_(at_co_put_co_, t0_, Str_(0), Str_(1));
			t0_ = Call_(dictionary, this_);
			t1_ = Call_(at_co_put_co_, t0_, Str_(2), nil);
			}
		else if (SwitchMatches_(Sym_(Jolt)))
			{
			t0_ = Call_(targeting_jolt_co_, this_, true_);
			t0_ = Call_(targeting_c_co_, this_, nil);
			t0_ = Call_(dictionary, this_);
			t1_ = Call_(at_co_put_co_, t0_, Str_(3), Str_(4));
			t0_ = Call_(dictionary, this_);
			t1_ = Call_(at_co_put_co_, t0_, Str_(5), nil);
			
			
			}
		EndSwitch_
		}
	return nil;
}


obj_ targeting_c__BuildSettings__Compiler(obj_ this_)
{
	return Field_(targeting_c);
}


obj_ targeting_c_co___BuildSettings__Compiler(obj_ this_, obj_ value)
{
	Field_(targeting_c) = value;
	return value;
}


obj_ targeting_jolt__BuildSettings__Compiler(obj_ this_)
{
	return Field_(targeting_jolt);
}


obj_ targeting_jolt_co___BuildSettings__Compiler(obj_ this_, obj_ value)
{
	Field_(targeting_jolt) = value;
	return value;
}


