#include "Trylon_.h"

UsingSym_(ThrowStatement)UsingClass_(Compiler)
UsingClass_(Statement__Compiler)
UsingClass_(ThrowStatement__Compiler)
struct ClassInfo ThrowStatement__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 154, 2, Proto_(ThrowStatement__Compiler), Proto_(Compiler), Proto_(Statement__Compiler), nil, Sym_(ThrowStatement), nil, nil };
struct object ThrowStatement__Compiler = 
	{ &ThrowStatement__Compiler__classInfo_, {nil, nil} };


#define comment__fld_	(0)

#define value__fld_	(1)


obj_ compile_co___ThrowStatement__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	UsingMethod_(compile_throw_co_)

		{
		t0_ = Call_(compile_throw_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ create_co_comment_co___ThrowStatement__Compiler(obj_ this_, obj_ value, obj_ comment)
{
	obj_ t0_;
	UsingMethod_(comment_co_) UsingMethod_(value_co_)

		{
		t0_ = Call_(value_co_, this_, value);
		t0_ = Call_(comment_co_, this_, comment);
		}
	return nil;
}


obj_ emit_code_co___ThrowStatement__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineString_(0, "Throw_(")
	DefineString_(1, ");")
	UsingMethod_(_pl_) UsingMethod_(access) UsingMethod_(add_comment_co_) UsingMethod_(add_line_co_) UsingMethod_(emit_code_co_) UsingMethod_(value)

		{
		obj_ result;
		t0_ = Call_(value, this_);
		t1_ = Call_(emit_code_co_, t0_, builder);
		result = t1_;
		t0_ = Call_(access, result);
		t1_ = Call_(_pl_, Str_(0), t0_);
		t2_ = Call_(_pl_, t1_, Str_(1));
		t3_ = Call_(add_comment_co_, this_, t2_);
		t4_ = Call_(add_line_co_, builder, t3_);
		}
	return nil;
}


obj_ interpreted__ThrowStatement__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(interpreted) UsingMethod_(value)

		{
		t0_ = Call_(value, this_);
		t1_ = Call_(interpreted, t0_);
		Throw_(t1_);
		}
	return nil;
}


obj_ new_co_comment_co___ThrowStatement__Compiler(obj_ this_, obj_ value, obj_ comment)
{
	UsingClass_(ThrowStatement__Compiler)
	obj_ obj = AllocObj_(ThrowStatement__Compiler);
	create_co_comment_co___ThrowStatement__Compiler(obj, value, comment);
	return obj;
}


obj_ prepare_to_emit__ThrowStatement__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(prepare_to_emit) UsingMethod_(value)

		{
		t0_ = Call_(value, this_);
		t1_ = Call_(prepare_to_emit, t0_);
		}
	return nil;
}


