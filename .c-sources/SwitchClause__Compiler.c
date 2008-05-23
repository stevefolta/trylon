#include "Trylon_.h"

UsingSym_(SwitchClause)UsingClass_(Compiler)
UsingClass_(Object__Standard)
UsingClass_(SwitchClause__Compiler)
struct ClassInfo SwitchClause__Compiler__classInfo_ = 
	{ 156, 20, Proto_(SwitchClause__Compiler), Proto_(Compiler), Proto_(Object__Standard), nil, Sym_(SwitchClause) ,nil };
struct object SwitchClause__Compiler = 
	{ &SwitchClause__Compiler__classInfo_, {nil, nil, nil, nil, nil} };


#define values__fld_	(0)
#define body__fld_	(1)
#define pre_clause_comments__fld_	(2)
#define value_comment__fld_	(3)
#define value_results__fld_	(4)


obj_ body__SwitchClause__Compiler(obj_ this_)
{
	return Field_(body);
}


obj_ body_co___SwitchClause__Compiler(obj_ this_, obj_ value)
{
	Field_(body) = value;
	return value;
}


obj_ create_co_body_co_pre_clause_comments_co_value_comment_co___SwitchClause__Compiler(obj_ this_, obj_ values, obj_ body, obj_ pre_clause_comments, obj_ value_comment)
{
	obj_ t0_;
	UsingMethod_(body_co_) UsingMethod_(pre_clause_comments_co_) UsingMethod_(value_comment_co_) UsingMethod_(values_co_)

		{
		t0_ = Call_(values_co_, this_, values);
		t0_ = Call_(body_co_, this_, body);
		t0_ = Call_(pre_clause_comments_co_, this_, pre_clause_comments);
		t0_ = Call_(value_comment_co_, this_, value_comment);
		
		
		}
	return nil;
}


obj_ emit_code_co_is_first_co___SwitchClause__Compiler(obj_ this_, obj_ builder, obj_ is_first)
{
	extern obj_ new__StringBuilder__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "else ")
	DefineString_(1, "if (")
	DefineString_(2, " || ")
	DefineString_(3, "SwitchMatches_(")
	DefineString_(4, ")")
	DefineString_(5, ")")
	DefineString_(6, "{}")
	UsingMethod_(_pl_) UsingMethod_(access) UsingMethod_(add_line_co_) UsingMethod_(body) UsingMethod_(current_item) UsingMethod_(emit_code_co_) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(pre_clause_comments) UsingMethod_(string) UsingMethod_(value_results)
	UsingClass_(StringBuilder__Standard)

		{
		obj_ done_one, line;
		t0_ = Call_(pre_clause_comments, this_);
		if (t0_)
			{
			t0_ = Call_(pre_clause_comments, this_);
			ForStart_(0, t0_, comment)
				{
				t0_ = Call_(emit_code_co_, comment, builder);
				}
			ForEnd_(0)
			}
		t0_ = new__StringBuilder__Standard(Proto_(StringBuilder__Standard));
		line = t0_;
		t0_ = Not_(is_first);
		if (t0_)
			{
			t0_ = Call_(_pl_, line, Str_(0));
			line = t0_;
			}
		t0_ = Call_(_pl_, line, Str_(1));
		line = t0_;
		done_one = nil;
		t0_ = Call_(value_results, this_);
		ForStart_(1, t0_, result)
			{
			if (done_one)
				{
				t0_ = Call_(_pl_, line, Str_(2));
				line = t0_;
				}
			else
				{
				done_one = true_;
				}
			t0_ = Call_(_pl_, line, Str_(3));
			line = t0_;
			t0_ = Call_(access, result);
			t1_ = Call_(_pl_, line, t0_);
			line = t1_;
			t0_ = Call_(_pl_, line, Str_(4));
			line = t0_;
			}
		ForEnd_(1)
		t0_ = Call_(_pl_, line, Str_(5));
		line = t0_;
		t0_ = Call_(string, line);
		t1_ = Call_(add_line_co_, builder, t0_);
		t0_ = Call_(body, this_);
		if (t0_)
			{
			t0_ = Call_(body, this_);
			t1_ = Call_(emit_code_co_, t0_, builder);
			}
		else
			{
			t0_ = Call_(add_line_co_, builder, Str_(6));
			
			
			
			}
		}
	return nil;
}


obj_ emit_values_co___SwitchClause__Compiler(obj_ this_, obj_ builder)
{
	extern obj_ new__List__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(append_co_) UsingMethod_(current_item) UsingMethod_(emit_code_co_) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(value_results) UsingMethod_(value_results_co_) UsingMethod_(values)
	UsingClass_(List__Standard)

		{
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(value_results_co_, this_, t0_);
		t0_ = Call_(values, this_);
		ForStart_(0, t0_, value)
			{
			t0_ = Call_(value_results, this_);
			t1_ = Call_(emit_code_co_, value, builder);
			t2_ = Call_(append_co_, t0_, t1_);
			
			}
		ForEnd_(0)
		}
	return nil;
}


obj_ jolt_expression__SwitchClause__Compiler(obj_ this_)
{
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineInt_(0, 0)
	DefineInt_(1, 1)
	UsingMethod_(_pl_) UsingMethod_(at_co_put_co_) UsingMethod_(body) UsingMethod_(count) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(jolt_expression) UsingMethod_(values)
	UsingClass_(Expression)

		{
		t0_ = Call_(values, this_);
		if (t0_)
			{
			obj_ index, values_list;
			t0_ = Call_(values, this_);
			t1_ = Call_(count, t0_);
			t2_ = new_co___Expression(Proto_(Expression), t1_);
			values_list = t2_;
			index = Int_(0);
			t0_ = Call_(values, this_);
			ForStart_(0, t0_, value)
				{
				t0_ = Call_(jolt_expression, value);
				t1_ = Call_(at_co_put_co_, values_list, index, t0_);
				t0_ = Call_(_pl_, index, Int_(1));
				index = t0_;
				}
			ForEnd_(0)
			t0_ = Call_(body, this_);
			t1_ = Call_(jolt_expression, t0_);
			t2_ = with_co_with_co___Expression(Proto_(Expression), values_list, t1_);
			return t2_;
			}
		else
			{
			/* It's the "else" clause. */
			t3_ = Call_(body, this_);
			t4_ = Call_(jolt_expression, t3_);
			return t4_;
			
			}
		}
	return nil;
}


obj_ new_co_body_co_pre_clause_comments_co_value_comment_co___SwitchClause__Compiler(obj_ this_, obj_ values, obj_ body, obj_ pre_clause_comments, obj_ value_comment)
{
	UsingClass_(SwitchClause__Compiler)
	obj_ obj = AllocObj_(SwitchClause__Compiler);
	create_co_body_co_pre_clause_comments_co_value_comment_co___SwitchClause__Compiler(obj, values, body, pre_clause_comments, value_comment);
	return obj;
}


obj_ pre_clause_comments__SwitchClause__Compiler(obj_ this_)
{
	return Field_(pre_clause_comments);
}


obj_ pre_clause_comments_co___SwitchClause__Compiler(obj_ this_, obj_ value)
{
	Field_(pre_clause_comments) = value;
	return value;
}


obj_ prepare_to_emit__SwitchClause__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(body) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(prepare_to_emit) UsingMethod_(values)

		{
		t0_ = Call_(values, this_);
		if (t0_)
			{
			t0_ = Call_(values, this_);
			ForStart_(0, t0_, value)
				{
				t0_ = Call_(prepare_to_emit, value);
				}
			ForEnd_(0)
			}
		t0_ = Call_(body, this_);
		t1_ = Call_(prepare_to_emit, t0_);
		
		
		
		}
	return nil;
}


obj_ translate_jolt_expression__SwitchClause__Compiler(obj_ this_)
{
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 0)
	DefineInt_(1, 1)
	UsingMethod_(_pl_) UsingMethod_(at_co_put_co_) UsingMethod_(body) UsingMethod_(count) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(values)
	UsingClass_(Expression)

		{
		t0_ = Call_(values, this_);
		if (t0_)
			{
			obj_ index, values_list;
			t0_ = Call_(values, this_);
			t1_ = Call_(count, t0_);
			t2_ = new_co___Expression(Proto_(Expression), t1_);
			values_list = t2_;
			index = Int_(0);
			t0_ = Call_(values, this_);
			ForStart_(0, t0_, value)
				{
				t0_ = Call_(at_co_put_co_, values_list, index, value);
				t0_ = Call_(_pl_, index, Int_(1));
				index = t0_;
				}
			ForEnd_(0)
			t0_ = Call_(body, this_);
			t1_ = with_co_with_co___Expression(Proto_(Expression), values_list, t0_);
			return t1_;
			}
		else
			{
			/* It's the "else" clause. */
			t2_ = Call_(body, this_);
			return t2_;
			
			
			
			}
		}
	return nil;
}


obj_ value_comment__SwitchClause__Compiler(obj_ this_)
{
	return Field_(value_comment);
}


obj_ value_comment_co___SwitchClause__Compiler(obj_ this_, obj_ value)
{
	Field_(value_comment) = value;
	return value;
}


obj_ value_results__SwitchClause__Compiler(obj_ this_)
{
	return Field_(value_results);
}


obj_ value_results_co___SwitchClause__Compiler(obj_ this_, obj_ value)
{
	Field_(value_results) = value;
	return value;
}


obj_ values__SwitchClause__Compiler(obj_ this_)
{
	return Field_(values);
}


obj_ values_co___SwitchClause__Compiler(obj_ this_, obj_ value)
{
	Field_(values) = value;
	return value;
}


