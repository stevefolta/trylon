#include "Trylon_.h"

UsingSym_(PrimitiveObject)UsingClass_(Interpreter)
UsingClass_(TrylonExpression__Compiler)
UsingClass_(PrimitiveObject__Interpreter)
struct ClassInfo PrimitiveObject__Interpreter__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 156, 1, Proto_(PrimitiveObject__Interpreter), Proto_(Interpreter), Proto_(TrylonExpression__Compiler), nil, Sym_(PrimitiveObject), nil, nil };
struct object PrimitiveObject__Interpreter = 
	{ &PrimitiveObject__Interpreter__classInfo_, {nil} };



#define object__fld_	(0)


obj_ create_co___PrimitiveObject__Interpreter(obj_ this_, obj_ object)
{
	obj_ t0_;
	UsingMethod_(object_co_)

		{
		t0_ = Call_(object_co_, this_, object);
		}
	return nil;
}


obj_ interpreted__PrimitiveObject__Interpreter(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(object)

		{
		t0_ = Call_(object, this_);
		return t0_;
		}
	return nil;
}


obj_ new_co___PrimitiveObject__Interpreter(obj_ this_, obj_ object)
{
	UsingClass_(PrimitiveObject__Interpreter)
	obj_ obj = AllocObj_(PrimitiveObject__Interpreter);
	create_co___PrimitiveObject__Interpreter(obj, object);
	return obj;
}


