#include "Trylon_.h"

UsingSym_(LineEnd)UsingClass_(StreamLinesReader__Standard)
UsingClass_(Object__Standard)
UsingClass_(LineEnd__StreamLinesReader__Standard)
struct ClassInfo LineEnd__StreamLinesReader__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 81, 2, Proto_(LineEnd__StreamLinesReader__Standard), Proto_(StreamLinesReader__Standard), Proto_(Object__Standard), nil, Sym_(LineEnd), nil, nil };
struct object LineEnd__StreamLinesReader__Standard = 
	{ &LineEnd__StreamLinesReader__Standard__classInfo_, {nil, nil} };


#define index__fld_	(0)
#define was_return__fld_	(1)


obj_ create_co_was_return_co___LineEnd__StreamLinesReader__Standard(obj_ this_, obj_ index, obj_ was_return)
{
	obj_ t0_;
	UsingMethod_(index_co_) UsingMethod_(was_return_co_)

		{
		t0_ = Call_(index_co_, this_, index);
		t0_ = Call_(was_return_co_, this_, was_return);
		}
	return nil;
}


obj_ new_co_was_return_co___LineEnd__StreamLinesReader__Standard(obj_ this_, obj_ index, obj_ was_return)
{
	UsingClass_(LineEnd__StreamLinesReader__Standard)
	obj_ obj = AllocObj_(LineEnd__StreamLinesReader__Standard);
	create_co_was_return_co___LineEnd__StreamLinesReader__Standard(obj, index, was_return);
	return obj;
}


