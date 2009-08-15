#include "Trylon_.h"

UsingSym_(ParseException)UsingClass_(Compiler)
UsingClass_(Exception__Standard)
UsingClass_(ParseException__Compiler)
struct ClassInfo ParseException__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 53, 3, Proto_(ParseException__Compiler), Proto_(Compiler), Proto_(Exception__Standard), nil, Sym_(ParseException), nil, nil };
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
		t7_ = Call_(token, this_);
		if (t7_)
			{
			t0_ = Call_(error_message, this_);
			t1_ = Call_(_pl_, t0_, Str_(2));
			t2_ = Call_(token, this_);
			t3_ = Call_(string, t2_);
			t4_ = Call_(_pl_, t1_, t3_);
			t5_ = Call_(_pl_, t4_, Str_(3));
			return t5_;
			}
		t6_ = Call_(error_message, this_);
		return t6_;
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


