#include "Trylon_.h"

UsingSym_(PipeFDs)UsingClass_(Posix)
UsingClass_(Object__Standard)
UsingClass_(PipeFDs__Posix)
struct ClassInfo PipeFDs__Posix__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 81, 2, Proto_(PipeFDs__Posix), Proto_(Posix), Proto_(Object__Standard), nil, Sym_(PipeFDs), nil, nil };
struct object PipeFDs__Posix = 
	{ &PipeFDs__Posix__classInfo_, {nil, nil} };


#define read__fld_	(0)
#define write__fld_	(1)


obj_ create_read_co_write_co___PipeFDs__Posix(obj_ this_, obj_ read, obj_ write)
{
	obj_ t0_;
	UsingMethod_(read_co_) UsingMethod_(write_co_)

		{
		t0_ = Call_(read_co_, this_, read);
		t0_ = Call_(write_co_, this_, write);
		}
	return nil;
}


obj_ new_read_co_write_co___PipeFDs__Posix(obj_ this_, obj_ read, obj_ write)
{
	UsingClass_(PipeFDs__Posix)
	obj_ obj = AllocObj_(PipeFDs__Posix);
	create_read_co_write_co___PipeFDs__Posix(obj, read, write);
	return obj;
}


