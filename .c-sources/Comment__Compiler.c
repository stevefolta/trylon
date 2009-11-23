#include "Trylon_.h"

UsingSym_(Comment)UsingClass_(Compiler)
UsingClass_(Statement__Compiler)
UsingClass_(Comment__Compiler)
struct ClassInfo Comment__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 166, 2, Proto_(Comment__Compiler), Proto_(Compiler), Proto_(Statement__Compiler), nil, Sym_(Comment), nil, nil };
struct object Comment__Compiler = 
	{ &Comment__Compiler__classInfo_, {nil, nil} };


#define comment__fld_	(0)

#define text__fld_	(1)


obj_ compile_co___Comment__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	UsingMethod_(compile_comment_co_)

		{
		t0_ = Call_(compile_comment_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ create_co___Comment__Compiler(obj_ this_, obj_ text)
{
	obj_ t0_;
	UsingMethod_(text_co_)

		{
		t0_ = Call_(text_co_, this_, text);
		}
	return nil;
}


obj_ emit_code_co___Comment__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "/* ")
	DefineString_(1, " */")
	UsingMethod_(_pl_) UsingMethod_(add_line_co_) UsingMethod_(text)

		{
		t0_ = Call_(text, this_);
		t1_ = Call_(_pl_, Str_(0), t0_);
		t2_ = Call_(_pl_, t1_, Str_(1));
		t3_ = Call_(add_line_co_, builder, t2_);
		}
	return nil;
}


obj_ ignored_for_else__Comment__Compiler(obj_ this_)
{

		{
		return true_;
		}
	return nil;
}


obj_ interpreted__Comment__Compiler(obj_ this_)
{

		{
		return nil;
		}
	return nil;
}


obj_ new_co___Comment__Compiler(obj_ this_, obj_ text)
{
	UsingClass_(Comment__Compiler)
	obj_ obj = AllocObj_(Comment__Compiler);
	create_co___Comment__Compiler(obj, text);
	return obj;
}


