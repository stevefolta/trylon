#include "Trylon_.h"

UsingSym_(NoOpenModeException)UsingClass_(Posix)
UsingClass_(Object__Standard)
UsingClass_(NoOpenModeException__Posix)
struct ClassInfo NoOpenModeException__Posix__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 83, 1, Proto_(NoOpenModeException__Posix), Proto_(Posix), Proto_(Object__Standard), nil, Sym_(NoOpenModeException), nil, nil };
struct object NoOpenModeException__Posix = 
	{ &NoOpenModeException__Posix__classInfo_, {nil} };


#define path__fld_	(0)


obj_ create_co___NoOpenModeException__Posix(obj_ this_, obj_ path)
{
	obj_ t0_;
	UsingMethod_(path_co_)

		{
		t0_ = Call_(path_co_, this_, path);
		}
	return nil;
}


obj_ message__NoOpenModeException__Posix(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "Attempt to create \"")
	DefineString_(1, "\" without a mode.")
	UsingMethod_(_pl_) UsingMethod_(path)

		{
		t0_ = Call_(path, this_);
		t1_ = Call_(_pl_, Str_(0), t0_);
		t2_ = Call_(_pl_, t1_, Str_(1));
		return t2_;
		}
	return nil;
}


obj_ new_co___NoOpenModeException__Posix(obj_ this_, obj_ path)
{
	UsingClass_(NoOpenModeException__Posix)
	obj_ obj = AllocObj_(NoOpenModeException__Posix);
	create_co___NoOpenModeException__Posix(obj, path);
	return obj;
}


