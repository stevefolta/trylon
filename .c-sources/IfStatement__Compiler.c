#include "Trylon_.h"

UsingSym_(IfStatement)UsingClass_(Compiler)
UsingClass_(Statement__Compiler)
UsingClass_(IfStatement__Compiler)
struct ClassInfo IfStatement__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 169, 6, Proto_(IfStatement__Compiler), Proto_(Compiler), Proto_(Statement__Compiler), nil, Sym_(IfStatement), nil, nil };
struct object IfStatement__Compiler = 
	{ &IfStatement__Compiler__classInfo_, {nil, nil, nil, nil, nil, nil} };


#define comment__fld_	(0)

#define condition__fld_	(1)
#define body__fld_	(2)
#define else_block__fld_	(3)
#define else_comment__fld_	(4)
#define pre_else_comments__fld_	(5)


obj_ attach_else_co_line_co___IfStatement__Compiler(obj_ this_, obj_ statement, obj_ line)
{
	obj_ t0_;
	UsingMethod_(else_block_co_)

		{
		t0_ = Call_(else_block_co_, this_, statement);
		}
	return nil;
}


obj_ compile_co___IfStatement__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	UsingMethod_(compile_if_co_)

		{
		t0_ = Call_(compile_if_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ create_co_body_co_comment_co___IfStatement__Compiler(obj_ this_, obj_ condition, obj_ body, obj_ comment)
{
	obj_ t0_;
	UsingMethod_(body_co_) UsingMethod_(comment_co_) UsingMethod_(condition_co_)

		{
		t0_ = Call_(condition_co_, this_, condition);
		t0_ = Call_(body_co_, this_, body);
		t0_ = Call_(comment_co_, this_, comment);
		}
	return nil;
}


obj_ create_co_body_co_else_block_co_comment_co_else_comment_co_pre_else_comments_co___IfStatement__Compiler(obj_ this_, obj_ condition, obj_ body, obj_ else_block, obj_ comment, obj_ else_comment, obj_ pre_else_comments)
{
	obj_ t0_;
	UsingMethod_(body_co_) UsingMethod_(comment_co_) UsingMethod_(condition_co_) UsingMethod_(else_block_co_) UsingMethod_(else_comment_co_) UsingMethod_(pre_else_comments_co_)

		{
		t0_ = Call_(condition_co_, this_, condition);
		t0_ = Call_(body_co_, this_, body);
		t0_ = Call_(else_block_co_, this_, else_block);
		t0_ = Call_(comment_co_, this_, comment);
		t0_ = Call_(else_comment_co_, this_, else_comment);
		t0_ = Call_(pre_else_comments_co_, this_, pre_else_comments);
		}
	return nil;
}


obj_ emit_code_co___IfStatement__Compiler(obj_ this_, obj_ builder)
{
	extern obj_ new_co___Block__Compiler(obj_ this_, obj_ parent);
	extern obj_ new_co___BlockStatement__Compiler(obj_ this_, obj_ block);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineString_(0, "if (")
	DefineString_(1, ")")
	DefineString_(2, "else")
	UsingMethod_(_pl_) UsingMethod_(access) UsingMethod_(add_comment_co_) UsingMethod_(add_comment_co_comment_co_) UsingMethod_(add_line_co_) UsingMethod_(append_co_) UsingMethod_(body) UsingMethod_(condition) UsingMethod_(current_item) UsingMethod_(else_block) UsingMethod_(else_comment) UsingMethod_(emit_code_co_) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(is_self_blocking) UsingMethod_(iterator) UsingMethod_(pre_else_comments) UsingMethod_(reset_temporaries)
	UsingClass_(BlockStatement__Compiler)
	UsingClass_(Block__Compiler)

		{
		obj_ cond_result;
		t0_ = Call_(condition, this_);
		t1_ = Call_(emit_code_co_, t0_, builder);
		cond_result = t1_;
		t0_ = Call_(access, cond_result);
		t1_ = Call_(_pl_, Str_(0), t0_);
		t2_ = Call_(_pl_, t1_, Str_(1));
		t3_ = Call_(add_comment_co_, this_, t2_);
		t4_ = Call_(add_line_co_, builder, t3_);
		t0_ = Call_(reset_temporaries, builder);
		t0_ = Call_(body, this_);
		t1_ = Call_(emit_code_co_, t0_, builder);
		t0_ = Call_(pre_else_comments, this_);
		if (t0_)
			{
			t0_ = Call_(pre_else_comments, this_);
			ForStart_(0, t0_, statement)
				{
				t0_ = Call_(emit_code_co_, statement, builder);
				}
			ForEnd_(0)
			}
		t0_ = Call_(else_block, this_);
		if (t0_)
			{
			obj_ adjusted_else_block;
			t0_ = Call_(else_comment, this_);
			t1_ = Call_(add_comment_co_comment_co_, this_, Str_(2), t0_);
			t2_ = Call_(add_line_co_, builder, t1_);
			t0_ = Call_(else_block, this_);
			adjusted_else_block = t0_;
			t0_ = Call_(else_block, this_);
			t1_ = Call_(is_self_blocking, t0_);
			t2_ = Not_(t1_);
			if (t2_)
				{
				t0_ = new_co___Block__Compiler(Proto_(Block__Compiler), nil);
				adjusted_else_block = t0_;
				/*  The context is irrelevant; we've already resolved the functions. */
				t0_ = Call_(else_block, this_);
				t1_ = Call_(append_co_, adjusted_else_block, t0_);
				t0_ = new_co___BlockStatement__Compiler(Proto_(BlockStatement__Compiler), adjusted_else_block);
				adjusted_else_block = t0_;
				}
			t0_ = Call_(emit_code_co_, adjusted_else_block, builder);
			}
		}
	return nil;
}


obj_ interpreted__IfStatement__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(body) UsingMethod_(condition) UsingMethod_(else_block) UsingMethod_(interpreted)

		{
		t0_ = Call_(condition, this_);
		t1_ = Call_(interpreted, t0_);
		if (t1_)
			{
			t0_ = Call_(body, this_);
			t1_ = Call_(interpreted, t0_);
			return t1_;
			}
		else
			{
			t2_ = Call_(else_block, this_);
			if (t2_)
				{
				t0_ = Call_(else_block, this_);
				t1_ = Call_(interpreted, t0_);
				return t1_;
				}
			}
		return nil;
		}
	return nil;
}


obj_ new_co_body_co_comment_co___IfStatement__Compiler(obj_ this_, obj_ condition, obj_ body, obj_ comment)
{
	UsingClass_(IfStatement__Compiler)
	obj_ obj = AllocObj_(IfStatement__Compiler);
	create_co_body_co_comment_co___IfStatement__Compiler(obj, condition, body, comment);
	return obj;
}


obj_ new_co_body_co_else_block_co_comment_co_else_comment_co_pre_else_comments_co___IfStatement__Compiler(obj_ this_, obj_ condition, obj_ body, obj_ else_block, obj_ comment, obj_ else_comment, obj_ pre_else_comments)
{
	UsingClass_(IfStatement__Compiler)
	obj_ obj = AllocObj_(IfStatement__Compiler);
	create_co_body_co_else_block_co_comment_co_else_comment_co_pre_else_comments_co___IfStatement__Compiler(obj, condition, body, else_block, comment, else_comment, pre_else_comments);
	return obj;
}


obj_ resolve__IfStatement__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(body) UsingMethod_(condition) UsingMethod_(else_block) UsingMethod_(resolve)

		{
		t0_ = Call_(condition, this_);
		t1_ = Call_(resolve, t0_);
		t0_ = Call_(body, this_);
		t1_ = Call_(resolve, t0_);
		t0_ = Call_(else_block, this_);
		if (t0_)
			{
			t0_ = Call_(else_block, this_);
			t1_ = Call_(resolve, t0_);
			}
		}
	return nil;
}


