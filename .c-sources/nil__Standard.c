#include "Trylon_.h"

UsingSym_(nil)UsingClass_(Standard)
UsingClass_(Object__Standard)
UsingClass_(nil__Standard)
struct ClassInfo nil__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 19, 0, Proto_(nil__Standard), Proto_(Standard), Proto_(Object__Standard), nil, Sym_(nil), nil, nil };
struct object nil__Standard = 
	{ &nil__Standard__classInfo_, {} };




obj_ message_not_understood__nil__Standard(obj_ this_)
{
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	obj_ t0_;
	DefineString_(0, "Attempt to use 'nil'.")
	UsingClass_(MessageException__Standard)

		{
		/*  This is the weak form of "message-not-understood" that is currently */
		/*  implemented. */
		t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(0));
		Throw_(t0_);
		}
	return nil;
}


obj_ message_not_understood_co_arguments_co___nil__Standard(obj_ this_, obj_ selector, obj_ arguments)
{
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "Attempt to call '")
	DefineString_(1, "' on 'nil'.")
	UsingMethod_(_pl_) UsingMethod_(string)
	UsingClass_(MessageException__Standard)

		{
		t0_ = Call_(string, selector);
		t1_ = Call_(_pl_, Str_(0), t0_);
		t2_ = Call_(_pl_, t1_, Str_(1));
		t3_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), t2_);
		Throw_(t3_);
		}
	return nil;
}


obj_ string__nil__Standard(obj_ this_)
{
	DefineString_(0, "nil")

		{
		return Str_(0);
		}
	return nil;
}


