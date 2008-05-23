#include "Trylon_.h"

UsingSym_(Parser)UsingClass_(Compiler)
UsingClass_(Object__Standard)
UsingClass_(Parser__Compiler)
struct ClassInfo Parser__Compiler__classInfo_ = 
	{ 82, 20, Proto_(Parser__Compiler), Proto_(Compiler), Proto_(Object__Standard), nil, Sym_(Parser) ,nil };
struct object Parser__Compiler = 
	{ &Parser__Compiler__classInfo_, {nil, nil, nil, nil, nil} };


#define context__fld_	(0)
#define lexer__fld_	(1)
#define current_token__fld_	(2)
#define next_token__fld_	(3)
#define third_token__fld_	(4)


obj_ at_name_co___Parser__Compiler(obj_ this_, obj_ name)
{
	UsingSym_(name)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	UsingMethod_(_eq__eq_) UsingMethod_(current_token) UsingMethod_(text)

		{
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_eq__eq_, t0_, Sym_(name));
		if (t1_) {
			t2_ = Call_(current_token, this_);
			t3_ = Call_(text, t2_);
			t4_ = Call_(_eq__eq_, t3_, name);
			t1_ = t4_;
			}
		return t1_;
		
		
		}
	return nil;
}


obj_ check_iff__Parser__Compiler(obj_ this_)
{
	UsingSym_(_nt_)
	UsingSym_(name)
	extern obj_ build_settings__Main(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "Illegal \"iff\".")
	UsingMethod_(_nt__eq_) UsingMethod_(_eq__eq_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(has_symbol_co_) UsingMethod_(parse_error_co_) UsingMethod_(require_eol) UsingMethod_(skip_block) UsingMethod_(text)
	UsingClass_(Main)

		{
		obj_ invert_sense, name, test_succeeded;
		t0_ = Call_(consume_token, this_);
		 	/* "iff" */
		
		/* Check for "!". */
		invert_sense = nil;
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_eq__eq_, t0_, Sym_(_nt_));
		if (t1_)
			{
			t0_ = Call_(consume_token, this_);
			invert_sense = true_;
			
			}
		/* Get the name. */
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_nt__eq_, t0_, Sym_(name));
		if (t1_)
			{
			t0_ = Call_(parse_error_co_, this_, Str_(0));
			}
		t0_ = Call_(current_token, this_);
		t1_ = Call_(text, t0_);
		name = t1_;
		t0_ = Call_(consume_token, this_);
		t0_ = Call_(require_eol, this_);
		
		/* If it doesn't exist, skip the block. */
		t0_ = build_settings__Main(Proto_(Main));
		t1_ = Call_(has_symbol_co_, t0_, name);
		test_succeeded = t1_;
		if (invert_sense)
			{
			t0_ = Not_(test_succeeded);
			test_succeeded = t0_;
			}
		t0_ = Not_(test_succeeded);
		if (t0_)
			{
			t0_ = Call_(skip_block, this_);
			return nil;
			
			}
		/* If it does exist, the caller will parse the block. */
		return true_;
		
		
		}
	return nil;
}


obj_ consume_token__Parser__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(current_token_co_) UsingMethod_(lexer) UsingMethod_(next_token) UsingMethod_(next_token_co_) UsingMethod_(third_token) UsingMethod_(third_token_co_)

		{
		t0_ = Call_(next_token, this_);
		t1_ = Call_(current_token_co_, this_, t0_);
		t0_ = Call_(third_token, this_);
		if (t0_)
			{
			t0_ = Call_(third_token, this_);
			t1_ = Call_(next_token_co_, this_, t0_);
			t0_ = Call_(third_token_co_, this_, nil);
			}
		else
			{
			t0_ = Call_(lexer, this_);
			t1_ = Call_(next_token, t0_);
			t2_ = Call_(next_token_co_, this_, t1_);
			
			
			}
		}
	return nil;
}


obj_ context__Parser__Compiler(obj_ this_)
{
	return Field_(context);
}


obj_ context_co___Parser__Compiler(obj_ this_, obj_ value)
{
	Field_(context) = value;
	return value;
}


obj_ create_co_context_co___Parser__Compiler(obj_ this_, obj_ source, obj_ context)
{
	extern obj_ new_co___Lexer__Compiler(obj_ this_, obj_ text);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(context_co_) UsingMethod_(current_token_co_) UsingMethod_(lexer) UsingMethod_(lexer_co_) UsingMethod_(next_token) UsingMethod_(next_token_co_)
	UsingClass_(Lexer__Compiler)

		{
		t0_ = new_co___Lexer__Compiler(Proto_(Lexer__Compiler), source);
		t1_ = Call_(lexer_co_, this_, t0_);
		t0_ = Call_(context_co_, this_, context);
		
		/* Load up the first tokens. */
		t0_ = Call_(lexer, this_);
		t1_ = Call_(next_token, t0_);
		t2_ = Call_(current_token_co_, this_, t1_);
		t0_ = Call_(lexer, this_);
		t1_ = Call_(next_token, t0_);
		t2_ = Call_(next_token_co_, this_, t1_);
		
		
		
		}
	return nil;
}


obj_ current_block__Parser__Compiler(obj_ this_)
{
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "Internal error: Current context isn't a block.")
	UsingMethod_(context) UsingMethod_(is_a_co_)
	UsingClass_(MessageException__Standard)
	UsingClass_(Block__Compiler)

		{
		t0_ = Call_(context, this_);
		t1_ = Call_(is_a_co_, t0_, Proto_(Block__Compiler));
		t2_ = Not_(t1_);
		if (t2_)
			{
			t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(0));
			Throw_(t0_);
			}
		t1_ = Call_(context, this_);
		return t1_;
		
		
		}
	return nil;
}


obj_ current_token__Parser__Compiler(obj_ this_)
{
	return Field_(current_token);
}


obj_ current_token_co___Parser__Compiler(obj_ this_, obj_ value)
{
	Field_(current_token) = value;
	return value;
}


obj_ expression_expected_after_co___Parser__Compiler(obj_ this_, obj_ after)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "Expression expected after \"")
	DefineString_(1, "\".")
	UsingMethod_(_pl_) UsingMethod_(parse_error_co_) UsingMethod_(string)

		{
		t0_ = Call_(string, after);
		t1_ = Call_(_pl_, Str_(0), t0_);
		t2_ = Call_(_pl_, t1_, Str_(1));
		t3_ = Call_(parse_error_co_, this_, t2_);
		
		}
	return nil;
}


obj_ get_subblock__Parser__Compiler(obj_ this_)
{
	extern obj_ new__StringBuilder__Standard(obj_ this_);
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	UsingSym_(eol)
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	UsingSym_(indent)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "Internal: tried to get an subblock when there was a third-token.")
	DefineString_(1, "Internal: No eol before a subblock.")
	UsingMethod_(_nt__eq_) UsingMethod_(_pl_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(current_token_co_) UsingMethod_(first_subblock_line) UsingMethod_(lexer) UsingMethod_(next_token) UsingMethod_(next_token_co_) UsingMethod_(subblock_line) UsingMethod_(third_token)
	UsingClass_(MessageException__Standard)
	UsingClass_(StringBuilder__Standard)

		{
		obj_ block;
		/* Returns a StringBuilder */
		t0_ = new__StringBuilder__Standard(Proto_(StringBuilder__Standard));
		block = t0_;
		
		/* Be careful about our readahead.  We need to see an eol, and then (if */
		/* there's anything in the subblock) an indent.  We can't read ahead after */
		/* that, because we need to make special lexer calls. */
		t0_ = Call_(third_token, this_);
		if (t0_)
			{
			t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(0));
			Throw_(t0_);
			}
		t1_ = Call_(current_token, this_);
		t2_ = Call_(_nt__eq_, t1_, Sym_(eol));
		if (t2_)
			{
			t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(1));
			Throw_(t0_);
			}
		t1_ = Call_(next_token, this_);
		t2_ = Call_(_nt__eq_, t1_, Sym_(indent));
		if (t2_)
			{
			t0_ = Call_(consume_token, this_);
			 	/* 'eol' */
			return block;
			}
		t0_ = Call_(current_token_co_, this_, nil);
		t0_ = Call_(next_token_co_, this_, nil);
		
		/* Read the block. */
		t0_ = Call_(lexer, this_);
		t1_ = Call_(first_subblock_line, t0_);
		t2_ = Call_(_pl_, block, t1_);
		block = t2_;
		while (1) {
			ContinuePoint_(0)
			{
			obj_ line;
			t0_ = Call_(lexer, this_);
			t1_ = Call_(subblock_line, t0_);
			line = t1_;
			t0_ = Not_(line);
			if (t0_)
				{
				Break_(0)
				}
			t0_ = Call_(_pl_, block, line);
			block = t0_;
			
			}
		}
		/* Return to regular parsing. */
		t0_ = Call_(lexer, this_);
		t1_ = Call_(next_token, t0_);
		t2_ = Call_(current_token_co_, this_, t1_);
		t0_ = Call_(lexer, this_);
		t1_ = Call_(next_token, t0_);
		t2_ = Call_(next_token_co_, this_, t1_);
		return block;
		
		
		}
	return nil;
}


obj_ indent__Parser__Compiler(obj_ this_)
{
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ status_reporter__Main(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(indent)
	UsingClass_(Main)

		{
		t0_ = status_reporter__Main(Proto_(Main));
		if (t0_)
			{
			t0_ = status_reporter__Main(Proto_(Main));
			t1_ = Call_(indent, t0_);
			}
		}
	return nil;
}


obj_ lexer__Parser__Compiler(obj_ this_)
{
	return Field_(lexer);
}


obj_ lexer_co___Parser__Compiler(obj_ this_, obj_ value)
{
	Field_(lexer) = value;
	return value;
}


obj_ make_binop_call_co_with_co_and_co___Parser__Compiler(obj_ this_, obj_ name, obj_ object, obj_ argument)
{
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co_object_co_arguments_co___Send__Compiler(obj_ this_, obj_ name, obj_ object, obj_ arguments);
	obj_ t0_;
	UsingMethod_(append_co_)
	UsingClass_(List__Standard)
	UsingClass_(Send__Compiler)

		{
		obj_ arguments;
		t0_ = new__List__Standard(Proto_(List__Standard));
		arguments = t0_;
		t0_ = Call_(append_co_, arguments, argument);
		t0_ = new_co_object_co_arguments_co___Send__Compiler(Proto_(Send__Compiler), name, object, arguments);
		return t0_;
		
		
		}
	return nil;
}


obj_ new_co_context_co___Parser__Compiler(obj_ this_, obj_ source, obj_ context)
{
	UsingClass_(Parser__Compiler)
	obj_ obj = AllocObj_(Parser__Compiler);
	create_co_context_co___Parser__Compiler(obj, source, context);
	return obj;
}


obj_ next_token__Parser__Compiler(obj_ this_)
{
	return Field_(next_token);
}


obj_ next_token_co___Parser__Compiler(obj_ this_, obj_ value)
{
	Field_(next_token) = value;
	return value;
}


obj_ parse_additive_expression__Parser__Compiler(obj_ this_)
{
	UsingSym_(_pl_)
	UsingSym_(_)
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_eq__eq_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(expression_expected_after_co_) UsingMethod_(make_binop_call_co_with_co_and_co_) UsingMethod_(parse_multiplicative_expression) UsingMethod_(type)

		{
		obj_ expr, token;
		t0_ = Call_(parse_multiplicative_expression, this_);
		expr = t0_;
		t0_ = Not_(expr);
		if (t0_)
			{
			return nil;
			
			}
		t0_ = Call_(current_token, this_);
		t1_ = Call_(type, t0_);
		token = t1_;
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(_eq__eq_, token, Sym_(_pl_));
			if ((t0_) == nil) {
				t1_ = Call_(_eq__eq_, token, Sym_(_));
				t0_ = t1_;
				}
			if (!(t0_))
				Break_(0)
			{
			obj_ expr2;
			t0_ = Call_(consume_token, this_);
			t0_ = Call_(parse_multiplicative_expression, this_);
			expr2 = t0_;
			t0_ = Not_(expr2);
			if (t0_)
				{
				t0_ = Call_(expression_expected_after_co_, this_, token);
				}
			t0_ = Call_(make_binop_call_co_with_co_and_co_, this_, token, expr, expr2);
			expr = t0_;
			
			t0_ = Call_(current_token, this_);
			t1_ = Call_(type, t0_);
			token = t1_;
			
			}
			}
		return expr;
		
		
		}
	return nil;
}


obj_ parse_and_expression__Parser__Compiler(obj_ this_)
{
	UsingSym_(_an_)
	UsingSym_(_an_)
	UsingSym_(_an_)
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_eq__eq_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(expression_expected_after_co_) UsingMethod_(make_binop_call_co_with_co_and_co_) UsingMethod_(parse_equality_expression)

		{
		obj_ expr;
		t0_ = Call_(parse_equality_expression, this_);
		expr = t0_;
		t0_ = Not_(expr);
		if (t0_)
			{
			return nil;
			
			}
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_eq__eq_, t0_, Sym_(_an_));
			if (!(t1_))
				Break_(0)
			{
			obj_ expr2;
			t0_ = Call_(consume_token, this_);
			t0_ = Call_(parse_equality_expression, this_);
			expr2 = t0_;
			t0_ = Not_(expr2);
			if (t0_)
				{
				t0_ = Call_(expression_expected_after_co_, this_, Sym_(_an_));
				}
			t0_ = Call_(make_binop_call_co_with_co_and_co_, this_, Sym_(_an_), expr, expr2);
			expr = t0_;
			
			}
			}
		return expr;
		
		
		}
	return nil;
}


obj_ parse_arg_type__Parser__Compiler(obj_ this_)
{
	UsingSym_(_in_)
	UsingSym_(_dx_)
	UsingSym_(_40_)
	UsingSym_(_41_)
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "Missing \"]\".")
	DefineString_(1, "Missing \")\".")
	UsingMethod_(_nt__eq_) UsingMethod_(_eq__eq_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(parse_error_co_) UsingMethod_(parse_type_spec)

		{
		obj_ arg_type;
		arg_type = nil;
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_eq__eq_, t0_, Sym_(_in_));
		if (t1_)
			{
			/* Type is specified. */
			t0_ = Call_(consume_token, this_);
			t0_ = Call_(parse_type_spec, this_);
			arg_type = t0_;
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_nt__eq_, t0_, Sym_(_dx_));
			if (t1_)
				{
				t0_ = Call_(parse_error_co_, this_, Str_(0));
				}
			t0_ = Call_(consume_token, this_);
			}
		else
			{
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_eq__eq_, t0_, Sym_(_40_));
			if (t1_)
				{
				t0_ = Call_(consume_token, this_);
				t0_ = Call_(parse_type_spec, this_);
				arg_type = t0_;
				t0_ = Call_(current_token, this_);
				t1_ = Call_(_nt__eq_, t0_, Sym_(_41_));
				if (t1_)
					{
					t0_ = Call_(parse_error_co_, this_, Str_(1));
					}
				t0_ = Call_(consume_token, this_);
				}
			}
		return arg_type;
		
		
		}
	return nil;
}


obj_ parse_assignment_expression__Parser__Compiler(obj_ this_)
{
	UsingSym_(_eq_)
	UsingSym_(_pl__eq_)
	UsingSym_(__eq_)
	UsingSym_(_st__eq_)
	UsingSym_(_dv__eq_)
	UsingSym_(_pc__eq_)
	UsingSym_(_gt__gt__eq_)
	UsingSym_(_lt__lt__eq_)
	UsingSym_(_an__eq_)
	UsingSym_(_or__eq_)
	UsingSym_(_xr__eq_)
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co_object_co_arguments_co___Send__Compiler(obj_ this_, obj_ name, obj_ object, obj_ arguments);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	obj_ t7_;
	obj_ t8_;
	obj_ t9_;
	DefineInt_(0, 0)
	DefineInt_(1, 1)
	DefineString_(0, "Illegal assignment.")
	DefineString_(1, "Illegal assignment.")
	UsingMethod_(_) UsingMethod_(_eq__eq_) UsingMethod_(append_co_) UsingMethod_(consume_token) UsingMethod_(convert_to_setter_call_co_) UsingMethod_(copy) UsingMethod_(current_token) UsingMethod_(expression_expected_after_co_) UsingMethod_(is_a_co_) UsingMethod_(length) UsingMethod_(parse_assignment_expression) UsingMethod_(parse_dict_literal_expression) UsingMethod_(parse_error_co_) UsingMethod_(parse_logical_or_expression) UsingMethod_(string) UsingMethod_(substr_co_length_co_) UsingMethod_(type)
	UsingClass_(List__Standard)
	UsingClass_(FunctionCall__Compiler)
	UsingClass_(Send__Compiler)

		{
		obj_ expr, expr2, token;
		/* At the top level are the '=' expressions. */
		
		t0_ = Call_(parse_logical_or_expression, this_);
		expr = t0_;
		t0_ = Not_(expr);
		if (t0_)
			{
			return nil;
			
			}
		expr2 = nil;
		
		t0_ = Call_(current_token, this_);
		t1_ = Call_(type, t0_);
		token = t1_;
		t0_ = Call_(_eq__eq_, token, Sym_(_eq_));
		if (t0_)
			{
			t0_ = Call_(consume_token, this_);
			t0_ = Call_(is_a_co_, expr, Proto_(FunctionCall__Compiler));
			t1_ = Not_(t0_);
			if (t1_) {
				t2_ = Call_(is_a_co_, expr, Proto_(Send__Compiler));
				t3_ = Not_(t2_);
				t1_ = t3_;
				}
			if (t1_)
				{
				t0_ = Call_(parse_error_co_, this_, Str_(0));
				}
			t0_ = Call_(parse_dict_literal_expression, this_);
			expr2 = t0_;
			t0_ = Not_(expr2);
			if (t0_)
				{
				t0_ = Call_(expression_expected_after_co_, this_, token);
				}
			t0_ = Call_(is_a_co_, expr, Proto_(FunctionCall__Compiler));
			if ((t0_) == nil) {
				t1_ = Call_(is_a_co_, expr, Proto_(Send__Compiler));
				t0_ = t1_;
				}
			if (t0_)
				{
				t0_ = Call_(convert_to_setter_call_co_, expr, expr2);
				
				}
			}
		else
			{
			t0_ = Call_(_eq__eq_, token, Sym_(_pl__eq_));
			if ((t0_) == nil) {
				t1_ = Call_(_eq__eq_, token, Sym_(__eq_));
				t0_ = t1_;
				}
			if ((t0_) == nil) {
				t2_ = Call_(_eq__eq_, token, Sym_(_st__eq_));
				t0_ = t2_;
				}
			if ((t0_) == nil) {
				t3_ = Call_(_eq__eq_, token, Sym_(_dv__eq_));
				t0_ = t3_;
				}
			if ((t0_) == nil) {
				t4_ = Call_(_eq__eq_, token, Sym_(_pc__eq_));
				t0_ = t4_;
				}
			if ((t0_) == nil) {
				t5_ = Call_(_eq__eq_, token, Sym_(_gt__gt__eq_));
				t0_ = t5_;
				}
			if ((t0_) == nil) {
				t6_ = Call_(_eq__eq_, token, Sym_(_lt__lt__eq_));
				t0_ = t6_;
				}
			if ((t0_) == nil) {
				t7_ = Call_(_eq__eq_, token, Sym_(_an__eq_));
				t0_ = t7_;
				}
			if ((t0_) == nil) {
				t8_ = Call_(_eq__eq_, token, Sym_(_or__eq_));
				t0_ = t8_;
				}
			if ((t0_) == nil) {
				t9_ = Call_(_eq__eq_, token, Sym_(_xr__eq_));
				t0_ = t9_;
				}
			if (t0_)
				{
				obj_ arguments, call, token_string;
				t0_ = Call_(consume_token, this_);
				t0_ = Call_(is_a_co_, expr, Proto_(FunctionCall__Compiler));
				t1_ = Not_(t0_);
				if (t1_) {
					t2_ = Call_(is_a_co_, expr, Proto_(Send__Compiler));
					t3_ = Not_(t2_);
					t1_ = t3_;
					}
				if (t1_)
					{
					t0_ = Call_(parse_error_co_, this_, Str_(1));
					}
				t0_ = Call_(parse_assignment_expression, this_);
				expr2 = t0_;
				t0_ = Not_(expr2);
				if (t0_)
					{
					t0_ = Call_(expression_expected_after_co_, this_, token);
					}
				t0_ = new__List__Standard(Proto_(List__Standard));
				arguments = t0_;
				t0_ = Call_(append_co_, arguments, expr2);
				t0_ = Call_(string, token);
				token_string = t0_;
				t0_ = Call_(length, token_string);
				t1_ = Call_(_, t0_, Int_(1));
				t2_ = Call_(substr_co_length_co_, token_string, Int_(0), t1_);
				t3_ = new_co_object_co_arguments_co___Send__Compiler(Proto_(Send__Compiler), t2_, expr, arguments);
				call = t3_;
				t0_ = Call_(is_a_co_, expr, Proto_(FunctionCall__Compiler));
				if ((t0_) == nil) {
					t1_ = Call_(is_a_co_, expr, Proto_(Send__Compiler));
					t0_ = t1_;
					}
				if (t0_)
					{
					obj_ setter;
					t0_ = Call_(copy, expr);
					setter = t0_;
					t0_ = Call_(convert_to_setter_call_co_, setter, call);
					expr = setter;
					
					}
				}
			}
		return expr;
		
		
		}
	return nil;
}


obj_ parse_block__Parser__Compiler(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(parse_block_co_)

		{
		t0_ = Call_(parse_block_co_, this_, nil);
		return t0_;
		
		
		}
	return nil;
}


obj_ parse_block_co___Parser__Compiler(obj_ this_, obj_ is_lambda)
{
	extern obj_ new_co___LambdaBlock__Compiler(obj_ this_, obj_ parent);
	extern obj_ new_co___Block__Compiler(obj_ this_, obj_ parent);
	UsingSym_(eol)
	UsingSym_(indent)
	UsingSym_(unindent)
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "Statement expected.")
	UsingMethod_(_nt__eq_) UsingMethod_(_eq__eq_) UsingMethod_(append_co_) UsingMethod_(consume_token) UsingMethod_(context) UsingMethod_(context_co_) UsingMethod_(current_token) UsingMethod_(parent) UsingMethod_(parse_error_co_) UsingMethod_(parse_statement)
	UsingClass_(LambdaBlock__Compiler)
	UsingClass_(Block__Compiler)

		{
		obj_ block;
		block = nil;
		if (is_lambda)
			{
			t0_ = Call_(context, this_);
			t1_ = new_co___LambdaBlock__Compiler(Proto_(LambdaBlock__Compiler), t0_);
			block = t1_;
			}
		else
			{
			t0_ = Call_(context, this_);
			t1_ = new_co___Block__Compiler(Proto_(Block__Compiler), t0_);
			block = t1_;
			
			}
		/* Strip out leading blank lines. */
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_eq__eq_, t0_, Sym_(eol));
			if (!(t1_))
				Break_(0)
			{
			t0_ = Call_(consume_token, this_);
			
			}
			}
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_nt__eq_, t0_, Sym_(indent));
		if (t1_)
			{
			return block;
			}
		t0_ = Call_(consume_token, this_);
		
		t0_ = Call_(context_co_, this_, block);
		
		while (1) {
			ContinuePoint_(1)
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_nt__eq_, t0_, Sym_(unindent));
			if (!(t1_))
				Break_(1)
			{
			obj_ statement;
			t0_ = Call_(parse_statement, this_);
			statement = t0_;
			t0_ = Not_(statement);
			if (t0_)
				{
				t0_ = Call_(parse_error_co_, this_, Str_(0));
				
				}
			t0_ = Call_(append_co_, block, statement);
			
			}
			}
		t0_ = Call_(consume_token, this_);
		 	/* Unindent. */
		
		t0_ = Call_(parent, block);
		t1_ = Call_(context_co_, this_, t0_);
		
		return block;
		
		
		}
	return nil;
}


obj_ parse_break_statement__Parser__Compiler(obj_ this_)
{
	extern obj_ new_co___BreakStatement__Compiler(obj_ this_, obj_ comment);
	obj_ t0_;
	UsingMethod_(consume_token) UsingMethod_(require_eol)
	UsingClass_(BreakStatement__Compiler)

		{
		obj_ comment;
		t0_ = Call_(consume_token, this_);
		 	/* "break" */
		t0_ = Call_(require_eol, this_);
		comment = t0_;
		
		t0_ = new_co___BreakStatement__Compiler(Proto_(BreakStatement__Compiler), comment);
		return t0_;
		
		
		}
	return nil;
}


obj_ parse_code__Parser__Compiler(obj_ this_)
{
	extern obj_ new_co___Block__Compiler(obj_ this_, obj_ parent);
	UsingSym_(eof)
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "Statement expected.")
	UsingMethod_(_nt__eq_) UsingMethod_(append_co_) UsingMethod_(context) UsingMethod_(context_co_) UsingMethod_(current_token) UsingMethod_(parse_error_co_) UsingMethod_(parse_statement)
	UsingClass_(Block__Compiler)

		{
		obj_ block, saved_context;
		/* For the interpreter. */
		t0_ = Call_(context, this_);
		saved_context = t0_;
		t0_ = Call_(context, this_);
		t1_ = new_co___Block__Compiler(Proto_(Block__Compiler), t0_);
		block = t1_;
		t0_ = Call_(context_co_, this_, block);
		
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_nt__eq_, t0_, Sym_(eof));
			if (!(t1_))
				Break_(0)
			{
			obj_ statement;
			t0_ = Call_(parse_statement, this_);
			statement = t0_;
			t0_ = Not_(statement);
			if (t0_)
				{
				t0_ = Call_(parse_error_co_, this_, Str_(0));
				
				}
			t0_ = Call_(append_co_, block, statement);
			
			}
			}
		t0_ = Call_(context_co_, this_, saved_context);
		return block;
		
		
		}
	return nil;
}


obj_ parse_coke_statement__Parser__Compiler(obj_ this_)
{
	extern obj_ new_co___CokeStatement__Compiler(obj_ this_, obj_ lines);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(consume_token) UsingMethod_(get_subblock) UsingMethod_(substrings)
	UsingClass_(CokeStatement__Compiler)

		{
		t0_ = Call_(consume_token, this_);
		 	/* "coke" */
		t0_ = Call_(get_subblock, this_);
		t1_ = Call_(substrings, t0_);
		t2_ = new_co___CokeStatement__Compiler(Proto_(CokeStatement__Compiler), t1_);
		return t2_;
		
		
		}
	return nil;
}


obj_ parse_continue_statement__Parser__Compiler(obj_ this_)
{
	extern obj_ new_co___ContinueStatement__Compiler(obj_ this_, obj_ comment);
	obj_ t0_;
	UsingMethod_(consume_token) UsingMethod_(require_eol)
	UsingClass_(ContinueStatement__Compiler)

		{
		obj_ comment;
		t0_ = Call_(consume_token, this_);
		 	/* "continue" */
		t0_ = Call_(require_eol, this_);
		comment = t0_;
		
		t0_ = new_co___ContinueStatement__Compiler(Proto_(ContinueStatement__Compiler), comment);
		return t0_;
		
		
		}
	return nil;
}


obj_ parse_declaration__Parser__Compiler(obj_ this_)
{
	UsingSym_(_in_)
	UsingSym_(_dx_)
	UsingSym_(_40_)
	UsingSym_(_41_)
	UsingSym_(_eq_)
	UsingSym_(_co__eq_)
	extern obj_ new_co_type_co___CompiledField__Compiler(obj_ this_, obj_ name, obj_ type);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co_comment_co___ExpressionStatement__Compiler(obj_ this_, obj_ expression, obj_ comment);
	extern obj_ new_co_arguments_co_context_co___FunctionCall__Compiler(obj_ this_, obj_ name, obj_ arguments, obj_ context);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "Missing \"]\".")
	DefineString_(1, "Missing \")\".")
	DefineString_(2, "\"=\" or \":=\" expected.")
	DefineString_(3, ":")
	UsingMethod_(_nt__eq_) UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(add_local_co_) UsingMethod_(append_co_) UsingMethod_(consume_token) UsingMethod_(context) UsingMethod_(current_block) UsingMethod_(current_token) UsingMethod_(parse_error_co_) UsingMethod_(parse_expression) UsingMethod_(parse_type_spec) UsingMethod_(require_eol) UsingMethod_(text)
	UsingClass_(List__Standard)
	UsingClass_(ExpressionStatement__Compiler)
	UsingClass_(FunctionCall__Compiler)
	UsingClass_(CompiledField__Compiler)

		{
		obj_ arguments, comment, initial_value, name, type;
		t0_ = Call_(current_token, this_);
		t1_ = Call_(text, t0_);
		name = t1_;
		t0_ = Call_(consume_token, this_);
		
		/* Type. */
		type = nil;
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_eq__eq_, t0_, Sym_(_in_));
		if (t1_)
			{
			t0_ = Call_(consume_token, this_);
			 	/* '[' */
			t0_ = Call_(parse_type_spec, this_);
			type = t0_;
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_nt__eq_, t0_, Sym_(_dx_));
			if (t1_)
				{
				t0_ = Call_(parse_error_co_, this_, Str_(0));
				}
			t0_ = Call_(consume_token, this_);
			}
		else
			{
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_eq__eq_, t0_, Sym_(_40_));
			if (t1_)
				{
				t0_ = Call_(consume_token, this_);
				 	/* '(' */
				t0_ = Call_(parse_type_spec, this_);
				type = t0_;
				t0_ = Call_(current_token, this_);
				t1_ = Call_(_nt__eq_, t0_, Sym_(_41_));
				if (t1_)
					{
					t0_ = Call_(parse_error_co_, this_, Str_(1));
					}
				t0_ = Call_(consume_token, this_);
				
				}
			/* ':=' */
			}
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_nt__eq_, t0_, Sym_(_eq_));
		if (t1_) {
			t2_ = Call_(current_token, this_);
			t3_ = Call_(_nt__eq_, t2_, Sym_(_co__eq_));
			t1_ = t3_;
			}
		if (t1_)
			{
			t0_ = Call_(parse_error_co_, this_, Str_(2));
			}
		t0_ = Call_(consume_token, this_);
		
		/* Initial value. */
		t0_ = Call_(parse_expression, this_);
		initial_value = t0_;
		t0_ = Call_(require_eol, this_);
		comment = t0_;
		
		/* Add the local to the block. */
		t0_ = Call_(current_block, this_);
		t1_ = new_co_type_co___CompiledField__Compiler(Proto_(CompiledField__Compiler), name, type);
		t2_ = Call_(add_local_co_, t0_, t1_);
		
		/* Set to the initial value. */
		t0_ = new__List__Standard(Proto_(List__Standard));
		arguments = t0_;
		t0_ = Call_(append_co_, arguments, initial_value);
		t0_ = Call_(_pl_, name, Str_(3));
		t1_ = Call_(context, this_);
		t2_ = new_co_arguments_co_context_co___FunctionCall__Compiler(Proto_(FunctionCall__Compiler), t0_, arguments, t1_);
		t3_ = new_co_comment_co___ExpressionStatement__Compiler(Proto_(ExpressionStatement__Compiler), t2_, comment);
		return t3_;
		
		
		}
	return nil;
}


obj_ parse_dict_literal_expression__Parser__Compiler(obj_ this_)
{
	UsingSym_(eol)
	UsingSym_(indent)
	extern obj_ new__DictLiteral__Compiler(obj_ this_);
	UsingSym_(unindent)
	UsingSym_(eol)
	UsingSym_(comment)
	UsingSym_(name)
	UsingSym_(_eq_)
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	UsingSym_(eol)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "Missing '=' in dictionary literal.")
	DefineString_(1, "Missing value for \"")
	DefineString_(2, "\" in dictionary literal.")
	DefineString_(3, "Syntax error in dictionary literal.")
	UsingMethod_(_nt__eq_) UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(at_co_put_co_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(next_token) UsingMethod_(parse_assignment_expression) UsingMethod_(parse_dict_literal_expression) UsingMethod_(parse_error_co_) UsingMethod_(require_eol) UsingMethod_(return_token_co_) UsingMethod_(text)
	UsingClass_(DictLiteral__Compiler)
	UsingClass_(Token__Compiler)

		{
		obj_ expr;
		t0_ = Call_(parse_assignment_expression, this_);
		expr = t0_;
		if (expr)
			{
			return expr;
			
			}
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_eq__eq_, t0_, Sym_(eol));
		if (t1_) {
			t2_ = Call_(next_token, this_);
			t3_ = Call_(_eq__eq_, t2_, Sym_(indent));
			t1_ = t3_;
			}
		if (t1_)
			{
			t0_ = Call_(consume_token, this_);
			 	/* eol */
			t0_ = Call_(consume_token, this_);
			 	/* indent */
			t0_ = new__DictLiteral__Compiler(Proto_(DictLiteral__Compiler));
			expr = t0_;
			while (1) {
				ContinuePoint_(0)
				t0_ = Call_(current_token, this_);
				t1_ = Call_(_nt__eq_, t0_, Sym_(unindent));
				if (!(t1_))
					Break_(0)
				{
				t0_ = Call_(current_token, this_);
				t1_ = Call_(_eq__eq_, t0_, Sym_(eol));
				if ((t1_) == nil) {
					t2_ = Call_(current_token, this_);
					t3_ = Call_(_eq__eq_, t2_, Sym_(comment));
					t1_ = t3_;
					}
				if (t1_)
					{
					t0_ = Call_(consume_token, this_);
					}
				else
					{
					t0_ = Call_(current_token, this_);
					t1_ = Call_(_eq__eq_, t0_, Sym_(name));
					if (t1_)
						{
						obj_ name, value;
						t0_ = Call_(current_token, this_);
						t1_ = Call_(text, t0_);
						name = t1_;
						t0_ = Call_(consume_token, this_);
						t0_ = Call_(current_token, this_);
						t1_ = Call_(_nt__eq_, t0_, Sym_(_eq_));
						if (t1_)
							{
							t0_ = Call_(parse_error_co_, this_, Str_(0));
							}
						t0_ = Call_(consume_token, this_);
						t0_ = Call_(parse_dict_literal_expression, this_);
						value = t0_;
						t0_ = Not_(value);
						if (t0_)
							{
							t0_ = Call_(_pl_, Str_(1), name);
							t1_ = Call_(_pl_, t0_, Str_(2));
							t2_ = Call_(parse_error_co_, this_, t1_);
							}
						t0_ = Call_(require_eol, this_);
						t0_ = Call_(at_co_put_co_, expr, name, value);
						}
					else
						{
						t0_ = Call_(parse_error_co_, this_, Str_(3));
						}
					}
				}
				}
			t0_ = Call_(consume_token, this_);
			 	/* unindent */
			/* We'll need an eol to finish the statement, so add one: */
			t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(eol));
			t1_ = Call_(return_token_co_, this_, t0_);
			
			}
		return expr;
		
		
		}
	return nil;
}


obj_ parse_equality_expression__Parser__Compiler(obj_ this_)
{
	UsingSym_(_eq__eq_)
	UsingSym_(_nt__eq_)
	extern obj_ new_co_is_nil_co___NilTest__Compiler(obj_ this_, obj_ object, obj_ is_nil);
	UsingSym_(_eq__eq_)
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_eq__eq_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(expression_expected_after_co_) UsingMethod_(is_a_co_) UsingMethod_(make_binop_call_co_with_co_and_co_) UsingMethod_(parse_relational_expression) UsingMethod_(type)
	UsingClass_(NilTest__Compiler)
	UsingClass_(LiteralNil__Compiler)

		{
		obj_ expr, token;
		t0_ = Call_(parse_relational_expression, this_);
		expr = t0_;
		t0_ = Not_(expr);
		if (t0_)
			{
			return nil;
			
			}
		t0_ = Call_(current_token, this_);
		t1_ = Call_(type, t0_);
		token = t1_;
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(_eq__eq_, token, Sym_(_eq__eq_));
			if ((t0_) == nil) {
				t1_ = Call_(_eq__eq_, token, Sym_(_nt__eq_));
				t0_ = t1_;
				}
			if (!(t0_))
				Break_(0)
			{
			obj_ expr2;
			t0_ = Call_(consume_token, this_);
			t0_ = Call_(parse_relational_expression, this_);
			expr2 = t0_;
			t0_ = Not_(expr2);
			if (t0_)
				{
				t0_ = Call_(expression_expected_after_co_, this_, token);
				}
			/* Special-case "== nil" and "!= nil". */
			t0_ = Call_(is_a_co_, expr2, Proto_(LiteralNil__Compiler));
			if (t0_)
				{
				t0_ = Call_(_eq__eq_, token, Sym_(_eq__eq_));
				t1_ = new_co_is_nil_co___NilTest__Compiler(Proto_(NilTest__Compiler), expr, t0_);
				expr = t1_;
				}
			else
				{
				t0_ = Call_(make_binop_call_co_with_co_and_co_, this_, token, expr, expr2);
				expr = t0_;
				
				}
			t0_ = Call_(current_token, this_);
			t1_ = Call_(type, t0_);
			token = t1_;
			
			}
			}
		return expr;
		
		
		}
	return nil;
}


obj_ parse_error_co___Parser__Compiler(obj_ this_, obj_ message)
{
	extern obj_ new_co_token_co___ParseException__Compiler(obj_ this_, obj_ error_message, obj_ token);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(current_token)
	UsingClass_(ParseException__Compiler)

		{
		t0_ = Call_(current_token, this_);
		t1_ = new_co_token_co___ParseException__Compiler(Proto_(ParseException__Compiler), message, t0_);
		Throw_(t1_);
		
		}
	return nil;
}


obj_ parse_exclusive_or_expression__Parser__Compiler(obj_ this_)
{
	UsingSym_(_xr_)
	UsingSym_(_xr_)
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "^")
	UsingMethod_(_eq__eq_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(expression_expected_after_co_) UsingMethod_(make_binop_call_co_with_co_and_co_) UsingMethod_(parse_and_expression)

		{
		obj_ expr;
		t0_ = Call_(parse_and_expression, this_);
		expr = t0_;
		t0_ = Not_(expr);
		if (t0_)
			{
			return nil;
			
			}
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_eq__eq_, t0_, Sym_(_xr_));
			if (!(t1_))
				Break_(0)
			{
			obj_ expr2;
			t0_ = Call_(consume_token, this_);
			t0_ = Call_(parse_and_expression, this_);
			expr2 = t0_;
			t0_ = Not_(expr2);
			if (t0_)
				{
				t0_ = Call_(expression_expected_after_co_, this_, Sym_(_xr_));
				}
			t0_ = Call_(make_binop_call_co_with_co_and_co_, this_, Str_(0), expr, expr2);
			expr = t0_;
			
			}
			}
		return expr;
		
		
		}
	return nil;
}


obj_ parse_expression__Parser__Compiler(obj_ this_)
{
	UsingSym_(_44_)
	extern obj_ new__TupleExpression__Compiler(obj_ this_);
	UsingSym_(_44_)
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "Missing expression in tuple.")
	UsingMethod_(_eq__eq_) UsingMethod_(add_member_co_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(parse_assignment_expression) UsingMethod_(parse_error_co_)
	UsingClass_(TupleExpression__Compiler)

		{
		obj_ expr;
		t0_ = Call_(parse_assignment_expression, this_);
		expr = t0_;
		t0_ = Not_(expr);
		if (t0_)
			{
			return nil;
			
			}
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_eq__eq_, t0_, Sym_(_44_));
		if (t1_)
			{
			obj_ tuple;
			t0_ = new__TupleExpression__Compiler(Proto_(TupleExpression__Compiler));
			tuple = t0_;
			t0_ = Call_(add_member_co_, tuple, expr);
			while (1) {
				ContinuePoint_(0)
				t0_ = Call_(current_token, this_);
				t1_ = Call_(_eq__eq_, t0_, Sym_(_44_));
				if (!(t1_))
					Break_(0)
				{
				obj_ member;
				t0_ = Call_(consume_token, this_);
				t0_ = Call_(parse_assignment_expression, this_);
				member = t0_;
				t0_ = Not_(member);
				if (t0_)
					{
					t0_ = Call_(parse_error_co_, this_, Str_(0));
					}
				t0_ = Call_(add_member_co_, tuple, member);
				}
				}
			expr = tuple;
			
			}
		return expr;
		
		
		}
	return nil;
}


obj_ parse_expression_statement__Parser__Compiler(obj_ this_)
{
	extern obj_ new_co_comment_co___ExpressionStatement__Compiler(obj_ this_, obj_ expression, obj_ comment);
	obj_ t0_;
	UsingMethod_(parse_expression) UsingMethod_(require_eol)
	UsingClass_(ExpressionStatement__Compiler)

		{
		obj_ comment, expr;
		t0_ = Call_(parse_expression, this_);
		expr = t0_;
		t0_ = Call_(require_eol, this_);
		comment = t0_;
		t0_ = new_co_comment_co___ExpressionStatement__Compiler(Proto_(ExpressionStatement__Compiler), expr, comment);
		return t0_;
		
		
		}
	return nil;
}


obj_ parse_extension__Parser__Compiler(obj_ this_)
{
	UsingSym_(eol)
	UsingSym_(indent)
	UsingSym_(unindent)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "extend")
	DefineString_(1, "Expecting \"extend\".")
	DefineString_(2, "Parsing ")
	DefineString_(3, "...")
	DefineString_(4, "Illegal prototype entry.")
	UsingMethod_(_nt__eq_) UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(at_name_co_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(indent) UsingMethod_(name) UsingMethod_(parse_error_co_) UsingMethod_(parse_proto_contents_co_) UsingMethod_(parse_proto_spec) UsingMethod_(report_co_) UsingMethod_(require_eol) UsingMethod_(unindent)

		{
		obj_ type;
		/* "extend" */
		t0_ = Call_(at_name_co_, this_, Str_(0));
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = Call_(parse_error_co_, this_, Str_(1));
			}
		t0_ = Call_(consume_token, this_);
		
		/* The prototype to extend. */
		t0_ = Call_(parse_proto_spec, this_);
		type = t0_;
		t0_ = Call_(require_eol, this_);
		
		t0_ = Call_(name, type);
		t1_ = Call_(_pl_, Str_(2), t0_);
		t2_ = Call_(_pl_, t1_, Str_(3));
		t3_ = Call_(report_co_, this_, t2_);
		t0_ = Call_(indent, this_);
		
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_eq__eq_, t0_, Sym_(eol));
			if (!(t1_))
				Break_(0)
			{
			t0_ = Call_(consume_token, this_);
			}
			}
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_eq__eq_, t0_, Sym_(indent));
		if (t1_)
			{
			t0_ = Call_(consume_token, this_);
			 	/* indent */
			t0_ = Call_(parse_proto_contents_co_, this_, type);
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_nt__eq_, t0_, Sym_(unindent));
			if (t1_)
				{
				t0_ = Call_(parse_error_co_, this_, Str_(4));
				}
			t0_ = Call_(consume_token, this_);
			 	/* unindent */
			
			}
		t0_ = Call_(unindent, this_);
		
		
		}
	return nil;
}


obj_ parse_fields__Parser__Compiler(obj_ this_)
{
	extern obj_ new__List__Standard(obj_ this_);
	UsingSym_(eol)
	UsingSym_(comment)
	UsingSym_(name)
	UsingSym_(_in_)
	UsingSym_(_dx_)
	UsingSym_(_40_)
	UsingSym_(_41_)
	extern obj_ new_co_type_co___CompiledField__Compiler(obj_ this_, obj_ name, obj_ type);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "Field name needed.")
	DefineString_(1, "Missing \"]\".")
	DefineString_(2, "Missing \")\".")
	UsingMethod_(_nt__eq_) UsingMethod_(_eq__eq_) UsingMethod_(append_co_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(parse_error_co_) UsingMethod_(parse_type_spec) UsingMethod_(require_eol) UsingMethod_(text)
	UsingClass_(List__Standard)
	UsingClass_(CompiledField__Compiler)

		{
		obj_ fields;
		/* "fld"/"field"/etc. */
		t0_ = Call_(consume_token, this_);
		
		/* Get the fields. */
		t0_ = new__List__Standard(Proto_(List__Standard));
		fields = t0_;
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_nt__eq_, t0_, Sym_(eol));
			if (t1_) {
				t2_ = Call_(current_token, this_);
				t3_ = Call_(_nt__eq_, t2_, Sym_(comment));
				t1_ = t3_;
				}
			if (!(t1_))
				Break_(0)
			{
			obj_ name, type;
			/* Get the name. */
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_nt__eq_, t0_, Sym_(name));
			if (t1_)
				{
				t0_ = Call_(parse_error_co_, this_, Str_(0));
				}
			t0_ = Call_(current_token, this_);
			t1_ = Call_(text, t0_);
			name = t1_;
			t0_ = Call_(consume_token, this_);
			
			/* Get the type, if given. */
			type = nil;
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_eq__eq_, t0_, Sym_(_in_));
			if (t1_)
				{
				t0_ = Call_(consume_token, this_);
				t0_ = Call_(parse_type_spec, this_);
				type = t0_;
				t0_ = Call_(current_token, this_);
				t1_ = Call_(_nt__eq_, t0_, Sym_(_dx_));
				if (t1_)
					{
					t0_ = Call_(parse_error_co_, this_, Str_(1));
					}
				t0_ = Call_(consume_token, this_);
				}
			else
				{
				t0_ = Call_(current_token, this_);
				t1_ = Call_(_eq__eq_, t0_, Sym_(_40_));
				if (t1_)
					{
					t0_ = Call_(consume_token, this_);
					t0_ = Call_(parse_type_spec, this_);
					type = t0_;
					t0_ = Call_(current_token, this_);
					t1_ = Call_(_nt__eq_, t0_, Sym_(_41_));
					if (t1_)
						{
						t0_ = Call_(parse_error_co_, this_, Str_(2));
						}
					t0_ = Call_(consume_token, this_);
					
					}
				/* Add it. */
				}
			t0_ = new_co_type_co___CompiledField__Compiler(Proto_(CompiledField__Compiler), name, type);
			t1_ = Call_(append_co_, fields, t0_);
			
			}
			}
		t0_ = Call_(require_eol, this_);
		
		return fields;
		
		
		}
	return nil;
}


obj_ parse_for_statement__Parser__Compiler(obj_ this_)
{
	UsingSym_(name)
	UsingSym_(_in_)
	UsingSym_(_dx_)
	extern obj_ new_co_type_co___CompiledField__Compiler(obj_ this_, obj_ name, obj_ type);
	UsingSym_(name)
	extern obj_ new_co_parent_co___ForContext__Compiler(obj_ this_, obj_ local, obj_ parent);
	extern obj_ new_co_collection_co_body_co_comment_co___ForStatement__Compiler(obj_ this_, obj_ local, obj_ collection, obj_ body, obj_ comment);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineString_(0, "\"for\" loop variable name expected.")
	DefineString_(1, "Missing \"]\".")
	DefineString_(2, "in")
	DefineString_(3, "\"in\" expected.")
	DefineString_(4, "Missing collection in \"for\" statement.")
	UsingMethod_(_nt__eq_) UsingMethod_(_eq__eq_) UsingMethod_(consume_token) UsingMethod_(context) UsingMethod_(context_co_) UsingMethod_(current_token) UsingMethod_(parse_block) UsingMethod_(parse_error_co_) UsingMethod_(parse_expression) UsingMethod_(parse_type_spec) UsingMethod_(require_eol) UsingMethod_(text)
	UsingClass_(ForContext__Compiler)
	UsingClass_(CompiledField__Compiler)
	UsingClass_(ForStatement__Compiler)

		{
		obj_ body, collection, comment, local, name, saved_context, type;
		t0_ = Call_(consume_token, this_);
		 	/* "for" */
		
		/* Variable. */
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_nt__eq_, t0_, Sym_(name));
		if (t1_)
			{
			t0_ = Call_(parse_error_co_, this_, Str_(0));
			}
		t0_ = Call_(current_token, this_);
		t1_ = Call_(text, t0_);
		name = t1_;
		t0_ = Call_(consume_token, this_);
		type = nil;
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_eq__eq_, t0_, Sym_(_in_));
		if (t1_)
			{
			t0_ = Call_(consume_token, this_);
			t0_ = Call_(parse_type_spec, this_);
			type = t0_;
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_nt__eq_, t0_, Sym_(_dx_));
			if (t1_)
				{
				t0_ = Call_(parse_error_co_, this_, Str_(1));
				}
			t0_ = Call_(consume_token, this_);
			}
		t0_ = new_co_type_co___CompiledField__Compiler(Proto_(CompiledField__Compiler), name, type);
		local = t0_;
		
		/* "in" */
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_nt__eq_, t0_, Sym_(name));
		if ((t1_) == nil) {
			t2_ = Call_(current_token, this_);
			t3_ = Call_(text, t2_);
			t4_ = Call_(_nt__eq_, t3_, Str_(2));
			t1_ = t4_;
			}
		if (t1_)
			{
			t0_ = Call_(parse_error_co_, this_, Str_(3));
			}
		t0_ = Call_(consume_token, this_);
		
		/* Collection. */
		t0_ = Call_(parse_expression, this_);
		collection = t0_;
		t0_ = Not_(collection);
		if (t0_)
			{
			t0_ = Call_(parse_error_co_, this_, Str_(4));
			
			}
		/* Add the name to the context and parse the body. */
		t0_ = Call_(require_eol, this_);
		comment = t0_;
		t0_ = Call_(context, this_);
		saved_context = t0_;
		t0_ = Call_(context, this_);
		t1_ = new_co_parent_co___ForContext__Compiler(Proto_(ForContext__Compiler), local, t0_);
		t2_ = Call_(context_co_, this_, t1_);
		t0_ = Call_(parse_block, this_);
		body = t0_;
		t0_ = Call_(context_co_, this_, saved_context);
		
		/* Make the result. */
		t0_ = new_co_collection_co_body_co_comment_co___ForStatement__Compiler(Proto_(ForStatement__Compiler), local, collection, body, comment);
		return t0_;
		
		
		}
	return nil;
}


obj_ parse_function_co___Parser__Compiler(obj_ this_, obj_ at_declarator)
{
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	UsingSym_(name)
	UsingSym_(_tw_)
	UsingSym_(name)
	extern obj_ new_co_type_co___CompiledField__Compiler(obj_ this_, obj_ name, obj_ type);
	UsingSym_(name)
	UsingSym_(keyword)
	UsingSym_(keyword)
	UsingSym_(name)
	extern obj_ new_co_type_co___CompiledField__Compiler(obj_ this_, obj_ name, obj_ type);
	UsingSym_(__gt_)
	extern obj_ new_co_parent_co___MethodContext__Compiler(obj_ this_, obj_ arguments, obj_ parent);
	extern obj_ new_co_arguments_co_return_type_co_on_proto_co_body_co_is_primitive_co___CompiledFunction__Compiler(obj_ this_, obj_ name, obj_ arguments, obj_ return_type, obj_ on_proto, obj_ body, obj_ is_primitive);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	DefineInt_(0, 0)
	DefineInt_(1, 1)
	DefineString_(0, "c-")
	DefineString_(1, "Can't declare a \"c-function\" when not targetting C.")
	DefineString_(2, "Missing argument name in ")
	DefineString_(3, ".")
	DefineString_(4, "Missing argument name.")
	DefineString_(5, ":")
	DefineString_(6, "Parsing ")
	DefineString_(7, "...")
	UsingMethod_(_nt__eq_) UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(_eq__eq_) UsingMethod_(append_co_) UsingMethod_(consume_token) UsingMethod_(context) UsingMethod_(context_co_) UsingMethod_(current_token) UsingMethod_(get_subblock) UsingMethod_(length) UsingMethod_(method_context_co_) UsingMethod_(parse_arg_type) UsingMethod_(parse_block) UsingMethod_(parse_error_co_) UsingMethod_(parse_type_spec) UsingMethod_(report_co_) UsingMethod_(require_eol) UsingMethod_(starts_with_co_) UsingMethod_(string) UsingMethod_(substr_co_length_co_) UsingMethod_(targeting_c) UsingMethod_(text) UsingMethod_(type)
	UsingClass_(List__Standard)
	UsingClass_(Main)
	UsingClass_(CompiledFunction__Compiler)
	UsingClass_(MethodContext__Compiler)
	UsingClass_(CompiledField__Compiler)

		{
		obj_ arguments, body, fn_type, is_primitive, method_context, name, new_function, return_type;
		/* "fn" or "function" (etc.) has already been recognized; just check it for  */
		/* primitiveness. */
		is_primitive = nil;
		if (at_declarator)
			{
			t0_ = Call_(current_token, this_);
			t1_ = Call_(text, t0_);
			t2_ = Call_(starts_with_co_, t1_, Str_(0));
			if (t2_)
				{
				t0_ = build_settings__Main(Proto_(Main));
				t1_ = Call_(targeting_c, t0_);
				t2_ = Not_(t1_);
				if (t2_)
					{
					t0_ = Call_(parse_error_co_, this_, Str_(1));
					}
				t0_ = build_settings__Main(Proto_(Main));
				t1_ = Call_(targeting_c, t0_);
				if (t1_)
					{
					is_primitive = true_;
					}
				}
			t0_ = Call_(consume_token, this_);
			
			}
		/* Get the name. */
		/* We're allowing any name; we want to allow unops and binops and string  */
		/* literals as well as names.  Ideally we should reject other names, but  */
		/* currently we don't bother. */
		t0_ = Call_(current_token, this_);
		t1_ = Call_(string, t0_);
		name = t1_;
		t0_ = Call_(current_token, this_);
		t1_ = Call_(type, t0_);
		fn_type = t1_;
		t0_ = Call_(consume_token, this_);
		
		/* Get the arguments. */
		t0_ = new__List__Standard(Proto_(List__Standard));
		arguments = t0_;
		t0_ = Call_(_nt__eq_, fn_type, Sym_(name));
		if (t0_) {
			t1_ = Call_(_nt__eq_, fn_type, Sym_(_tw_));
			t0_ = t1_;
			}
		if (t0_)
			{
			obj_ arg_name, arg_type;
			/* Get the first argument. */
			t0_ = Call_(current_token, this_);
			t1_ = Call_(type, t0_);
			t2_ = Call_(_nt__eq_, t1_, Sym_(name));
			if (t2_)
				{
				t0_ = Call_(_pl_, Str_(2), name);
				t1_ = Call_(_pl_, t0_, Str_(3));
				t2_ = Call_(parse_error_co_, this_, t1_);
				}
			t0_ = Call_(current_token, this_);
			t1_ = Call_(text, t0_);
			arg_name = t1_;
			t0_ = Call_(consume_token, this_);
			t0_ = Call_(parse_arg_type, this_);
			arg_type = t0_;
			t0_ = new_co_type_co___CompiledField__Compiler(Proto_(CompiledField__Compiler), arg_name, arg_type);
			t1_ = Call_(append_co_, arguments, t0_);
			
			/* Get additional arguments. */
			while (1) {
				ContinuePoint_(0)
				t0_ = Call_(current_token, this_);
				t1_ = Call_(_eq__eq_, t0_, Sym_(name));
				if ((t1_) == nil) {
					t2_ = Call_(current_token, this_);
					t3_ = Call_(_eq__eq_, t2_, Sym_(keyword));
					t1_ = t3_;
					}
				if (!(t1_))
					Break_(0)
				{
				/* Get the name. */
				t0_ = Call_(current_token, this_);
				t1_ = Call_(_eq__eq_, t0_, Sym_(keyword));
				if (t1_)
					{
					/* Standard argument declaration ("keyword: name"). */
					t0_ = Call_(current_token, this_);
					t1_ = Call_(text, t0_);
					t2_ = Call_(_pl_, name, t1_);
					name = t2_;
					t0_ = Call_(consume_token, this_);
					t0_ = Call_(current_token, this_);
					t1_ = Call_(_nt__eq_, t0_, Sym_(name));
					if (t1_)
						{
						t0_ = Call_(parse_error_co_, this_, Str_(4));
						}
					t0_ = Call_(current_token, this_);
					t1_ = Call_(text, t0_);
					arg_name = t1_;
					t0_ = Call_(consume_token, this_);
					}
				else
					{
					/* Special shortcut: just an argument name.  Equivalent to "name: name". */
					t0_ = Call_(current_token, this_);
					t1_ = Call_(text, t0_);
					t2_ = Call_(_pl_, t1_, Str_(5));
					t3_ = Call_(_pl_, name, t2_);
					name = t3_;
					t0_ = Call_(current_token, this_);
					t1_ = Call_(text, t0_);
					t2_ = Call_(current_token, this_);
					t3_ = Call_(text, t2_);
					t4_ = Call_(length, t3_);
					t5_ = Call_(_, t4_, Int_(1));
					t6_ = Call_(substr_co_length_co_, t1_, Int_(0), t5_);
					arg_name = t6_;
					t0_ = Call_(consume_token, this_);
					
					}
				/* Get the type and add the argument. */
				t0_ = Call_(parse_arg_type, this_);
				arg_type = t0_;
				t0_ = new_co_type_co___CompiledField__Compiler(Proto_(CompiledField__Compiler), arg_name, arg_type);
				t1_ = Call_(append_co_, arguments, t0_);
				
				}
				}
			}
		/* Get the return type. */
		return_type = nil;
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_eq__eq_, t0_, Sym_(__gt_));
		if (t1_)
			{
			t0_ = Call_(consume_token, this_);
			t0_ = Call_(parse_type_spec, this_);
			return_type = t0_;
			
			}
		t0_ = Call_(_pl_, Str_(6), name);
		t1_ = Call_(_pl_, t0_, Str_(7));
		t2_ = Call_(report_co_, this_, t1_);
		
		/* Parse the body. */
		body = nil;
		method_context = nil;
		if (is_primitive)
			{
			t0_ = Call_(get_subblock, this_);
			t1_ = Call_(string, t0_);
			body = t1_;
			}
		else
			{
			obj_ saved_context;
			t0_ = Call_(require_eol, this_);
			t0_ = Call_(context, this_);
			saved_context = t0_;
			t0_ = Call_(context, this_);
			t1_ = new_co_parent_co___MethodContext__Compiler(Proto_(MethodContext__Compiler), arguments, t0_);
			method_context = t1_;
			t0_ = Call_(context_co_, this_, method_context);
			t0_ = Call_(parse_block, this_);
			body = t0_;
			t0_ = Call_(context_co_, this_, saved_context);
			
			}
		/* Build the function and return it. */
		t0_ = Call_(context, this_);
		t1_ = new_co_arguments_co_return_type_co_on_proto_co_body_co_is_primitive_co___CompiledFunction__Compiler(Proto_(CompiledFunction__Compiler), name, arguments, return_type, t0_, body, is_primitive);
		new_function = t1_;
		t0_ = Call_(method_context_co_, new_function, method_context);
		return new_function;
		
		
		}
	return nil;
}


obj_ parse_if_statement__Parser__Compiler(obj_ this_)
{
	UsingSym_(name)
	UsingSym_(name)
	extern obj_ new_co___Block__Compiler(obj_ this_, obj_ parent);
	extern obj_ new_co_body_co_else_block_co_comment_co_else_comment_co_pre_else_comments_co___IfStatement__Compiler(obj_ this_, obj_ condition, obj_ body, obj_ else_block, obj_ comment, obj_ else_comment, obj_ pre_else_comments);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineString_(0, "Missing condition in an \"if\" statement.")
	DefineString_(1, "else")
	DefineString_(2, "if")
	UsingMethod_(_eq__eq_) UsingMethod_(append_co_) UsingMethod_(consume_token) UsingMethod_(context) UsingMethod_(current_token) UsingMethod_(parse_block) UsingMethod_(parse_error_co_) UsingMethod_(parse_expression) UsingMethod_(parse_if_statement) UsingMethod_(parse_inter_prong_comments) UsingMethod_(require_eol) UsingMethod_(text)
	UsingClass_(IfStatement__Compiler)
	UsingClass_(Block__Compiler)

		{
		obj_ body, comment, condition, else_block, else_comment, pre_else_comments;
		t0_ = Call_(consume_token, this_);
		
		/* Condition. */
		t0_ = Call_(parse_expression, this_);
		condition = t0_;
		t0_ = Not_(condition);
		if (t0_)
			{
			t0_ = Call_(parse_error_co_, this_, Str_(0));
			}
		t0_ = Call_(require_eol, this_);
		comment = t0_;
		
		/* Body. */
		t0_ = Call_(parse_block, this_);
		body = t0_;
		
		/* Any comments and blank lines preceding the "else". */
		t0_ = Call_(parse_inter_prong_comments, this_);
		pre_else_comments = t0_;
		
		/* "else" block, if there is one. */
		else_block = nil;
		else_comment = nil;
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_eq__eq_, t0_, Sym_(name));
		if (t1_) {
			t2_ = Call_(current_token, this_);
			t3_ = Call_(text, t2_);
			t4_ = Call_(_eq__eq_, t3_, Str_(1));
			t1_ = t4_;
			}
		if (t1_)
			{
			t0_ = Call_(consume_token, this_);
			 	/* "else" */
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_eq__eq_, t0_, Sym_(name));
			if (t1_) {
				t2_ = Call_(current_token, this_);
				t3_ = Call_(text, t2_);
				t4_ = Call_(_eq__eq_, t3_, Str_(2));
				t1_ = t4_;
				}
			if (t1_)
				{
				t0_ = Call_(context, this_);
				t1_ = new_co___Block__Compiler(Proto_(Block__Compiler), t0_);
				else_block = t1_;
				t0_ = Call_(parse_if_statement, this_);
				t1_ = Call_(append_co_, else_block, t0_);
				}
			else
				{
				t0_ = Call_(require_eol, this_);
				else_comment = t0_;
				t0_ = Call_(parse_block, this_);
				else_block = t0_;
				
				}
			}
		t0_ = new_co_body_co_else_block_co_comment_co_else_comment_co_pre_else_comments_co___IfStatement__Compiler(Proto_(IfStatement__Compiler), condition, body, else_block, comment, else_comment, pre_else_comments);
		return t0_;
		
		
		}
	return nil;
}


obj_ parse_iff_statement__Parser__Compiler(obj_ this_)
{
	extern obj_ new_co___BlockStatement__Compiler(obj_ this_, obj_ block);
	extern obj_ new__EmptyStatement__Compiler(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(check_iff) UsingMethod_(parse_block)
	UsingClass_(BlockStatement__Compiler)
	UsingClass_(EmptyStatement__Compiler)

		{
		t0_ = Call_(check_iff, this_);
		if (t0_)
			{
			t0_ = Call_(parse_block, this_);
			t1_ = new_co___BlockStatement__Compiler(Proto_(BlockStatement__Compiler), t0_);
			return t1_;
			}
		else
			{
			t2_ = new__EmptyStatement__Compiler(Proto_(EmptyStatement__Compiler));
			return t2_;
			
			
			}
		}
	return nil;
}


obj_ parse_inclusive_or_expression__Parser__Compiler(obj_ this_)
{
	UsingSym_(_or_)
	UsingSym_(_or_)
	UsingSym_(_or_)
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_eq__eq_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(expression_expected_after_co_) UsingMethod_(make_binop_call_co_with_co_and_co_) UsingMethod_(parse_exclusive_or_expression)

		{
		obj_ expr;
		t0_ = Call_(parse_exclusive_or_expression, this_);
		expr = t0_;
		t0_ = Not_(expr);
		if (t0_)
			{
			return nil;
			
			}
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_eq__eq_, t0_, Sym_(_or_));
			if (!(t1_))
				Break_(0)
			{
			obj_ expr2;
			t0_ = Call_(consume_token, this_);
			t0_ = Call_(parse_exclusive_or_expression, this_);
			expr2 = t0_;
			t0_ = Not_(expr2);
			if (t0_)
				{
				t0_ = Call_(expression_expected_after_co_, this_, Sym_(_or_));
				}
			t0_ = Call_(make_binop_call_co_with_co_and_co_, this_, Sym_(_or_), expr, expr2);
			expr = t0_;
			
			}
			}
		return expr;
		
		
		}
	return nil;
}


obj_ parse_inter_prong_comments__Parser__Compiler(obj_ this_)
{
	UsingSym_(eol)
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new__BlankLine__Compiler(obj_ this_);
	UsingSym_(comment)
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co___Comment__Compiler(obj_ this_, obj_ text);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(_eq__eq_) UsingMethod_(append_co_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(require_eol)
	UsingClass_(List__Standard)
	UsingClass_(Comment__Compiler)
	UsingClass_(BlankLine__Compiler)

		{
		obj_ comments;
		comments = nil;
		while (1) {
			ContinuePoint_(0)
			{
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_eq__eq_, t0_, Sym_(eol));
			if (t1_)
				{
				t0_ = Not_(comments);
				if (t0_)
					{
					t0_ = new__List__Standard(Proto_(List__Standard));
					comments = t0_;
					}
				t0_ = new__BlankLine__Compiler(Proto_(BlankLine__Compiler));
				t1_ = Call_(append_co_, comments, t0_);
				t0_ = Call_(consume_token, this_);
				}
			else
				{
				t0_ = Call_(current_token, this_);
				t1_ = Call_(_eq__eq_, t0_, Sym_(comment));
				if (t1_)
					{
					t0_ = Not_(comments);
					if (t0_)
						{
						t0_ = new__List__Standard(Proto_(List__Standard));
						comments = t0_;
						}
					t0_ = Call_(require_eol, this_);
					t1_ = new_co___Comment__Compiler(Proto_(Comment__Compiler), t0_);
					t2_ = Call_(append_co_, comments, t1_);
					}
				else
					{
					Break_(0)
					
					}
				}
			}
		}
		return comments;
		
		
		}
	return nil;
}


obj_ parse_keyword_expression__Parser__Compiler(obj_ this_)
{
	UsingSym_(keyword)
	extern obj_ new__List__Standard(obj_ this_);
	UsingSym_(keyword)
	extern obj_ new_co_object_co_arguments_co___Send__Compiler(obj_ this_, obj_ name, obj_ object, obj_ arguments);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "")
	DefineString_(1, "Missing argument (\"")
	DefineString_(2, "\").")
	UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(append_co_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(parse_error_co_) UsingMethod_(parse_inclusive_or_expression) UsingMethod_(text)
	UsingClass_(List__Standard)
	UsingClass_(Send__Compiler)

		{
		obj_ expr;
		t0_ = Call_(parse_inclusive_or_expression, this_);
		expr = t0_;
		t0_ = Not_(expr);
		if (t0_)
			{
			return nil;
			
			}
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_eq__eq_, t0_, Sym_(keyword));
		if (t1_)
			{
			obj_ args, name;
			name = Str_(0);
			t0_ = new__List__Standard(Proto_(List__Standard));
			args = t0_;
			while (1) {
				ContinuePoint_(0)
				t0_ = Call_(current_token, this_);
				t1_ = Call_(_eq__eq_, t0_, Sym_(keyword));
				if (!(t1_))
					Break_(0)
				{
				obj_ arg;
				t0_ = Call_(current_token, this_);
				t1_ = Call_(text, t0_);
				t2_ = Call_(_pl_, name, t1_);
				name = t2_;
				t0_ = Call_(consume_token, this_);
				t0_ = Call_(parse_inclusive_or_expression, this_);
				arg = t0_;
				if (arg)
					{
					t0_ = Call_(append_co_, args, arg);
					}
				/* else if current-token == 'eol' || current-token == 'comment' */
				/* # Lambda. */
				/* require-eol */
				/* block = parse-block: true */
				/* lambda = LambdaExpression new: block */
				/* # *** Add the lambda to the CompiledFunction's list (how?). */
				/* # *** Or just to the MethodContext's list? */
				/* context enclosing-method-context add-lambda: lambda */
				/* args append: lambda */
				/* # We'll need an EOL to finish off the current statement, so fake one. */
				/* return-token: (Token new: 'eol' text: "") */
				else
					{
					t0_ = Call_(_pl_, Str_(1), name);
					t1_ = Call_(_pl_, t0_, Str_(2));
					t2_ = Call_(parse_error_co_, this_, t1_);
					}
				}
				}
			t0_ = new_co_object_co_arguments_co___Send__Compiler(Proto_(Send__Compiler), name, expr, args);
			expr = t0_;
			
			}
		return expr;
		
		
		}
	return nil;
}


obj_ parse_logical_and_expression__Parser__Compiler(obj_ this_)
{
	UsingSym_(_an__an_)
	UsingSym_(_an__an_)
	extern obj_ new_co_with_co___ShortCircuitAnd__Compiler(obj_ this_, obj_ expr1, obj_ expr2);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_eq__eq_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(expression_expected_after_co_) UsingMethod_(parse_not_expression)
	UsingClass_(ShortCircuitAnd__Compiler)

		{
		obj_ expr;
		t0_ = Call_(parse_not_expression, this_);
		expr = t0_;
		t0_ = Not_(expr);
		if (t0_)
			{
			return nil;
			
			}
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_eq__eq_, t0_, Sym_(_an__an_));
			if (!(t1_))
				Break_(0)
			{
			obj_ expr2;
			t0_ = Call_(consume_token, this_);
			t0_ = Call_(parse_not_expression, this_);
			expr2 = t0_;
			t0_ = Not_(expr2);
			if (t0_)
				{
				t0_ = Call_(expression_expected_after_co_, this_, Sym_(_an__an_));
				}
			t0_ = new_co_with_co___ShortCircuitAnd__Compiler(Proto_(ShortCircuitAnd__Compiler), expr, expr2);
			expr = t0_;
			
			}
			}
		return expr;
		
		
		}
	return nil;
}


obj_ parse_logical_or_expression__Parser__Compiler(obj_ this_)
{
	UsingSym_(_or__or_)
	UsingSym_(_or__or_)
	extern obj_ new_co_with_co___ShortCircuitOr__Compiler(obj_ this_, obj_ expr1, obj_ expr2);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_eq__eq_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(expression_expected_after_co_) UsingMethod_(parse_logical_and_expression)
	UsingClass_(ShortCircuitOr__Compiler)

		{
		obj_ expr;
		t0_ = Call_(parse_logical_and_expression, this_);
		expr = t0_;
		t0_ = Not_(expr);
		if (t0_)
			{
			return nil;
			
			}
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_eq__eq_, t0_, Sym_(_or__or_));
			if (!(t1_))
				Break_(0)
			{
			obj_ expr2;
			t0_ = Call_(consume_token, this_);
			t0_ = Call_(parse_logical_and_expression, this_);
			expr2 = t0_;
			t0_ = Not_(expr2);
			if (t0_)
				{
				t0_ = Call_(expression_expected_after_co_, this_, Sym_(_or__or_));
				}
			t0_ = new_co_with_co___ShortCircuitOr__Compiler(Proto_(ShortCircuitOr__Compiler), expr, expr2);
			expr = t0_;
			
			}
			}
		return expr;
		
		
		}
	return nil;
}


obj_ parse_loop_statement__Parser__Compiler(obj_ this_)
{
	extern obj_ new_co_comment_co___LoopStatement__Compiler(obj_ this_, obj_ body, obj_ comment);
	obj_ t0_;
	UsingMethod_(consume_token) UsingMethod_(parse_block) UsingMethod_(require_eol)
	UsingClass_(LoopStatement__Compiler)

		{
		obj_ body, comment;
		t0_ = Call_(consume_token, this_);
		 	/* "loop" */
		t0_ = Call_(require_eol, this_);
		comment = t0_;
		
		t0_ = Call_(parse_block, this_);
		body = t0_;
		t0_ = new_co_comment_co___LoopStatement__Compiler(Proto_(LoopStatement__Compiler), body, comment);
		return t0_;
		
		
		}
	return nil;
}


obj_ parse_member_proto__Parser__Compiler(obj_ this_)
{
	UsingSym_(name)
	UsingSym_(eol)
	UsingSym_(indent)
	UsingSym_(unindent)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "class")
	DefineString_(1, "proto")
	DefineString_(2, "Expecting \"class\".")
	DefineString_(3, "Missing prototype name.")
	DefineString_(4, "Parsing ")
	DefineString_(5, "...")
	DefineString_(6, "Unindent required at end of proto.")
	UsingMethod_(_nt__eq_) UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(add_proto_co_) UsingMethod_(at_name_co_) UsingMethod_(consume_token) UsingMethod_(context) UsingMethod_(current_token) UsingMethod_(indent) UsingMethod_(parse_error_co_) UsingMethod_(parse_proto_contents_co_) UsingMethod_(report_co_) UsingMethod_(require_eol) UsingMethod_(text) UsingMethod_(unindent)

		{
		obj_ proto_name, the_proto;
		/* "class" (or "proto" for compatibility with Trylid). */
		t0_ = Call_(at_name_co_, this_, Str_(0));
		t1_ = Not_(t0_);
		if (t1_) {
			t2_ = Call_(at_name_co_, this_, Str_(1));
			t3_ = Not_(t2_);
			t1_ = t3_;
			}
		if (t1_)
			{
			t0_ = Call_(parse_error_co_, this_, Str_(2));
			}
		t0_ = Call_(consume_token, this_);
		
		/* Class name. */
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_nt__eq_, t0_, Sym_(name));
		if (t1_)
			{
			t0_ = Call_(parse_error_co_, this_, Str_(3));
			}
		t0_ = Call_(current_token, this_);
		t1_ = Call_(text, t0_);
		proto_name = t1_;
		t0_ = Call_(consume_token, this_);
		t0_ = Call_(require_eol, this_);
		
		t0_ = Call_(_pl_, Str_(4), proto_name);
		t1_ = Call_(_pl_, t0_, Str_(5));
		t2_ = Call_(report_co_, this_, t1_);
		t0_ = Call_(indent, this_);
		
		/* Create (or get) the proto. */
		t0_ = Call_(context, this_);
		t1_ = Call_(add_proto_co_, t0_, proto_name);
		the_proto = t1_;
		
		/* Read the contents (if any). */
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_eq__eq_, t0_, Sym_(eol));
			if (!(t1_))
				Break_(0)
			{
			t0_ = Call_(consume_token, this_);
			}
			}
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_eq__eq_, t0_, Sym_(indent));
		if (t1_)
			{
			t0_ = Call_(consume_token, this_);
			t0_ = Call_(parse_proto_contents_co_, this_, the_proto);
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_nt__eq_, t0_, Sym_(unindent));
			if (t1_)
				{
				t0_ = Call_(parse_error_co_, this_, Str_(6));
				}
			t0_ = Call_(consume_token, this_);
			
			}
		t0_ = Call_(unindent, this_);
		
		
		}
	return nil;
}


obj_ parse_multiplicative_expression__Parser__Compiler(obj_ this_)
{
	UsingSym_(_st_)
	UsingSym_(_dv_)
	UsingSym_(_pc_)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(_eq__eq_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(expression_expected_after_co_) UsingMethod_(make_binop_call_co_with_co_and_co_) UsingMethod_(parse_unary_expression) UsingMethod_(type)

		{
		obj_ expr, token;
		t0_ = Call_(parse_unary_expression, this_);
		expr = t0_;
		t0_ = Not_(expr);
		if (t0_)
			{
			return nil;
			
			}
		t0_ = Call_(current_token, this_);
		t1_ = Call_(type, t0_);
		token = t1_;
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(_eq__eq_, token, Sym_(_st_));
			if ((t0_) == nil) {
				t1_ = Call_(_eq__eq_, token, Sym_(_dv_));
				t0_ = t1_;
				}
			if ((t0_) == nil) {
				t2_ = Call_(_eq__eq_, token, Sym_(_pc_));
				t0_ = t2_;
				}
			if (!(t0_))
				Break_(0)
			{
			obj_ expr2;
			t0_ = Call_(consume_token, this_);
			t0_ = Call_(parse_unary_expression, this_);
			expr2 = t0_;
			t0_ = Not_(expr2);
			if (t0_)
				{
				t0_ = Call_(expression_expected_after_co_, this_, token);
				}
			t0_ = Call_(make_binop_call_co_with_co_and_co_, this_, token, expr, expr2);
			expr = t0_;
			
			t0_ = Call_(current_token, this_);
			t1_ = Call_(type, t0_);
			token = t1_;
			
			}
			}
		return expr;
		
		
		}
	return nil;
}


obj_ parse_not_expression__Parser__Compiler(obj_ this_)
{
	UsingSym_(_nt_)
	UsingSym_(_nt_)
	extern obj_ new_co___ShortCircuitNot__Compiler(obj_ this_, obj_ expr);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_eq__eq_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(expression_expected_after_co_) UsingMethod_(parse_keyword_expression) UsingMethod_(parse_not_expression)
	UsingClass_(ShortCircuitNot__Compiler)

		{
		obj_ expr;
		expr = nil;
		
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_eq__eq_, t0_, Sym_(_nt_));
		if (t1_)
			{
			t0_ = Call_(consume_token, this_);
			t0_ = Call_(parse_not_expression, this_);
			expr = t0_;
			t0_ = Not_(expr);
			if (t0_)
				{
				t0_ = Call_(expression_expected_after_co_, this_, Sym_(_nt_));
				}
			t0_ = new_co___ShortCircuitNot__Compiler(Proto_(ShortCircuitNot__Compiler), expr);
			expr = t0_;
			
			}
		else
			{
			t0_ = Call_(parse_keyword_expression, this_);
			expr = t0_;
			
			}
		return expr;
		
		
		}
	return nil;
}


obj_ parse_postfix_expression__Parser__Compiler(obj_ this_)
{
	UsingSym_(name)
	extern obj_ new_co_object_co_arguments_co___Send__Compiler(obj_ this_, obj_ name, obj_ object, obj_ arguments);
	extern obj_ new__List__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_eq__eq_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(parse_primary_expression) UsingMethod_(text)
	UsingClass_(List__Standard)
	UsingClass_(Send__Compiler)

		{
		obj_ expr;
		t0_ = Call_(parse_primary_expression, this_);
		expr = t0_;
		t0_ = Not_(expr);
		if (t0_)
			{
			return nil;
			
			}
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_eq__eq_, t0_, Sym_(name));
			if (!(t1_))
				Break_(0)
			{
			obj_ name;
			/* A unary object call. */
			t0_ = Call_(current_token, this_);
			t1_ = Call_(text, t0_);
			name = t1_;
			t0_ = Call_(consume_token, this_);
			t0_ = new__List__Standard(Proto_(List__Standard));
			t1_ = new_co_object_co_arguments_co___Send__Compiler(Proto_(Send__Compiler), name, expr, t0_);
			expr = t1_;
			
			}
			}
		return expr;
		
		
		}
	return nil;
}


obj_ parse_primary_expression__Parser__Compiler(obj_ this_)
{
	UsingSym_(name)
	extern obj_ new__LiteralNil__Compiler(obj_ this_);
	extern obj_ new_co___BoolLiteral__Compiler(obj_ this_, obj_ value);
	extern obj_ new_co___BoolLiteral__Compiler(obj_ this_, obj_ value);
	extern obj_ new_co_arguments_co_context_co___FunctionCall__Compiler(obj_ this_, obj_ name, obj_ arguments, obj_ context);
	extern obj_ new__List__Standard(obj_ this_);
	UsingSym_(keyword)
	extern obj_ new__List__Standard(obj_ this_);
	UsingSym_(keyword)
	extern obj_ new_co_arguments_co_context_co___FunctionCall__Compiler(obj_ this_, obj_ name, obj_ arguments, obj_ context);
	UsingSym_(int_literal)
	extern obj_ new_co___IntLiteral__Compiler(obj_ this_, obj_ value);
	UsingSym_(float_literal)
	extern obj_ new_co___FloatLiteral__Compiler(obj_ this_, obj_ value);
	UsingSym_(string_literal)
	extern obj_ new_co___StringLiteral__Compiler(obj_ this_, obj_ value);
	UsingSym_(symbol_literal)
	extern obj_ new_co___SymbolLiteral__Compiler(obj_ this_, obj_ name);
	UsingSym_(character_literal)
	extern obj_ new_co___CharacterLiteral__Compiler(obj_ this_, obj_ char_);
	extern obj_ character_constant_value_co___Lexer__Compiler(obj_ this_, obj_ text);
	UsingSym_(text_literal_start)
	UsingSym_(_40_)
	UsingSym_(_40_)
	UsingSym_(_41_)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineString_(0, "super")
	DefineString_(1, "nil")
	DefineString_(2, "true")
	DefineString_(3, "false")
	DefineString_(4, "")
	DefineString_(5, "Missing argument (\"")
	DefineString_(6, "\").")
	DefineString_(7, "')' expected.")
	UsingMethod_(_nt__eq_) UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(append_co_) UsingMethod_(consume_token) UsingMethod_(context) UsingMethod_(current_token) UsingMethod_(expression_expected_after_co_) UsingMethod_(parse_error_co_) UsingMethod_(parse_expression) UsingMethod_(parse_inclusive_or_expression) UsingMethod_(parse_super_call) UsingMethod_(parse_text_literal) UsingMethod_(text) UsingMethod_(type)
	UsingClass_(List__Standard)
	UsingClass_(CharacterLiteral__Compiler)
	UsingClass_(BoolLiteral__Compiler)
	UsingClass_(LiteralNil__Compiler)
	UsingClass_(SymbolLiteral__Compiler)
	UsingClass_(StringLiteral__Compiler)
	UsingClass_(FloatLiteral__Compiler)
	UsingClass_(IntLiteral__Compiler)
	UsingClass_(FunctionCall__Compiler)
	UsingClass_(Lexer__Compiler)

		{
		obj_ token;
		t0_ = Call_(current_token, this_);
		t1_ = Call_(type, t0_);
		token = t1_;
		
		t0_ = Call_(_eq__eq_, token, Sym_(name));
		if (t0_)
			{
			obj_ name;
			t0_ = Call_(current_token, this_);
			t1_ = Call_(text, t0_);
			name = t1_;
			t0_ = Call_(consume_token, this_);
			
			t0_ = Call_(_eq__eq_, name, Str_(0));
			if (t0_)
				{
				t0_ = Call_(parse_super_call, this_);
				return t0_;
				
				}
			else
				{
				t1_ = Call_(_eq__eq_, name, Str_(1));
				if (t1_)
					{
					t0_ = new__LiteralNil__Compiler(Proto_(LiteralNil__Compiler));
					return t0_;
					}
				else
					{
					t1_ = Call_(_eq__eq_, name, Str_(2));
					if (t1_)
						{
						t0_ = new_co___BoolLiteral__Compiler(Proto_(BoolLiteral__Compiler), true_);
						return t0_;
						}
					else
						{
						t1_ = Call_(_eq__eq_, name, Str_(3));
						if (t1_)
							{
							t0_ = new_co___BoolLiteral__Compiler(Proto_(BoolLiteral__Compiler), nil);
							return t0_;
							
							}
						/* Non-object function call. */
						}
					}
				}
			t1_ = new__List__Standard(Proto_(List__Standard));
			t2_ = Call_(context, this_);
			t3_ = new_co_arguments_co_context_co___FunctionCall__Compiler(Proto_(FunctionCall__Compiler), name, t1_, t2_);
			return t3_;
			
			}
		else
			{
			t4_ = Call_(_eq__eq_, token, Sym_(keyword));
			if (t4_)
				{
				obj_ arguments, name;
				/* Non-object function call. */
				name = Str_(4);
				t0_ = new__List__Standard(Proto_(List__Standard));
				arguments = t0_;
				while (1) {
					ContinuePoint_(0)
					t0_ = Call_(current_token, this_);
					t1_ = Call_(_eq__eq_, t0_, Sym_(keyword));
					if (!(t1_))
						Break_(0)
					{
					obj_ arg;
					t0_ = Call_(current_token, this_);
					t1_ = Call_(text, t0_);
					t2_ = Call_(_pl_, name, t1_);
					name = t2_;
					t0_ = Call_(consume_token, this_);
					t0_ = Call_(parse_inclusive_or_expression, this_);
					arg = t0_;
					t0_ = Not_(arg);
					if (t0_)
						{
						t0_ = Call_(_pl_, Str_(5), name);
						t1_ = Call_(_pl_, t0_, Str_(6));
						t2_ = Call_(parse_error_co_, this_, t1_);
						}
					t0_ = Call_(append_co_, arguments, arg);
					}
					}
				t0_ = Call_(context, this_);
				t1_ = new_co_arguments_co_context_co___FunctionCall__Compiler(Proto_(FunctionCall__Compiler), name, arguments, t0_);
				return t1_;
				
				}
			else
				{
				t2_ = Call_(_eq__eq_, token, Sym_(int_literal));
				if (t2_)
					{
					obj_ value;
					t0_ = Call_(current_token, this_);
					t1_ = Call_(text, t0_);
					value = t1_;
					t0_ = Call_(consume_token, this_);
					t0_ = new_co___IntLiteral__Compiler(Proto_(IntLiteral__Compiler), value);
					return t0_;
					
					}
				else
					{
					t1_ = Call_(_eq__eq_, token, Sym_(float_literal));
					if (t1_)
						{
						obj_ value;
						t0_ = Call_(current_token, this_);
						t1_ = Call_(text, t0_);
						value = t1_;
						t0_ = Call_(consume_token, this_);
						t0_ = new_co___FloatLiteral__Compiler(Proto_(FloatLiteral__Compiler), value);
						return t0_;
						
						}
					else
						{
						t1_ = Call_(_eq__eq_, token, Sym_(string_literal));
						if (t1_)
							{
							obj_ value;
							t0_ = Call_(current_token, this_);
							t1_ = Call_(text, t0_);
							value = t1_;
							t0_ = Call_(consume_token, this_);
							t0_ = new_co___StringLiteral__Compiler(Proto_(StringLiteral__Compiler), value);
							return t0_;
							
							}
						else
							{
							t1_ = Call_(_eq__eq_, token, Sym_(symbol_literal));
							if (t1_)
								{
								obj_ value;
								t0_ = Call_(current_token, this_);
								t1_ = Call_(text, t0_);
								value = t1_;
								t0_ = Call_(consume_token, this_);
								t0_ = new_co___SymbolLiteral__Compiler(Proto_(SymbolLiteral__Compiler), value);
								return t0_;
								
								}
							else
								{
								t1_ = Call_(_eq__eq_, token, Sym_(character_literal));
								if (t1_)
									{
									obj_ value;
									t0_ = Call_(current_token, this_);
									t1_ = Call_(text, t0_);
									value = t1_;
									t0_ = Call_(consume_token, this_);
									t0_ = character_constant_value_co___Lexer__Compiler(Proto_(Lexer__Compiler), value);
									t1_ = new_co___CharacterLiteral__Compiler(Proto_(CharacterLiteral__Compiler), t0_);
									return t1_;
									
									}
								else
									{
									t2_ = Call_(_eq__eq_, token, Sym_(text_literal_start));
									if (t2_)
										{
										t0_ = Call_(parse_text_literal, this_);
										return t0_;
										
										}
									else
										{
										t1_ = Call_(_eq__eq_, token, Sym_(_40_));
										if (t1_)
											{
											obj_ expr;
											t0_ = Call_(consume_token, this_);
											t0_ = Call_(parse_expression, this_);
											expr = t0_;
											t0_ = Not_(expr);
											if (t0_)
												{
												t0_ = Call_(expression_expected_after_co_, this_, Sym_(_40_));
												}
											t0_ = Call_(current_token, this_);
											t1_ = Call_(_nt__eq_, t0_, Sym_(_41_));
											if (t1_)
												{
												t0_ = Call_(parse_error_co_, this_, Str_(7));
												}
											t0_ = Call_(consume_token, this_);
											return expr;
											
											}
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
	return nil;
}


obj_ parse_proto_contents_co___Parser__Compiler(obj_ this_, obj_ the_proto)
{
	UsingSym_(eol)
	UsingSym_(comment)
	UsingSym_(keyword)
	UsingSym_(name)
	UsingSym_(indent)
	UsingSym_(unindent)
	UsingSym_(name)
	UsingSym_(eol)
	extern obj_ build_settings__Main(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineString_(0, "")
	DefineString_(1, "fn")
	DefineString_(2, "function")
	DefineString_(3, "primitive-fn")
	DefineString_(4, "primitive-function")
	DefineString_(5, "c-fn")
	DefineString_(6, "c-function")
	DefineString_(7, "class-fn")
	DefineString_(8, "class-function")
	DefineString_(9, "primitive-class-fn")
	DefineString_(10, "primitive-class-function")
	DefineString_(11, "field")
	DefineString_(12, "fields")
	DefineString_(13, "fld")
	DefineString_(14, "class-field")
	DefineString_(15, "class-fields")
	DefineString_(16, "class-fld")
	DefineString_(17, "primitive-class-fld")
	DefineString_(18, "primitive-class-field")
	DefineString_(19, "primitive-class-fields")
	DefineString_(20, "proto")
	DefineString_(21, "class")
	DefineString_(22, "extend")
	DefineString_(23, "superclass")
	DefineString_(24, "iff")
	DefineString_(25, "Unindent required at end of proto.")
	DefineString_(26, "trylon")
	DefineString_(27, "trylon-class")
	DefineString_(28, "trylid")
	DefineString_(29, "c-preamble")
	DefineString_(30, "c-preamble not allowed when not targeting C.")
	UsingMethod_(_nt__eq_) UsingMethod_(_eq__eq_) UsingMethod_(add_field_co_) UsingMethod_(add_function_co_) UsingMethod_(add_shared_field_co_) UsingMethod_(c_preamble_co_) UsingMethod_(check_iff) UsingMethod_(consume_token) UsingMethod_(context) UsingMethod_(context_co_) UsingMethod_(current_item) UsingMethod_(current_token) UsingMethod_(get_subblock) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(make_subclass_of_co_) UsingMethod_(parse_error_co_) UsingMethod_(parse_extension) UsingMethod_(parse_fields) UsingMethod_(parse_function_co_) UsingMethod_(parse_member_proto) UsingMethod_(parse_proto_contents_co_) UsingMethod_(parse_proto_member_co_) UsingMethod_(parse_type_spec) UsingMethod_(source_name_co_) UsingMethod_(string) UsingMethod_(targeting_c) UsingMethod_(text)
	UsingClass_(Main)

		{
		obj_ saved_context;
		t0_ = Call_(context, this_);
		saved_context = t0_;
		t0_ = Call_(context_co_, this_, the_proto);
		
		while (1) {
			ContinuePoint_(0)
			{
			obj_ name;
			while (1) {
				ContinuePoint_(1)
				t0_ = Call_(current_token, this_);
				t1_ = Call_(_eq__eq_, t0_, Sym_(eol));
				if ((t1_) == nil) {
					t2_ = Call_(current_token, this_);
					t3_ = Call_(_eq__eq_, t2_, Sym_(comment));
					t1_ = t3_;
					}
				if (!(t1_))
					Break_(1)
				{
				t0_ = Call_(consume_token, this_);
				
				}
				}
			t0_ = Call_(current_token, this_);
			t1_ = Call_(text, t0_);
			name = t1_;
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_eq__eq_, t0_, Sym_(keyword));
			if (t1_)
				{
				/* Null-out the name so it doesn't match any special names. */
				name = Str_(0);
				}
			else
				{
				t0_ = Call_(current_token, this_);
				t1_ = Call_(_nt__eq_, t0_, Sym_(name));
				if (t1_)
					{
					Break_(0)
					
					}
				}
			t0_ = Call_(_eq__eq_, name, Str_(1));
			if ((t0_) == nil) {
				t1_ = Call_(_eq__eq_, name, Str_(2));
				t0_ = t1_;
				}
			if ((t0_) == nil) {
				t2_ = Call_(_eq__eq_, name, Str_(3));
				t0_ = t2_;
				}
			if ((t0_) == nil) {
				t3_ = Call_(_eq__eq_, name, Str_(4));
				t0_ = t3_;
				}
			if ((t0_) == nil) {
				t4_ = Call_(_eq__eq_, name, Str_(5));
				t0_ = t4_;
				}
			if ((t0_) == nil) {
				t5_ = Call_(_eq__eq_, name, Str_(6));
				t0_ = t5_;
				}
			if (t0_)
				{
				obj_ function;
				t0_ = Call_(parse_function_co_, this_, true_);
				function = t0_;
				t0_ = Call_(add_function_co_, the_proto, function);
				}
			else
				{
				t0_ = Call_(_eq__eq_, name, Str_(7));
				if ((t0_) == nil) {
					t1_ = Call_(_eq__eq_, name, Str_(8));
					t0_ = t1_;
					}
				if ((t0_) == nil) {
					t2_ = Call_(_eq__eq_, name, Str_(9));
					t0_ = t2_;
					}
				if ((t0_) == nil) {
					t3_ = Call_(_eq__eq_, name, Str_(10));
					t0_ = t3_;
					}
				if (t0_)
					{
					/* For backward compatibility with Trylon 1. */
					t0_ = Call_(parse_function_co_, this_, true_);
					t1_ = Call_(add_function_co_, the_proto, t0_);
					
					}
				else
					{
					t0_ = Call_(_eq__eq_, name, Str_(11));
					if ((t0_) == nil) {
						t1_ = Call_(_eq__eq_, name, Str_(12));
						t0_ = t1_;
						}
					if ((t0_) == nil) {
						t2_ = Call_(_eq__eq_, name, Str_(13));
						t0_ = t2_;
						}
					if (t0_)
						{
						t0_ = Call_(parse_fields, this_);
						ForStart_(2, t0_, field)
							{
							t0_ = Call_(add_field_co_, the_proto, field);
							
							}
						ForEnd_(2)
						}
					else
						{
						t0_ = Call_(_eq__eq_, name, Str_(14));
						if ((t0_) == nil) {
							t1_ = Call_(_eq__eq_, name, Str_(15));
							t0_ = t1_;
							}
						if ((t0_) == nil) {
							t2_ = Call_(_eq__eq_, name, Str_(16));
							t0_ = t2_;
							}
						if ((t0_) == nil) {
							t3_ = Call_(_eq__eq_, name, Str_(17));
							t0_ = t3_;
							}
						if ((t0_) == nil) {
							t4_ = Call_(_eq__eq_, name, Str_(18));
							t0_ = t4_;
							}
						if ((t0_) == nil) {
							t5_ = Call_(_eq__eq_, name, Str_(19));
							t0_ = t5_;
							}
						if (t0_)
							{
							/* For backward compatibility with Trylon 1. */
							t0_ = Call_(parse_fields, this_);
							ForStart_(3, t0_, field)
								{
								t0_ = Call_(add_shared_field_co_, the_proto, field);
								
								}
							ForEnd_(3)
							}
						else
							{
							t0_ = Call_(_eq__eq_, name, Str_(20));
							if ((t0_) == nil) {
								t1_ = Call_(_eq__eq_, name, Str_(21));
								t0_ = t1_;
								}
							if (t0_)
								{
								t0_ = Call_(parse_member_proto, this_);
								}
							else
								{
								t0_ = Call_(_eq__eq_, name, Str_(22));
								if (t0_)
									{
									t0_ = Call_(parse_extension, this_);
									
									}
								else
									{
									t0_ = Call_(_eq__eq_, name, Str_(23));
									if (t0_)
										{
										obj_ superclass;
										t0_ = Call_(consume_token, this_);
										t0_ = Call_(parse_type_spec, this_);
										superclass = t0_;
										t0_ = Call_(make_subclass_of_co_, the_proto, superclass);
										
										}
									else
										{
										t0_ = Call_(_eq__eq_, name, Str_(24));
										if (t0_)
											{
											t0_ = Call_(check_iff, this_);
											if (t0_)
												{
												t0_ = Call_(current_token, this_);
												t1_ = Call_(_eq__eq_, t0_, Sym_(indent));
												if (t1_)
													{
													t0_ = Call_(consume_token, this_);
													t0_ = Call_(parse_proto_contents_co_, this_, the_proto);
													t0_ = Call_(current_token, this_);
													t1_ = Call_(_nt__eq_, t0_, Sym_(unindent));
													if (t1_)
														{
														t0_ = Call_(parse_error_co_, this_, Str_(25));
														}
													t0_ = Call_(consume_token, this_);
													
													}
												}
											}
										else
											{
											t0_ = Call_(_eq__eq_, name, Str_(26));
											if ((t0_) == nil) {
												t1_ = Call_(_eq__eq_, name, Str_(27));
												t0_ = t1_;
												}
											if ((t0_) == nil) {
												t2_ = Call_(_eq__eq_, name, Str_(28));
												t0_ = t2_;
												}
											if (t0_)
												{
												t0_ = Call_(consume_token, this_);
												/* Likely followed by the name; grab that if possible. */
												t0_ = Call_(current_token, this_);
												t1_ = Call_(_eq__eq_, t0_, Sym_(name));
												if (t1_)
													{
													t0_ = Call_(current_token, this_);
													t1_ = Call_(text, t0_);
													t2_ = Call_(source_name_co_, the_proto, t1_);
													t0_ = Call_(consume_token, this_);
													}
												/* Ignore the rest of the line. */
												while (1) {
													ContinuePoint_(4)
													t0_ = Call_(current_token, this_);
													t1_ = Call_(_nt__eq_, t0_, Sym_(eol));
													if (!(t1_))
														Break_(4)
													{
													t0_ = Call_(consume_token, this_);
													}
													}
												t0_ = Call_(consume_token, this_);
												
												}
											else
												{
												t0_ = Call_(_eq__eq_, name, Str_(29));
												if (t0_)
													{
													t0_ = build_settings__Main(Proto_(Main));
													t1_ = Call_(targeting_c, t0_);
													t2_ = Not_(t1_);
													if (t2_)
														{
														t0_ = Call_(parse_error_co_, this_, Str_(30));
														}
													t0_ = Call_(consume_token, this_);
													t0_ = Call_(get_subblock, this_);
													t1_ = Call_(string, t0_);
													t2_ = Call_(c_preamble_co_, the_proto, t1_);
													
													}
												else
													{
													t0_ = Call_(parse_proto_member_co_, this_, the_proto);
													
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
		t0_ = Call_(context_co_, this_, saved_context);
		
		
		}
	return nil;
}


obj_ parse_proto_file_co___Parser__Compiler(obj_ this_, obj_ proto)
{
	UsingSym_(eof)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "Parsing ")
	DefineString_(1, "...")
	DefineString_(2, "Extra stuff in prototype.")
	UsingMethod_(_nt__eq_) UsingMethod_(_pl_) UsingMethod_(current_token) UsingMethod_(indent) UsingMethod_(name) UsingMethod_(parse_error_co_) UsingMethod_(parse_proto_contents_co_) UsingMethod_(report_co_) UsingMethod_(unindent)

		{
		t0_ = Call_(name, proto);
		t1_ = Call_(_pl_, Str_(0), t0_);
		t2_ = Call_(_pl_, t1_, Str_(1));
		t3_ = Call_(report_co_, this_, t2_);
		t0_ = Call_(indent, this_);
		
		t0_ = Call_(parse_proto_contents_co_, this_, proto);
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_nt__eq_, t0_, Sym_(eof));
		if (t1_)
			{
			t0_ = Call_(parse_error_co_, this_, Str_(2));
			
			}
		t0_ = Call_(unindent, this_);
		
		
		}
	return nil;
}


obj_ parse_proto_literal_primary__Parser__Compiler(obj_ this_)
{
	UsingSym_(string_literal)
	extern obj_ new_co___StringLiteral__Compiler(obj_ this_, obj_ value);
	UsingSym_(text_literal_start)
	UsingSym_(symbol_literal)
	extern obj_ new_co___SymbolLiteral__Compiler(obj_ this_, obj_ name);
	UsingSym_(int_literal)
	extern obj_ new_co___IntLiteral__Compiler(obj_ this_, obj_ value);
	UsingSym_(float_literal)
	extern obj_ new_co___FloatLiteral__Compiler(obj_ this_, obj_ value);
	UsingSym_(character_literal)
	extern obj_ new_co___CharacterLiteral__Compiler(obj_ this_, obj_ char_);
	extern obj_ character_constant_value_co___Lexer__Compiler(obj_ this_, obj_ text);
	UsingSym_(name)
	extern obj_ new_co___BoolLiteral__Compiler(obj_ this_, obj_ value);
	extern obj_ new_co___BoolLiteral__Compiler(obj_ this_, obj_ value);
	extern obj_ new__LiteralNil__Compiler(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	DefineString_(0, "true")
	DefineString_(1, "false")
	DefineString_(2, "nil")
	DefineString_(3, "Illegal initial value for a prototype field.")
	UsingMethod_(_eq__eq_) UsingMethod_(current_token) UsingMethod_(parse_error_co_) UsingMethod_(parse_text_literal) UsingMethod_(text) UsingMethod_(type)
	UsingClass_(CharacterLiteral__Compiler)
	UsingClass_(BoolLiteral__Compiler)
	UsingClass_(LiteralNil__Compiler)
	UsingClass_(SymbolLiteral__Compiler)
	UsingClass_(StringLiteral__Compiler)
	UsingClass_(FloatLiteral__Compiler)
	UsingClass_(IntLiteral__Compiler)
	UsingClass_(Lexer__Compiler)

		{
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_eq__eq_, t0_, Sym_(string_literal));
		if (t1_)
			{
			t0_ = Call_(current_token, this_);
			t1_ = Call_(text, t0_);
			t2_ = new_co___StringLiteral__Compiler(Proto_(StringLiteral__Compiler), t1_);
			return t2_;
			}
		else
			{
			t3_ = Call_(current_token, this_);
			t4_ = Call_(_eq__eq_, t3_, Sym_(text_literal_start));
			if (t4_)
				{
				t0_ = Call_(parse_text_literal, this_);
				return t0_;
				}
			else
				{
				t1_ = Call_(current_token, this_);
				t2_ = Call_(_eq__eq_, t1_, Sym_(symbol_literal));
				if (t2_)
					{
					t0_ = Call_(current_token, this_);
					t1_ = Call_(text, t0_);
					t2_ = new_co___SymbolLiteral__Compiler(Proto_(SymbolLiteral__Compiler), t1_);
					return t2_;
					}
				else
					{
					t3_ = Call_(current_token, this_);
					t4_ = Call_(_eq__eq_, t3_, Sym_(int_literal));
					if (t4_)
						{
						t0_ = Call_(current_token, this_);
						t1_ = Call_(text, t0_);
						t2_ = new_co___IntLiteral__Compiler(Proto_(IntLiteral__Compiler), t1_);
						return t2_;
						}
					else
						{
						t3_ = Call_(current_token, this_);
						t4_ = Call_(_eq__eq_, t3_, Sym_(float_literal));
						if (t4_)
							{
							t0_ = Call_(current_token, this_);
							t1_ = Call_(text, t0_);
							t2_ = new_co___FloatLiteral__Compiler(Proto_(FloatLiteral__Compiler), t1_);
							return t2_;
							}
						else
							{
							t3_ = Call_(current_token, this_);
							t4_ = Call_(_eq__eq_, t3_, Sym_(character_literal));
							if (t4_)
								{
								t0_ = Call_(current_token, this_);
								t1_ = Call_(text, t0_);
								t2_ = character_constant_value_co___Lexer__Compiler(Proto_(Lexer__Compiler), t1_);
								t3_ = new_co___CharacterLiteral__Compiler(Proto_(CharacterLiteral__Compiler), t2_);
								return t3_;
								}
							else
								{
								t4_ = Call_(current_token, this_);
								t5_ = Call_(type, t4_);
								t6_ = Call_(_eq__eq_, t5_, Sym_(name));
								if (t6_)
									{
									obj_ literal_name;
									t0_ = Call_(current_token, this_);
									t1_ = Call_(text, t0_);
									literal_name = t1_;
									t0_ = Call_(_eq__eq_, literal_name, Str_(0));
									if (t0_)
										{
										t0_ = new_co___BoolLiteral__Compiler(Proto_(BoolLiteral__Compiler), true_);
										return t0_;
										}
									else
										{
										t1_ = Call_(_eq__eq_, literal_name, Str_(1));
										if (t1_)
											{
											t0_ = new_co___BoolLiteral__Compiler(Proto_(BoolLiteral__Compiler), nil);
											return t0_;
											}
										else
											{
											t1_ = Call_(_eq__eq_, literal_name, Str_(2));
											if (t1_)
												{
												t0_ = new__LiteralNil__Compiler(Proto_(LiteralNil__Compiler));
												return t0_;
												}
											else
												{
												t1_ = Call_(parse_error_co_, this_, Str_(3));
												
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
		return nil;
		
		
		}
	return nil;
}


obj_ parse_proto_literal_tuple__Parser__Compiler(obj_ this_)
{
	UsingSym_(_44_)
	extern obj_ new__TupleExpression__Compiler(obj_ this_);
	UsingSym_(_44_)
	UsingSym_(_40_)
	UsingSym_(_41_)
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "Missing value in literal tuple.")
	DefineString_(1, "Missing expression after '(' in literal.")
	DefineString_(2, "Missing ')' in literal.")
	UsingMethod_(_nt__eq_) UsingMethod_(_eq__eq_) UsingMethod_(add_member_co_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(parse_error_co_) UsingMethod_(parse_proto_literal_primary) UsingMethod_(parse_proto_literal_tuple)
	UsingClass_(TupleExpression__Compiler)

		{
		obj_ value;
		t0_ = Call_(parse_proto_literal_primary, this_);
		value = t0_;
		if (value)
			{
			/* See if there's a tuple. */
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_eq__eq_, t0_, Sym_(_44_));
			if (t1_)
				{
				obj_ tuple;
				t0_ = new__TupleExpression__Compiler(Proto_(TupleExpression__Compiler));
				tuple = t0_;
				t0_ = Call_(add_member_co_, tuple, value);
				while (1) {
					ContinuePoint_(0)
					t0_ = Call_(current_token, this_);
					t1_ = Call_(_eq__eq_, t0_, Sym_(_44_));
					if (!(t1_))
						Break_(0)
					{
					t0_ = Call_(consume_token, this_);
					t0_ = Call_(parse_proto_literal_tuple, this_);
					value = t0_;
					t0_ = Not_(value);
					if (t0_)
						{
						t0_ = Call_(parse_error_co_, this_, Str_(0));
						}
					t0_ = Call_(add_member_co_, tuple, value);
					}
					}
				value = tuple;
				}
			}
		else
			{
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_eq__eq_, t0_, Sym_(_40_));
			if (t1_)
				{
				t0_ = Call_(consume_token, this_);
				t0_ = Call_(parse_proto_literal_tuple, this_);
				value = t0_;
				t0_ = Not_(value);
				if (t0_)
					{
					t0_ = Call_(parse_error_co_, this_, Str_(1));
					}
				t0_ = Call_(current_token, this_);
				t1_ = Call_(_nt__eq_, t0_, Sym_(_41_));
				if (t1_)
					{
					t0_ = Call_(parse_error_co_, this_, Str_(2));
					}
				t0_ = Call_(consume_token, this_);
				
				}
			}
		return value;
		
		
		}
	return nil;
}


obj_ parse_proto_literal_value__Parser__Compiler(obj_ this_)
{
	UsingSym_(eol)
	UsingSym_(indent)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "Bad Dictionary literal declaration.")
	DefineString_(1, "Syntax error in prototype field initial value.")
	UsingMethod_(_eq__eq_) UsingMethod_(current_token) UsingMethod_(next_token) UsingMethod_(parse_dict_literal_expression) UsingMethod_(parse_error_co_) UsingMethod_(parse_proto_literal_tuple)

		{
		obj_ value;
		t0_ = Call_(parse_proto_literal_tuple, this_);
		value = t0_;
		if (value)
			{
			/* Okay. */
			}
		else
			{
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_eq__eq_, t0_, Sym_(eol));
			if (t1_) {
				t2_ = Call_(next_token, this_);
				t3_ = Call_(_eq__eq_, t2_, Sym_(indent));
				t1_ = t3_;
				}
			if (t1_)
				{
				t0_ = Call_(parse_dict_literal_expression, this_);
				value = t0_;
				t0_ = Not_(value);
				if (t0_)
					{
					t0_ = Call_(parse_error_co_, this_, Str_(0));
					}
				}
			else
				{
				t0_ = Call_(parse_error_co_, this_, Str_(1));
				
				}
			}
		return value;
		
		
		}
	return nil;
}


obj_ parse_proto_member_co___Parser__Compiler(obj_ this_, obj_ proto)
{
	UsingSym_(_eq_)
	UsingSym_(_co__eq_)
	UsingSym_(_40_)
	UsingSym_(keyword)
	UsingSym_(_40_)
	UsingSym_(_41_)
	UsingSym_(_eq_)
	UsingSym_(_co__eq_)
	extern obj_ new_co_type_co___CompiledField__Compiler(obj_ this_, obj_ name, obj_ type);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineString_(0, "Bad declaration of a proto member.")
	DefineString_(1, "\")\" expected.")
	DefineString_(2, "\"=\" expected.")
	UsingMethod_(_nt__eq_) UsingMethod_(_eq__eq_) UsingMethod_(add_function_co_) UsingMethod_(add_shared_field_co_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(initial_value_co_) UsingMethod_(next_token) UsingMethod_(parse_error_co_) UsingMethod_(parse_function_co_) UsingMethod_(parse_proto_literal_value) UsingMethod_(parse_type_spec) UsingMethod_(text)
	UsingClass_(CompiledField__Compiler)

		{
		/* We're at the name. */
		
		/* Handle declaring a field. */
		t0_ = Call_(next_token, this_);
		t1_ = Call_(_eq__eq_, t0_, Sym_(_eq_));
		if ((t1_) == nil) {
			t2_ = Call_(next_token, this_);
			t3_ = Call_(_eq__eq_, t2_, Sym_(_co__eq_));
			t1_ = t3_;
			}
		if ((t1_) == nil) {
			t4_ = Call_(next_token, this_);
			t5_ = Call_(_eq__eq_, t4_, Sym_(_40_));
			t1_ = t5_;
			}
		if (t1_)
			{
			obj_ field, initial_value, name, type;
			/* Make sure it *is* a field. */
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_eq__eq_, t0_, Sym_(keyword));
			if (t1_)
				{
				t0_ = Call_(parse_error_co_, this_, Str_(0));
				}
			/* Name. */
			t0_ = Call_(current_token, this_);
			t1_ = Call_(text, t0_);
			name = t1_;
			t0_ = Call_(consume_token, this_);
			 	/* Name. */
			/* Type. */
			type = nil;
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_eq__eq_, t0_, Sym_(_40_));
			if (t1_)
				{
				t0_ = Call_(consume_token, this_);
				t0_ = Call_(parse_type_spec, this_);
				type = t0_;
				t0_ = Call_(current_token, this_);
				t1_ = Call_(_nt__eq_, t0_, Sym_(_41_));
				if (t1_)
					{
					t0_ = Call_(parse_error_co_, this_, Str_(1));
					}
				t0_ = Call_(consume_token, this_);
				}
			/* '=' or ':=' */
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_nt__eq_, t0_, Sym_(_eq_));
			if (t1_) {
				t2_ = Call_(current_token, this_);
				t3_ = Call_(_nt__eq_, t2_, Sym_(_co__eq_));
				t1_ = t3_;
				}
			if (t1_)
				{
				t0_ = Call_(parse_error_co_, this_, Str_(2));
				}
			t0_ = Call_(consume_token, this_);
			
			/* Get the initial value. */
			t0_ = Call_(parse_proto_literal_value, this_);
			initial_value = t0_;
			t0_ = Call_(consume_token, this_);
			 	/* Value. */
			
			/* Add the field. */
			t0_ = new_co_type_co___CompiledField__Compiler(Proto_(CompiledField__Compiler), name, nil);
			field = t0_;
			t0_ = Call_(initial_value_co_, field, initial_value);
			t0_ = Call_(add_shared_field_co_, proto, field);
			
			}
		/* Declaring a function. */
		else
			{
			obj_ function;
			t0_ = Call_(parse_function_co_, this_, nil);
			function = t0_;
			t0_ = Call_(add_function_co_, proto, function);
			
			
			}
		}
	return nil;
}


obj_ parse_proto_spec__Parser__Compiler(obj_ this_)
{
	UsingSym_(name)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "Unknown prototype.")
	DefineString_(1, "Unknown prototype.")
	DefineString_(2, "Missing the type in a type specifier.")
	UsingMethod_(_eq__eq_) UsingMethod_(consume_token) UsingMethod_(context) UsingMethod_(current_token) UsingMethod_(get_subproto_co_) UsingMethod_(is_a_co_) UsingMethod_(lookup_function_co_) UsingMethod_(parse_error_co_) UsingMethod_(proto) UsingMethod_(text)
	UsingClass_(ProtoFunction__Compiler)

		{
		obj_ cur_context, type;
		type = nil;
		t0_ = Call_(context, this_);
		cur_context = t0_;
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_eq__eq_, t0_, Sym_(name));
			if (!(t1_))
				Break_(0)
			{
			obj_ type_function;
			/* Find the prototype. */
			type_function = nil;
			t0_ = Not_(type);
			if (t0_)
				{
				/* The first name can be anything in scope. */
				t0_ = Call_(current_token, this_);
				t1_ = Call_(text, t0_);
				t2_ = Call_(lookup_function_co_, cur_context, t1_);
				type_function = t2_;
				t0_ = Not_(type_function);
				if ((t0_) == nil) {
					t1_ = Call_(is_a_co_, type_function, Proto_(ProtoFunction__Compiler));
					t2_ = Not_(t1_);
					t0_ = t2_;
					}
				if (t0_)
					{
					t0_ = Call_(parse_error_co_, this_, Str_(0));
					}
				t0_ = Call_(proto, type_function);
				type = t0_;
				}
			else
				{
				/* Other names must be subprotos of the proto specified so far. */
				t0_ = Call_(current_token, this_);
				t1_ = Call_(text, t0_);
				t2_ = Call_(get_subproto_co_, cur_context, t1_);
				type = t2_;
				t0_ = Not_(type);
				if (t0_)
					{
					t0_ = Call_(parse_error_co_, this_, Str_(1));
					}
				}
			t0_ = Call_(consume_token, this_);
			cur_context = type;
			
			}
			}
		/* Make sure we got a proto. */
		t0_ = Not_(type);
		if (t0_)
			{
			t0_ = Call_(parse_error_co_, this_, Str_(2));
			
			}
		return type;
		
		
		}
	return nil;
}


obj_ parse_relational_expression__Parser__Compiler(obj_ this_)
{
	UsingSym_(_lt_)
	UsingSym_(_gt_)
	UsingSym_(_lt__eq_)
	UsingSym_(_gt__eq_)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(_eq__eq_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(expression_expected_after_co_) UsingMethod_(make_binop_call_co_with_co_and_co_) UsingMethod_(parse_shift_expression) UsingMethod_(type)

		{
		obj_ expr, token;
		t0_ = Call_(parse_shift_expression, this_);
		expr = t0_;
		t0_ = Not_(expr);
		if (t0_)
			{
			return nil;
			
			}
		t0_ = Call_(current_token, this_);
		t1_ = Call_(type, t0_);
		token = t1_;
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(_eq__eq_, token, Sym_(_lt_));
			if ((t0_) == nil) {
				t1_ = Call_(_eq__eq_, token, Sym_(_gt_));
				t0_ = t1_;
				}
			if ((t0_) == nil) {
				t2_ = Call_(_eq__eq_, token, Sym_(_lt__eq_));
				t0_ = t2_;
				}
			if ((t0_) == nil) {
				t3_ = Call_(_eq__eq_, token, Sym_(_gt__eq_));
				t0_ = t3_;
				}
			if (!(t0_))
				Break_(0)
			{
			obj_ expr2;
			t0_ = Call_(consume_token, this_);
			t0_ = Call_(parse_shift_expression, this_);
			expr2 = t0_;
			t0_ = Not_(expr2);
			if (t0_)
				{
				t0_ = Call_(expression_expected_after_co_, this_, token);
				}
			t0_ = Call_(make_binop_call_co_with_co_and_co_, this_, token, expr, expr2);
			expr = t0_;
			
			t0_ = Call_(current_token, this_);
			t1_ = Call_(type, t0_);
			token = t1_;
			
			}
			}
		return expr;
		
		
		}
	return nil;
}


obj_ parse_return_statement__Parser__Compiler(obj_ this_)
{
	UsingSym_(eol)
	UsingSym_(comment)
	extern obj_ new__LiteralNil__Compiler(obj_ this_);
	extern obj_ new_co_comment_co___ReturnStatement__Compiler(obj_ this_, obj_ value, obj_ comment);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(_eq__eq_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(parse_expression) UsingMethod_(require_eol)
	UsingClass_(LiteralNil__Compiler)
	UsingClass_(ReturnStatement__Compiler)

		{
		obj_ comment, return_value;
		t0_ = Call_(consume_token, this_);
		 	/* "return" */
		
		return_value = nil;
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_eq__eq_, t0_, Sym_(eol));
		if ((t1_) == nil) {
			t2_ = Call_(current_token, this_);
			t3_ = Call_(_eq__eq_, t2_, Sym_(comment));
			t1_ = t3_;
			}
		if (t1_)
			{
			t0_ = new__LiteralNil__Compiler(Proto_(LiteralNil__Compiler));
			return_value = t0_;
			}
		else
			{
			t0_ = Call_(parse_expression, this_);
			return_value = t0_;
			}
		t0_ = Call_(require_eol, this_);
		comment = t0_;
		
		t0_ = new_co_comment_co___ReturnStatement__Compiler(Proto_(ReturnStatement__Compiler), return_value, comment);
		return t0_;
		
		
		}
	return nil;
}


obj_ parse_shift_expression__Parser__Compiler(obj_ this_)
{
	UsingSym_(_lt__lt_)
	UsingSym_(_gt__gt_)
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_eq__eq_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(expression_expected_after_co_) UsingMethod_(make_binop_call_co_with_co_and_co_) UsingMethod_(parse_additive_expression) UsingMethod_(type)

		{
		obj_ expr, token;
		t0_ = Call_(parse_additive_expression, this_);
		expr = t0_;
		t0_ = Not_(expr);
		if (t0_)
			{
			return nil;
			
			}
		t0_ = Call_(current_token, this_);
		t1_ = Call_(type, t0_);
		token = t1_;
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(_eq__eq_, token, Sym_(_lt__lt_));
			if ((t0_) == nil) {
				t1_ = Call_(_eq__eq_, token, Sym_(_gt__gt_));
				t0_ = t1_;
				}
			if (!(t0_))
				Break_(0)
			{
			obj_ expr2;
			t0_ = Call_(consume_token, this_);
			t0_ = Call_(parse_additive_expression, this_);
			expr2 = t0_;
			t0_ = Not_(expr2);
			if (t0_)
				{
				t0_ = Call_(expression_expected_after_co_, this_, token);
				}
			t0_ = Call_(make_binop_call_co_with_co_and_co_, this_, token, expr, expr2);
			expr = t0_;
			
			t0_ = Call_(current_token, this_);
			t1_ = Call_(type, t0_);
			token = t1_;
			
			}
			}
		return expr;
		
		
		}
	return nil;
}


obj_ parse_statement__Parser__Compiler(obj_ this_)
{
	UsingSym_(name)
	UsingSym_(_co__eq_)
	UsingSym_(_in_)
	UsingSym_(_40_)
	UsingSym_(eol)
	extern obj_ new__BlankLine__Compiler(obj_ this_);
	UsingSym_(comment)
	extern obj_ new_co___Comment__Compiler(obj_ this_, obj_ text);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	DefineString_(0, "if")
	DefineString_(1, "iff")
	DefineString_(2, "switch")
	DefineString_(3, "loop")
	DefineString_(4, "while")
	DefineString_(5, "for")
	DefineString_(6, "continue")
	DefineString_(7, "break")
	DefineString_(8, "return")
	DefineString_(9, "try")
	DefineString_(10, "throw")
	DefineString_(11, "coke")
	UsingMethod_(_eq__eq_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(next_token) UsingMethod_(parse_break_statement) UsingMethod_(parse_coke_statement) UsingMethod_(parse_continue_statement) UsingMethod_(parse_declaration) UsingMethod_(parse_expression_statement) UsingMethod_(parse_for_statement) UsingMethod_(parse_if_statement) UsingMethod_(parse_iff_statement) UsingMethod_(parse_loop_statement) UsingMethod_(parse_return_statement) UsingMethod_(parse_switch_statement) UsingMethod_(parse_throw_statement) UsingMethod_(parse_try_statement) UsingMethod_(parse_while_statement) UsingMethod_(require_eol) UsingMethod_(text)
	UsingClass_(Comment__Compiler)
	UsingClass_(BlankLine__Compiler)

		{
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_eq__eq_, t0_, Sym_(name));
		if (t1_)
			{
			obj_ name;
			t0_ = Call_(current_token, this_);
			t1_ = Call_(text, t0_);
			name = t1_;
			t0_ = Call_(_eq__eq_, name, Str_(0));
			if (t0_)
				{
				t0_ = Call_(parse_if_statement, this_);
				return t0_;
				}
			else
				{
				t1_ = Call_(_eq__eq_, name, Str_(1));
				if (t1_)
					{
					t0_ = Call_(parse_iff_statement, this_);
					return t0_;
					}
				else
					{
					t1_ = Call_(_eq__eq_, name, Str_(2));
					if (t1_)
						{
						t0_ = Call_(parse_switch_statement, this_);
						return t0_;
						}
					else
						{
						t1_ = Call_(_eq__eq_, name, Str_(3));
						if (t1_)
							{
							t0_ = Call_(parse_loop_statement, this_);
							return t0_;
							}
						else
							{
							t1_ = Call_(_eq__eq_, name, Str_(4));
							if (t1_)
								{
								t0_ = Call_(parse_while_statement, this_);
								return t0_;
								}
							else
								{
								t1_ = Call_(_eq__eq_, name, Str_(5));
								if (t1_)
									{
									t0_ = Call_(parse_for_statement, this_);
									return t0_;
									}
								else
									{
									t1_ = Call_(_eq__eq_, name, Str_(6));
									if (t1_)
										{
										t0_ = Call_(parse_continue_statement, this_);
										return t0_;
										}
									else
										{
										t1_ = Call_(_eq__eq_, name, Str_(7));
										if (t1_)
											{
											t0_ = Call_(parse_break_statement, this_);
											return t0_;
											}
										else
											{
											t1_ = Call_(_eq__eq_, name, Str_(8));
											if (t1_)
												{
												t0_ = Call_(parse_return_statement, this_);
												return t0_;
												}
											else
												{
												t1_ = Call_(_eq__eq_, name, Str_(9));
												if (t1_)
													{
													t0_ = Call_(parse_try_statement, this_);
													return t0_;
													}
												else
													{
													t1_ = Call_(_eq__eq_, name, Str_(10));
													if (t1_)
														{
														t0_ = Call_(parse_throw_statement, this_);
														return t0_;
														}
													else
														{
														t1_ = Call_(_eq__eq_, name, Str_(11));
														if (t1_)
															{
															t0_ = Call_(parse_coke_statement, this_);
															return t0_;
															
															}
														/* Is it a declaration? */
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
			t1_ = Call_(next_token, this_);
			t2_ = Call_(_eq__eq_, t1_, Sym_(_co__eq_));
			if ((t2_) == nil) {
				t3_ = Call_(next_token, this_);
				t4_ = Call_(_eq__eq_, t3_, Sym_(_in_));
				t2_ = t4_;
				}
			if ((t2_) == nil) {
				t5_ = Call_(next_token, this_);
				t6_ = Call_(_eq__eq_, t5_, Sym_(_40_));
				t2_ = t6_;
				}
			if (t2_)
				{
				t0_ = Call_(parse_declaration, this_);
				return t0_;
				
				}
			}
		else
			{
			t1_ = Call_(current_token, this_);
			t2_ = Call_(_eq__eq_, t1_, Sym_(eol));
			if (t2_)
				{
				t0_ = Call_(consume_token, this_);
				t0_ = new__BlankLine__Compiler(Proto_(BlankLine__Compiler));
				return t0_;
				
				}
			else
				{
				t1_ = Call_(current_token, this_);
				t2_ = Call_(_eq__eq_, t1_, Sym_(comment));
				if (t2_)
					{
					obj_ comment;
					t0_ = Call_(current_token, this_);
					t1_ = Call_(text, t0_);
					comment = t1_;
					t0_ = Call_(consume_token, this_);
					t0_ = Call_(require_eol, this_);
					t0_ = new_co___Comment__Compiler(Proto_(Comment__Compiler), comment);
					return t0_;
					
					}
				/* If it wasn't anything else, it must be an expression statement. */
				}
			}
		t1_ = Call_(parse_expression_statement, this_);
		return t1_;
		
		
		}
	return nil;
}


obj_ parse_super_call__Parser__Compiler(obj_ this_)
{
	extern obj_ new__List__Standard(obj_ this_);
	UsingSym_(name)
	UsingSym_(keyword)
	UsingSym_(keyword)
	extern obj_ new_co_arguments_co___SuperCall__Compiler(obj_ this_, obj_ name, obj_ arguments);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineString_(0, "\"super\" calls are only valid in functions.")
	DefineString_(1, "")
	DefineString_(2, "Missing argument (\"")
	DefineString_(3, "\").")
	DefineString_(4, "Missing unary expression argument in super call (\"")
	DefineString_(5, "\").")
	DefineString_(6, "Illegal super call.")
	DefineString_(7, "Internal error: no proto for super call.")
	UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(append_co_) UsingMethod_(consume_token) UsingMethod_(context) UsingMethod_(current_token) UsingMethod_(enclosing_method_context) UsingMethod_(is_a_co_) UsingMethod_(is_empty) UsingMethod_(parent) UsingMethod_(parse_error_co_) UsingMethod_(parse_inclusive_or_expression) UsingMethod_(parse_unary_expression) UsingMethod_(text) UsingMethod_(type)
	UsingClass_(List__Standard)
	UsingClass_(SuperCall__Compiler)
	UsingClass_(CompiledProto__Compiler)

		{
		obj_ arguments, method_context, name, on_proto;
		/* Note: the 'super' token has already been consumed. */
		
		/* Make sure this is in an object method. */
		t0_ = Call_(context, this_);
		t1_ = Call_(enclosing_method_context, t0_);
		method_context = t1_;
		t0_ = Not_(method_context);
		if (t0_)
			{
			t0_ = Call_(parse_error_co_, this_, Str_(0));
			
			}
		name = nil;
		t0_ = new__List__Standard(Proto_(List__Standard));
		arguments = t0_;
		
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_eq__eq_, t0_, Sym_(name));
		if (t1_)
			{
			t0_ = Call_(current_token, this_);
			t1_ = Call_(text, t0_);
			name = t1_;
			t0_ = Call_(consume_token, this_);
			
			}
		else
			{
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_eq__eq_, t0_, Sym_(keyword));
			if (t1_)
				{
				/* Get the arguments. */
				name = Str_(1);
				while (1) {
					ContinuePoint_(0)
					t0_ = Call_(current_token, this_);
					t1_ = Call_(_eq__eq_, t0_, Sym_(keyword));
					if (!(t1_))
						Break_(0)
					{
					obj_ arg;
					t0_ = Call_(current_token, this_);
					t1_ = Call_(text, t0_);
					t2_ = Call_(_pl_, name, t1_);
					name = t2_;
					t0_ = Call_(consume_token, this_);
					t0_ = Call_(parse_inclusive_or_expression, this_);
					arg = t0_;
					t0_ = Not_(arg);
					if (t0_)
						{
						t0_ = Call_(_pl_, Str_(2), name);
						t1_ = Call_(_pl_, t0_, Str_(3));
						t2_ = Call_(parse_error_co_, this_, t1_);
						}
					t0_ = Call_(append_co_, arguments, arg);
					
					}
					}
				}
			/* We allow binops here. */
			else
				{
				t0_ = Call_(current_token, this_);
				t1_ = Call_(text, t0_);
				t2_ = Not_(t1_);
				if ((t2_) == nil) {
					t3_ = Call_(current_token, this_);
					t4_ = Call_(text, t3_);
					t5_ = Call_(is_empty, t4_);
					t2_ = t5_;
					}
				if (t2_)
					{
					obj_ arg;
					/* *** Actually, we're allowing too many things here, but we'd have to */
					/* *** explicitly check every binop. */
					t0_ = Call_(current_token, this_);
					t1_ = Call_(type, t0_);
					name = t1_;
					t0_ = Call_(consume_token, this_);
					t0_ = Call_(parse_unary_expression, this_);
					arg = t0_;
					t0_ = Not_(arg);
					if (t0_)
						{
						t0_ = Call_(_pl_, Str_(4), name);
						t1_ = Call_(_pl_, t0_, Str_(5));
						t2_ = Call_(parse_error_co_, this_, t1_);
						}
					t0_ = Call_(append_co_, arguments, arg);
					
					}
				else
					{
					/* Does this ever happen? */
					t0_ = Call_(parse_error_co_, this_, Str_(6));
					
					}
				}
			}
		/* Get the proto that it's on. */
		t0_ = Call_(parent, method_context);
		on_proto = t0_;
		t0_ = Call_(is_a_co_, on_proto, Proto_(CompiledProto__Compiler));
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = Call_(parse_error_co_, this_, Str_(7));
			
			}
		t0_ = new_co_arguments_co___SuperCall__Compiler(Proto_(SuperCall__Compiler), name, arguments);
		return t0_;
		
		
		
		}
	return nil;
}


obj_ parse_switch_statement__Parser__Compiler(obj_ this_)
{
	extern obj_ new_co_value_comment_co___SwitchStatement__Compiler(obj_ this_, obj_ expression, obj_ value_comment);
	UsingSym_(eol)
	UsingSym_(indent)
	UsingSym_(unindent)
	UsingSym_(name)
	extern obj_ new_co_body_co_pre_clause_comments_co_value_comment_co___SwitchClause__Compiler(obj_ this_, obj_ values, obj_ body, obj_ pre_clause_comments, obj_ value_comment);
	extern obj_ new__List__Standard(obj_ this_);
	UsingSym_(_44_)
	extern obj_ new_co_body_co_pre_clause_comments_co_value_comment_co___SwitchClause__Compiler(obj_ this_, obj_ values, obj_ body, obj_ pre_clause_comments, obj_ value_comment);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineString_(0, "Missing expression in \"switch\" statement.")
	DefineString_(1, "else")
	DefineString_(2, "Missing value in switch clause.")
	UsingMethod_(_nt__eq_) UsingMethod_(_eq__eq_) UsingMethod_(add_clause_co_) UsingMethod_(append_co_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(else_clause_co_) UsingMethod_(parse_block) UsingMethod_(parse_error_co_) UsingMethod_(parse_expression) UsingMethod_(parse_inter_prong_comments) UsingMethod_(parse_keyword_expression) UsingMethod_(post_clauses_comments_co_) UsingMethod_(require_eol) UsingMethod_(text)
	UsingClass_(List__Standard)
	UsingClass_(SwitchClause__Compiler)
	UsingClass_(SwitchStatement__Compiler)

		{
		obj_ switch_statement, value, value_comment;
		t0_ = Call_(consume_token, this_);
		t0_ = Call_(parse_expression, this_);
		value = t0_;
		t0_ = Not_(value);
		if (t0_)
			{
			t0_ = Call_(parse_error_co_, this_, Str_(0));
			}
		t0_ = Call_(require_eol, this_);
		value_comment = t0_;
		
		t0_ = new_co_value_comment_co___SwitchStatement__Compiler(Proto_(SwitchStatement__Compiler), value, value_comment);
		switch_statement = t0_;
		
		/* Strip out leading blank lines. */
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_eq__eq_, t0_, Sym_(eol));
			if (!(t1_))
				Break_(0)
			{
			t0_ = Call_(consume_token, this_);
			
			}
			}
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_eq__eq_, t0_, Sym_(indent));
		if (t1_)
			{
			obj_ pre_clause_comments;
			t0_ = Call_(consume_token, this_);
			pre_clause_comments = nil;
			while (1) {
				ContinuePoint_(1)
				t0_ = Call_(current_token, this_);
				t1_ = Call_(_nt__eq_, t0_, Sym_(unindent));
				if (!(t1_))
					Break_(1)
				{
				t0_ = Call_(parse_inter_prong_comments, this_);
				pre_clause_comments = t0_;
				
				t0_ = Call_(current_token, this_);
				t1_ = Call_(_eq__eq_, t0_, Sym_(name));
				if (t1_) {
					t2_ = Call_(current_token, this_);
					t3_ = Call_(text, t2_);
					t4_ = Call_(_eq__eq_, t3_, Str_(1));
					t1_ = t4_;
					}
				if (t1_)
					{
					obj_ body;
					t0_ = Call_(consume_token, this_);
					t0_ = Call_(require_eol, this_);
					value_comment = t0_;
					t0_ = Call_(parse_block, this_);
					body = t0_;
					t0_ = new_co_body_co_pre_clause_comments_co_value_comment_co___SwitchClause__Compiler(Proto_(SwitchClause__Compiler), nil, body, pre_clause_comments, value_comment);
					t1_ = Call_(else_clause_co_, switch_statement, t0_);
					
					}
				else
					{
					obj_ body, clause, values;
					t0_ = new__List__Standard(Proto_(List__Standard));
					values = t0_;
					while (1) {
						ContinuePoint_(2)
						{
						t0_ = Call_(parse_keyword_expression, this_);
						value = t0_;
						t0_ = Not_(value);
						if (t0_)
							{
							t0_ = Call_(parse_error_co_, this_, Str_(2));
							}
						t0_ = Call_(append_co_, values, value);
						t0_ = Call_(current_token, this_);
						t1_ = Call_(_eq__eq_, t0_, Sym_(_44_));
						if (t1_)
							{
							t0_ = Call_(consume_token, this_);
							}
						else
							{
							Break_(2)
							}
						}
					}
					t0_ = Call_(require_eol, this_);
					value_comment = t0_;
					t0_ = Call_(parse_block, this_);
					body = t0_;
					t0_ = new_co_body_co_pre_clause_comments_co_value_comment_co___SwitchClause__Compiler(Proto_(SwitchClause__Compiler), values, body, pre_clause_comments, value_comment);
					clause = t0_;
					t0_ = Call_(add_clause_co_, switch_statement, clause);
					
					}
				pre_clause_comments = nil;
				
				}
				}
			t0_ = Call_(post_clauses_comments_co_, switch_statement, pre_clause_comments);
			
			t0_ = Call_(consume_token, this_);
			 	/* 'unindent' */
			
			}
		return switch_statement;
		
		
		}
	return nil;
}


obj_ parse_text_literal__Parser__Compiler(obj_ this_)
{
	extern obj_ new_co___Token__Compiler(obj_ this_, obj_ type);
	UsingSym_(eol)
	extern obj_ new__StringBuilder__Standard(obj_ this_);
	extern obj_ new_co___StringLiteral__Compiler(obj_ this_, obj_ value);
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "\n")
	DefineString_(1, "\\n\\\n")
	UsingMethod_(_pl_) UsingMethod_(consume_token) UsingMethod_(current_item) UsingMethod_(current_token) UsingMethod_(get_subblock) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(is_empty) UsingMethod_(iterator) UsingMethod_(lines) UsingMethod_(prepend_co_) UsingMethod_(return_token_co_) UsingMethod_(string) UsingMethod_(text)
	UsingClass_(StringLiteral__Compiler)
	UsingClass_(Token__Compiler)
	UsingClass_(StringBuilder__Standard)

		{
		obj_ block, initial_text, massaged_block;
		t0_ = Call_(current_token, this_);
		t1_ = Call_(text, t0_);
		initial_text = t1_;
		t0_ = Call_(consume_token, this_);
		t0_ = Call_(get_subblock, this_);
		block = t0_;
		t0_ = Call_(is_empty, initial_text);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = Call_(prepend_co_, block, Str_(0));
			t0_ = Call_(prepend_co_, block, initial_text);
			}
		/* We'll need an eol to finish the statement, so add one: */
		t0_ = new_co___Token__Compiler(Proto_(Token__Compiler), Sym_(eol));
		t1_ = Call_(return_token_co_, this_, t0_);
		/* Massage the string, since we (currently) store string literals in */
		/* C-escaped form. */
		t0_ = new__StringBuilder__Standard(Proto_(StringBuilder__Standard));
		massaged_block = t0_;
		t0_ = Call_(string, block);
		t1_ = Call_(lines, t0_);
		ForStart_(0, t1_, line)
			{
			t0_ = Call_(_pl_, massaged_block, line);
			massaged_block = t0_;
			t0_ = Call_(_pl_, massaged_block, Str_(1));
			massaged_block = t0_;
			}
		ForEnd_(0)
		t0_ = Call_(string, massaged_block);
		t1_ = new_co___StringLiteral__Compiler(Proto_(StringLiteral__Compiler), t0_);
		return t1_;
		
		
		}
	return nil;
}


obj_ parse_throw_statement__Parser__Compiler(obj_ this_)
{
	extern obj_ new_co_comment_co___ThrowStatement__Compiler(obj_ this_, obj_ value, obj_ comment);
	obj_ t0_;
	UsingMethod_(consume_token) UsingMethod_(parse_expression) UsingMethod_(require_eol)
	UsingClass_(ThrowStatement__Compiler)

		{
		obj_ comment, expr;
		t0_ = Call_(consume_token, this_);
		 	/* "throw" */
		
		t0_ = Call_(parse_expression, this_);
		expr = t0_;
		t0_ = Call_(require_eol, this_);
		comment = t0_;
		
		t0_ = new_co_comment_co___ThrowStatement__Compiler(Proto_(ThrowStatement__Compiler), expr, comment);
		return t0_;
		
		
		}
	return nil;
}


obj_ parse_try_statement__Parser__Compiler(obj_ this_)
{
	UsingSym_(name)
	UsingSym_(eol)
	UsingSym_(comment)
	extern obj_ new_co_comment_co___CatchClause__Compiler(obj_ this_, obj_ parent, obj_ comment);
	extern obj_ new_co_comment_co___TryStatement__Compiler(obj_ this_, obj_ body, obj_ comment);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	obj_ t7_;
	DefineString_(0, "catch")
	DefineString_(1, "else")
	DefineString_(2, "Trylon doesn't allow multiple \"catch\" clauses.")
	UsingMethod_(_nt__eq_) UsingMethod_(body_co_) UsingMethod_(consume_token) UsingMethod_(context) UsingMethod_(context_co_) UsingMethod_(current_token) UsingMethod_(else_clause_co_) UsingMethod_(parse_block) UsingMethod_(parse_error_co_) UsingMethod_(parse_inter_prong_comments) UsingMethod_(parse_type_spec) UsingMethod_(require_eol) UsingMethod_(text)
	UsingClass_(CatchClause__Compiler)
	UsingClass_(TryStatement__Compiler)

		{
		obj_ body, comment, else_clause, pre_clause_comments, saved_context, try_statement;
		t0_ = Call_(consume_token, this_);
		 	/* "try" */
		t0_ = Call_(require_eol, this_);
		comment = t0_;
		
		t0_ = Call_(parse_block, this_);
		body = t0_;
		
		/* Catch clauses. */
		else_clause = nil;
		t0_ = Call_(context, this_);
		saved_context = t0_;
		pre_clause_comments = nil;
		while (1) {
			ContinuePoint_(0)
			{
			obj_ catch_clause, catch_comment;
			t0_ = Call_(parse_inter_prong_comments, this_);
			pre_clause_comments = t0_;
			
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_nt__eq_, t0_, Sym_(name));
			if ((t1_) == nil) {
				t2_ = Call_(current_token, this_);
				t3_ = Call_(text, t2_);
				t4_ = Call_(_nt__eq_, t3_, Str_(0));
				if (t4_) {
					t5_ = Call_(current_token, this_);
					t6_ = Call_(text, t5_);
					t7_ = Call_(_nt__eq_, t6_, Str_(1));
					t4_ = t7_;
					}
				t1_ = t4_;
				}
			if (t1_)
				{
				Break_(0)
				}
			if (else_clause)
				{
				t0_ = Call_(parse_error_co_, this_, Str_(2));
				
				}
			t0_ = Call_(consume_token, this_);
			 	/* "catch"/"else" */
			t0_ = Call_(current_token, this_);
			t1_ = Call_(_nt__eq_, t0_, Sym_(eol));
			if (t1_) {
				t2_ = Call_(current_token, this_);
				t3_ = Call_(_nt__eq_, t2_, Sym_(comment));
				t1_ = t3_;
				}
			if (t1_)
				{
				obj_ type;
				/* Type spec is not required or used in Trylon 2, but accept it for backward */
				/* compatibility with Trylon 1 code. */
				t0_ = Call_(parse_type_spec, this_);
				type = t0_;
				}
			t0_ = Call_(require_eol, this_);
			catch_comment = t0_;
			t0_ = Call_(context, this_);
			t1_ = new_co_comment_co___CatchClause__Compiler(Proto_(CatchClause__Compiler), t0_, comment);
			catch_clause = t1_;
			t0_ = Call_(context_co_, this_, catch_clause);
			t0_ = Call_(parse_block, this_);
			t1_ = Call_(body_co_, catch_clause, t0_);
			t0_ = Call_(context_co_, this_, saved_context);
			else_clause = catch_clause;
			
			pre_clause_comments = nil;
			
			}
		}
		t0_ = new_co_comment_co___TryStatement__Compiler(Proto_(TryStatement__Compiler), body, comment);
		try_statement = t0_;
		if (else_clause)
			{
			t0_ = Call_(else_clause_co_, try_statement, else_clause);
			}
		return try_statement;
		
		
		}
	return nil;
}


obj_ parse_type_spec__Parser__Compiler(obj_ this_)
{
	extern obj_ new_co_token_co___ParseException__Compiler(obj_ this_, obj_ error_message, obj_ token);
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "A type specifier was given, but is not a prototype.")
	UsingMethod_(is_a_co_) UsingMethod_(name) UsingMethod_(parse_proto_spec)
	UsingClass_(ParseException__Compiler)
	UsingClass_(CompiledProto__Compiler)

		{
		obj_ okay, type;
		t0_ = Call_(parse_proto_spec, this_);
		type = t0_;
		
		/* Make sure we got a proto. */
		t0_ = Call_(is_a_co_, type, Proto_(CompiledProto__Compiler));
		okay = t0_;
		t0_ = Not_(okay);
		if (t0_)
			{
			t0_ = Call_(name, type);
			t1_ = new_co_token_co___ParseException__Compiler(Proto_(ParseException__Compiler), Str_(0), t0_);
			Throw_(t1_);
			
			}
		return type;
		
		
		}
	return nil;
}


obj_ parse_unary_expression__Parser__Compiler(obj_ this_)
{
	UsingSym_(_pl_)
	UsingSym_(_)
	UsingSym_(_tw_)
	UsingSym_(_pl_)
	UsingSym_(_)
	extern obj_ new_co_object_co_arguments_co___Send__Compiler(obj_ this_, obj_ name, obj_ object, obj_ arguments);
	extern obj_ new__List__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "unary-plus")
	DefineString_(1, "unary-minus")
	DefineString_(2, "~")
	UsingMethod_(_eq__eq_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(expression_expected_after_co_) UsingMethod_(parse_postfix_expression) UsingMethod_(parse_unary_expression) UsingMethod_(type)
	UsingClass_(List__Standard)
	UsingClass_(Send__Compiler)

		{
		obj_ expr, token;
		expr = nil;
		t0_ = Call_(current_token, this_);
		t1_ = Call_(type, t0_);
		token = t1_;
		
		t0_ = Call_(_eq__eq_, token, Sym_(_pl_));
		if ((t0_) == nil) {
			t1_ = Call_(_eq__eq_, token, Sym_(_));
			t0_ = t1_;
			}
		if ((t0_) == nil) {
			t2_ = Call_(_eq__eq_, token, Sym_(_tw_));
			t0_ = t2_;
			}
		if (t0_)
			{
			obj_ name;
			t0_ = Call_(consume_token, this_);
			t0_ = Call_(parse_unary_expression, this_);
			expr = t0_;
			t0_ = Not_(expr);
			if (t0_)
				{
				t0_ = Call_(expression_expected_after_co_, this_, token);
				}
			name = nil;
			t0_ = Call_(_eq__eq_, token, Sym_(_pl_));
			if (t0_)
				{
				name = Str_(0);
				}
			else
				{
				t0_ = Call_(_eq__eq_, token, Sym_(_));
				if (t0_)
					{
					name = Str_(1);
					}
				else
					{
					name = Str_(2);
					}
				}
			t0_ = new__List__Standard(Proto_(List__Standard));
			t1_ = new_co_object_co_arguments_co___Send__Compiler(Proto_(Send__Compiler), name, expr, t0_);
			expr = t1_;
			
			}
		else
			{
			t0_ = Call_(parse_postfix_expression, this_);
			expr = t0_;
			
			}
		return expr;
		
		
		}
	return nil;
}


obj_ parse_while_statement__Parser__Compiler(obj_ this_)
{
	extern obj_ new_co_body_co_comment_co___WhileStatement__Compiler(obj_ this_, obj_ condition, obj_ body, obj_ comment);
	obj_ t0_;
	DefineString_(0, "Missing condition in a \"while\" statement.")
	UsingMethod_(consume_token) UsingMethod_(parse_block) UsingMethod_(parse_error_co_) UsingMethod_(parse_expression) UsingMethod_(require_eol)
	UsingClass_(WhileStatement__Compiler)

		{
		obj_ body, comment, condition;
		t0_ = Call_(consume_token, this_);
		 	/* "while" */
		
		/* Condition. */
		t0_ = Call_(parse_expression, this_);
		condition = t0_;
		t0_ = Not_(condition);
		if (t0_)
			{
			t0_ = Call_(parse_error_co_, this_, Str_(0));
			
			}
		/* Body. */
		t0_ = Call_(require_eol, this_);
		comment = t0_;
		t0_ = Call_(parse_block, this_);
		body = t0_;
		
		t0_ = new_co_body_co_comment_co___WhileStatement__Compiler(Proto_(WhileStatement__Compiler), condition, body, comment);
		return t0_;
		
		
		}
	return nil;
}


obj_ report_co___Parser__Compiler(obj_ this_, obj_ message)
{

		{
		}
	return nil;
}


obj_ require_eol__Parser__Compiler(obj_ this_)
{
	UsingSym_(comment)
	UsingSym_(eol)
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "End-of-line required.")
	UsingMethod_(_nt__eq_) UsingMethod_(_eq__eq_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(parse_error_co_) UsingMethod_(text)

		{
		obj_ comment;
		/* Returns a comment, if there is one. */
		comment = nil;
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_eq__eq_, t0_, Sym_(comment));
		if (t1_)
			{
			t0_ = Call_(current_token, this_);
			t1_ = Call_(text, t0_);
			comment = t1_;
			t0_ = Call_(consume_token, this_);
			
			}
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_nt__eq_, t0_, Sym_(eol));
		if (t1_)
			{
			t0_ = Call_(parse_error_co_, this_, Str_(0));
			}
		t0_ = Call_(consume_token, this_);
		
		return comment;
		
		
		}
	return nil;
}


obj_ return_token_co___Parser__Compiler(obj_ this_, obj_ token)
{
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "Tried to return too many tokens.")
	UsingMethod_(current_token) UsingMethod_(current_token_co_) UsingMethod_(next_token) UsingMethod_(next_token_co_) UsingMethod_(third_token) UsingMethod_(third_token_co_)
	UsingClass_(MessageException__Standard)

		{
		t0_ = Call_(third_token, this_);
		if (t0_)
			{
			t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(0));
			Throw_(t0_);
			
			}
		t1_ = Call_(next_token, this_);
		t2_ = Call_(third_token_co_, this_, t1_);
		t0_ = Call_(current_token, this_);
		t1_ = Call_(next_token_co_, this_, t0_);
		t0_ = Call_(current_token_co_, this_, token);
		
		
		}
	return nil;
}


obj_ skip_block__Parser__Compiler(obj_ this_)
{
	UsingSym_(indent)
	UsingSym_(indent)
	UsingSym_(unindent)
	obj_ t0_;
	obj_ t1_;
	DefineInt_(0, 1)
	DefineInt_(1, 1)
	DefineInt_(2, 1)
	DefineInt_(3, 0)
	UsingMethod_(_nt__eq_) UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(_lt__eq_) UsingMethod_(_eq__eq_) UsingMethod_(consume_token) UsingMethod_(current_token) UsingMethod_(type)

		{
		obj_ level;
		t0_ = Call_(current_token, this_);
		t1_ = Call_(_nt__eq_, t0_, Sym_(indent));
		if (t1_)
			{
			return nil;
			}
		t0_ = Call_(consume_token, this_);
		
		level = Int_(0);
		while (1) {
			ContinuePoint_(0)
			{
			obj_ type;
			t0_ = Call_(current_token, this_);
			t1_ = Call_(type, t0_);
			type = t1_;
			t0_ = Call_(consume_token, this_);
			t0_ = Call_(_eq__eq_, type, Sym_(indent));
			if (t0_)
				{
				t0_ = Call_(_pl_, level, Int_(1));
				level = t0_;
				}
			else
				{
				t0_ = Call_(_eq__eq_, type, Sym_(unindent));
				if (t0_)
					{
					t0_ = Call_(_, level, Int_(2));
					level = t0_;
					t0_ = Call_(_lt__eq_, level, Int_(3));
					if (t0_)
						{
						Break_(0)
						
						
						}
					}
				}
			}
		}
		}
	return nil;
}


obj_ third_token__Parser__Compiler(obj_ this_)
{
	return Field_(third_token);
}


obj_ third_token_co___Parser__Compiler(obj_ this_, obj_ value)
{
	Field_(third_token) = value;
	return value;
}


obj_ unindent__Parser__Compiler(obj_ this_)
{
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ status_reporter__Main(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(unindent)
	UsingClass_(Main)

		{
		t0_ = status_reporter__Main(Proto_(Main));
		if (t0_)
			{
			t0_ = status_reporter__Main(Proto_(Main));
			t1_ = Call_(unindent, t0_);
			
			
			
			}
		}
	return nil;
}


