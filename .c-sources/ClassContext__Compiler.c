#include "Trylon_.h"

UsingSym_(ClassContext)UsingClass_(Compiler)
UsingClass_(Context__Compiler)
UsingClass_(ClassContext__Compiler)
struct ClassInfo ClassContext__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 91, 1, Proto_(ClassContext__Compiler), Proto_(Compiler), Proto_(Context__Compiler), nil, Sym_(ClassContext), nil, nil };
struct object ClassContext__Compiler = 
	{ &ClassContext__Compiler__classInfo_, {nil} };



#define compile_info__fld_	(0)


obj_ add_class_co___ClassContext__Compiler(obj_ this_, obj_ name)
{
	extern obj_ virtual__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		}
	return nil;
}


obj_ add_field_co___ClassContext__Compiler(obj_ this_, obj_ field)
{
	extern obj_ virtual__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		}
	return nil;
}


obj_ add_function_co___ClassContext__Compiler(obj_ this_, obj_ function)
{
	extern obj_ virtual__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		}
	return nil;
}


obj_ add_shared_field_co___ClassContext__Compiler(obj_ this_, obj_ field)
{
	extern obj_ virtual__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		}
	return nil;
}


obj_ full_name__ClassContext__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, " ")
	UsingMethod_(_pl_) UsingMethod_(is_main) UsingMethod_(name) UsingMethod_(parent)

		{
		obj_ proto, result;
		t0_ = Call_(is_main, this_);
		if (t0_)
			{
			t0_ = Call_(name, this_);
			return t0_;
			}
		t1_ = Call_(name, this_);
		result = t1_;
		t0_ = Call_(parent, this_);
		proto = t0_;
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(is_main, proto);
			t1_ = Not_(t0_);
			if (!(t1_))
				Break_(0)
			{
			t0_ = Call_(name, proto);
			t1_ = Call_(_pl_, t0_, Str_(0));
			t2_ = Call_(_pl_, t1_, result);
			result = t2_;
			t0_ = Call_(parent, proto);
			proto = t0_;
			}
			}
		return result;
		}
	return nil;
}


obj_ get_subproto_co___ClassContext__Compiler(obj_ this_, obj_ name)
{
	extern obj_ virtual__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		}
	return nil;
}


obj_ is_main__ClassContext__Compiler(obj_ this_)
{
	extern obj_ virtual__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		}
	return nil;
}


obj_ name__ClassContext__Compiler(obj_ this_)
{
	extern obj_ virtual__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		}
	return nil;
}


obj_ newly_defined_functions__ClassContext__Compiler(obj_ this_)
{
	extern obj_ virtual__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Standard)

		{
		/*  Should return an iterator returning (key, value) pairs, like */
		/*  "Dictionary pairs". */
		t0_ = virtual__Standard(Proto_(Standard));
		}
	return nil;
}


obj_ parent__ClassContext__Compiler(obj_ this_)
{
	extern obj_ virtual__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		}
	return nil;
}


