#include "Trylon_.h"

UsingSym_(Float)UsingClass_(Standard)
UsingClass_(Object__Standard)
UsingClass_(Float__Standard)
struct ClassInfo Float__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 6, 0, Proto_(Float__Standard), Proto_(Standard), Proto_(Object__Standard), nil, Sym_(Float), nil, nil };
struct object Float__Standard = 
	{ &Float__Standard__classInfo_, {} };




#include <math.h>
#include <stdio.h>
obj_ _nt__eq___Float__Standard(obj_ this_, obj_ arg)
{
return Bool_(FloatValue_(this_) != FloatValue_(arg));
}


obj_ _st___Float__Standard(obj_ this_, obj_ arg)
{
return BuildFloat_(FloatValue_(this_) * FloatValue_(arg));
}


obj_ _pl___Float__Standard(obj_ this_, obj_ arg)
{
return BuildFloat_(FloatValue_(this_) + FloatValue_(arg));
}


obj_ ___Float__Standard(obj_ this_, obj_ arg)
{
return BuildFloat_(FloatValue_(this_) - FloatValue_(arg));
}


obj_ _dv___Float__Standard(obj_ this_, obj_ arg)
{
return BuildFloat_(FloatValue_(this_) / FloatValue_(arg));
}


obj_ _lt___Float__Standard(obj_ this_, obj_ arg)
{
return Bool_(FloatValue_(this_) < FloatValue_(arg));
}


obj_ _lt__eq___Float__Standard(obj_ this_, obj_ arg)
{
return Bool_(FloatValue_(this_) <= FloatValue_(arg));
}


obj_ _eq__eq___Float__Standard(obj_ this_, obj_ arg)
{
return Bool_(FloatValue_(this_) == FloatValue_(arg));
}


obj_ _gt___Float__Standard(obj_ this_, obj_ arg)
{
return Bool_(FloatValue_(this_) > FloatValue_(arg));
}


obj_ _gt__eq___Float__Standard(obj_ this_, obj_ arg)
{
return Bool_(FloatValue_(this_) >= FloatValue_(arg));
}


obj_ debug_write__Float__Standard(obj_ this_)
{
	extern obj_ print_line_co___Standard(obj_ this_, obj_ line);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "Float: ")
	UsingMethod_(_pl_) UsingMethod_(string)
	UsingClass_(Standard)

		{
		t0_ = Call_(string, this_);
		t1_ = Call_(_pl_, Str_(0), t0_);
		t2_ = print_line_co___Standard(Proto_(Standard), t1_);
		}
	return nil;
}


obj_ int___Float__Standard(obj_ this_)
{
return BuildInt_(FloatValue_(this_));
}


obj_ pow_co___Float__Standard(obj_ this_, obj_ power)
{
return BuildFloat_(pow(FloatValue_(this_), FloatValue_(power)));
}


obj_ sqrt__Float__Standard(obj_ this_)
{
return BuildFloat_(sqrt(FloatValue_(this_)));
}


obj_ string__Float__Standard(obj_ this_)
{
char str[64];
sprintf(str, "%f", FloatValue_(this_));
return BuildString_(str);
}


obj_ unary_minus__Float__Standard(obj_ this_)
{
return BuildFloat_(-FloatValue_(this_));
}


