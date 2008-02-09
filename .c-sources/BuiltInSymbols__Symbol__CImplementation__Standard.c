#include "Trylon_.h"

UsingSym_(BuiltInSymbols)UsingClass_(Symbol__CImplementation__Standard)
UsingClass_(Object__Standard)
UsingClass_(BuiltInSymbols__Symbol__CImplementation__Standard)
struct ClassInfo BuiltInSymbols__Symbol__CImplementation__Standard__classInfo_ = 
	{ 35, 0, Proto_(BuiltInSymbols__Symbol__CImplementation__Standard), Proto_(Symbol__CImplementation__Standard), Proto_(Object__Standard), nil, Sym_(BuiltInSymbols) ,nil };
struct object BuiltInSymbols__Symbol__CImplementation__Standard = 
	{ &BuiltInSymbols__Symbol__CImplementation__Standard__classInfo_, {} };




extern struct Standard__Symbol__internal* firstSymbol_;
extern struct Standard__Symbol__internal* lastSymbol_;

obj_ at_co___BuiltInSymbols__Symbol__CImplementation__Standard(obj_ this_, obj_ name)
{
UsingMethod_(string) UsingMethod_(_eq__eq_) UsingMethod_(_lt_)
struct Standard__Symbol__internal* start = firstSymbol_;
struct Standard__Symbol__internal* end = lastSymbol_ + 1;
struct Standard__Symbol__internal* symbol;

name = Call_(string, name); 	/* In case we get a symbol. */
while (start < end) {
	int index = (end - start) / 2;
	struct Standard__Symbol__internal* symbol = &start[index];
	if (Call_(_eq__eq_, name, symbol))
		return (obj_) symbol;
	else if (Call_(_lt_, name, symbol))
		end = symbol;
	else
		start = symbol + 1;
	}
return nil;




}


obj_ create__BuiltInSymbols__Symbol__CImplementation__Standard(obj_ this_)
{

		{
		}
	return nil;
}


obj_ new__BuiltInSymbols__Symbol__CImplementation__Standard(obj_ this_)
{
	UsingClass_(BuiltInSymbols__Symbol__CImplementation__Standard)
	obj_ obj = AllocObj_(BuiltInSymbols__Symbol__CImplementation__Standard);
	create__BuiltInSymbols__Symbol__CImplementation__Standard(obj);
	return obj;
}


