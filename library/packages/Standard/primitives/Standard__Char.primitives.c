/* Standard__Char.primitives.c */

#include "Trylon_.h"

#define value_(charObj) 	(((struct Standard__Int__internal*) charObj)->value)


obj_ _eq__eq__sp_arg__Standard__Char(obj_ this_, obj_ arg)
{
	return (value_(this_) == value_(arg) ? true__Standard : false__Standard);
}


obj_ _nt__eq__sp_arg__Standard__Char(obj_ this_, obj_ arg)
{
	return (value_(this_) != value_(arg) ? true__Standard : false__Standard);
}


obj_ _lt__sp_arg__Standard__Char(obj_ this_, obj_ arg)
{
	return (value_(this_) < value_(arg) ? true__Standard : false__Standard);
}


obj_ _lt__eq__sp_arg__Standard__Char(obj_ this_, obj_ arg)
{
	return (value_(this_) <= value_(arg) ? true__Standard : false__Standard);
}


obj_ _gt__sp_arg__Standard__Char(obj_ this_, obj_ arg)
{
	return (value_(this_) > value_(arg) ? true__Standard : false__Standard);
}


obj_ _gt__eq__sp_arg__Standard__Char(obj_ this_, obj_ arg)
{
	return (value_(this_) >= value_(arg) ? true__Standard : false__Standard);
}


obj_ _pl__sp_arg__Standard__Char(obj_ this_, obj_ arg)
{
	return BuildChar_(value_(this_) + value_(arg));
}


obj_ __sp_arg__Standard__Char(obj_ this_, obj_ arg)
{
	return BuildChar_(value_(this_) + value_(arg));
}


obj_ string__Standard__Char(obj_ this_)
{
	char str[32];
	str[0] = value_(this_);
	str[1] = 0;
	return BuildString_(str);
}




/*
	Copyright 2005 Steve Folta.
	See the License file.
*/
