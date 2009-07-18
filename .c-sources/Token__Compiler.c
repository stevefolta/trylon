#include "Trylon_.h"

UsingSym_(Token)UsingClass_(Compiler)
UsingClass_(Object__Standard)
UsingClass_(Token__Compiler)
struct ClassInfo Token__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 75, 2, Proto_(Token__Compiler), Proto_(Compiler), Proto_(Object__Standard), nil, Sym_(Token), nil, nil };
struct object Token__Compiler = 
	{ &Token__Compiler__classInfo_, {nil, nil} };


#define type__fld_	(0)
#define text__fld_	(1)


obj_ _nt__eq___Token__Compiler(obj_ this_, obj_ symbol)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_nt__eq_) UsingMethod_(type)

		{
		t0_ = Call_(type, this_);
		t1_ = Call_(_nt__eq_, t0_, symbol);
		return t1_;
		}
	return nil;
}


obj_ _eq__eq___Token__Compiler(obj_ this_, obj_ symbol)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_eq__eq_) UsingMethod_(type)

		{
		t0_ = Call_(type, this_);
		t1_ = Call_(_eq__eq_, t0_, symbol);
		return t1_;
		}
	return nil;
}


obj_ create_co___Token__Compiler(obj_ this_, obj_ type)
{
	obj_ t0_;
	UsingMethod_(type_co_)

		{
		t0_ = Call_(type_co_, this_, type);
		}
	return nil;
}


obj_ create_co_from_co_to_co___Token__Compiler(obj_ this_, obj_ type, obj_ start, obj_ end)
{
	extern obj_ new_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(text_co_) UsingMethod_(type_co_)
	UsingClass_(String__Standard)

		{
		t0_ = Call_(type_co_, this_, type);
		t0_ = new_co_to_co___String__Standard(Proto_(String__Standard), start, end);
		t1_ = Call_(text_co_, this_, t0_);
		}
	return nil;
}


obj_ create_co_text_co___Token__Compiler(obj_ this_, obj_ type, obj_ text)
{
	obj_ t0_;
	UsingMethod_(text_co_) UsingMethod_(type_co_)

		{
		t0_ = Call_(type_co_, this_, type);
		t0_ = Call_(text_co_, this_, text);
		}
	return nil;
}


obj_ new_co___Token__Compiler(obj_ this_, obj_ type)
{
	UsingClass_(Token__Compiler)
	obj_ obj = AllocObj_(Token__Compiler);
	create_co___Token__Compiler(obj, type);
	return obj;
}


obj_ new_co_from_co_to_co___Token__Compiler(obj_ this_, obj_ type, obj_ start, obj_ end)
{
	UsingClass_(Token__Compiler)
	obj_ obj = AllocObj_(Token__Compiler);
	create_co_from_co_to_co___Token__Compiler(obj, type, start, end);
	return obj;
}


obj_ new_co_text_co___Token__Compiler(obj_ this_, obj_ type, obj_ text)
{
	UsingClass_(Token__Compiler)
	obj_ obj = AllocObj_(Token__Compiler);
	create_co_text_co___Token__Compiler(obj, type, text);
	return obj;
}


obj_ string__Token__Compiler(obj_ this_)
{
	UsingSym_(name)
	UsingSym_(keyword)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(_eq__eq_) UsingMethod_(string) UsingMethod_(text) UsingMethod_(type)

		{
		t0_ = Call_(type, this_);
		t1_ = Call_(_eq__eq_, t0_, Sym_(name));
		if ((t1_) == nil) {
			t2_ = Call_(type, this_);
			t3_ = Call_(_eq__eq_, t2_, Sym_(keyword));
			t1_ = t3_;
			}
		if (t1_)
			{
			t0_ = Call_(text, this_);
			return t0_;
			}
		t1_ = Call_(type, this_);
		t2_ = Call_(string, t1_);
		return t2_;
		}
	return nil;
}


