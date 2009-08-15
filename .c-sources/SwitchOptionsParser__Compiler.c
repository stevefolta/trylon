#include "Trylon_.h"

UsingSym_(SwitchOptionsParser)UsingClass_(Compiler)
UsingClass_(Object__Standard)
UsingClass_(SwitchOptionsParser__Compiler)
struct ClassInfo SwitchOptionsParser__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 204, 2, Proto_(SwitchOptionsParser__Compiler), Proto_(Compiler), Proto_(Object__Standard), nil, Sym_(SwitchOptionsParser), nil, nil };
struct object SwitchOptionsParser__Compiler = 
	{ &SwitchOptionsParser__Compiler__classInfo_, {nil, nil} };


#define lines__fld_	(0)
#define context__fld_	(1)


obj_ create_co_in_co___SwitchOptionsParser__Compiler(obj_ this_, obj_ lines, obj_ context)
{
	obj_ t0_;
	UsingMethod_(context_co_) UsingMethod_(lines_co_)

		{
		t0_ = Call_(lines_co_, this_, lines);
		t0_ = Call_(context_co_, this_, context);
		}
	return nil;
}


obj_ new_co_in_co___SwitchOptionsParser__Compiler(obj_ this_, obj_ lines, obj_ context)
{
	UsingClass_(SwitchOptionsParser__Compiler)
	obj_ obj = AllocObj_(SwitchOptionsParser__Compiler);
	create_co_in_co___SwitchOptionsParser__Compiler(obj, lines, context);
	return obj;
}


obj_ parse_into_co___SwitchOptionsParser__Compiler(obj_ this_, obj_ switch_statement)
{
	extern obj_ new_co_line_co_context_co___TrylonExpressionParser__Compiler(obj_ this_, obj_ words, obj_ line, obj_ context);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co_in_co___ParseException__Compiler(obj_ this_, obj_ error_message, obj_ line);
	extern obj_ new_co_in_co___TrylonCodeParser__Compiler(obj_ this_, obj_ lines, obj_ context);
	extern obj_ new_co_body_co_pre_clause_comments_co_value_comment_co___SwitchClause__Compiler(obj_ this_, obj_ values, obj_ body, obj_ pre_clause_comments, obj_ value_comment);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineString_(0, "#")
	DefineString_(1, "else")
	DefineString_(2, "#")
	DefineString_(3, ",")
	DefineString_(4, "Extra words at end of line.")
	UsingMethod_(_eq__eq_) UsingMethod_(add_clause_co_) UsingMethod_(append_co_) UsingMethod_(block) UsingMethod_(context) UsingMethod_(current_item) UsingMethod_(else_clause_co_) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(is_empty) UsingMethod_(iterator) UsingMethod_(lines) UsingMethod_(next) UsingMethod_(parse) UsingMethod_(parse_assignment_expression) UsingMethod_(peek) UsingMethod_(remainder) UsingMethod_(require_eol) UsingMethod_(starts_with_co_) UsingMethod_(words)
	UsingClass_(List__Standard)
	UsingClass_(ParseException__Compiler)
	UsingClass_(SwitchClause__Compiler)
	UsingClass_(TrylonCodeParser__Compiler)
	UsingClass_(TrylonExpressionParser__Compiler)

		{
		t0_ = Call_(lines, this_);
		ForStart_(0, t0_, line)
			{
			obj_ body, clause, first_word, values, values_comment, words;
			/*  Blank line or comment? */
			t0_ = Call_(words, line);
			words = t0_;
			t0_ = Call_(peek, words);
			first_word = t0_;
			t0_ = Not_(first_word);
			if ((t0_) == nil) {
				t1_ = Call_(starts_with_co_, first_word, Str_(0));
				t0_ = t1_;
				}
			if (t0_)
				{
				Continue_(0)
				}
			
			/*  Handle "else". */
			values = nil;
			values_comment = nil;
			t0_ = Call_(_eq__eq_, first_word, Str_(1));
			if (t0_)
				{
				t0_ = Call_(next, words);
				t0_ = Call_(require_eol, words);
				}
			else
				{
				obj_ parser;
				/*  Gather the values. */
				t0_ = Call_(context, this_);
				t1_ = new_co_line_co_context_co___TrylonExpressionParser__Compiler(Proto_(TrylonExpressionParser__Compiler), words, line, t0_);
				parser = t1_;
				t0_ = new__List__Standard(Proto_(List__Standard));
				values = t0_;
				while (1) {
					ContinuePoint_(1)
					t0_ = Call_(is_empty, words);
					t1_ = Not_(t0_);
					if (!(t1_))
						Break_(1)
					{
					obj_ expr;
					/*  Comment?  */
					t0_ = Call_(peek, words);
					t1_ = Call_(_eq__eq_, t0_, Str_(2));
					if (t1_)
						{
						t0_ = Call_(next, words);
						t0_ = Call_(remainder, words);
						values_comment = t0_;
						words = nil;
						Break_(1)
						}
					
					/*  Get a value. */
					t0_ = Call_(parse_assignment_expression, parser);
					expr = t0_;
					t0_ = Not_(expr);
					if (t0_)
						{
						Break_(1)
						}
					t0_ = Call_(append_co_, values, expr);
					
					/*  Allow (but don't require) commas between values. */
					t0_ = Call_(is_empty, words);
					t1_ = Not_(t0_);
					if (t1_) {
						t2_ = Call_(peek, words);
						t3_ = Call_(_eq__eq_, t2_, Str_(3));
						t1_ = t3_;
						}
					if (t1_)
						{
						t0_ = Call_(next, words);
						}
					}
					}
				
				/*  There should always be values here, but check anyway. */
				t0_ = Call_(is_empty, values);
				if (t0_)
					{
					Continue_(0)
					}
				t0_ = words;
				if (t0_) {
					t1_ = Call_(is_empty, words);
					t2_ = Not_(t1_);
					t0_ = t2_;
					}
				if (t0_)
					{
					t0_ = new_co_in_co___ParseException__Compiler(Proto_(ParseException__Compiler), Str_(4), line);
					Throw_(t0_);
					}
				}
			
			
			/*  Parse the body. */
			t1_ = Call_(block, line);
			t2_ = Call_(context, this_);
			t3_ = new_co_in_co___TrylonCodeParser__Compiler(Proto_(TrylonCodeParser__Compiler), t1_, t2_);
			t4_ = Call_(parse, t3_);
			body = t4_;
			
			/*  Add the SwitchClause. */
			t0_ = new_co_body_co_pre_clause_comments_co_value_comment_co___SwitchClause__Compiler(Proto_(SwitchClause__Compiler), values, body, nil, values_comment);
			clause = t0_;
			if (values)
				{
				t0_ = Call_(add_clause_co_, switch_statement, clause);
				}
			else
				{
				t0_ = Call_(else_clause_co_, switch_statement, clause);
				}
			}
		ForEnd_(0)
		}
	return nil;
}


