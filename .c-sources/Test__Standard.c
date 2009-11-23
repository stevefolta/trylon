#include "Trylon_.h"

UsingSym_(Test)UsingClass_(Standard)
UsingClass_(Object__Standard)
UsingClass_(Test__Standard)
struct ClassInfo Test__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 67, 0, Proto_(Test__Standard), Proto_(Standard), Proto_(Object__Standard), nil, Sym_(Test), nil, nil };
struct object Test__Standard = 
	{ &Test__Standard__classInfo_, {} };




obj_ name_co_check_co___Test__Standard(obj_ this_, obj_ name, obj_ ok)
{
	extern obj_ send_co___Standard(obj_ this_, obj_ message);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ error_co___Standard(obj_ this_, obj_ message);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	obj_ t0_;
	obj_ t1_;
	UsingInt_(2)
	UsingInt_(2)
	DefineString_(0, ": succeeded.")
	DefineString_(1, ": FAILED.")
	UsingClass_(Standard)

		{
		if (ok)
			{
			t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(2));
			t0_->fields[1] = name;
			t0_->fields[2] = Str_(0);
			t1_ = send_co___Standard(Proto_(Standard), t0_);
			}
		else
			{
			t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(2));
			t0_->fields[1] = name;
			t0_->fields[2] = Str_(1);
			t1_ = error_co___Standard(Proto_(Standard), t0_);
			}
		}
	return nil;
}


obj_ name_co_check_co_against_co___Test__Standard(obj_ this_, obj_ name, obj_ value, obj_ expected_value)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_eq__eq_) UsingMethod_(name_co_check_co_)

		{
		t0_ = Call_(_eq__eq_, value, expected_value);
		t1_ = Call_(name_co_check_co_, this_, name, t0_);
		}
	return nil;
}


