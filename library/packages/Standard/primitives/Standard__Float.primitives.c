/* Standard__Float.primitives.c */

#include "Trylon_.h"
#include <stdio.h>


obj_ _pl___Standard__Float(obj_ this_, obj_ arg)
{
	return BuildFloat_(FloatValue_(this_) + FloatValue_(arg));
}


obj_ ___Standard__Float(obj_ this_, obj_ arg)
{
	return BuildFloat_(FloatValue_(this_) - FloatValue_(arg));
}


obj_ _st___Standard__Float(obj_ this_, obj_ arg)
{
	return BuildFloat_(FloatValue_(this_) * FloatValue_(arg));
}


obj_ _dv___Standard__Float(obj_ this_, obj_ arg)
{
	return BuildFloat_(FloatValue_(this_) / FloatValue_(arg));
}


obj_ unary_minus__Standard__Float(obj_ this_)
{
	return BuildFloat_(-FloatValue_(this_));
}


obj_ _eq__eq___Standard__Float(obj_ this_, obj_ arg)
{
	return
		(FloatValue_(this_) == FloatValue_(arg) ? true__Standard : false__Standard);
}


obj_ _nt__eq___Standard__Float(obj_ this_, obj_ arg)
{
	return
		(FloatValue_(this_) != FloatValue_(arg) ? true__Standard : false__Standard);
}


obj_ _lt___Standard__Float(obj_ this_, obj_ arg)
{
	return
		(FloatValue_(this_) < FloatValue_(arg) ? true__Standard : false__Standard);
}


obj_ _lt__eq___Standard__Float(obj_ this_, obj_ arg)
{
	return
		(FloatValue_(this_) <= FloatValue_(arg) ? true__Standard : false__Standard);
}


obj_ _gt___Standard__Float(obj_ this_, obj_ arg)
{
	return
		(FloatValue_(this_) > FloatValue_(arg) ? true__Standard : false__Standard);
}


obj_ _gt__eq___Standard__Float(obj_ this_, obj_ arg)
{
	return
		(FloatValue_(this_) >= FloatValue_(arg) ? true__Standard : false__Standard);
}


obj_ string__Standard__Float(obj_ this_)
{
	char str[64];
	sprintf(str, "%g", FloatValue_(this_));
	return BuildString_(str);
}


obj_ int___Standard__Float(obj_ this_)
{
	return BuildInt_(FloatValue_(this_));
}



/*
	Copyright 2005 Steve Folta.
	See the License file.
*/
