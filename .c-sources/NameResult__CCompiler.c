#include "Trylon_.h"

UsingSym_(NameResult)UsingClass_(CCompiler)
UsingClass_(ExpressionResult__CCompiler)
UsingClass_(NameResult__CCompiler)
struct ClassInfo NameResult__CCompiler__classInfo_ = 
	{ 170, 8, Proto_(NameResult__CCompiler), Proto_(CCompiler), Proto_(ExpressionResult__CCompiler), nil, Sym_(NameResult) ,nil };
struct object NameResult__CCompiler = 
	{ &NameResult__CCompiler__classInfo_, {nil, nil} };



#define name__fld_	(0)
#define is_constant__fld_	(1)


obj_ access__NameResult__CCompiler(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(name)

		{
		t0_ = Call_(name, this_);
		return t0_;
		
		
		
		
		}
	return nil;
}


obj_ create_co___NameResult__CCompiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	UsingMethod_(is_constant_co_) UsingMethod_(name_co_)

		{
		t0_ = Call_(name_co_, this_, name);
		t0_ = Call_(is_constant_co_, this_, nil);
		
		
		}
	return nil;
}


obj_ create_co_is_constant_co___NameResult__CCompiler(obj_ this_, obj_ name, obj_ is_constant)
{
	obj_ t0_;
	UsingMethod_(is_constant_co_) UsingMethod_(name_co_)

		{
		t0_ = Call_(name_co_, this_, name);
		t0_ = Call_(is_constant_co_, this_, is_constant);
		
		
		}
	return nil;
}


obj_ is_constant__NameResult__CCompiler(obj_ this_)
{
	return Field_(is_constant);
}


obj_ is_constant_co___NameResult__CCompiler(obj_ this_, obj_ value)
{
	Field_(is_constant) = value;
	return value;
}


obj_ name__NameResult__CCompiler(obj_ this_)
{
	return Field_(name);
}


obj_ name_co___NameResult__CCompiler(obj_ this_, obj_ value)
{
	Field_(name) = value;
	return value;
}


obj_ new_co___NameResult__CCompiler(obj_ this_, obj_ name)
{
	UsingClass_(NameResult__CCompiler)
	obj_ obj = AllocObj_(NameResult__CCompiler);
	create_co___NameResult__CCompiler(obj, name);
	return obj;
}


obj_ new_co_is_constant_co___NameResult__CCompiler(obj_ this_, obj_ name, obj_ is_constant)
{
	UsingClass_(NameResult__CCompiler)
	obj_ obj = AllocObj_(NameResult__CCompiler);
	create_co_is_constant_co___NameResult__CCompiler(obj, name, is_constant);
	return obj;
}


