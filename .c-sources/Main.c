#include "Trylon_.h"

UsingClass_(Standard)
static obj_ tu0_[];
UsingClass_(CCompiler) UsingClass_(Compiler) UsingClass_(Expression) UsingClass_(Interpreter) UsingClass_(Main) UsingClass_(References) UsingClass_(SilentStatusReporter) UsingClass_(Standard) UsingClass_(StatusReporter) UsingClass_(StdoutStatusReporter) UsingClass_(Trylon) UsingClass_(VT100StatusReporter) UsingClass_(X86Compiler) 
static obj_ tu1_[];
UsingSym_(Main)UsingClass_(Object__Standard)
UsingClass_(Main)
struct ClassInfo Main__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 25, 0, Proto_(Main), nil, Proto_(Object__Standard), ((obj_) tu0_), Sym_(Main), nil, ((obj_) tu1_) };
struct object Main = 
	{ &Main__classInfo_, {} };

	UsingInt_(1)
	UsingInt_(13)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(1), Proto_(Standard) };
static obj_ tu1_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(13), Proto_(CCompiler), Proto_(Compiler), Proto_(Expression), Proto_(Interpreter), Proto_(Main), Proto_(References), Proto_(SilentStatusReporter), Proto_(Standard), Proto_(StatusReporter), Proto_(StdoutStatusReporter), Proto_(Trylon), Proto_(VT100StatusReporter), Proto_(X86Compiler) };


DeclareSharedField_(compiler, Main, nil)

obj_ CCompiler__Main__accessor_(obj_ this_)
{
	UsingClass_(CCompiler)
	return Proto_(CCompiler);
}


obj_ Compiler__Main__accessor_(obj_ this_)
{
	UsingClass_(Compiler)
	return Proto_(Compiler);
}


obj_ Expression__Main__accessor_(obj_ this_)
{
	UsingClass_(Expression)
	return Proto_(Expression);
}


obj_ Interpreter__Main__accessor_(obj_ this_)
{
	UsingClass_(Interpreter)
	return Proto_(Interpreter);
}


obj_ Main__accessor_(obj_ this_)
{
	UsingClass_(Main)
	return Proto_(Main);
}


obj_ References__Main__accessor_(obj_ this_)
{
	UsingClass_(References)
	return Proto_(References);
}


obj_ SilentStatusReporter__Main__accessor_(obj_ this_)
{
	UsingClass_(SilentStatusReporter)
	return Proto_(SilentStatusReporter);
}


obj_ Standard__Main__accessor_(obj_ this_)
{
	UsingClass_(Standard)
	return Proto_(Standard);
}


obj_ StatusReporter__Main__accessor_(obj_ this_)
{
	UsingClass_(StatusReporter)
	return Proto_(StatusReporter);
}


obj_ StdoutStatusReporter__Main__accessor_(obj_ this_)
{
	UsingClass_(StdoutStatusReporter)
	return Proto_(StdoutStatusReporter);
}


obj_ Trylon__Main__accessor_(obj_ this_)
{
	UsingClass_(Trylon)
	return Proto_(Trylon);
}


obj_ VT100StatusReporter__Main__accessor_(obj_ this_)
{
	UsingClass_(VT100StatusReporter)
	return Proto_(VT100StatusReporter);
}


obj_ X86Compiler__Main__accessor_(obj_ this_)
{
	UsingClass_(X86Compiler)
	return Proto_(X86Compiler);
}


obj_ build_settings__Main(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(build_settings) UsingMethod_(compiler)

		{
		t0_ = Call_(compiler, this_);
		t1_ = Call_(build_settings, t0_);
		return t1_;
		}
	return nil;
}


obj_ compiler__Main(obj_ this_)
{
	return SharedField_(compiler, Main);
}


obj_ compiler_co___Main(obj_ this_, obj_ value)
{
	SetSharedField_(compiler, Main, value);
	return value;
}


obj_ debug_co___Main(obj_ this_, obj_ message)
{
	extern obj_ print_line_co___Standard(obj_ this_, obj_ line);
	obj_ t0_;
	UsingClass_(Standard)

		{
			{
			t0_ = print_line_co___Standard(Proto_(Standard), message);
			}
		}
	return nil;
}


obj_ dump_expr_co_level_co___Main(obj_ this_, obj_ expr, obj_ level)
{
	extern obj_ print_co___Standard(obj_ this_, obj_ strObj);
	extern obj_ print_line_co___Standard(obj_ this_, obj_ line);
	extern obj_ print_line_co___Standard(obj_ this_, obj_ line);
	extern obj_ print_line_co___Standard(obj_ this_, obj_ line);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	UsingInt_(0)
	UsingInt_(1)
	DefineString_(0, "                                   ")
	DefineString_(1, "Expression (")
	DefineString_(2, ")")
	DefineString_(3, "\"")
	DefineString_(4, "\"")
	UsingMethod_(_pl_) UsingMethod_(current_item) UsingMethod_(dump_expr_co_level_co_) UsingMethod_(go_forward) UsingMethod_(is_a_co_) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(num_items) UsingMethod_(string) UsingMethod_(substr_co_length_co_)
	UsingClass_(Expression)
	UsingClass_(Standard)
	UsingClass_(String__Standard)

		{
		t0_ = Call_(substr_co_length_co_, Str_(0), SmallInt_(0), level);
		t1_ = print_co___Standard(Proto_(Standard), t0_);
		t0_ = Call_(is_a_co_, expr, Proto_(Expression));
		if (t0_)
			{
			t0_ = Call_(num_items, expr);
			t1_ = Call_(string, t0_);
			t2_ = Call_(_pl_, Str_(1), t1_);
			t3_ = Call_(_pl_, t2_, Str_(2));
			t4_ = print_line_co___Standard(Proto_(Standard), t3_);
			ForStart_(0, expr, item)
				{
				t0_ = Call_(_pl_, level, SmallInt_(1));
				t1_ = Call_(dump_expr_co_level_co_, this_, item, t0_);
				}
			ForEnd_(0)
			}
		else
			{
			t0_ = Call_(is_a_co_, expr, Proto_(String__Standard));
			if (t0_)
				{
				t0_ = Call_(_pl_, Str_(3), expr);
				t1_ = Call_(_pl_, t0_, Str_(4));
				t2_ = print_line_co___Standard(Proto_(Standard), t1_);
				}
			else
				{
				t0_ = Call_(string, expr);
				t1_ = print_line_co___Standard(Proto_(Standard), t0_);
				}
			}
		}
	return nil;
}


obj_ dump_lines_co_level_co___Main(obj_ this_, obj_ lines, obj_ level)
{
	extern obj_ print_co___Standard(obj_ this_, obj_ strObj);
	extern obj_ print_co___Standard(obj_ this_, obj_ strObj);
	extern obj_ print_line_co___Standard(obj_ this_, obj_ line);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(1)
	DefineString_(0, "> ")
	UsingMethod_(_pl_) UsingMethod_(block) UsingMethod_(current_item) UsingMethod_(dump_lines_co_level_co_) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(string) UsingMethod_(text)
	UsingClass_(Standard)

		{
		ForStart_(0, lines, line)
			{
			t0_ = Call_(string, level);
			t1_ = print_co___Standard(Proto_(Standard), t0_);
			t0_ = print_co___Standard(Proto_(Standard), Str_(0));
			t0_ = Call_(text, line);
			t1_ = print_line_co___Standard(Proto_(Standard), t0_);
			t0_ = Call_(block, line);
			if (t0_)
				{
				t0_ = Call_(block, line);
				t1_ = Call_(_pl_, level, SmallInt_(1));
				t2_ = Call_(dump_lines_co_level_co_, this_, t0_, t1_);
				}
			}
		ForEnd_(0)
		}
	return nil;
}


obj_ lex_test_co___Main(obj_ this_, obj_ filename)
{
	extern obj_ new_co___Lexer__Compiler(obj_ this_, obj_ text);
	extern obj_ new_co___File__Standard(obj_ this_, obj_ path);
	extern obj_ print_co___Standard(obj_ this_, obj_ strObj);
	extern obj_ print_co___Standard(obj_ this_, obj_ strObj);
	extern obj_ print_co___Standard(obj_ this_, obj_ strObj);
	extern obj_ print_line__Standard(obj_ this_);
	UsingSym_(eof)
	extern obj_ print_line_co___Standard(obj_ this_, obj_ line);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, ": ")
	DefineString_(1, "Error: ")
	UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(contents) UsingMethod_(is_empty) UsingMethod_(message) UsingMethod_(next_token) UsingMethod_(text) UsingMethod_(type)
	UsingClass_(File__Standard)
	UsingClass_(Lexer__Compiler)
	UsingClass_(Standard)

		{
		Try_
			{
			obj_ lexer;
			t0_ = new_co___File__Standard(Proto_(File__Standard), filename);
			t1_ = Call_(contents, t0_);
			t2_ = new_co___Lexer__Compiler(Proto_(Lexer__Compiler), t1_);
			lexer = t2_;
			while (1) {
				ContinuePoint_(0)
				{
				obj_ token;
				t0_ = Call_(next_token, lexer);
				token = t0_;
				t0_ = Call_(type, token);
				t1_ = print_co___Standard(Proto_(Standard), t0_);
				t0_ = Call_(text, token);
				if (t0_) {
					t1_ = Call_(text, token);
					t2_ = Call_(is_empty, t1_);
					t3_ = Not_(t2_);
					t0_ = t3_;
					}
				if (t0_)
					{
					t0_ = print_co___Standard(Proto_(Standard), Str_(0));
					t0_ = Call_(text, token);
					t1_ = print_co___Standard(Proto_(Standard), t0_);
					}
				t0_ = print_line__Standard(Proto_(Standard));
				t0_ = Call_(type, token);
				t1_ = Call_(_eq__eq_, t0_, Sym_(eof));
				if (t1_)
					{
					Break_(0)
					}
				}
			}
			}
		TryElse_
			{
			t0_ = Call_(message, exception);
			t1_ = Call_(_pl_, Str_(1), t0_);
			t2_ = print_line_co___Standard(Proto_(Standard), t1_);
			}
		EndTry_
		}
	return nil;
}


obj_ log_indent__Main(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(indent) UsingMethod_(status_reporter)

		{
		t0_ = Call_(status_reporter, this_);
		t1_ = Call_(indent, t0_);
		}
	return nil;
}


obj_ log_unindent__Main(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(status_reporter) UsingMethod_(unindent)

		{
		t0_ = Call_(status_reporter, this_);
		t1_ = Call_(unindent, t0_);
		}
	return nil;
}


obj_ log_co___Main(obj_ this_, obj_ message)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(report_co_) UsingMethod_(status_reporter)

		{
		t0_ = Call_(status_reporter, this_);
		t1_ = Call_(report_co_, t0_, message);
		}
	return nil;
}


obj_ main_co___Main(obj_ this_, obj_ arguments)
{
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	extern obj_ load_co_into_co_as_co___X86Compiler(obj_ this_, obj_ file_path, obj_ proto, obj_ name);
	extern obj_ interpret_co___Interpreter(obj_ this_, obj_ code);
	extern obj_ contents_of_co___File__Standard(obj_ this_, obj_ path);
	extern obj_ compile_co___Compiler(obj_ this_, obj_ compile_symbols);
	extern obj_ print_line_co___Standard(obj_ this_, obj_ line);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(0)
	UsingInt_(2)
	UsingInt_(1)
	DefineString_(0, "--")
	DefineString_(1, "--lex-test")
	DefineString_(2, "--test-coke-lexer")
	DefineString_(3, "--test-words-lexer")
	DefineString_(4, "--test-lines-lexer")
	DefineString_(5, "--run-class")
	DefineString_(6, "-r")
	DefineString_(7, "--verbose")
	DefineString_(8, "--target-c")
	DefineString_(9, "--target-jolt")
	DefineString_(10, "Unknown option: ")
	DefineString_(11, "-i")
	DefineString_(12, "Script")
	UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(Script) UsingMethod_(append_co_) UsingMethod_(current_item) UsingMethod_(first_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(is_empty) UsingMethod_(iterator) UsingMethod_(lex_test_co_) UsingMethod_(main_co_) UsingMethod_(message) UsingMethod_(starts_with_co_) UsingMethod_(substr_co_) UsingMethod_(tail) UsingMethod_(test_coke_lexer_co_) UsingMethod_(test_lines_lexer_co_) UsingMethod_(test_words_lexer_co_)
	UsingClass_(Compiler)
	UsingClass_(File__Standard)
	UsingClass_(Interpreter)
	UsingClass_(List__Standard)
	UsingClass_(Main)
	UsingClass_(MessageException__Standard)
	UsingClass_(Standard)
	UsingClass_(X86Compiler)

		{
		obj_ return_value;
		return_value = SmallInt_(0);
		Try_
			{
			obj_ compile_symbols, do_coke_lexer_test, do_lex_test, do_lines_lexer_test, do_words_lexer_test, file_names, interpret, pass_remaining_args;
			/*  Parse the arguments. */
			t0_ = new__List__Standard(Proto_(List__Standard));
			file_names = t0_;
			t0_ = new__List__Standard(Proto_(List__Standard));
			compile_symbols = t0_;
			do_lex_test = nil;
			do_coke_lexer_test = nil;
			do_words_lexer_test = nil;
			do_lines_lexer_test = nil;
			interpret = nil;
			pass_remaining_args = nil;
			t0_ = Call_(tail, arguments);
			ForStart_(0, t0_, arg)
				{
				t0_ = Call_(starts_with_co_, arg, Str_(0));
				if (t0_) {
					t1_ = Not_(pass_remaining_args);
					t0_ = t1_;
					}
				if (t0_)
					{
					t0_ = Call_(substr_co_, arg, SmallInt_(2));
					t1_ = Call_(append_co_, compile_symbols, t0_);
					t0_ = Call_(_eq__eq_, arg, Str_(1));
					if (t0_)
						{
						do_lex_test = true_;
						}
					else
						{
						t0_ = Call_(_eq__eq_, arg, Str_(2));
						if (t0_)
							{
							do_coke_lexer_test = true_;
							}
						else
							{
							t0_ = Call_(_eq__eq_, arg, Str_(3));
							if (t0_)
								{
								do_words_lexer_test = true_;
								}
							else
								{
								t0_ = Call_(_eq__eq_, arg, Str_(4));
								if (t0_)
									{
									do_lines_lexer_test = true_;
									}
								else
									{
									t0_ = Call_(_eq__eq_, arg, Str_(5));
									if ((t0_) == nil) {
										t1_ = Call_(_eq__eq_, arg, Str_(6));
										t0_ = t1_;
										}
									if (t0_)
										{
										interpret = nil;
										pass_remaining_args = true_;
										}
									else
										{
										t0_ = Call_(_eq__eq_, arg, Str_(7));
										if ((t0_) == nil) {
											t1_ = Call_(_eq__eq_, arg, Str_(8));
											t0_ = t1_;
											}
										if ((t0_) == nil) {
											t2_ = Call_(_eq__eq_, arg, Str_(9));
											t0_ = t2_;
											}
										if (t0_)
											{
											/*  Allowed. */
											}
										else
											{
											t0_ = Call_(_pl_, Str_(10), arg);
											t1_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), t0_);
											Throw_(t1_);
											}
										}
									}
								}
							}
						}
					}
				else
					{
					t2_ = Call_(_eq__eq_, arg, Str_(11));
					if (t2_) {
						t3_ = Not_(pass_remaining_args);
						t2_ = t3_;
						}
					if (t2_)
						{
						interpret = true_;
						}
					else
						{
						t0_ = Not_(interpret);
						if (t0_)
							{
							pass_remaining_args = true_;
							}
						t0_ = Call_(append_co_, file_names, arg);
						}
					}
				}
			ForEnd_(0)
			
			if (do_lex_test)
				{
				t0_ = Call_(tail, arguments);
				t1_ = Call_(tail, t0_);
				ForStart_(1, t1_, arg)
					{
					t0_ = Call_(lex_test_co_, this_, arg);
					}
				ForEnd_(1)
				}
			else
				{
				if (do_coke_lexer_test)
					{
					t0_ = Call_(tail, arguments);
					t1_ = Call_(tail, t0_);
					ForStart_(2, t1_, arg)
						{
						t0_ = Call_(test_coke_lexer_co_, this_, arg);
						}
					ForEnd_(2)
					}
				else
					{
					if (do_words_lexer_test)
						{
						t0_ = Call_(tail, arguments);
						t1_ = Call_(tail, t0_);
						ForStart_(3, t1_, arg)
							{
							t0_ = Call_(test_words_lexer_co_, this_, arg);
							}
						ForEnd_(3)
						}
					else
						{
						if (do_lines_lexer_test)
							{
							t0_ = Call_(tail, arguments);
							t1_ = Call_(tail, t0_);
							ForStart_(4, t1_, arg)
								{
								t0_ = Call_(test_lines_lexer_co_, this_, arg);
								}
							ForEnd_(4)
							}
						else
							{
							t0_ = Call_(is_empty, file_names);
							t1_ = Not_(t0_);
							if (t1_)
								{
								t0_ = Not_(interpret);
								if (t0_)
									{
										{
										obj_ script_path;
										t0_ = Call_(first_item, file_names);
										script_path = t0_;
										t0_ = load_co_into_co_as_co___X86Compiler(Proto_(X86Compiler), script_path, Proto_(Main), Str_(12));
										t0_ = Call_(Script, Proto_(Main));
										t1_ = Call_(main_co_, t0_, file_names);
										 	/*  'file-names' is really the arguments. */
										}
									}
								else
									{
									ForStart_(5, file_names, file_name)
										{
										t0_ = contents_of_co___File__Standard(Proto_(File__Standard), file_name);
										t1_ = interpret_co___Interpreter(Proto_(Interpreter), t0_);
										}
									ForEnd_(5)
									}
								}
							else
								{
								t0_ = compile_co___Compiler(Proto_(Compiler), compile_symbols);
								return_value = t0_;
								}
							}
						}
					}
				}
			
			
			}
		TryElse_
			{
			t0_ = Call_(message, exception);
			t1_ = print_line_co___Standard(Proto_(Standard), t0_);
			return SmallInt_(1);
			}
		EndTry_
		
		
		return return_value;
		}
	return nil;
}


obj_ references__Main(obj_ this_)
{
	UsingClass_(CCompiler)
	UsingClass_(Interpreter)
	UsingClass_(Test__Standard)
	UsingClass_(X86Compiler)

		{
		/*  Make sure these get loaded up; the old Trylon 1 compiler didn't like if if */
		/*  the extensions came too late. */
			{
			/*  Nice things to have for scripts, that aren't already used by the compiler */
			/*  itself: */
			}
		}
	return nil;
}


obj_ status_reporter__Main(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(compiler) UsingMethod_(status_reporter)

		{
		t0_ = Call_(compiler, this_);
		t1_ = Call_(status_reporter, t0_);
		return t1_;
		}
	return nil;
}


obj_ test_coke_lexer_co___Main(obj_ this_, obj_ filename)
{
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co___File__Standard(obj_ this_, obj_ path);
	extern obj_ new_co___CokeLexer__Compiler(obj_ this_, obj_ lines);
	extern obj_ print_line__Standard(obj_ this_);
	extern obj_ print_line_co___Standard(obj_ this_, obj_ line);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(0)
	DefineString_(0, "Error: ")
	UsingMethod_(_pl_) UsingMethod_(append_co_) UsingMethod_(contents) UsingMethod_(current_item) UsingMethod_(dump_expr_co_level_co_) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(lines) UsingMethod_(message) UsingMethod_(next_expr)
	UsingClass_(CokeLexer__Compiler)
	UsingClass_(File__Standard)
	UsingClass_(List__Standard)
	UsingClass_(Standard)

		{
		Try_
			{
			obj_ lexer, lines;
			t0_ = new__List__Standard(Proto_(List__Standard));
			lines = t0_;
			t0_ = new_co___File__Standard(Proto_(File__Standard), filename);
			t1_ = Call_(contents, t0_);
			t2_ = Call_(lines, t1_);
			ForStart_(0, t2_, line)
				{
				t0_ = Call_(append_co_, lines, line);
				}
			ForEnd_(0)
			t0_ = new_co___CokeLexer__Compiler(Proto_(CokeLexer__Compiler), lines);
			lexer = t0_;
			while (1) {
				ContinuePoint_(1)
				{
				obj_ expr;
				t0_ = Call_(next_expr, lexer);
				expr = t0_;
				t0_ = Not_(expr);
				if (t0_)
					{
					Break_(1)
					}
				t0_ = Call_(dump_expr_co_level_co_, this_, expr, SmallInt_(0));
				t0_ = print_line__Standard(Proto_(Standard));
				}
			}
			}
		TryElse_
			{
			t0_ = Call_(message, exception);
			t1_ = Call_(_pl_, Str_(0), t0_);
			t2_ = print_line_co___Standard(Proto_(Standard), t1_);
			}
		EndTry_
		}
	return nil;
}


obj_ test_lines_lexer_co___Main(obj_ this_, obj_ filename)
{
	extern obj_ new_co___LinesLexer__Trylon(obj_ this_, obj_ text);
	extern obj_ new_co___File__Standard(obj_ this_, obj_ path);
	extern obj_ print_line_co___Standard(obj_ this_, obj_ line);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(0)
	DefineString_(0, "Error: ")
	UsingMethod_(_pl_) UsingMethod_(contents) UsingMethod_(dump_lines_co_level_co_) UsingMethod_(lex) UsingMethod_(message)
	UsingClass_(File__Standard)
	UsingClass_(LinesLexer__Trylon)
	UsingClass_(Standard)

		{
		Try_
			{
			obj_ lexer, lines;
			t0_ = new_co___File__Standard(Proto_(File__Standard), filename);
			t1_ = Call_(contents, t0_);
			t2_ = new_co___LinesLexer__Trylon(Proto_(LinesLexer__Trylon), t1_);
			lexer = t2_;
			t0_ = Call_(lex, lexer);
			lines = t0_;
			t0_ = Call_(dump_lines_co_level_co_, this_, lines, SmallInt_(0));
			}
		TryElse_
			{
			t0_ = Call_(message, exception);
			t1_ = Call_(_pl_, Str_(0), t0_);
			t2_ = print_line_co___Standard(Proto_(Standard), t1_);
			}
		EndTry_
		}
	return nil;
}


obj_ test_words_lexer_co___Main(obj_ this_, obj_ filename)
{
	extern obj_ new_co___File__Standard(obj_ this_, obj_ path);
	extern obj_ new_co___WordsLexer__Trylon(obj_ this_, obj_ string);
	extern obj_ print_line_co___Standard(obj_ this_, obj_ line);
	extern obj_ print_line_co___Standard(obj_ this_, obj_ line);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "Error: ")
	UsingMethod_(_pl_) UsingMethod_(contents) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(lines) UsingMethod_(message) UsingMethod_(next)
	UsingClass_(File__Standard)
	UsingClass_(Standard)
	UsingClass_(WordsLexer__Trylon)

		{
		Try_
			{
			t0_ = new_co___File__Standard(Proto_(File__Standard), filename);
			t1_ = Call_(contents, t0_);
			t2_ = Call_(lines, t1_);
			ForStart_(0, t2_, line)
				{
				obj_ lexer;
				t0_ = new_co___WordsLexer__Trylon(Proto_(WordsLexer__Trylon), line);
				lexer = t0_;
				while (1) {
					ContinuePoint_(1)
					t0_ = Call_(is_done, lexer);
					t1_ = Not_(t0_);
					if (!(t1_))
						Break_(1)
					{
					t0_ = Call_(next, lexer);
					t1_ = print_line_co___Standard(Proto_(Standard), t0_);
					}
					}
				}
			ForEnd_(0)
			}
		TryElse_
			{
			t0_ = Call_(message, exception);
			t1_ = Call_(_pl_, Str_(0), t0_);
			t2_ = print_line_co___Standard(Proto_(Standard), t1_);
			}
		EndTry_
		}
	return nil;
}


