#include "Trylon_.h"

UsingSym_(CompiledField)UsingClass_(Compiler)
UsingClass_(Object__Standard)
UsingClass_(CompiledField__Compiler)
struct ClassInfo CompiledField__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 101, 6, Proto_(CompiledField__Compiler), Proto_(Compiler), Proto_(Object__Standard), nil, Sym_(CompiledField), nil, nil };
struct object CompiledField__Compiler = 
	{ &CompiledField__Compiler__classInfo_, {nil, nil, nil, nil, nil, nil} };


#define name__fld_	(0)
#define type__fld_	(1)
#define initial_value__fld_	(2)
#define compile_info__fld_	(3)
#define initial_value_result__fld_	(4)
#define index__fld_	(5)


obj_ create_co___CompiledField__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	UsingMethod_(name_co_)

		{
		t0_ = Call_(name_co_, this_, name);
		}
	return nil;
}


obj_ create_co_type_co___CompiledField__Compiler(obj_ this_, obj_ name, obj_ type)
{
	obj_ t0_;
	UsingMethod_(name_co_) UsingMethod_(type_co_)

		{
		t0_ = Call_(name_co_, this_, name);
		t0_ = Call_(type_co_, this_, type);
		}
	return nil;
}


obj_ new_co___CompiledField__Compiler(obj_ this_, obj_ name)
{
	UsingClass_(CompiledField__Compiler)
	obj_ obj = AllocObj_(CompiledField__Compiler);
	create_co___CompiledField__Compiler(obj, name);
	return obj;
}


obj_ new_co_type_co___CompiledField__Compiler(obj_ this_, obj_ name, obj_ type)
{
	UsingClass_(CompiledField__Compiler)
	obj_ obj = AllocObj_(CompiledField__Compiler);
	create_co_type_co___CompiledField__Compiler(obj, name, type);
	return obj;
}


