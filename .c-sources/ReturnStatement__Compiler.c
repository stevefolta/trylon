#include "Trylon_.h"

UsingSym_(ReturnStatement)UsingClass_(Compiler)
UsingClass_(Statement__Compiler)
UsingClass_(ReturnStatement__Compiler)
struct ClassInfo ReturnStatement__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 168, 2, Proto_(ReturnStatement__Compiler), Proto_(Compiler), Proto_(Statement__Compiler), nil, Sym_(ReturnStatement), nil, nil };
struct object ReturnStatement__Compiler = 
	{ &ReturnStatement__Compiler__classInfo_, {nil, nil} };


#define comment__fld_	(0)

#define value__fld_	(1)


obj_ compile_co___ReturnStatement__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	UsingMethod_(compile_return_co_)

		{
		t0_ = Call_(compile_return_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ create_co___ReturnStatement__Compiler(obj_ this_, obj_ value)
{
	obj_ t0_;
	UsingMethod_(value_co_)

		{
		t0_ = Call_(value_co_, this_, value);
		}
	return nil;
}


obj_ create_co_comment_co___ReturnStatement__Compiler(obj_ this_, obj_ value, obj_ comment)
{
	obj_ t0_;
	UsingMethod_(comment_co_) UsingMethod_(value_co_)

		{
		t0_ = Call_(value_co_, this_, value);
		t0_ = Call_(comment_co_, this_, comment);
		}
	return nil;
}


obj_ emit_code_co___ReturnStatement__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineString_(0, "return ")
	DefineString_(1, ";")
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


obj_ interpreted__ReturnStatement__Compiler(obj_ this_)
{
	obj_ t0_;
	DefineString_(0, "return")
	UsingMethod_(uninterpretable_co_)

		{
		t0_ = Call_(uninterpretable_co_, this_, Str_(0));
		}
	return nil;
}


obj_ new_co___ReturnStatement__Compiler(obj_ this_, obj_ value)
{
	UsingClass_(ReturnStatement__Compiler)
	obj_ obj = AllocObj_(ReturnStatement__Compiler);
	create_co___ReturnStatement__Compiler(obj, value);
	return obj;
}


obj_ new_co_comment_co___ReturnStatement__Compiler(obj_ this_, obj_ value, obj_ comment)
{
	UsingClass_(ReturnStatement__Compiler)
	obj_ obj = AllocObj_(ReturnStatement__Compiler);
	create_co_comment_co___ReturnStatement__Compiler(obj, value, comment);
	return obj;
}


obj_ resolve__ReturnStatement__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(resolve) UsingMethod_(value)

		{
		t0_ = Call_(value, this_);
		t1_ = Call_(resolve, t0_);
		}
	return nil;
}


