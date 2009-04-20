#include "Trylon_.h"

UsingSym_(SymbolInfo)UsingClass_(Compiler)
UsingClass_(Object__Standard)
UsingClass_(SymbolInfo__Compiler)
struct ClassInfo SymbolInfo__Compiler__classInfo_ = 
	{ 170, 5, Proto_(SymbolInfo__Compiler), Proto_(Compiler), Proto_(Object__Standard), nil, Sym_(SymbolInfo) ,nil };
struct object SymbolInfo__Compiler = 
	{ &SymbolInfo__Compiler__classInfo_, {nil, nil, nil, nil, nil} };


#define name__fld_	(0)
#define declared__fld_	(1)
#define called__fld_	(2)
#define used_as_symbol__fld_	(3)
#define index__fld_	(4)


obj_ called__SymbolInfo__Compiler(obj_ this_)
{
	return Field_(called);
}


obj_ called_co___SymbolInfo__Compiler(obj_ this_, obj_ value)
{
	Field_(called) = value;
	return value;
}


obj_ create_co___SymbolInfo__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	DefineInt_(0, -1)
	UsingMethod_(index_co_) UsingMethod_(name_co_)

		{
		t0_ = Call_(name_co_, this_, name);
		t0_ = Call_(index_co_, this_, Int_(0));
		
		}
	return nil;
}


obj_ declared__SymbolInfo__Compiler(obj_ this_)
{
	return Field_(declared);
}


obj_ declared_co___SymbolInfo__Compiler(obj_ this_, obj_ value)
{
	Field_(declared) = value;
	return value;
}


obj_ index__SymbolInfo__Compiler(obj_ this_)
{
	return Field_(index);
}


obj_ index_co___SymbolInfo__Compiler(obj_ this_, obj_ value)
{
	Field_(index) = value;
	return value;
}


obj_ name__SymbolInfo__Compiler(obj_ this_)
{
	return Field_(name);
}


obj_ name_co___SymbolInfo__Compiler(obj_ this_, obj_ value)
{
	Field_(name) = value;
	return value;
}


obj_ new_co___SymbolInfo__Compiler(obj_ this_, obj_ name)
{
	UsingClass_(SymbolInfo__Compiler)
	obj_ obj = AllocObj_(SymbolInfo__Compiler);
	create_co___SymbolInfo__Compiler(obj, name);
	return obj;
}


obj_ used_as_symbol__SymbolInfo__Compiler(obj_ this_)
{
	return Field_(used_as_symbol);
}


obj_ used_as_symbol_co___SymbolInfo__Compiler(obj_ this_, obj_ value)
{
	Field_(used_as_symbol) = value;
	return value;
}


