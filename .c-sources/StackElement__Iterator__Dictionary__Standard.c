#include "Trylon_.h"

UsingSym_(StackElement)UsingClass_(Iterator__Dictionary__Standard)
UsingClass_(Object__Standard)
UsingClass_(StackElement__Iterator__Dictionary__Standard)
struct ClassInfo StackElement__Iterator__Dictionary__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 40, 2, Proto_(StackElement__Iterator__Dictionary__Standard), Proto_(Iterator__Dictionary__Standard), Proto_(Object__Standard), nil, Sym_(StackElement), nil, nil };
struct object StackElement__Iterator__Dictionary__Standard = 
	{ &StackElement__Iterator__Dictionary__Standard__classInfo_, {nil, nil} };


#define node__fld_	(0)
#define next__fld_	(1)


obj_ create_co___StackElement__Iterator__Dictionary__Standard(obj_ this_, obj_ node)
{
	obj_ t0_;
	UsingMethod_(node_co_)

		{
		t0_ = Call_(node_co_, this_, node);
		}
	return nil;
}


obj_ new_co___StackElement__Iterator__Dictionary__Standard(obj_ this_, obj_ node)
{
	UsingClass_(StackElement__Iterator__Dictionary__Standard)
	obj_ obj = AllocObj_(StackElement__Iterator__Dictionary__Standard);
	create_co___StackElement__Iterator__Dictionary__Standard(obj, node);
	return obj;
}


