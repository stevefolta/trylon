#include "Trylon_.h"

UsingSym_(SymbolInfo)UsingClass_(Compiler)
UsingClass_(Object__Standard)
UsingClass_(SymbolInfo__Compiler)
struct ClassInfo SymbolInfo__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 200, 5, Proto_(SymbolInfo__Compiler), Proto_(Compiler), Proto_(Object__Standard), nil, Sym_(SymbolInfo), nil, nil };
struct object SymbolInfo__Compiler = 
	{ &SymbolInfo__Compiler__classInfo_, {nil, nil, nil, nil, nil} };


#define name__fld_	(0)
#define declared__fld_	(1)
#define called__fld_	(2)
#define used_as_symbol__fld_	(3)
#define index__fld_	(4)


obj_ create_co___SymbolInfo__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	obj_ t1_;
	UsingInt_(1)
	UsingMethod_(index_co_) UsingMethod_(name_co_) UsingMethod_(unary_minus)

		{
		t0_ = Call_(name_co_, this_, name);
		t0_ = Call_(unary_minus, SmallInt_(1));
		t1_ = Call_(index_co_, this_, t0_);
		}
	return nil;
}


obj_ new_co___SymbolInfo__Compiler(obj_ this_, obj_ name)
{
	UsingClass_(SymbolInfo__Compiler)
	obj_ obj = AllocObj_(SymbolInfo__Compiler);
	create_co___SymbolInfo__Compiler(obj, name);
	return obj;
}


