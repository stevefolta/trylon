#include "Trylon_.h"

UsingSym_(ExpressionParser)UsingClass_(Compiler)
UsingClass_(Object__Standard)
UsingClass_(ExpressionParser__Compiler)
struct ClassInfo ExpressionParser__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 206, 3, Proto_(ExpressionParser__Compiler), Proto_(Compiler), Proto_(Object__Standard), nil, Sym_(ExpressionParser), nil, nil };
struct object ExpressionParser__Compiler = 
	{ &ExpressionParser__Compiler__classInfo_, {nil, nil, nil} };


#define words__fld_	(0)
#define line__fld_	(1)
#define context__fld_	(2)


obj_ create_co_line_co_context_co___ExpressionParser__Compiler(obj_ this_, obj_ words, obj_ line, obj_ context)
{
	obj_ t0_;
	UsingMethod_(context_co_) UsingMethod_(line_co_) UsingMethod_(words_co_)

		{
		t0_ = Call_(words_co_, this_, words);
		t0_ = Call_(line_co_, this_, line);
		t0_ = Call_(context_co_, this_, context);
		}
	return nil;
}


obj_ expression_expected_after_co___ExpressionParser__Compiler(obj_ this_, obj_ after)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "Expression expected after \"")
	DefineString_(1, "\".")
	UsingMethod_(_pl_) UsingMethod_(parse_error_co_)

		{
		t0_ = Call_(_pl_, Str_(0), after);
		t1_ = Call_(_pl_, t0_, Str_(1));
		t2_ = Call_(parse_error_co_, this_, t1_);
		}
	return nil;
}


obj_ is_name_co___ExpressionParser__Compiler(obj_ this_, obj_ word)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(34)
	UsingInt_(39)
	UsingInt_(96)
	DefineString_(0, "+")
	DefineString_(1, "-")
	DefineString_(2, "*")
	DefineString_(3, "/")
	DefineString_(4, "%")
	DefineString_(5, "&")
	DefineString_(6, "|")
	DefineString_(7, "^")
	DefineString_(8, "<<")
	DefineString_(9, ">>")
	DefineString_(10, "==")
	DefineString_(11, "!=")
	DefineString_(12, "<")
	DefineString_(13, ">")
	DefineString_(14, "<=")
	DefineString_(15, ">=")
	DefineString_(16, "&&")
	DefineString_(17, "||")
	DefineString_(18, "!")
	DefineString_(19, "~")
	DefineString_(20, "(")
	DefineString_(21, ")")
	DefineString_(22, "[")
	DefineString_(23, "]")
	DefineString_(24, "{")
	DefineString_(25, "}")
	DefineString_(26, "#")
	DefineString_(27, ",")
	DefineString_(28, "=")
	DefineString_(29, ":")
	DefineString_(30, "#")
	UsingMethod_(_eq__eq_) UsingMethod_(ends_with_co_) UsingMethod_(first_character) UsingMethod_(is_number_co_) UsingMethod_(starts_with_co_)

		{
		obj_ first_char;
		Switch_(word)
		if (SwitchMatches_(Str_(0)) || SwitchMatches_(Str_(1)) || SwitchMatches_(Str_(2)) || SwitchMatches_(Str_(3)) || SwitchMatches_(Str_(4)) || SwitchMatches_(Str_(5)) || SwitchMatches_(Str_(6)) || SwitchMatches_(Str_(7)) || SwitchMatches_(Str_(8)) || SwitchMatches_(Str_(9)) || SwitchMatches_(Str_(10)) || SwitchMatches_(Str_(11)) || SwitchMatches_(Str_(12)) || SwitchMatches_(Str_(13)) || SwitchMatches_(Str_(14)) || SwitchMatches_(Str_(15)) || SwitchMatches_(Str_(16)) || SwitchMatches_(Str_(17)) || SwitchMatches_(Str_(18)) || SwitchMatches_(Str_(19)) || SwitchMatches_(Str_(20)) || SwitchMatches_(Str_(21)) || SwitchMatches_(Str_(22)) || SwitchMatches_(Str_(23)) || SwitchMatches_(Str_(24)) || SwitchMatches_(Str_(25)) || SwitchMatches_(Str_(26)) || SwitchMatches_(Str_(27)))
			{
			return nil;
			}
		EndSwitch_
		t0_ = Call_(ends_with_co_, word, Str_(28));
		if ((t0_) == nil) {
			t1_ = Call_(ends_with_co_, word, Str_(29));
			t0_ = t1_;
			}
		if (t0_)
			{
			return nil;
			}
		t0_ = Call_(starts_with_co_, word, Str_(30));
		if (t0_)
			{
			return nil;
			}
		t0_ = Call_(first_character, word);
		first_char = t0_;
		t0_ = Call_(_eq__eq_, first_char, Int_(34));
		if ((t0_) == nil) {
			t1_ = Call_(_eq__eq_, first_char, Int_(39));
			t0_ = t1_;
			}
		if ((t0_) == nil) {
			t2_ = Call_(_eq__eq_, first_char, Int_(96));
			t0_ = t2_;
			}
		if (t0_)
			{
			return nil;
			}
		t0_ = Call_(is_number_co_, this_, word);
		if (t0_)
			{
			return nil;
			}
		return true_;
		}
	return nil;
}


obj_ is_number_co___ExpressionParser__Compiler(obj_ this_, obj_ word)
{
	obj_ t0_;
	obj_ t1_;
	UsingInt_(48)
	UsingInt_(57)
	UsingInt_(45)
	UsingInt_(1)
	UsingMethod_(_lt__eq_) UsingMethod_(_eq__eq_) UsingMethod_(_gt__eq_) UsingMethod_(first_character) UsingMethod_(is_number_co_) UsingMethod_(substr_co_)

		{
		obj_ first_char;
		t0_ = Call_(first_character, word);
		first_char = t0_;
		t0_ = Call_(_gt__eq_, first_char, Int_(48));
		if (t0_) {
			t1_ = Call_(_lt__eq_, first_char, Int_(57));
			t0_ = t1_;
			}
		if (t0_)
			{
			return true_;
			}
		t0_ = Call_(_eq__eq_, first_char, Int_(45));
		if (t0_)
			{
			t0_ = Call_(substr_co_, word, SmallInt_(1));
			t1_ = Call_(is_number_co_, this_, t0_);
			return t1_;
			}
		return nil;
		}
	return nil;
}


obj_ make_binop_call_co_with_co_and_co___ExpressionParser__Compiler(obj_ this_, obj_ name, obj_ object, obj_ argument)
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


obj_ new_co_line_co_context_co___ExpressionParser__Compiler(obj_ this_, obj_ words, obj_ line, obj_ context)
{
	UsingClass_(ExpressionParser__Compiler)
	obj_ obj = AllocObj_(ExpressionParser__Compiler);
	create_co_line_co_context_co___ExpressionParser__Compiler(obj, words, line, context);
	return obj;
}


obj_ parse_additive_expression__ExpressionParser__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "+")
	DefineString_(1, "-")
	UsingMethod_(_eq__eq_) UsingMethod_(expression_expected_after_co_) UsingMethod_(make_binop_call_co_with_co_and_co_) UsingMethod_(next) UsingMethod_(parse_multiplicative_expression) UsingMethod_(peek) UsingMethod_(words)

		{
		obj_ expr, word;
		t0_ = Call_(parse_multiplicative_expression, this_);
		expr = t0_;
		t0_ = Not_(expr);
		if (t0_)
			{
			return nil;
			}
		
		t0_ = Call_(words, this_);
		t1_ = Call_(peek, t0_);
		word = t1_;
		while (1) {
			ContinuePoint_(0)
			t0_ = word;
			if (t0_) {
				t1_ = Call_(_eq__eq_, word, Str_(0));
				if ((t1_) == nil) {
					t2_ = Call_(_eq__eq_, word, Str_(1));
					t1_ = t2_;
					}
				t0_ = t1_;
				}
			if (!(t0_))
				Break_(0)
			{
			obj_ expr2;
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			t0_ = Call_(parse_multiplicative_expression, this_);
			expr2 = t0_;
			t0_ = Not_(expr2);
			if (t0_)
				{
				t0_ = Call_(expression_expected_after_co_, this_, word);
				}
			t0_ = Call_(make_binop_call_co_with_co_and_co_, this_, word, expr, expr2);
			expr = t0_;
			
			t0_ = Call_(words, this_);
			t1_ = Call_(peek, t0_);
			word = t1_;
			}
			}
		
		return expr;
		}
	return nil;
}


obj_ parse_and_expression__ExpressionParser__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineString_(0, "&")
	DefineString_(1, "&")
	DefineString_(2, "&")
	UsingMethod_(_eq__eq_) UsingMethod_(expression_expected_after_co_) UsingMethod_(is_done) UsingMethod_(make_binop_call_co_with_co_and_co_) UsingMethod_(next) UsingMethod_(parse_equality_expression) UsingMethod_(peek) UsingMethod_(words)

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
			t0_ = Call_(words, this_);
			t1_ = Call_(is_done, t0_);
			t2_ = Not_(t1_);
			if (t2_) {
				t3_ = Call_(words, this_);
				t4_ = Call_(peek, t3_);
				t5_ = Call_(_eq__eq_, t4_, Str_(0));
				t2_ = t5_;
				}
			if (!(t2_))
				Break_(0)
			{
			obj_ expr2;
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			t0_ = Call_(parse_equality_expression, this_);
			expr2 = t0_;
			t0_ = Not_(expr2);
			if (t0_)
				{
				t0_ = Call_(expression_expected_after_co_, this_, Str_(1));
				}
			t0_ = Call_(make_binop_call_co_with_co_and_co_, this_, Str_(2), expr, expr2);
			expr = t0_;
			}
			}
		
		return expr;
		}
	return nil;
}


obj_ parse_assignment_expression__ExpressionParser__Compiler(obj_ this_)
{
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
	UsingInt_(0)
	UsingInt_(1)
	DefineString_(0, "=")
	DefineString_(1, "Illegal assignment.")
	DefineString_(2, "+=")
	DefineString_(3, "-=")
	DefineString_(4, "*=")
	DefineString_(5, "/=")
	DefineString_(6, "%=")
	DefineString_(7, ">>=")
	DefineString_(8, "<<=")
	DefineString_(9, "&=")
	DefineString_(10, "|=")
	DefineString_(11, "^=")
	DefineString_(12, "Illegal assignment.")
	DefineString_(13, ":=")
	UsingMethod_(_) UsingMethod_(_eq__eq_) UsingMethod_(append_co_) UsingMethod_(convert_to_setter_call_co_) UsingMethod_(copy) UsingMethod_(expression_expected_after_co_) UsingMethod_(is_a_co_) UsingMethod_(length) UsingMethod_(next) UsingMethod_(parse_assignment_expression) UsingMethod_(parse_declaration_co_) UsingMethod_(parse_error_co_) UsingMethod_(parse_logical_or_expression) UsingMethod_(peek) UsingMethod_(substr_co_length_co_) UsingMethod_(words)
	UsingClass_(FunctionCall__Compiler)
	UsingClass_(List__Standard)
	UsingClass_(Send__Compiler)

		{
		obj_ expr, expr2, word;
		t0_ = Call_(parse_logical_or_expression, this_);
		expr = t0_;
		t0_ = Not_(expr);
		if (t0_)
			{
			return nil;
			}
		
		expr2 = nil;
		
		t0_ = Call_(words, this_);
		t1_ = Call_(peek, t0_);
		word = t1_;
		t0_ = Not_(word);
		if (t0_)
			{
			/*  Do nothing. */
			}
		else
			{
			t0_ = Call_(_eq__eq_, word, Str_(0));
			if (t0_)
				{
				t0_ = Call_(words, this_);
				t1_ = Call_(next, t0_);
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
					t0_ = Call_(expression_expected_after_co_, this_, word);
					}
				t0_ = Call_(convert_to_setter_call_co_, expr, expr2);
				}
			else
				{
				t0_ = Call_(_eq__eq_, word, Str_(2));
				if ((t0_) == nil) {
					t1_ = Call_(_eq__eq_, word, Str_(3));
					t0_ = t1_;
					}
				if ((t0_) == nil) {
					t2_ = Call_(_eq__eq_, word, Str_(4));
					t0_ = t2_;
					}
				if ((t0_) == nil) {
					t3_ = Call_(_eq__eq_, word, Str_(5));
					t0_ = t3_;
					}
				if ((t0_) == nil) {
					t4_ = Call_(_eq__eq_, word, Str_(6));
					t0_ = t4_;
					}
				if ((t0_) == nil) {
					t5_ = Call_(_eq__eq_, word, Str_(7));
					t0_ = t5_;
					}
				if ((t0_) == nil) {
					t6_ = Call_(_eq__eq_, word, Str_(8));
					t0_ = t6_;
					}
				if ((t0_) == nil) {
					t7_ = Call_(_eq__eq_, word, Str_(9));
					t0_ = t7_;
					}
				if ((t0_) == nil) {
					t8_ = Call_(_eq__eq_, word, Str_(10));
					t0_ = t8_;
					}
				if ((t0_) == nil) {
					t9_ = Call_(_eq__eq_, word, Str_(11));
					t0_ = t9_;
					}
				if (t0_)
					{
					obj_ arguments, call, setter;
					t0_ = Call_(words, this_);
					t1_ = Call_(next, t0_);
					t0_ = Call_(is_a_co_, expr, Proto_(FunctionCall__Compiler));
					t1_ = Not_(t0_);
					if (t1_) {
						t2_ = Call_(is_a_co_, expr, Proto_(Send__Compiler));
						t3_ = Not_(t2_);
						t1_ = t3_;
						}
					if (t1_)
						{
						t0_ = Call_(parse_error_co_, this_, Str_(12));
						}
					t0_ = Call_(parse_assignment_expression, this_);
					expr2 = t0_;
					t0_ = Not_(expr2);
					if (t0_)
						{
						t0_ = Call_(expression_expected_after_co_, this_, word);
						}
					t0_ = new__List__Standard(Proto_(List__Standard));
					arguments = t0_;
					t0_ = Call_(append_co_, arguments, expr2);
					t0_ = Call_(length, word);
					t1_ = Call_(_, t0_, SmallInt_(1));
					t2_ = Call_(substr_co_length_co_, word, SmallInt_(0), t1_);
					t3_ = new_co_object_co_arguments_co___Send__Compiler(Proto_(Send__Compiler), t2_, expr, arguments);
					call = t3_;
					t0_ = Call_(copy, expr);
					setter = t0_;
					t0_ = Call_(convert_to_setter_call_co_, setter, call);
					expr = setter;
					}
				else
					{
					t0_ = Call_(_eq__eq_, word, Str_(13));
					if (t0_) 	/*  someday, maybe: '|| word == "("' */
						{
						t0_ = Call_(parse_declaration_co_, this_, expr);
						expr = t0_;
						}
					}
				}
			}
		
		
		
		return expr;
		}
	return nil;
}


obj_ parse_comma_expression__ExpressionParser__Compiler(obj_ this_)
{
	extern obj_ new__TupleExpression__Compiler(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineString_(0, ",")
	DefineString_(1, ",")
	DefineString_(2, "Missing expression in tuple.")
	UsingMethod_(_eq__eq_) UsingMethod_(add_member_co_) UsingMethod_(is_done) UsingMethod_(next) UsingMethod_(parse_error_co_) UsingMethod_(parse_inclusive_or_expression) UsingMethod_(peek) UsingMethod_(words)
	UsingClass_(TupleExpression__Compiler)

		{
		obj_ expr;
		t0_ = Call_(parse_inclusive_or_expression, this_);
		expr = t0_;
		t0_ = Not_(expr);
		if (t0_)
			{
			return nil;
			}
		
		t0_ = Call_(words, this_);
		t1_ = Call_(is_done, t0_);
		t2_ = Not_(t1_);
		if (t2_) {
			t3_ = Call_(words, this_);
			t4_ = Call_(peek, t3_);
			t5_ = Call_(_eq__eq_, t4_, Str_(0));
			t2_ = t5_;
			}
		if (t2_)
			{
			obj_ tuple;
			t0_ = new__TupleExpression__Compiler(Proto_(TupleExpression__Compiler));
			tuple = t0_;
			t0_ = Call_(add_member_co_, tuple, expr);
			while (1) {
				ContinuePoint_(0)
				t0_ = Call_(words, this_);
				t1_ = Call_(is_done, t0_);
				t2_ = Not_(t1_);
				if (t2_) {
					t3_ = Call_(words, this_);
					t4_ = Call_(peek, t3_);
					t5_ = Call_(_eq__eq_, t4_, Str_(1));
					t2_ = t5_;
					}
				if (!(t2_))
					Break_(0)
				{
				obj_ member;
				t0_ = Call_(words, this_);
				t1_ = Call_(next, t0_);
				t0_ = Call_(parse_inclusive_or_expression, this_);
				member = t0_;
				t0_ = Not_(member);
				if (t0_)
					{
					t0_ = Call_(parse_error_co_, this_, Str_(2));
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


obj_ parse_declaration_co___ExpressionParser__Compiler(obj_ this_, obj_ lhs)
{
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	extern obj_ new_co_type_co___CompiledField__Compiler(obj_ this_, obj_ name, obj_ type);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co_arguments_co_context_co___FunctionCall__Compiler(obj_ this_, obj_ name, obj_ arguments, obj_ context);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	UsingInt_(0)
	DefineString_(0, "Illegal declaration.")
	DefineString_(1, ":=")
	DefineString_(2, "=")
	DefineString_(3, "\"=\" or \":=\" expected.")
	DefineString_(4, "Internal error: Current context isn't a block.")
	DefineString_(5, ":")
	UsingMethod_(_nt__eq_) UsingMethod_(_pl_) UsingMethod_(add_local_co_) UsingMethod_(append_co_) UsingMethod_(arguments) UsingMethod_(context) UsingMethod_(is_a_co_) UsingMethod_(name) UsingMethod_(next) UsingMethod_(num_items) UsingMethod_(parse_error_co_) UsingMethod_(parse_expression) UsingMethod_(peek) UsingMethod_(words)
	UsingClass_(Block__Compiler)
	UsingClass_(CompiledField__Compiler)
	UsingClass_(FunctionCall__Compiler)
	UsingClass_(List__Standard)
	UsingClass_(MessageException__Standard)

		{
		obj_ arguments, initial_value, name, type;
		t0_ = Call_(is_a_co_, lhs, Proto_(FunctionCall__Compiler));
		t1_ = Not_(t0_);
		if ((t1_) == nil) {
			t2_ = Call_(arguments, lhs);
			t3_ = Call_(num_items, t2_);
			t4_ = Call_(_nt__eq_, t3_, SmallInt_(0));
			t1_ = t4_;
			}
		if (t1_)
			{
			t0_ = Call_(parse_error_co_, this_, Str_(0));
			}
		t0_ = Call_(name, lhs);
		name = t0_;
		
		/*  Type. */
		type = nil;
		
		/*  ':=' */
		t0_ = Call_(words, this_);
		t1_ = Call_(peek, t0_);
		t2_ = Call_(_nt__eq_, t1_, Str_(1));
		if (t2_) {
			t3_ = Call_(words, this_);
			t4_ = Call_(peek, t3_);
			t5_ = Call_(_nt__eq_, t4_, Str_(2));
			t2_ = t5_;
			}
		if (t2_)
			{
			t0_ = Call_(parse_error_co_, this_, Str_(3));
			}
		t0_ = Call_(words, this_);
		t1_ = Call_(next, t0_);
		
		/*  Initial value. */
		t0_ = Call_(parse_expression, this_);
		initial_value = t0_;
		
		/*  Add the local to the block. */
		t0_ = Call_(context, this_);
		t1_ = Call_(is_a_co_, t0_, Proto_(Block__Compiler));
		t2_ = Not_(t1_);
		if (t2_)
			{
			t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(4));
			Throw_(t0_);
			}
		t1_ = Call_(context, this_);
		t2_ = new_co_type_co___CompiledField__Compiler(Proto_(CompiledField__Compiler), name, type);
		t3_ = Call_(add_local_co_, t1_, t2_);
		
		/*  Set to the initial value. */
		t0_ = new__List__Standard(Proto_(List__Standard));
		arguments = t0_;
		t0_ = Call_(append_co_, arguments, initial_value);
		t0_ = Call_(_pl_, name, Str_(5));
		t1_ = Call_(context, this_);
		t2_ = new_co_arguments_co_context_co___FunctionCall__Compiler(Proto_(FunctionCall__Compiler), t0_, arguments, t1_);
		return t2_;
		}
	return nil;
}


obj_ parse_equality_expression__ExpressionParser__Compiler(obj_ this_)
{
	extern obj_ new_co_is_nil_co___NilTest__Compiler(obj_ this_, obj_ object, obj_ is_nil);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "==")
	DefineString_(1, "!=")
	DefineString_(2, "==")
	UsingMethod_(_eq__eq_) UsingMethod_(expression_expected_after_co_) UsingMethod_(is_a_co_) UsingMethod_(make_binop_call_co_with_co_and_co_) UsingMethod_(next) UsingMethod_(parse_relational_expression) UsingMethod_(peek) UsingMethod_(words)
	UsingClass_(LiteralNil__Compiler)
	UsingClass_(NilTest__Compiler)

		{
		obj_ expr, word;
		t0_ = Call_(parse_relational_expression, this_);
		expr = t0_;
		t0_ = Not_(expr);
		if (t0_)
			{
			return nil;
			}
		
		t0_ = Call_(words, this_);
		t1_ = Call_(peek, t0_);
		word = t1_;
		while (1) {
			ContinuePoint_(0)
			t0_ = word;
			if (t0_) {
				t1_ = Call_(_eq__eq_, word, Str_(0));
				if ((t1_) == nil) {
					t2_ = Call_(_eq__eq_, word, Str_(1));
					t1_ = t2_;
					}
				t0_ = t1_;
				}
			if (!(t0_))
				Break_(0)
			{
			obj_ expr2;
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			t0_ = Call_(parse_relational_expression, this_);
			expr2 = t0_;
			t0_ = Not_(expr2);
			if (t0_)
				{
				t0_ = Call_(expression_expected_after_co_, this_, word);
				}
			/*  Special-case "== nil" and "!= nil". */
			t0_ = Call_(is_a_co_, expr2, Proto_(LiteralNil__Compiler));
			if (t0_)
				{
				t0_ = Call_(_eq__eq_, word, Str_(2));
				t1_ = new_co_is_nil_co___NilTest__Compiler(Proto_(NilTest__Compiler), expr, t0_);
				expr = t1_;
				}
			else
				{
				t0_ = Call_(make_binop_call_co_with_co_and_co_, this_, word, expr, expr2);
				expr = t0_;
				}
			
			t0_ = Call_(words, this_);
			t1_ = Call_(peek, t0_);
			word = t1_;
			}
			}
		
		return expr;
		}
	return nil;
}


obj_ parse_error_co___ExpressionParser__Compiler(obj_ this_, obj_ message)
{
	extern obj_ new_co_in_co___ParseException__Compiler(obj_ this_, obj_ error_message, obj_ line);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(line)
	UsingClass_(ParseException__Compiler)

		{
		t0_ = Call_(line, this_);
		t1_ = new_co_in_co___ParseException__Compiler(Proto_(ParseException__Compiler), message, t0_);
		Throw_(t1_);
		}
	return nil;
}


obj_ parse_exclusive_or_expression__ExpressionParser__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineString_(0, "^")
	DefineString_(1, "^")
	DefineString_(2, "^")
	UsingMethod_(_eq__eq_) UsingMethod_(expression_expected_after_co_) UsingMethod_(is_done) UsingMethod_(make_binop_call_co_with_co_and_co_) UsingMethod_(next) UsingMethod_(parse_and_expression) UsingMethod_(peek) UsingMethod_(words)

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
			t0_ = Call_(words, this_);
			t1_ = Call_(is_done, t0_);
			t2_ = Not_(t1_);
			if (t2_) {
				t3_ = Call_(words, this_);
				t4_ = Call_(peek, t3_);
				t5_ = Call_(_eq__eq_, t4_, Str_(0));
				t2_ = t5_;
				}
			if (!(t2_))
				Break_(0)
			{
			obj_ expr2;
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			t0_ = Call_(parse_and_expression, this_);
			expr2 = t0_;
			t0_ = Not_(expr2);
			if (t0_)
				{
				t0_ = Call_(expression_expected_after_co_, this_, Str_(1));
				}
			t0_ = Call_(make_binop_call_co_with_co_and_co_, this_, Str_(2), expr, expr2);
			expr = t0_;
			}
			}
		
		return expr;
		}
	return nil;
}


obj_ parse_expression__ExpressionParser__Compiler(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(parse_assignment_expression)

		{
		t0_ = Call_(parse_assignment_expression, this_);
		return t0_;
		}
	return nil;
}


obj_ parse_inclusive_or_expression__ExpressionParser__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineString_(0, "|")
	DefineString_(1, "|")
	DefineString_(2, "|")
	UsingMethod_(_eq__eq_) UsingMethod_(expression_expected_after_co_) UsingMethod_(is_done) UsingMethod_(make_binop_call_co_with_co_and_co_) UsingMethod_(next) UsingMethod_(parse_exclusive_or_expression) UsingMethod_(peek) UsingMethod_(words)

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
			t0_ = Call_(words, this_);
			t1_ = Call_(is_done, t0_);
			t2_ = Not_(t1_);
			if (t2_) {
				t3_ = Call_(words, this_);
				t4_ = Call_(peek, t3_);
				t5_ = Call_(_eq__eq_, t4_, Str_(0));
				t2_ = t5_;
				}
			if (!(t2_))
				Break_(0)
			{
			obj_ expr2;
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			t0_ = Call_(parse_exclusive_or_expression, this_);
			expr2 = t0_;
			t0_ = Not_(expr2);
			if (t0_)
				{
				t0_ = Call_(expression_expected_after_co_, this_, Str_(1));
				}
			t0_ = Call_(make_binop_call_co_with_co_and_co_, this_, Str_(2), expr, expr2);
			expr = t0_;
			}
			}
		
		return expr;
		}
	return nil;
}


obj_ parse_keyword_expression__ExpressionParser__Compiler(obj_ this_)
{
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co_object_co_arguments_co___Send__Compiler(obj_ this_, obj_ name, obj_ object, obj_ arguments);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineString_(0, ":")
	DefineString_(1, "")
	DefineString_(2, ":")
	DefineString_(3, "Missing argument (\"")
	DefineString_(4, "\").")
	UsingMethod_(_pl_) UsingMethod_(append_co_) UsingMethod_(ends_with_co_) UsingMethod_(is_done) UsingMethod_(next) UsingMethod_(parse_comma_expression) UsingMethod_(parse_error_co_) UsingMethod_(peek) UsingMethod_(words)
	UsingClass_(List__Standard)
	UsingClass_(Send__Compiler)

		{
		obj_ expr;
		t0_ = Call_(parse_comma_expression, this_);
		expr = t0_;
		t0_ = Not_(expr);
		if (t0_)
			{
			return nil;
			}
		
		t0_ = Call_(words, this_);
		t1_ = Call_(is_done, t0_);
		t2_ = Not_(t1_);
		if (t2_) {
			t3_ = Call_(words, this_);
			t4_ = Call_(peek, t3_);
			t5_ = Call_(ends_with_co_, t4_, Str_(0));
			t2_ = t5_;
			}
		if (t2_)
			{
			obj_ args, name;
			name = Str_(1);
			t0_ = new__List__Standard(Proto_(List__Standard));
			args = t0_;
			while (1) {
				ContinuePoint_(0)
				t0_ = Call_(words, this_);
				t1_ = Call_(is_done, t0_);
				t2_ = Not_(t1_);
				if (t2_) {
					t3_ = Call_(words, this_);
					t4_ = Call_(peek, t3_);
					t5_ = Call_(ends_with_co_, t4_, Str_(2));
					t2_ = t5_;
					}
				if (!(t2_))
					Break_(0)
				{
				obj_ arg;
				t0_ = Call_(words, this_);
				t1_ = Call_(next, t0_);
				t2_ = Call_(_pl_, name, t1_);
				name = t2_;
				t0_ = Call_(parse_comma_expression, this_);
				arg = t0_;
				if (arg)
					{
					t0_ = Call_(append_co_, args, arg);
					}
				else
					{
					t0_ = Call_(_pl_, Str_(3), name);
					t1_ = Call_(_pl_, t0_, Str_(4));
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


obj_ parse_logical_and_expression__ExpressionParser__Compiler(obj_ this_)
{
	extern obj_ new_co_with_co___ShortCircuitAnd__Compiler(obj_ this_, obj_ expr1, obj_ expr2);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineString_(0, "&&")
	DefineString_(1, "&&")
	UsingMethod_(_eq__eq_) UsingMethod_(expression_expected_after_co_) UsingMethod_(is_done) UsingMethod_(next) UsingMethod_(parse_not_expression) UsingMethod_(peek) UsingMethod_(words)
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
			t0_ = Call_(words, this_);
			t1_ = Call_(is_done, t0_);
			t2_ = Not_(t1_);
			if (t2_) {
				t3_ = Call_(words, this_);
				t4_ = Call_(peek, t3_);
				t5_ = Call_(_eq__eq_, t4_, Str_(0));
				t2_ = t5_;
				}
			if (!(t2_))
				Break_(0)
			{
			obj_ expr2;
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			t0_ = Call_(parse_not_expression, this_);
			expr2 = t0_;
			t0_ = Not_(expr2);
			if (t0_)
				{
				t0_ = Call_(expression_expected_after_co_, this_, Str_(1));
				}
			t0_ = new_co_with_co___ShortCircuitAnd__Compiler(Proto_(ShortCircuitAnd__Compiler), expr, expr2);
			expr = t0_;
			}
			}
		
		return expr;
		}
	return nil;
}


obj_ parse_logical_or_expression__ExpressionParser__Compiler(obj_ this_)
{
	extern obj_ new_co_with_co___ShortCircuitOr__Compiler(obj_ this_, obj_ expr1, obj_ expr2);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineString_(0, "||")
	DefineString_(1, "||")
	UsingMethod_(_eq__eq_) UsingMethod_(expression_expected_after_co_) UsingMethod_(is_done) UsingMethod_(next) UsingMethod_(parse_logical_and_expression) UsingMethod_(peek) UsingMethod_(words)
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
			t0_ = Call_(words, this_);
			t1_ = Call_(is_done, t0_);
			t2_ = Not_(t1_);
			if (t2_) {
				t3_ = Call_(words, this_);
				t4_ = Call_(peek, t3_);
				t5_ = Call_(_eq__eq_, t4_, Str_(0));
				t2_ = t5_;
				}
			if (!(t2_))
				Break_(0)
			{
			obj_ expr2;
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			t0_ = Call_(parse_logical_and_expression, this_);
			expr2 = t0_;
			t0_ = Not_(expr2);
			if (t0_)
				{
				t0_ = Call_(expression_expected_after_co_, this_, Str_(1));
				}
			t0_ = new_co_with_co___ShortCircuitOr__Compiler(Proto_(ShortCircuitOr__Compiler), expr, expr2);
			expr = t0_;
			}
			}
		
		return expr;
		}
	return nil;
}


obj_ parse_multiplicative_expression__ExpressionParser__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "*")
	DefineString_(1, "/")
	DefineString_(2, "%")
	UsingMethod_(_eq__eq_) UsingMethod_(expression_expected_after_co_) UsingMethod_(make_binop_call_co_with_co_and_co_) UsingMethod_(next) UsingMethod_(parse_unary_expression) UsingMethod_(peek) UsingMethod_(words)

		{
		obj_ expr, word;
		t0_ = Call_(parse_unary_expression, this_);
		expr = t0_;
		t0_ = Not_(expr);
		if (t0_)
			{
			return nil;
			}
		
		t0_ = Call_(words, this_);
		t1_ = Call_(peek, t0_);
		word = t1_;
		while (1) {
			ContinuePoint_(0)
			t0_ = word;
			if (t0_) {
				t1_ = Call_(_eq__eq_, word, Str_(0));
				if ((t1_) == nil) {
					t2_ = Call_(_eq__eq_, word, Str_(1));
					t1_ = t2_;
					}
				if ((t1_) == nil) {
					t3_ = Call_(_eq__eq_, word, Str_(2));
					t1_ = t3_;
					}
				t0_ = t1_;
				}
			if (!(t0_))
				Break_(0)
			{
			obj_ expr2;
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			t0_ = Call_(parse_unary_expression, this_);
			expr2 = t0_;
			t0_ = Not_(expr2);
			if (t0_)
				{
				t0_ = Call_(expression_expected_after_co_, this_, word);
				}
			t0_ = Call_(make_binop_call_co_with_co_and_co_, this_, word, expr, expr2);
			expr = t0_;
			
			t0_ = Call_(words, this_);
			t1_ = Call_(peek, t0_);
			word = t1_;
			}
			}
		
		return expr;
		}
	return nil;
}


obj_ parse_not_expression__ExpressionParser__Compiler(obj_ this_)
{
	extern obj_ new_co___ShortCircuitNot__Compiler(obj_ this_, obj_ expr);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineString_(0, "!")
	DefineString_(1, "!")
	UsingMethod_(_eq__eq_) UsingMethod_(expression_expected_after_co_) UsingMethod_(is_done) UsingMethod_(next) UsingMethod_(parse_keyword_expression) UsingMethod_(parse_not_expression) UsingMethod_(peek) UsingMethod_(words)
	UsingClass_(ShortCircuitNot__Compiler)

		{
		obj_ expr;
		expr = nil;
		
		t0_ = Call_(words, this_);
		t1_ = Call_(is_done, t0_);
		t2_ = Not_(t1_);
		if (t2_) {
			t3_ = Call_(words, this_);
			t4_ = Call_(peek, t3_);
			t5_ = Call_(_eq__eq_, t4_, Str_(0));
			t2_ = t5_;
			}
		if (t2_)
			{
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			t0_ = Call_(parse_not_expression, this_);
			expr = t0_;
			t0_ = Not_(expr);
			if (t0_)
				{
				t0_ = Call_(expression_expected_after_co_, this_, Str_(1));
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


obj_ parse_postfix_expression__ExpressionParser__Compiler(obj_ this_)
{
	extern obj_ new_co_object_co_arguments_co___Send__Compiler(obj_ this_, obj_ name, obj_ object, obj_ arguments);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new__TupleExpression__Compiler(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co_object_co_arguments_co___Send__Compiler(obj_ this_, obj_ name, obj_ object, obj_ arguments);
	extern obj_ new_co_object_co_arguments_co___Send__Compiler(obj_ this_, obj_ name, obj_ object, obj_ arguments);
	extern obj_ with_co___List__Standard(obj_ this_, obj_ value);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "(")
	DefineString_(1, ")")
	DefineString_(2, "Missing expression in tuple.")
	DefineString_(3, "Missing \",\" or \")\" in tuple.")
	DefineString_(4, ")")
	DefineString_(5, ",")
	DefineString_(6, "Missing \",\" or \")\" in tuple.")
	DefineString_(7, "call:")
	DefineString_(8, "[")
	DefineString_(9, "Missing expression inside [].")
	DefineString_(10, "]")
	DefineString_(11, "Missing closing \"]\".")
	DefineString_(12, "at:")
	UsingMethod_(_nt__eq_) UsingMethod_(_eq__eq_) UsingMethod_(add_member_co_) UsingMethod_(append_co_) UsingMethod_(is_done) UsingMethod_(is_name_co_) UsingMethod_(next) UsingMethod_(parse_error_co_) UsingMethod_(parse_expression) UsingMethod_(parse_inclusive_or_expression) UsingMethod_(parse_primary_expression) UsingMethod_(peek) UsingMethod_(words)
	UsingClass_(List__Standard)
	UsingClass_(Send__Compiler)
	UsingClass_(TupleExpression__Compiler)

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
			t0_ = Call_(words, this_);
			t1_ = Call_(is_done, t0_);
			t2_ = Not_(t1_);
			if (!(t2_))
				Break_(0)
			{
			obj_ next_word;
			t0_ = Call_(words, this_);
			t1_ = Call_(peek, t0_);
			next_word = t1_;
			t0_ = Call_(is_name_co_, this_, next_word);
			if (t0_)
				{
				obj_ name;
				/*  A unary object call. */
				t0_ = Call_(words, this_);
				t1_ = Call_(next, t0_);
				name = t1_;
				t0_ = new__List__Standard(Proto_(List__Standard));
				t1_ = new_co_object_co_arguments_co___Send__Compiler(Proto_(Send__Compiler), name, expr, t0_);
				expr = t1_;
				}
			else
				{
				t0_ = Call_(_eq__eq_, next_word, Str_(0));
				if (t0_)
					{
					obj_ args, tuple;
					/*  A C-style function call, which becomes a "call:" send. */
					/*  Parse the argument list as a tuple. */
					t0_ = Call_(words, this_);
					t1_ = Call_(next, t0_);
					 	/*  Skip "(" */
					t0_ = new__TupleExpression__Compiler(Proto_(TupleExpression__Compiler));
					tuple = t0_;
					while (1) {
						ContinuePoint_(1)
						t0_ = Call_(words, this_);
						t1_ = Call_(is_done, t0_);
						t2_ = Not_(t1_);
						if (!(t2_))
							Break_(1)
						{
						obj_ tuple_member;
						t0_ = Call_(words, this_);
						t1_ = Call_(peek, t0_);
						t2_ = Call_(_eq__eq_, t1_, Str_(1));
						if (t2_)
							{
							t0_ = Call_(words, this_);
							t1_ = Call_(next, t0_);
							Break_(1)
							}
						t0_ = Call_(parse_inclusive_or_expression, this_);
						tuple_member = t0_;
						t0_ = Not_(tuple_member);
						if (t0_)
							{
							t0_ = Call_(parse_error_co_, this_, Str_(2));
							}
						t0_ = Call_(add_member_co_, tuple, tuple_member);
						t0_ = Call_(words, this_);
						t1_ = Call_(next, t0_);
						next_word = t1_;
						t0_ = Not_(next_word);
						if (t0_)
							{
							t0_ = Call_(parse_error_co_, this_, Str_(3));
							}
						else
							{
							t0_ = Call_(_eq__eq_, next_word, Str_(4));
							if (t0_)
								{
								Break_(1)
								}
							else
								{
								t0_ = Call_(_nt__eq_, next_word, Str_(5));
								if (t0_)
									{
									t0_ = Call_(parse_error_co_, this_, Str_(6));
									}
								}
							}
						}
						}
					t0_ = new__List__Standard(Proto_(List__Standard));
					args = t0_;
					t0_ = Call_(append_co_, args, tuple);
					t0_ = new_co_object_co_arguments_co___Send__Compiler(Proto_(Send__Compiler), Str_(7), expr, args);
					expr = t0_;
					}
				else
					{
					t0_ = Call_(_eq__eq_, next_word, Str_(8));
					if (t0_)
						{
						obj_ index;
						/*  "[]" is syntactic sugar for 'at:'. */
						t0_ = Call_(words, this_);
						t1_ = Call_(next, t0_);
						 	/*  Skip "[" */
						t0_ = Call_(parse_expression, this_);
						index = t0_;
						t0_ = Not_(index);
						if (t0_)
							{
							t0_ = Call_(parse_error_co_, this_, Str_(9));
							}
						t0_ = Call_(words, this_);
						t1_ = Call_(next, t0_);
						t2_ = Call_(_nt__eq_, t1_, Str_(10));
						if (t2_)
							{
							t0_ = Call_(parse_error_co_, this_, Str_(11));
							}
						t0_ = with_co___List__Standard(Proto_(List__Standard), index);
						t1_ = new_co_object_co_arguments_co___Send__Compiler(Proto_(Send__Compiler), Str_(12), expr, t0_);
						expr = t1_;
						}
					else
						{
						Break_(0)
						}
					}
				}
			
			
			
			}
			}
		
		return expr;
		}
	return nil;
}


obj_ parse_primary_expression__ExpressionParser__Compiler(obj_ this_)
{
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co_arguments_co_context_co___FunctionCall__Compiler(obj_ this_, obj_ name, obj_ arguments, obj_ context);
	extern obj_ new_co___FloatLiteral__Compiler(obj_ this_, obj_ value);
	extern obj_ new_co___IntLiteral__Compiler(obj_ this_, obj_ value);
	extern obj_ new_co___StringLiteral__Compiler(obj_ this_, obj_ value);
	extern obj_ new_co___SymbolLiteral__Compiler(obj_ this_, obj_ name);
	extern obj_ new_co___CharacterLiteral__Compiler(obj_ this_, obj_ char_);
	extern obj_ new__LiteralNil__Compiler(obj_ this_);
	extern obj_ new_co___BoolLiteral__Compiler(obj_ this_, obj_ value);
	extern obj_ new_co___BoolLiteral__Compiler(obj_ this_, obj_ value);
	extern obj_ new_co___StringLiteral__Compiler(obj_ this_, obj_ value);
	extern obj_ new_co_arguments_co_context_co___FunctionCall__Compiler(obj_ this_, obj_ name, obj_ arguments, obj_ context);
	extern obj_ new__List__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	UsingInt_(1)
	UsingInt_(2)
	UsingInt_(1)
	UsingInt_(2)
	UsingInt_(1)
	DefineString_(0, "super")
	DefineString_(1, ":")
	DefineString_(2, "")
	DefineString_(3, ":")
	DefineString_(4, "Missing argument (\"")
	DefineString_(5, "\").")
	DefineString_(6, ".")
	DefineString_(7, "\"")
	DefineString_(8, "'")
	DefineString_(9, "`")
	DefineString_(10, "(")
	DefineString_(11, "(")
	DefineString_(12, ")")
	DefineString_(13, "\")\" expected.")
	DefineString_(14, "nil")
	DefineString_(15, "true")
	DefineString_(16, "false")
	DefineString_(17, "\xC2\xB6")
	UsingMethod_(_nt__eq_) UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(_eq__eq_) UsingMethod_(append_co_) UsingMethod_(block_as_text) UsingMethod_(block_co_) UsingMethod_(contains_co_) UsingMethod_(context) UsingMethod_(ends_with_co_) UsingMethod_(expression_expected_after_co_) UsingMethod_(first_character) UsingMethod_(is_done) UsingMethod_(is_number_co_) UsingMethod_(length) UsingMethod_(line) UsingMethod_(next) UsingMethod_(parse_comma_expression) UsingMethod_(parse_error_co_) UsingMethod_(parse_expression) UsingMethod_(parse_super_call) UsingMethod_(peek) UsingMethod_(starts_with_co_) UsingMethod_(substr_co_) UsingMethod_(substr_co_length_co_) UsingMethod_(words)
	UsingClass_(BoolLiteral__Compiler)
	UsingClass_(CharacterLiteral__Compiler)
	UsingClass_(FloatLiteral__Compiler)
	UsingClass_(FunctionCall__Compiler)
	UsingClass_(IntLiteral__Compiler)
	UsingClass_(List__Standard)
	UsingClass_(LiteralNil__Compiler)
	UsingClass_(StringLiteral__Compiler)
	UsingClass_(SymbolLiteral__Compiler)

		{
		obj_ word;
		t0_ = Call_(words, this_);
		t1_ = Call_(is_done, t0_);
		if (t1_)
			{
			return nil;
			}
		t0_ = Call_(words, this_);
		t1_ = Call_(peek, t0_);
		word = t1_;
		
		t0_ = Call_(_eq__eq_, word, Str_(0));
		if (t0_)
			{
			t0_ = Call_(parse_super_call, this_);
			return t0_;
			}
		else
			{
			t1_ = Call_(ends_with_co_, word, Str_(1));
			if (t1_)
				{
				obj_ arguments, name;
				/*  Non-object function call. */
				name = Str_(2);
				t0_ = new__List__Standard(Proto_(List__Standard));
				arguments = t0_;
				while (1) {
					ContinuePoint_(0)
					t0_ = Call_(words, this_);
					t1_ = Call_(is_done, t0_);
					t2_ = Not_(t1_);
					if (t2_) {
						t3_ = Call_(words, this_);
						t4_ = Call_(peek, t3_);
						t5_ = Call_(ends_with_co_, t4_, Str_(3));
						t2_ = t5_;
						}
					if (!(t2_))
						Break_(0)
					{
					obj_ arg;
					t0_ = Call_(words, this_);
					t1_ = Call_(next, t0_);
					t2_ = Call_(_pl_, name, t1_);
					name = t2_;
					t0_ = Call_(parse_comma_expression, this_);
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
					}
				t0_ = Call_(context, this_);
				t1_ = new_co_arguments_co_context_co___FunctionCall__Compiler(Proto_(FunctionCall__Compiler), name, arguments, t0_);
				return t1_;
				}
			else
				{
				t2_ = Call_(is_number_co_, this_, word);
				if (t2_)
					{
					t0_ = Call_(words, this_);
					t1_ = Call_(next, t0_);
					t0_ = Call_(contains_co_, word, Str_(6));
					if (t0_)
						{
						t0_ = new_co___FloatLiteral__Compiler(Proto_(FloatLiteral__Compiler), word);
						return t0_;
						}
					else
						{
						t1_ = new_co___IntLiteral__Compiler(Proto_(IntLiteral__Compiler), word);
						return t1_;
						}
					}
				else
					{
					t2_ = Call_(starts_with_co_, word, Str_(7));
					if (t2_)
						{
						t0_ = Call_(words, this_);
						t1_ = Call_(next, t0_);
						t0_ = Call_(length, word);
						t1_ = Call_(_, t0_, SmallInt_(2));
						t2_ = Call_(substr_co_length_co_, word, SmallInt_(1), t1_);
						t3_ = new_co___StringLiteral__Compiler(Proto_(StringLiteral__Compiler), t2_);
						return t3_;
						}
					else
						{
						t4_ = Call_(starts_with_co_, word, Str_(8));
						if (t4_)
							{
							t0_ = Call_(words, this_);
							t1_ = Call_(next, t0_);
							t0_ = Call_(length, word);
							t1_ = Call_(_, t0_, SmallInt_(2));
							t2_ = Call_(substr_co_length_co_, word, SmallInt_(1), t1_);
							t3_ = new_co___SymbolLiteral__Compiler(Proto_(SymbolLiteral__Compiler), t2_);
							return t3_;
							}
						else
							{
							t4_ = Call_(starts_with_co_, word, Str_(9));
							if (t4_)
								{
								obj_ character;
								t0_ = Call_(words, this_);
								t1_ = Call_(next, t0_);
								t0_ = Call_(substr_co_, word, SmallInt_(1));
								t1_ = Call_(first_character, t0_);
								character = t1_;
								t0_ = new_co___CharacterLiteral__Compiler(Proto_(CharacterLiteral__Compiler), character);
								return t0_;
								}
							else
								{
								t1_ = Call_(_eq__eq_, word, Str_(10));
								if (t1_)
									{
									obj_ expr;
									t0_ = Call_(words, this_);
									t1_ = Call_(next, t0_);
									t0_ = Call_(parse_expression, this_);
									expr = t0_;
									t0_ = Not_(expr);
									if (t0_)
										{
										t0_ = Call_(expression_expected_after_co_, this_, Str_(11));
										}
									t0_ = Call_(words, this_);
									t1_ = Call_(is_done, t0_);
									if ((t1_) == nil) {
										t2_ = Call_(words, this_);
										t3_ = Call_(next, t2_);
										t4_ = Call_(_nt__eq_, t3_, Str_(12));
										t1_ = t4_;
										}
									if (t1_)
										{
										t0_ = Call_(parse_error_co_, this_, Str_(13));
										}
									return expr;
									}
								else
									{
									t0_ = Call_(_eq__eq_, word, Str_(14));
									if (t0_)
										{
										t0_ = Call_(words, this_);
										t1_ = Call_(next, t0_);
										t0_ = new__LiteralNil__Compiler(Proto_(LiteralNil__Compiler));
										return t0_;
										}
									else
										{
										t1_ = Call_(_eq__eq_, word, Str_(15));
										if (t1_)
											{
											t0_ = Call_(words, this_);
											t1_ = Call_(next, t0_);
											t0_ = new_co___BoolLiteral__Compiler(Proto_(BoolLiteral__Compiler), true_);
											return t0_;
											}
										else
											{
											t1_ = Call_(_eq__eq_, word, Str_(16));
											if (t1_)
												{
												t0_ = Call_(words, this_);
												t1_ = Call_(next, t0_);
												t0_ = new_co___BoolLiteral__Compiler(Proto_(BoolLiteral__Compiler), nil);
												return t0_;
												}
											else
												{
												t1_ = Call_(_eq__eq_, word, Str_(17));
												if (t1_)
													{
													obj_ result;
													t0_ = Call_(words, this_);
													t1_ = Call_(next, t0_);
													t0_ = Call_(line, this_);
													t1_ = Call_(block_as_text, t0_);
													t2_ = new_co___StringLiteral__Compiler(Proto_(StringLiteral__Compiler), t1_);
													result = t2_;
													/*  Consume the block. */
													t0_ = Call_(line, this_);
													t1_ = Call_(block_co_, t0_, nil);
													return result;
													}
												else
													{
													/*  Non-object function call. */
													t0_ = Call_(words, this_);
													t1_ = Call_(next, t0_);
													t0_ = new__List__Standard(Proto_(List__Standard));
													t1_ = Call_(context, this_);
													t2_ = new_co_arguments_co_context_co___FunctionCall__Compiler(Proto_(FunctionCall__Compiler), word, t0_, t1_);
													return t2_;
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
		
		
		
		
		
		
		
		
		
		
		return nil;
		}
	return nil;
}


obj_ parse_relational_expression__ExpressionParser__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineString_(0, "<")
	DefineString_(1, ">")
	DefineString_(2, "<=")
	DefineString_(3, ">=")
	UsingMethod_(_eq__eq_) UsingMethod_(expression_expected_after_co_) UsingMethod_(make_binop_call_co_with_co_and_co_) UsingMethod_(next) UsingMethod_(parse_shift_expression) UsingMethod_(peek) UsingMethod_(words)

		{
		obj_ expr, word;
		t0_ = Call_(parse_shift_expression, this_);
		expr = t0_;
		t0_ = Not_(expr);
		if (t0_)
			{
			return nil;
			}
		
		t0_ = Call_(words, this_);
		t1_ = Call_(peek, t0_);
		word = t1_;
		while (1) {
			ContinuePoint_(0)
			t0_ = word;
			if (t0_) {
				t1_ = Call_(_eq__eq_, word, Str_(0));
				if ((t1_) == nil) {
					t2_ = Call_(_eq__eq_, word, Str_(1));
					t1_ = t2_;
					}
				if ((t1_) == nil) {
					t3_ = Call_(_eq__eq_, word, Str_(2));
					t1_ = t3_;
					}
				if ((t1_) == nil) {
					t4_ = Call_(_eq__eq_, word, Str_(3));
					t1_ = t4_;
					}
				t0_ = t1_;
				}
			if (!(t0_))
				Break_(0)
			{
			obj_ expr2;
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			t0_ = Call_(parse_shift_expression, this_);
			expr2 = t0_;
			t0_ = Not_(expr2);
			if (t0_)
				{
				t0_ = Call_(expression_expected_after_co_, this_, word);
				}
			t0_ = Call_(make_binop_call_co_with_co_and_co_, this_, word, expr, expr2);
			expr = t0_;
			
			t0_ = Call_(words, this_);
			t1_ = Call_(peek, t0_);
			word = t1_;
			}
			}
		
		return expr;
		}
	return nil;
}


obj_ parse_shift_expression__ExpressionParser__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "<<")
	DefineString_(1, ">>")
	UsingMethod_(_eq__eq_) UsingMethod_(expression_expected_after_co_) UsingMethod_(make_binop_call_co_with_co_and_co_) UsingMethod_(next) UsingMethod_(parse_additive_expression) UsingMethod_(peek) UsingMethod_(words)

		{
		obj_ expr, word;
		t0_ = Call_(parse_additive_expression, this_);
		expr = t0_;
		t0_ = Not_(expr);
		if (t0_)
			{
			return nil;
			}
		
		t0_ = Call_(words, this_);
		t1_ = Call_(peek, t0_);
		word = t1_;
		while (1) {
			ContinuePoint_(0)
			t0_ = word;
			if (t0_) {
				t1_ = Call_(_eq__eq_, word, Str_(0));
				if ((t1_) == nil) {
					t2_ = Call_(_eq__eq_, word, Str_(1));
					t1_ = t2_;
					}
				t0_ = t1_;
				}
			if (!(t0_))
				Break_(0)
			{
			obj_ expr2;
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			t0_ = Call_(parse_additive_expression, this_);
			expr2 = t0_;
			t0_ = Not_(expr2);
			if (t0_)
				{
				t0_ = Call_(expression_expected_after_co_, this_, word);
				}
			t0_ = Call_(make_binop_call_co_with_co_and_co_, this_, word, expr, expr2);
			expr = t0_;
			
			t0_ = Call_(words, this_);
			t1_ = Call_(peek, t0_);
			word = t1_;
			}
			}
		
		return expr;
		}
	return nil;
}


obj_ parse_super_call__ExpressionParser__Compiler(obj_ this_)
{
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co_arguments_co___SuperCall__Compiler(obj_ this_, obj_ name, obj_ arguments);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineString_(0, "\"super\" calls are only valid in functions.")
	DefineString_(1, "Invalid \"super\" call.")
	DefineString_(2, ":")
	DefineString_(3, "")
	DefineString_(4, ":")
	DefineString_(5, "Missing argument (\"")
	DefineString_(6, "\").")
	DefineString_(7, "Missing unary expression argument in super call (\"")
	DefineString_(8, "\").")
	DefineString_(9, "Illegal super call.")
	DefineString_(10, "Internal error: no proto for super call.")
	UsingMethod_(_pl_) UsingMethod_(append_co_) UsingMethod_(context) UsingMethod_(enclosing_method_context) UsingMethod_(ends_with_co_) UsingMethod_(is_a_co_) UsingMethod_(is_done) UsingMethod_(is_name_co_) UsingMethod_(next) UsingMethod_(parent) UsingMethod_(parse_error_co_) UsingMethod_(parse_inclusive_or_expression) UsingMethod_(parse_unary_expression) UsingMethod_(peek) UsingMethod_(words)
	UsingClass_(CompiledClass__Compiler)
	UsingClass_(ExistingClass__Compiler)
	UsingClass_(List__Standard)
	UsingClass_(SuperCall__Compiler)

		{
		obj_ arguments, method_context, name, on_proto, word;
		/*  Consume "super". */
		t0_ = Call_(words, this_);
		t1_ = Call_(next, t0_);
		
		/*  Make sure this is in an object method. */
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
		
		t0_ = Call_(words, this_);
		t1_ = Call_(is_done, t0_);
		if (t1_)
			{
			t0_ = Call_(parse_error_co_, this_, Str_(1));
			}
		t0_ = Call_(words, this_);
		t1_ = Call_(peek, t0_);
		word = t1_;
		t0_ = Call_(is_name_co_, this_, word);
		if (t0_)
			{
			name = word;
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			}
		else
			{
			t0_ = Call_(ends_with_co_, word, Str_(2));
			if (t0_)
				{
				/*  Get the arguments. */
				name = Str_(3);
				while (1) {
					ContinuePoint_(0)
					t0_ = Call_(words, this_);
					t1_ = Call_(is_done, t0_);
					t2_ = Not_(t1_);
					if (t2_) {
						t3_ = Call_(words, this_);
						t4_ = Call_(peek, t3_);
						t5_ = Call_(ends_with_co_, t4_, Str_(4));
						t2_ = t5_;
						}
					if (!(t2_))
						Break_(0)
					{
					obj_ arg;
					t0_ = Call_(words, this_);
					t1_ = Call_(next, t0_);
					t2_ = Call_(_pl_, name, t1_);
					name = t2_;
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
				}
			else
				{
				t0_ = Call_(is_name_co_, this_, word);
				t1_ = Not_(t0_);
				if (t1_)
					{
					obj_ arg;
					/*  *** Actually, we're allowing too many things here, but we'd have to */
					/*  *** explicitly check every binop. */
					t0_ = Call_(words, this_);
					t1_ = Call_(next, t0_);
					name = t1_;
					t0_ = Call_(parse_unary_expression, this_);
					arg = t0_;
					t0_ = Not_(arg);
					if (t0_)
						{
						t0_ = Call_(_pl_, Str_(7), name);
						t1_ = Call_(_pl_, t0_, Str_(8));
						t2_ = Call_(parse_error_co_, this_, t1_);
						}
					t0_ = Call_(append_co_, arguments, arg);
					}
				else
					{
					/*  Does this ever happen? */
					t0_ = Call_(parse_error_co_, this_, Str_(9));
					}
				}
			}
		
		
		/*  We allow binops here. */
		
		
		/*  Get the proto that it's on. */
		t0_ = Call_(parent, method_context);
		on_proto = t0_;
		t0_ = Call_(is_a_co_, on_proto, Proto_(CompiledClass__Compiler));
		if ((t0_) == nil) {
			t1_ = Call_(is_a_co_, on_proto, Proto_(ExistingClass__Compiler));
			t0_ = t1_;
			}
		t2_ = Not_(t0_);
		if (t2_)
			{
			t0_ = Call_(parse_error_co_, this_, Str_(10));
			}
		
		t0_ = new_co_arguments_co___SuperCall__Compiler(Proto_(SuperCall__Compiler), name, arguments);
		return t0_;
		}
	return nil;
}


obj_ parse_unary_expression__ExpressionParser__Compiler(obj_ this_)
{
	extern obj_ new_co_object_co_arguments_co___Send__Compiler(obj_ this_, obj_ name, obj_ object, obj_ arguments);
	extern obj_ new__List__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "+")
	DefineString_(1, "-")
	DefineString_(2, "~")
	DefineString_(3, "+")
	DefineString_(4, "unary-plus")
	DefineString_(5, "-")
	DefineString_(6, "unary-minus")
	DefineString_(7, "~")
	UsingMethod_(_eq__eq_) UsingMethod_(expression_expected_after_co_) UsingMethod_(is_done) UsingMethod_(next) UsingMethod_(parse_postfix_expression) UsingMethod_(parse_unary_expression) UsingMethod_(peek) UsingMethod_(words)
	UsingClass_(List__Standard)
	UsingClass_(Send__Compiler)

		{
		obj_ expr, word;
		expr = nil;
		t0_ = Call_(words, this_);
		t1_ = Call_(is_done, t0_);
		if (t1_)
			{
			return nil;
			}
		t0_ = Call_(words, this_);
		t1_ = Call_(peek, t0_);
		word = t1_;
		
		t0_ = Call_(_eq__eq_, word, Str_(0));
		if ((t0_) == nil) {
			t1_ = Call_(_eq__eq_, word, Str_(1));
			t0_ = t1_;
			}
		if ((t0_) == nil) {
			t2_ = Call_(_eq__eq_, word, Str_(2));
			t0_ = t2_;
			}
		if (t0_)
			{
			obj_ name;
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			t0_ = Call_(parse_unary_expression, this_);
			expr = t0_;
			t0_ = Not_(expr);
			if (t0_)
				{
				t0_ = Call_(expression_expected_after_co_, this_, word);
				}
			name = nil;
			t0_ = Call_(_eq__eq_, word, Str_(3));
			if (t0_)
				{
				name = Str_(4);
				}
			else
				{
				t0_ = Call_(_eq__eq_, word, Str_(5));
				if (t0_)
					{
					name = Str_(6);
					}
				else
					{
					name = Str_(7);
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


