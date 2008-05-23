#include "Trylon_.h"

UsingSym_(Comment)UsingClass_(Compiler)
UsingClass_(Statement__Compiler)
UsingClass_(Comment__Compiler)
struct ClassInfo Comment__Compiler__classInfo_ = 
	{ 128, 8, Proto_(Comment__Compiler), Proto_(Compiler), Proto_(Statement__Compiler), nil, Sym_(Comment) ,nil };
struct object Comment__Compiler = 
	{ &Comment__Compiler__classInfo_, {nil, nil} };


#define comment__fld_	(0)

#define text__fld_	(1)


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


obj_ jolt_expression__Comment__Compiler(obj_ this_)
{
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(comment)
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(text)
	UsingClass_(Expression)

		{
		t0_ = Call_(text, this_);
		t1_ = with_co_with_co___Expression(Proto_(Expression), Sym_(comment), t0_);
		return t1_;
		
		
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


obj_ text__Comment__Compiler(obj_ this_)
{
	return Field_(text);
}


obj_ text_co___Comment__Compiler(obj_ this_, obj_ value)
{
	Field_(text) = value;
	return value;
}


