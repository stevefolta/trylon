#include "Trylon_.h"

UsingSym_(ParseException)UsingClass_(Compiler)
UsingClass_(Exception__Standard)
UsingClass_(ParseException__Compiler)
struct ClassInfo ParseException__Compiler__classInfo_ = 
	{ 8, 12, Proto_(ParseException__Compiler), Proto_(Compiler), Proto_(Exception__Standard), nil, Sym_(ParseException) ,nil };
struct object ParseException__Compiler = 
	{ &ParseException__Compiler__classInfo_, {nil, nil, nil} };



#define error_message__fld_	(0)
#define token__fld_	(1)
#define line__fld_	(2)


obj_ create_co_in_co___ParseException__Compiler(obj_ this_, obj_ error_message, obj_ line)
{
	obj_ t0_;
	UsingMethod_(error_message_co_) UsingMethod_(line_co_)

		{
		t0_ = Call_(error_message_co_, this_, error_message);
		t0_ = Call_(line_co_, this_, line);
		
		
		}
	return nil;
}


obj_ create_co_token_co___ParseException__Compiler(obj_ this_, obj_ error_message, obj_ token)
{
	obj_ t0_;
	UsingMethod_(error_message_co_) UsingMethod_(token_co_)

		{
		t0_ = Call_(error_message_co_, this_, error_message);
		t0_ = Call_(token_co_, this_, token);
		
		}
	return nil;
}


obj_ error_message__ParseException__Compiler(obj_ this_)
{
	return Field_(error_message);
}


obj_ error_message_co___ParseException__Compiler(obj_ this_, obj_ value)
{
	Field_(error_message) = value;
	return value;
}


obj_ line__ParseException__Compiler(obj_ this_)
{
	return Field_(line);
}


obj_ line_co___ParseException__Compiler(obj_ this_, obj_ value)
{
	Field_(line) = value;
	return value;
}


obj_ message__ParseException__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	obj_ t7_;
	obj_ t8_;
	obj_ t9_;
	obj_ t10_;
	obj_ t11_;
	obj_ t12_;
	DefineString_(0, " (\"")
	DefineString_(1, "\")")
	DefineString_(2, " (\"")
	DefineString_(3, "\")")
	UsingMethod_(_pl_) UsingMethod_(error_message) UsingMethod_(line) UsingMethod_(string) UsingMethod_(text) UsingMethod_(token) UsingMethod_(trimmed)

		{
		t0_ = Call_(line, this_);
		if (t0_)
			{
			t0_ = Call_(error_message, this_);
			t1_ = Call_(_pl_, t0_, Str_(0));
			t2_ = Call_(line, this_);
			t3_ = Call_(text, t2_);
			t4_ = Call_(trimmed, t3_);
			t5_ = Call_(_pl_, t1_, t4_);
			t6_ = Call_(_pl_, t5_, Str_(1));
			return t6_;
			}
		t7_ = Call_(error_message, this_);
		t8_ = Call_(_pl_, t7_, Str_(2));
		t9_ = Call_(token, this_);
		t10_ = Call_(string, t9_);
		t11_ = Call_(_pl_, t8_, t10_);
		t12_ = Call_(_pl_, t11_, Str_(3));
		return t12_;
		
		
		
		}
	return nil;
}


obj_ new_co_in_co___ParseException__Compiler(obj_ this_, obj_ error_message, obj_ line)
{
	UsingClass_(ParseException__Compiler)
	obj_ obj = AllocObj_(ParseException__Compiler);
	create_co_in_co___ParseException__Compiler(obj, error_message, line);
	return obj;
}


obj_ new_co_token_co___ParseException__Compiler(obj_ this_, obj_ error_message, obj_ token)
{
	UsingClass_(ParseException__Compiler)
	obj_ obj = AllocObj_(ParseException__Compiler);
	create_co_token_co___ParseException__Compiler(obj, error_message, token);
	return obj;
}


obj_ token__ParseException__Compiler(obj_ this_)
{
	return Field_(token);
}


obj_ token_co___ParseException__Compiler(obj_ this_, obj_ value)
{
	Field_(token) = value;
	return value;
}


