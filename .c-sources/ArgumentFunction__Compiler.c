#include "Trylon_.h"

UsingSym_(ArgumentFunction)UsingClass_(Compiler)
UsingClass_(TrylonFunction__Compiler)
UsingClass_(ArgumentFunction__Compiler)
struct ClassInfo ArgumentFunction__Compiler__classInfo_ = 
	{ 116, 4, Proto_(ArgumentFunction__Compiler), Proto_(Compiler), Proto_(TrylonFunction__Compiler), nil, Sym_(ArgumentFunction) ,nil };
struct object ArgumentFunction__Compiler = 
	{ &ArgumentFunction__Compiler__classInfo_, {nil} };



#define name__fld_	(0)


obj_ access__ArgumentFunction__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(name)
	extern obj_ mangle_name_co___Compiler(obj_ this_, obj_ name);
	UsingClass_(Compiler)

		{
		t0_ = Call_(name, this_);
		t1_ = mangle_name_co___Compiler(Proto_(Compiler), t0_);
		return t1_;
		
		
		}
	return nil;
}


obj_ create_co___ArgumentFunction__Compiler(obj_ this_, obj_ arg)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(name) UsingMethod_(name_co_)

		{
		t0_ = Call_(name, arg);
		t1_ = Call_(name_co_, this_, t0_);
		
		
		
		}
	return nil;
}


obj_ emit_c_call_co_builder_co___ArgumentFunction__Compiler(obj_ this_, obj_ arguments, obj_ builder)
{
	obj_ t0_;
	extern obj_ new_co___LiteralResult__CCompiler(obj_ this_, obj_ expression);
	UsingClass_(LiteralResult__CCompiler)

		{
		t0_ = new_co___LiteralResult__CCompiler(Proto_(LiteralResult__CCompiler), this_);
		return t0_;
		
		}
	return nil;
}


obj_ emit_call_co___ArgumentFunction__Compiler(obj_ this_, obj_ arguments)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(intern) UsingMethod_(name)

		{
		t0_ = Call_(name, this_);
		t1_ = Call_(intern, t0_);
		return t1_;
		
		
		}
	return nil;
}


obj_ interpret_call_with_co___ArgumentFunction__Compiler(obj_ this_, obj_ arguments)
{

		{
		/* ... */
		
		}
	return nil;
}


obj_ name__ArgumentFunction__Compiler(obj_ this_)
{
	return Field_(name);
}


obj_ name_co___ArgumentFunction__Compiler(obj_ this_, obj_ value)
{
	Field_(name) = value;
	return value;
}


obj_ new_co___ArgumentFunction__Compiler(obj_ this_, obj_ arg)
{
	UsingClass_(ArgumentFunction__Compiler)
	obj_ obj = AllocObj_(ArgumentFunction__Compiler);
	create_co___ArgumentFunction__Compiler(obj, arg);
	return obj;
}


