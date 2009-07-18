#include "Trylon_.h"

UsingSym_(Statement)UsingClass_(Compiler)
UsingClass_(Object__Standard)
UsingClass_(Statement__Compiler)
struct ClassInfo Statement__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 156, 1, Proto_(Statement__Compiler), Proto_(Compiler), Proto_(Object__Standard), nil, Sym_(Statement), nil, nil };
struct object Statement__Compiler = 
	{ &Statement__Compiler__classInfo_, {nil} };


#define comment__fld_	(0)


obj_ add_comment_co___Statement__Compiler(obj_ this_, obj_ line)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, " \t/* ")
	DefineString_(1, " */")
	UsingMethod_(_pl_) UsingMethod_(comment)

		{
		t0_ = Call_(comment, this_);
		if (t0_)
			{
			t0_ = Call_(comment, this_);
			t1_ = Call_(_pl_, Str_(0), t0_);
			t2_ = Call_(_pl_, t1_, Str_(1));
			t3_ = Call_(_pl_, line, t2_);
			line = t3_;
			}
		return line;
		}
	return nil;
}


obj_ add_comment_co_comment_co___Statement__Compiler(obj_ this_, obj_ line, obj_ comment)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, " \t/* ")
	DefineString_(1, " */")
	UsingMethod_(_pl_)

		{
		if (comment)
			{
			t0_ = Call_(_pl_, Str_(0), comment);
			t1_ = Call_(_pl_, t0_, Str_(1));
			t2_ = Call_(_pl_, line, t1_);
			line = t2_;
			}
		return line;
		}
	return nil;
}


obj_ attach_else_co_line_co___Statement__Compiler(obj_ this_, obj_ statement, obj_ line)
{
	extern obj_ new_co_in_co___ParseException__Compiler(obj_ this_, obj_ error_message, obj_ line);
	obj_ t0_;
	DefineString_(0, "Illegal \"else\".")
	UsingClass_(ParseException__Compiler)

		{
		t0_ = new_co_in_co___ParseException__Compiler(Proto_(ParseException__Compiler), Str_(0), line);
		Throw_(t0_);
		}
	return nil;
}


obj_ compile_co___Statement__Compiler(obj_ this_, obj_ builder)
{
	extern obj_ virtual__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		}
	return nil;
}


obj_ emit_code_co___Statement__Compiler(obj_ this_, obj_ builder)
{
	extern obj_ virtual__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		}
	return nil;
}


obj_ ignored_for_else__Statement__Compiler(obj_ this_)
{

		{
		return nil;
		}
	return nil;
}


obj_ interpreted__Statement__Compiler(obj_ this_)
{
	extern obj_ virtual__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		}
	return nil;
}


obj_ is_self_blocking__Statement__Compiler(obj_ this_)
{

		{
		return nil;
		}
	return nil;
}


obj_ prepare_to_emit__Statement__Compiler(obj_ this_)
{

		{
		/*  Default: nothing to do. */
		}
	return nil;
}


obj_ uninterpretable_co___Statement__Compiler(obj_ this_, obj_ name)
{
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "Can't interpret a \"")
	DefineString_(1, "\" statement.")
	UsingMethod_(_pl_)
	UsingClass_(MessageException__Standard)

		{
		t0_ = Call_(_pl_, Str_(0), name);
		t1_ = Call_(_pl_, t0_, Str_(1));
		t2_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), t1_);
		Throw_(t2_);
		}
	return nil;
}


