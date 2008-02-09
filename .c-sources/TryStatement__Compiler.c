#include "Trylon_.h"

UsingSym_(TryStatement)UsingClass_(Compiler)
UsingClass_(Statement__Compiler)
UsingClass_(TryStatement__Compiler)
struct ClassInfo TryStatement__Compiler__classInfo_ = 
	{ 137, 12, Proto_(TryStatement__Compiler), Proto_(Compiler), Proto_(Statement__Compiler), nil, Sym_(TryStatement) ,nil };
struct object TryStatement__Compiler = 
	{ &TryStatement__Compiler__classInfo_, {nil, nil, nil} };


#define comment__fld_	(0)

#define body__fld_	(1)
#define else_clause__fld_	(2)

DeclareSharedField_(cur_interpreted_exception, TryStatement__Compiler, nil)

obj_ attach_else_co_line_co___TryStatement__Compiler(obj_ this_, obj_ statement, obj_ line)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(body) UsingMethod_(body_co_) UsingMethod_(else_clause) UsingMethod_(else_clause_co_) UsingMethod_(parent) UsingMethod_(parent_co_)
	extern obj_ new_co_comment_co___CatchClause__Compiler(obj_ this_, obj_ parent, obj_ comment);
	UsingClass_(CatchClause__Compiler)

		{
		t0_ = Call_(body, this_);
		t1_ = Call_(parent, t0_);
		t2_ = new_co_comment_co___CatchClause__Compiler(Proto_(CatchClause__Compiler), t1_, nil);
		t3_ = Call_(else_clause_co_, this_, t2_);
		t0_ = Call_(parent_co_, statement, this_);
		 	/* "statement" will be a Block. */
		t0_ = Call_(else_clause, this_);
		t1_ = Call_(body_co_, t0_, statement);
		
		
		}
	return nil;
}


obj_ body__TryStatement__Compiler(obj_ this_)
{
	return Field_(body);
}


obj_ body_co___TryStatement__Compiler(obj_ this_, obj_ value)
{
	Field_(body) = value;
	return value;
}


obj_ create_co_comment_co___TryStatement__Compiler(obj_ this_, obj_ body, obj_ comment)
{
	obj_ t0_;
	UsingMethod_(body_co_) UsingMethod_(comment_co_)

		{
		t0_ = Call_(body_co_, this_, body);
		t0_ = Call_(comment_co_, this_, comment);
		
		
		}
	return nil;
}


obj_ cur_interpreted_exception__TryStatement__Compiler(obj_ this_)
{
	return SharedField_(cur_interpreted_exception, TryStatement__Compiler);
}


obj_ cur_interpreted_exception_co___TryStatement__Compiler(obj_ this_, obj_ value)
{
	SetSharedField_(cur_interpreted_exception, TryStatement__Compiler, value);
	return value;
}


obj_ else_clause__TryStatement__Compiler(obj_ this_)
{
	return Field_(else_clause);
}


obj_ else_clause_co___TryStatement__Compiler(obj_ this_, obj_ value)
{
	Field_(else_clause) = value;
	return value;
}


obj_ emit_code_co___TryStatement__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "Try_")
	DefineString_(1, "TryElse_")
	DefineString_(2, "EndTry_")
	UsingMethod_(add_comment_co_) UsingMethod_(add_line_co_) UsingMethod_(body) UsingMethod_(else_clause) UsingMethod_(emit_code_co_)

		{
		t0_ = Call_(add_comment_co_, this_, Str_(0));
		t1_ = Call_(add_line_co_, builder, t0_);
		t0_ = Call_(body, this_);
		t1_ = Call_(emit_code_co_, t0_, builder);
		t0_ = Call_(else_clause, this_);
		if (t0_)
			{
			t0_ = Call_(add_line_co_, builder, Str_(1));
			t0_ = Call_(else_clause, this_);
			t1_ = Call_(emit_code_co_, t0_, builder);
			}
		t0_ = Call_(add_line_co_, builder, Str_(2));
		
		}
	return nil;
}


obj_ interpreted__TryStatement__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(body) UsingMethod_(cur_interpreted_exception_co_) UsingMethod_(else_clause) UsingMethod_(interpreted)

		{
		Try_
			{
			t0_ = Call_(body, this_);
			t1_ = Call_(interpreted, t0_);
			}
		TryElse_
			{
			t0_ = Call_(else_clause, this_);
			if (t0_)
				{
				t0_ = Call_(cur_interpreted_exception_co_, this_, exception);
				t0_ = Call_(else_clause, this_);
				t1_ = Call_(interpreted, t0_);
				
				}
			}
		EndTry_
		}
	return nil;
}


obj_ jolt_expression__TryStatement__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(body) UsingMethod_(else_clause) UsingMethod_(jolt_expression)
	UsingSym_(nil)
	extern obj_ with_co_with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2, obj_ value_3);
	UsingSym_(catch)
	UsingClass_(Expression)

		{
		obj_ else_expr;
		else_expr = nil;
		t0_ = Call_(else_clause, this_);
		if (t0_)
			{
			t0_ = Call_(else_clause, this_);
			t1_ = Call_(jolt_expression, t0_);
			else_expr = t1_;
			}
		else
			{
			else_expr = Sym_(nil);
			}
		t0_ = Call_(body, this_);
		t1_ = Call_(jolt_expression, t0_);
		t2_ = with_co_with_co_with_co___Expression(Proto_(Expression), Sym_(catch), t1_, else_expr);
		return t2_;
		
		}
	return nil;
}


obj_ new_co_comment_co___TryStatement__Compiler(obj_ this_, obj_ body, obj_ comment)
{
	UsingClass_(TryStatement__Compiler)
	obj_ obj = AllocObj_(TryStatement__Compiler);
	create_co_comment_co___TryStatement__Compiler(obj, body, comment);
	return obj;
}


obj_ prepare_to_emit__TryStatement__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(body) UsingMethod_(else_clause) UsingMethod_(prepare_to_emit)

		{
		t0_ = Call_(body, this_);
		t1_ = Call_(prepare_to_emit, t0_);
		t0_ = Call_(else_clause, this_);
		if (t0_)
			{
			t0_ = Call_(else_clause, this_);
			t1_ = Call_(prepare_to_emit, t0_);
			
			
			
			
			}
		}
	return nil;
}


obj_ translate_co___TryStatement__Compiler(obj_ this_, obj_ compiler)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(body) UsingMethod_(else_clause) UsingMethod_(translateExpression_co_)
	UsingSym_(nil)
	extern obj_ with_co_with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2, obj_ value_3);
	UsingSym_(catch)
	UsingClass_(Expression)

		{
		obj_ else_expr, expr;
		else_expr = nil;
		t0_ = Call_(else_clause, this_);
		if (t0_)
			{
			t0_ = Call_(else_clause, this_);
			else_expr = t0_;
			}
		else
			{
			else_expr = Sym_(nil);
			}
		t0_ = Call_(body, this_);
		t1_ = with_co_with_co_with_co___Expression(Proto_(Expression), Sym_(catch), t0_, else_expr);
		expr = t1_;
		t0_ = Call_(translateExpression_co_, compiler, expr);
		return t0_;
		
		
		}
	return nil;
}


