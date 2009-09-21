#include "Trylon_.h"

UsingSym_(TryStatement)UsingClass_(Compiler)
UsingClass_(Statement__Compiler)
UsingClass_(TryStatement__Compiler)
struct ClassInfo TryStatement__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 173, 3, Proto_(TryStatement__Compiler), Proto_(Compiler), Proto_(Statement__Compiler), nil, Sym_(TryStatement), nil, nil };
struct object TryStatement__Compiler = 
	{ &TryStatement__Compiler__classInfo_, {nil, nil, nil} };


#define comment__fld_	(0)

#define body__fld_	(1)
#define else_clause__fld_	(2)

DeclareSharedField_(cur_interpreted_exception, TryStatement__Compiler, nil)

obj_ attach_else_co_line_co___TryStatement__Compiler(obj_ this_, obj_ statement, obj_ line)
{
	extern obj_ new_co_comment_co___CatchClause__Compiler(obj_ this_, obj_ parent, obj_ comment);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(block) UsingMethod_(body) UsingMethod_(body_co_) UsingMethod_(else_clause) UsingMethod_(else_clause_co_) UsingMethod_(parent) UsingMethod_(parent_co_)
	UsingClass_(CatchClause__Compiler)

		{
		t0_ = Call_(body, this_);
		t1_ = Call_(parent, t0_);
		t2_ = new_co_comment_co___CatchClause__Compiler(Proto_(CatchClause__Compiler), t1_, nil);
		t3_ = Call_(else_clause_co_, this_, t2_);
		t0_ = Call_(block, statement);
		t1_ = Call_(else_clause, this_);
		t2_ = Call_(parent_co_, t0_, t1_);
		 	/*  "statement" will be a BlockStatement. */
		t0_ = Call_(else_clause, this_);
		t1_ = Call_(body_co_, t0_, statement);
		}
	return nil;
}


obj_ compile_co___TryStatement__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	UsingMethod_(compile_try_co_)

		{
		t0_ = Call_(compile_try_co_, builder, this_);
		return t0_;
		}
	return nil;
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
		t0_ = Call_(add_line_co_, builder, Str_(1));
		t0_ = Call_(else_clause, this_);
		if (t0_)
			{
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


obj_ new_co_comment_co___TryStatement__Compiler(obj_ this_, obj_ body, obj_ comment)
{
	UsingClass_(TryStatement__Compiler)
	obj_ obj = AllocObj_(TryStatement__Compiler);
	create_co_comment_co___TryStatement__Compiler(obj, body, comment);
	return obj;
}


obj_ resolve__TryStatement__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(body) UsingMethod_(else_clause) UsingMethod_(resolve)

		{
		t0_ = Call_(body, this_);
		t1_ = Call_(resolve, t0_);
		t0_ = Call_(else_clause, this_);
		if (t0_)
			{
			t0_ = Call_(else_clause, this_);
			t1_ = Call_(resolve, t0_);
			}
		}
	return nil;
}


