/* Standard__Int.primitives.c */

#include "Vlange_.h"
#include <stdio.h>

#define value_(intObj) 	(((struct Standard__Int__internal*) intObj)->value)


obj_ _pl__sp_arg__Standard__Int(obj_ this_, obj_ arg)
{
	return BuildInt_(value_(this_) + value_(arg));
}


obj_ __sp_arg__Standard__Int(obj_ this_, obj_ arg)
{
	return BuildInt_(value_(this_) - value_(arg));
}


obj_ _st__sp_arg__Standard__Int(obj_ this_, obj_ arg)
{
	return BuildInt_(value_(this_) * value_(arg));
}


obj_ _dv__sp_arg__Standard__Int(obj_ this_, obj_ arg)
{
	return BuildInt_(value_(this_) / value_(arg));
}


obj_ _pc__sp_arg__Standard__Int(obj_ this_, obj_ arg)
{
	return BuildInt_(value_(this_) % value_(arg));
}


obj_ ___Standard__Int(obj_ this_)
{
	return BuildInt_(-IntValue_(this_));
}


obj_ _an__sp_arg__Standard__Int(obj_ this_, obj_ arg)
{
	return BuildInt_(IntValue_(this_) & IntValue_(arg));
}


obj_ _or__sp_arg__Standard__Int(obj_ this_, obj_ arg)
{
	return BuildInt_(IntValue_(this_) | IntValue_(arg));
}


obj_ _xr__sp_arg__Standard__Int(obj_ this_, obj_ arg)
{
	return BuildInt_(IntValue_(this_) ^ IntValue_(arg));
}


obj_ _tw___Standard__Int(obj_ this_)
{
	return BuildInt_(~IntValue_(this_));
}


obj_ _eq__eq__sp_arg__Standard__Int(obj_ this_, obj_ arg)
{
	return (value_(this_) == value_(arg) ? true__Standard : false__Standard);
}


obj_ _nt__eq__sp_arg__Standard__Int(obj_ this_, obj_ arg)
{
	return (value_(this_) != value_(arg) ? true__Standard : false__Standard);
}


obj_ _lt__sp_arg__Standard__Int(obj_ this_, obj_ arg)
{
	return (value_(this_) < value_(arg) ? true__Standard : false__Standard);
}


obj_ _lt__eq__sp_arg__Standard__Int(obj_ this_, obj_ arg)
{
	return (value_(this_) <= value_(arg) ? true__Standard : false__Standard);
}


obj_ _gt__sp_arg__Standard__Int(obj_ this_, obj_ arg)
{
	return (value_(this_) > value_(arg) ? true__Standard : false__Standard);
}


obj_ _gt__eq__sp_arg__Standard__Int(obj_ this_, obj_ arg)
{
	return (value_(this_) >= value_(arg) ? true__Standard : false__Standard);
}


obj_ string__Standard__Int(obj_ this_)
{
	char str[64];
	sprintf(str, "%d", value_(this_));
	return BuildString_(str);
}



/*
	Copyright 2005 Steve Folta.
	See the License file.
*/
