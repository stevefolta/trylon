#include "Trylon_.h"

UsingSym_(LocalGetter)UsingClass_(Compiler)
UsingClass_(TrylonFunction__Compiler)
UsingClass_(LocalGetter__Compiler)
struct ClassInfo LocalGetter__Compiler__classInfo_ = 
	{ 118, 4, Proto_(LocalGetter__Compiler), Proto_(Compiler), Proto_(TrylonFunction__Compiler), nil, Sym_(LocalGetter) ,nil };
struct object LocalGetter__Compiler = 
	{ &LocalGetter__Compiler__classInfo_, {nil} };



#define local__fld_	(0)


obj_ access__LocalGetter__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(local) UsingMethod_(name)
	extern obj_ mangle_name_co___Compiler(obj_ this_, obj_ name);
	UsingClass_(Compiler)

		{
		t0_ = Call_(local, this_);
		t1_ = Call_(name, t0_);
		t2_ = mangle_name_co___Compiler(Proto_(Compiler), t1_);
		return t2_;
		
		
		}
	return nil;
}


obj_ create_co___LocalGetter__Compiler(obj_ this_, obj_ local)
{
	obj_ t0_;
	UsingMethod_(local_co_)

		{
		t0_ = Call_(local_co_, this_, local);
		
		
		
		}
	return nil;
}


obj_ emit_c_call_co_builder_co___LocalGetter__Compiler(obj_ this_, obj_ arguments, obj_ builder)
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


obj_ emit_call_co___LocalGetter__Compiler(obj_ this_, obj_ arguments)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(intern) UsingMethod_(local) UsingMethod_(name)

		{
		t0_ = Call_(local, this_);
		t1_ = Call_(name, t0_);
		t2_ = Call_(intern, t1_);
		return t2_;
		
		
		}
	return nil;
}


obj_ interpret_call_with_co___LocalGetter__Compiler(obj_ this_, obj_ arguments)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(initial_value) UsingMethod_(local)

		{
		t0_ = Call_(local, this_);
		t1_ = Call_(initial_value, t0_);
		return t1_;
		
		}
	return nil;
}


obj_ local__LocalGetter__Compiler(obj_ this_)
{
	return Field_(local);
}


obj_ local_co___LocalGetter__Compiler(obj_ this_, obj_ value)
{
	Field_(local) = value;
	return value;
}


obj_ new_co___LocalGetter__Compiler(obj_ this_, obj_ local)
{
	UsingClass_(LocalGetter__Compiler)
	obj_ obj = AllocObj_(LocalGetter__Compiler);
	create_co___LocalGetter__Compiler(obj, local);
	return obj;
}


