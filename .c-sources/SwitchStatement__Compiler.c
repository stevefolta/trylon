#include "Trylon_.h"

UsingSym_(SwitchStatement)UsingClass_(Compiler)
UsingClass_(Statement__Compiler)
UsingClass_(SwitchStatement__Compiler)
struct ClassInfo SwitchStatement__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 182, 6, Proto_(SwitchStatement__Compiler), Proto_(Compiler), Proto_(Statement__Compiler), nil, Sym_(SwitchStatement), nil, nil };
struct object SwitchStatement__Compiler = 
	{ &SwitchStatement__Compiler__classInfo_, {nil, nil, nil, nil, nil, nil} };


#define comment__fld_	(0)

#define expression__fld_	(1)
#define clauses__fld_	(2)
#define else_clause__fld_	(3)
#define value_comment__fld_	(4)
#define post_clauses_comments__fld_	(5)


obj_ add_clause_co___SwitchStatement__Compiler(obj_ this_, obj_ clause)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(append_co_) UsingMethod_(clauses)

		{
		t0_ = Call_(clauses, this_);
		t1_ = Call_(append_co_, t0_, clause);
		}
	return nil;
}


obj_ compile_co___SwitchStatement__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	UsingMethod_(compile_switch_co_)

		{
		t0_ = Call_(compile_switch_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ create_co_value_comment_co___SwitchStatement__Compiler(obj_ this_, obj_ expression, obj_ value_comment)
{
	extern obj_ new__List__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(clauses_co_) UsingMethod_(expression_co_) UsingMethod_(value_comment_co_)
	UsingClass_(List__Standard)

		{
		t0_ = Call_(expression_co_, this_, expression);
		t0_ = Call_(value_comment_co_, this_, value_comment);
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(clauses_co_, this_, t0_);
		}
	return nil;
}


obj_ emit_code_co___SwitchStatement__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineString_(0, "Switch_(")
	DefineString_(1, ")")
	DefineString_(2, "else")
	DefineString_(3, "EndSwitch_")
	UsingMethod_(_pl_) UsingMethod_(access) UsingMethod_(add_comment_co_) UsingMethod_(add_line_co_) UsingMethod_(body) UsingMethod_(clauses) UsingMethod_(current_item) UsingMethod_(else_clause) UsingMethod_(emit_code_co_) UsingMethod_(emit_code_co_is_first_co_) UsingMethod_(emit_values_co_) UsingMethod_(expression) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(post_clauses_comments) UsingMethod_(reset_temporaries)

		{
		obj_ at_first, value_result;
		t0_ = Call_(expression, this_);
		t1_ = Call_(emit_code_co_, t0_, builder);
		value_result = t1_;
		t0_ = Call_(clauses, this_);
		ForStart_(0, t0_, clause)
			{
			t0_ = Call_(emit_values_co_, clause, builder);
			}
		ForEnd_(0)
		t0_ = Call_(access, value_result);
		t1_ = Call_(_pl_, Str_(0), t0_);
		t2_ = Call_(_pl_, t1_, Str_(1));
		t3_ = Call_(add_comment_co_, this_, t2_);
		t4_ = Call_(add_line_co_, builder, t3_);
		t0_ = Call_(reset_temporaries, builder);
		at_first = true_;
		t0_ = Call_(clauses, this_);
		ForStart_(1, t0_, clause)
			{
			t0_ = Call_(emit_code_co_is_first_co_, clause, builder, at_first);
			at_first = nil;
			}
		ForEnd_(1)
		t0_ = Call_(else_clause, this_);
		if (t0_)
			{
			t0_ = Call_(add_line_co_, builder, Str_(2));
			t0_ = Call_(else_clause, this_);
			t1_ = Call_(body, t0_);
			t2_ = Call_(emit_code_co_, t1_, builder);
			}
		t0_ = Call_(post_clauses_comments, this_);
		if (t0_)
			{
			t0_ = Call_(post_clauses_comments, this_);
			ForStart_(2, t0_, comment)
				{
				t0_ = Call_(emit_code_co_, comment, builder);
				}
			ForEnd_(2)
			}
		t0_ = Call_(add_line_co_, builder, Str_(3));
		}
	return nil;
}


obj_ interpreted__SwitchStatement__Compiler(obj_ this_)
{
	obj_ t0_;
	DefineString_(0, "switch")
	UsingMethod_(uninterpretable_co_)

		{
		/*  Coming Soon. */
		t0_ = Call_(uninterpretable_co_, this_, Str_(0));
		}
	return nil;
}


obj_ new_co_value_comment_co___SwitchStatement__Compiler(obj_ this_, obj_ expression, obj_ value_comment)
{
	UsingClass_(SwitchStatement__Compiler)
	obj_ obj = AllocObj_(SwitchStatement__Compiler);
	create_co_value_comment_co___SwitchStatement__Compiler(obj, expression, value_comment);
	return obj;
}


obj_ resolve__SwitchStatement__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(clauses) UsingMethod_(current_item) UsingMethod_(else_clause) UsingMethod_(expression) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(resolve)

		{
		t0_ = Call_(expression, this_);
		t1_ = Call_(resolve, t0_);
		t0_ = Call_(clauses, this_);
		ForStart_(0, t0_, clause)
			{
			t0_ = Call_(resolve, clause);
			}
		ForEnd_(0)
		t0_ = Call_(else_clause, this_);
		if (t0_)
			{
			t0_ = Call_(else_clause, this_);
			t1_ = Call_(resolve, t0_);
			}
		}
	return nil;
}


