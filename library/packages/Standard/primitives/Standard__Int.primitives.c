/* Standard__Int.primitives.c */

#include "Trylon_.h"
#include <stdio.h>

#define value_(intObj) 	(((struct Standard__Int__internal*) intObj)->value)


obj_ _pl___Standard__Int(obj_ this_, obj_ arg)
{
	return BuildInt_(value_(this_) + value_(arg));
}


obj_ ___Standard__Int(obj_ this_, obj_ arg)
{
	return BuildInt_(value_(this_) - value_(arg));
}


obj_ _st___Standard__Int(obj_ this_, obj_ arg)
{
	return BuildInt_(value_(this_) * value_(arg));
}


obj_ _dv___Standard__Int(obj_ this_, obj_ arg)
{
	return BuildInt_(value_(this_) / value_(arg));
}


obj_ _pc___Standard__Int(obj_ this_, obj_ arg)
{
	return BuildInt_(value_(this_) % value_(arg));
}


obj_ unary_minus__Standard__Int(obj_ this_)
{
	return BuildInt_(-IntValue_(this_));
}


obj_ _an___Standard__Int(obj_ this_, obj_ arg)
{
	return BuildInt_(IntValue_(this_) & IntValue_(arg));
}


obj_ _or___Standard__Int(obj_ this_, obj_ arg)
{
	return BuildInt_(IntValue_(this_) | IntValue_(arg));
}


obj_ _xr___Standard__Int(obj_ this_, obj_ arg)
{
	return BuildInt_(IntValue_(this_) ^ IntValue_(arg));
}


obj_ _tw___Standard__Int(obj_ this_)
{
	return BuildInt_(~IntValue_(this_));
}


obj_ _eq__eq___Standard__Int(obj_ this_, obj_ arg)
{
	return (value_(this_) == value_(arg) ? true__Standard : false__Standard);
}


obj_ _nt__eq___Standard__Int(obj_ this_, obj_ arg)
{
	return (value_(this_) != value_(arg) ? true__Standard : false__Standard);
}


obj_ _lt___Standard__Int(obj_ this_, obj_ arg)
{
	return (value_(this_) < value_(arg) ? true__Standard : false__Standard);
}


obj_ _lt__eq___Standard__Int(obj_ this_, obj_ arg)
{
	return (value_(this_) <= value_(arg) ? true__Standard : false__Standard);
}


obj_ _gt___Standard__Int(obj_ this_, obj_ arg)
{
	return (value_(this_) > value_(arg) ? true__Standard : false__Standard);
}


obj_ _gt__eq___Standard__Int(obj_ this_, obj_ arg)
{
	return (value_(this_) >= value_(arg) ? true__Standard : false__Standard);
}


obj_ string__Standard__Int(obj_ this_)
{
	char str[64];
	sprintf(str, "%d", value_(this_));
	return BuildString_(str);
}


obj_ float___Standard__Int(obj_ this_)
{
	return BuildFloat_(IntValue_(this_));
}



/*
	Copyright 2005 Steve Folta.
	See the License file.
*/
