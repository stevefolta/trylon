#include "Trylon_.h"

UsingSym_(EmptyStatement)UsingClass_(Compiler)
UsingClass_(Statement__Compiler)
UsingClass_(EmptyStatement__Compiler)
struct ClassInfo EmptyStatement__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 148, 1, Proto_(EmptyStatement__Compiler), Proto_(Compiler), Proto_(Statement__Compiler), nil, Sym_(EmptyStatement), nil, nil };
struct object EmptyStatement__Compiler = 
	{ &EmptyStatement__Compiler__classInfo_, {nil} };


#define comment__fld_	(0)



obj_ create__EmptyStatement__Compiler(obj_ this_)
{
	return nil;
}


obj_ emit_code_co___EmptyStatement__Compiler(obj_ this_, obj_ builder)
{

		{
		/*  Do nothing. */
		}
	return nil;
}


obj_ interpreted__EmptyStatement__Compiler(obj_ this_)
{

		{
		return nil;
		}
	return nil;
}


obj_ jolt_expression__EmptyStatement__Compiler(obj_ this_)
{
	UsingSym_(nil)

		{
		return Sym_(nil);
		}
	return nil;
}


obj_ new__EmptyStatement__Compiler(obj_ this_)
{
	UsingClass_(EmptyStatement__Compiler)
	obj_ obj = AllocObj_(EmptyStatement__Compiler);
	create__EmptyStatement__Compiler(obj);
	return obj;
}


