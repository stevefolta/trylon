/* Standard__Bool.primitives.c */

#include "Trylon_.h"

#define value_(boolObj) 	(((struct Standard__Bool__internal*) boolObj)->value)


obj_ _eq__eq___Standard__Bool(obj_ this_, obj_ arg)
{
	return (value_(this_) == value_(arg) ? true__Standard : false__Standard);
}


obj_ _nt__eq___Standard__Bool(obj_ this_, obj_ arg)
{
	return (value_(this_) != value_(arg) ? true__Standard : false__Standard);
}


obj_ _an___Standard__Bool(obj_ this_, obj_ arg)
{
	return (value_(this_) && value_(arg) ? true__Standard : false__Standard);
}


obj_ _or___Standard__Bool(obj_ this_, obj_ arg)
{
	return (value_(this_) || value_(arg) ? true__Standard : false__Standard);
}


obj_ _xr___Standard__Bool(obj_ this_, obj_ arg)
{
	return (value_(this_) != value_(arg) ? true__Standard : false__Standard);
}


obj_ string__Standard__Bool(obj_ this_)
{
	DefineString_(0, "true")
	DefineString_(1, "false")

	return (value_(this_) ? Str_(0) : Str_(1));
}



/*
	Copyright 2005 Steve Folta.
	See the License file.
*/
