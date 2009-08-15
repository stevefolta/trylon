#include "Trylon_.h"

UsingSym_(ForContext)UsingClass_(Compiler)
UsingClass_(Context__Compiler)
UsingClass_(ForContext__Compiler)
struct ClassInfo ForContext__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 95, 2, Proto_(ForContext__Compiler), Proto_(Compiler), Proto_(Context__Compiler), nil, Sym_(ForContext), nil, nil };
struct object ForContext__Compiler = 
	{ &ForContext__Compiler__classInfo_, {nil, nil} };



#define local__fld_	(0)
#define parent__fld_	(1)


obj_ create_co_parent_co___ForContext__Compiler(obj_ this_, obj_ local, obj_ parent)
{
	obj_ t0_;
	UsingMethod_(local_co_) UsingMethod_(parent_co_)

		{
		t0_ = Call_(local_co_, this_, local);
		t0_ = Call_(parent_co_, this_, parent);
		}
	return nil;
}


obj_ enclosing_method_context__ForContext__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(enclosing_method_context) UsingMethod_(parent)

		{
		t0_ = Call_(parent, this_);
		t1_ = Call_(enclosing_method_context, t0_);
		return t1_;
		}
	return nil;
}


obj_ lookup_function_co___ForContext__Compiler(obj_ this_, obj_ name)
{
	extern obj_ new_co___LocalGetter__Compiler(obj_ this_, obj_ local);
	extern obj_ new_co___LocalSetter__Compiler(obj_ this_, obj_ local);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineString_(0, ":")
	UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(local) UsingMethod_(lookup_function_co_) UsingMethod_(name) UsingMethod_(parent)
	UsingClass_(LocalGetter__Compiler)
	UsingClass_(LocalSetter__Compiler)

		{
		t0_ = Call_(local, this_);
		t1_ = Call_(name, t0_);
		t2_ = Call_(_eq__eq_, name, t1_);
		if (t2_)
			{
			t0_ = Call_(local, this_);
			t1_ = new_co___LocalGetter__Compiler(Proto_(LocalGetter__Compiler), t0_);
			return t1_;
			}
		else
			{
			t2_ = Call_(local, this_);
			t3_ = Call_(name, t2_);
			t4_ = Call_(_pl_, t3_, Str_(0));
			t5_ = Call_(_eq__eq_, name, t4_);
			if (t5_)
				{
				t0_ = Call_(local, this_);
				t1_ = new_co___LocalSetter__Compiler(Proto_(LocalSetter__Compiler), t0_);
				return t1_;
				}
			}
		
		t2_ = Call_(parent, this_);
		t3_ = Call_(lookup_function_co_, t2_, name);
		return t3_;
		}
	return nil;
}


obj_ new_co_parent_co___ForContext__Compiler(obj_ this_, obj_ local, obj_ parent)
{
	UsingClass_(ForContext__Compiler)
	obj_ obj = AllocObj_(ForContext__Compiler);
	create_co_parent_co___ForContext__Compiler(obj, local, parent);
	return obj;
}


