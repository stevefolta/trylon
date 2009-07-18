#include "Trylon_.h"

UsingSym_(DispatchRowEntry)UsingClass_(CCompiler)
UsingClass_(Object__Standard)
UsingClass_(DispatchRowEntry__CCompiler)
struct ClassInfo DispatchRowEntry__CCompiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 201, 2, Proto_(DispatchRowEntry__CCompiler), Proto_(CCompiler), Proto_(Object__Standard), nil, Sym_(DispatchRowEntry), nil, nil };
struct object DispatchRowEntry__CCompiler = 
	{ &DispatchRowEntry__CCompiler__classInfo_, {nil, nil} };


#define class_num__fld_	(0)
#define function__fld_	(1)


obj_ create_co_function_co___DispatchRowEntry__CCompiler(obj_ this_, obj_ class_num, obj_ function)
{
	obj_ t0_;
	UsingMethod_(class_num_co_) UsingMethod_(function_co_)

		{
		t0_ = Call_(class_num_co_, this_, class_num);
		t0_ = Call_(function_co_, this_, function);
		}
	return nil;
}


obj_ new_co_function_co___DispatchRowEntry__CCompiler(obj_ this_, obj_ class_num, obj_ function)
{
	UsingClass_(DispatchRowEntry__CCompiler)
	obj_ obj = AllocObj_(DispatchRowEntry__CCompiler);
	create_co_function_co___DispatchRowEntry__CCompiler(obj, class_num, function);
	return obj;
}


