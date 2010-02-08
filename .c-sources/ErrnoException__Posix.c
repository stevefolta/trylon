#include "Trylon_.h"

UsingSym_(ErrnoException)UsingClass_(Posix)
UsingClass_(Object__Standard)
UsingClass_(ErrnoException__Posix)
struct ClassInfo ErrnoException__Posix__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 82, 1, Proto_(ErrnoException__Posix), Proto_(Posix), Proto_(Object__Standard), nil, Sym_(ErrnoException), nil, nil };
struct object ErrnoException__Posix = 
	{ &ErrnoException__Posix__classInfo_, {nil} };


#define errno__fld_	(0)


obj_ create__ErrnoException__Posix(obj_ this_)
{
	extern obj_ errno__Posix(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(errno_co_)
	UsingClass_(Posix)

		{
		t0_ = errno__Posix(Proto_(Posix));
		t1_ = Call_(errno_co_, this_, t0_);
		}
	return nil;
}


obj_ message__ErrnoException__Posix(obj_ this_)
{
	extern obj_ strerror_co___Posix(obj_ this_, obj_ errnum);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(errno)
	UsingClass_(Posix)

		{
		t0_ = Call_(errno, this_);
		t1_ = strerror_co___Posix(Proto_(Posix), t0_);
		return t1_;
		}
	return nil;
}


obj_ new__ErrnoException__Posix(obj_ this_)
{
	UsingClass_(ErrnoException__Posix)
	obj_ obj = AllocObj_(ErrnoException__Posix);
	create__ErrnoException__Posix(obj);
	return obj;
}


