#include "Trylon_.h"

UsingSym_(LoopStatement)UsingClass_(Compiler)
UsingClass_(Statement__Compiler)
UsingClass_(LoopStatement__Compiler)
struct ClassInfo LoopStatement__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 166, 3, Proto_(LoopStatement__Compiler), Proto_(Compiler), Proto_(Statement__Compiler), nil, Sym_(LoopStatement), nil, nil };
struct object LoopStatement__Compiler = 
	{ &LoopStatement__Compiler__classInfo_, {nil, nil, nil} };


#define comment__fld_	(0)

#define body__fld_	(1)
#define index__fld_	(2)


obj_ compile_co___LoopStatement__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	UsingMethod_(compile_loop_co_)

		{
		t0_ = Call_(compile_loop_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ create_co_comment_co___LoopStatement__Compiler(obj_ this_, obj_ body, obj_ comment)
{
	obj_ t0_;
	UsingMethod_(body_co_) UsingMethod_(comment_co_)

		{
		t0_ = Call_(body_co_, this_, body);
		t0_ = Call_(comment_co_, this_, comment);
		}
	return nil;
}


obj_ emit_code_co___LoopStatement__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineString_(0, "while (1) {")
	DefineString_(1, "\tContinuePoint_(")
	DefineString_(2, ")")
	DefineString_(3, "}")
	UsingMethod_(_pl_) UsingMethod_(add_comment_co_) UsingMethod_(add_line_co_) UsingMethod_(body) UsingMethod_(emit_code_co_) UsingMethod_(end_loop) UsingMethod_(index) UsingMethod_(start_loop_co_) UsingMethod_(string)

		{
		t0_ = Call_(start_loop_co_, builder, this_);
		t0_ = Call_(add_comment_co_, this_, Str_(0));
		t1_ = Call_(add_line_co_, builder, t0_);
		t0_ = Call_(index, this_);
		t1_ = Call_(string, t0_);
		t2_ = Call_(_pl_, Str_(1), t1_);
		t3_ = Call_(_pl_, t2_, Str_(2));
		t4_ = Call_(add_line_co_, builder, t3_);
		t0_ = Call_(body, this_);
		t1_ = Call_(emit_code_co_, t0_, builder);
		t0_ = Call_(add_line_co_, builder, Str_(3));
		t0_ = Call_(end_loop, builder);
		}
	return nil;
}


obj_ interpreted__LoopStatement__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_nt__eq_) UsingMethod_(body) UsingMethod_(interpreted)
	UsingClass_(Break__Statements__Interpreter)
	UsingClass_(Continue__Statements__Interpreter)

		{
		Try_
			{
			while (1) {
				ContinuePoint_(0)
				{
				Try_
					{
					t0_ = Call_(body, this_);
					t1_ = Call_(interpreted, t0_);
					}
				TryElse_
					{
					t0_ = Call_(_nt__eq_, exception, Proto_(Continue__Statements__Interpreter));
					if (t0_)
						{
						Throw_(exception);
						}
					}
				EndTry_
				}
			}
			}
		TryElse_
			{
			t0_ = Call_(_nt__eq_, exception, Proto_(Break__Statements__Interpreter));
			if (t0_)
				{
				Throw_(exception);
				}
			}
		EndTry_
		}
	return nil;
}


obj_ new_co_comment_co___LoopStatement__Compiler(obj_ this_, obj_ body, obj_ comment)
{
	UsingClass_(LoopStatement__Compiler)
	obj_ obj = AllocObj_(LoopStatement__Compiler);
	create_co_comment_co___LoopStatement__Compiler(obj, body, comment);
	return obj;
}


obj_ resolve__LoopStatement__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(body) UsingMethod_(resolve)

		{
		t0_ = Call_(body, this_);
		t1_ = Call_(resolve, t0_);
		}
	return nil;
}


