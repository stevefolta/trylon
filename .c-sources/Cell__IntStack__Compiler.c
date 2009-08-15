#include "Trylon_.h"

UsingSym_(Cell)UsingClass_(IntStack__Compiler)
UsingClass_(Object__Standard)
UsingClass_(Cell__IntStack__Compiler)
struct ClassInfo Cell__IntStack__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 81, 2, Proto_(Cell__IntStack__Compiler), Proto_(IntStack__Compiler), Proto_(Object__Standard), nil, Sym_(Cell), nil, nil };
struct object Cell__IntStack__Compiler = 
	{ &Cell__IntStack__Compiler__classInfo_, {nil, nil} };


#define value__fld_	(0)
#define next__fld_	(1)


obj_ create_co_next_co___Cell__IntStack__Compiler(obj_ this_, obj_ value, obj_ next)
{
	obj_ t0_;
	UsingMethod_(next_co_) UsingMethod_(value_co_)

		{
		t0_ = Call_(value_co_, this_, value);
		t0_ = Call_(next_co_, this_, next);
		}
	return nil;
}


obj_ new_co_next_co___Cell__IntStack__Compiler(obj_ this_, obj_ value, obj_ next)
{
	UsingClass_(Cell__IntStack__Compiler)
	obj_ obj = AllocObj_(Cell__IntStack__Compiler);
	create_co_next_co___Cell__IntStack__Compiler(obj, value, next);
	return obj;
}


