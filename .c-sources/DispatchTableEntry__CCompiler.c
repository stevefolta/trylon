#include "Trylon_.h"

UsingSym_(DispatchTableEntry)UsingClass_(CCompiler)
UsingClass_(Object__Standard)
UsingClass_(DispatchTableEntry__CCompiler)
struct ClassInfo DispatchTableEntry__CCompiler__classInfo_ = 
	{ 178, 2, Proto_(DispatchTableEntry__CCompiler), Proto_(CCompiler), Proto_(Object__Standard), nil, Sym_(DispatchTableEntry) ,nil };
struct object DispatchTableEntry__CCompiler = 
	{ &DispatchTableEntry__CCompiler__classInfo_, {nil, nil} };


#define function__fld_	(0)
#define selector__fld_	(1)


obj_ create_co_selector_co___DispatchTableEntry__CCompiler(obj_ this_, obj_ function, obj_ selector)
{
	obj_ t0_;
	UsingMethod_(function_co_) UsingMethod_(selector_co_)

		{
		t0_ = Call_(function_co_, this_, function);
		t0_ = Call_(selector_co_, this_, selector);
		
		
		
		}
	return nil;
}


obj_ function__DispatchTableEntry__CCompiler(obj_ this_)
{
	return Field_(function);
}


obj_ function_co___DispatchTableEntry__CCompiler(obj_ this_, obj_ value)
{
	Field_(function) = value;
	return value;
}


obj_ new_co_selector_co___DispatchTableEntry__CCompiler(obj_ this_, obj_ function, obj_ selector)
{
	UsingClass_(DispatchTableEntry__CCompiler)
	obj_ obj = AllocObj_(DispatchTableEntry__CCompiler);
	create_co_selector_co___DispatchTableEntry__CCompiler(obj, function, selector);
	return obj;
}


obj_ selector__DispatchTableEntry__CCompiler(obj_ this_)
{
	return Field_(selector);
}


obj_ selector_co___DispatchTableEntry__CCompiler(obj_ this_, obj_ value)
{
	Field_(selector) = value;
	return value;
}


