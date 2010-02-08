#include "Trylon_.h"

UsingSym_(WaitResult)UsingClass_(Posix)
UsingClass_(Object__Standard)
UsingClass_(WaitResult__Posix)
struct ClassInfo WaitResult__Posix__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 80, 2, Proto_(WaitResult__Posix), Proto_(Posix), Proto_(Object__Standard), nil, Sym_(WaitResult), nil, nil };
struct object WaitResult__Posix = 
	{ &WaitResult__Posix__classInfo_, {nil, nil} };


#define child__fld_	(0)
#define status__fld_	(1)


#include <sys/types.h>
#include <sys/wait.h>
obj_ create_co_status_co___WaitResult__Posix(obj_ this_, obj_ child, obj_ status)
{
	obj_ t0_;
	UsingMethod_(child_co_) UsingMethod_(status_co_)

		{
		t0_ = Call_(child_co_, this_, child);
		t0_ = Call_(status_co_, this_, status);
		}
	return nil;
}


obj_ exit_status__WaitResult__Posix(obj_ this_)
{
int status = IntValue_(Field_(status));
return BuildInt_(WEXITSTATUS(status));
return nil;
}


obj_ exited__WaitResult__Posix(obj_ this_)
{
int status = IntValue_(Field_(status));
return Bool_(WIFEXITED(status));
return nil;
}


obj_ is_valid__WaitResult__Posix(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(1)
	UsingMethod_(_nt__eq_) UsingMethod_(child) UsingMethod_(unary_minus)

		{
		t0_ = Call_(child, this_);
		t1_ = Call_(unary_minus, SmallInt_(1));
		t2_ = Call_(_nt__eq_, t0_, t1_);
		return t2_;
		}
	return nil;
}


obj_ new_co_status_co___WaitResult__Posix(obj_ this_, obj_ child, obj_ status)
{
	UsingClass_(WaitResult__Posix)
	obj_ obj = AllocObj_(WaitResult__Posix);
	create_co_status_co___WaitResult__Posix(obj, child, status);
	return obj;
}


obj_ signaled__WaitResult__Posix(obj_ this_)
{
int status = IntValue_(Field_(status));
return Bool_(WIFSIGNALED(status));
return nil;
}


obj_ stop_signal__WaitResult__Posix(obj_ this_)
{
int status = IntValue_(Field_(status));
return BuildInt_(WSTOPSIG(status));
return nil;
}


obj_ stopped__WaitResult__Posix(obj_ this_)
{
int status = IntValue_(Field_(status));
return Bool_(WIFSTOPPED(status));
return nil;
}


obj_ termination_signal__WaitResult__Posix(obj_ this_)
{
int status = IntValue_(Field_(status));
return BuildInt_(WTERMSIG(status));
return nil;
}


