/* Standard__Char.primitives.c */

#include "Trylon_.h"

#define value_(charObj) 	(((struct Standard__Int__internal*) charObj)->value)


static obj_ Charify(obj_ arg)
{
	UsingMethod_(is_a_co_)
	UsingMethod_(first_character)

	if (_Test_(Call_(is_a_co_, arg, (obj_) &Standard__String)))
		arg = Call_(first_character, arg);
	return arg;
}


obj_ _eq__eq___Standard__Char(obj_ this_, obj_ arg)
{
	return
		(value_(this_) == value_(Charify(arg)) ? true__Standard : false__Standard);
}


obj_ _nt__eq___Standard__Char(obj_ this_, obj_ arg)
{
	return
		(value_(this_) != value_(Charify(arg)) ? true__Standard : false__Standard);
}


obj_ _lt___Standard__Char(obj_ this_, obj_ arg)
{
	return
		(value_(this_) < value_(Charify(arg)) ? true__Standard : false__Standard);
}


obj_ _lt__eq___Standard__Char(obj_ this_, obj_ arg)
{
	return
		(value_(this_) <= value_(Charify(arg)) ? true__Standard : false__Standard);
}


obj_ _gt___Standard__Char(obj_ this_, obj_ arg)
{
	return
		(value_(this_) > value_(Charify(arg)) ? true__Standard : false__Standard);
}


obj_ _gt__eq___Standard__Char(obj_ this_, obj_ arg)
{
	return
		(value_(this_) >= value_(Charify(arg)) ? true__Standard : false__Standard);
}


obj_ _pl___Standard__Char(obj_ this_, obj_ arg)
{
	return BuildChar_(value_(this_) + value_(Charify(arg)));
}


obj_ ___Standard__Char(obj_ this_, obj_ arg)
{
	return BuildChar_(value_(this_) + value_(Charify(arg)));
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
