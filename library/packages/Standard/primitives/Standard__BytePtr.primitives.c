/* Standard__BytePtr.primitives.c */

#include "Trylon_.h"
#include <string.h>
#include <stdio.h>

#define value_(bytePtrObj) 	\
	(((struct Standard__BytePtr__internal*) bytePtrObj)->value)


obj_ _eq__eq___Standard__BytePtr(obj_ this_, obj_ arg)
{
	return (value_(this_) == value_(arg) ? true__Standard : false__Standard);
}


obj_ _nt__eq___Standard__BytePtr(obj_ this_, obj_ arg)
{
	return (value_(this_) != value_(arg) ? true__Standard : false__Standard);
}


obj_ _lt___Standard__BytePtr(obj_ this_, obj_ arg)
{
	return (value_(this_) < value_(arg) ? true__Standard : false__Standard);
}


obj_ _lt__eq___Standard__BytePtr(obj_ this_, obj_ arg)
{
	return (value_(this_) <= value_(arg) ? true__Standard : false__Standard);
}


obj_ _gt___Standard__BytePtr(obj_ this_, obj_ arg)
{
	return (value_(this_) > value_(arg) ? true__Standard : false__Standard);
}


obj_ _gt__eq___Standard__BytePtr(obj_ this_, obj_ arg)
{
	return (value_(this_) >= value_(arg) ? true__Standard : false__Standard);
}



obj_ _pl___Standard__BytePtr(obj_ this_, obj_ arg)
{
	int increment = ((struct Standard__Int__internal*) arg)->value;
	return BuildBytePtr_(value_(this_) + increment);
}


obj_ ___Standard__BytePtr(obj_ this_, obj_ arg)
{
	if (ObjClassIs_(arg, Standard__Int)) {
		int increment = ((struct Standard__Int__internal*) arg)->value;
		return BuildBytePtr_(value_(this_) - increment);
		}
	else if (ObjClassIs_(arg, Standard__BytePtr)) {
		return BuildInt_(BytePtrValue_(this_) - BytePtrValue_(arg));
		}
	return NULL;
}



obj_ deref_ptr__Standard__BytePtr(obj_ this_)
{
	return BuildBytePtr_(*(byte_ptr_*) value_(this_));
}


obj_ deref_int__Standard__BytePtr(obj_ this_)
{
	return BuildInt_(*(int*) value_(this_));
}


obj_ deref_char__Standard__BytePtr(obj_ this_)
{
	return BuildChar_(*value_(this_));
}


obj_ ptr_at_co___Standard__BytePtr(obj_ this_, obj_ index)
{
	return BuildBytePtr_(((byte_ptr_*) value_(this_))[IntValue_(index)]);
}


obj_ object_at_co___Standard__BytePtr(obj_ this_, obj_ index)
{
	return ((obj_*) value_(this_))[IntValue_(index)];
}


obj_ char_at_co___Standard__BytePtr(obj_ this_, obj_ index)
{
	return BuildChar_(value_(this_)[IntValue_(index)]);
}


obj_ int_at_co___Standard__BytePtr(obj_ this_, obj_ index)
{
	return BuildInt_(((int*) value_(this_))[IntValue_(index)]);
}


obj_ byte_at_co___Standard__BytePtr(obj_ this_, obj_ index)
{
	return BuildInt_(value_(this_)[IntValue_(index)]);
}



obj_ as_object__Standard__BytePtr(obj_ this_)
{
	return (obj_) value_(this_);
}



obj_ ptr_at_co_set_to_co___Standard__BytePtr(obj_ this_, obj_ index, obj_ value)
{
	((byte_ptr_*) value_(this_))[IntValue_(index)] = value_(value);
}


obj_ object_at_co_set_to_co___Standard__BytePtr(obj_ this_, obj_ index, obj_ value)
{
	((obj_*) value_(this_))[IntValue_(index)] = value;
}


obj_ char_at_co_set_to_co___Standard__BytePtr(obj_ this_, obj_ index, obj_ value)
{
	value_(this_)[IntValue_(index)] = IntValue_(value);
}


obj_ int_at_co_set_to_co___Standard__BytePtr(obj_ this_, obj_ index, obj_ value)
{
	((int*) value_(this_))[IntValue_(index)] = IntValue_(value);
}


obj_ byte_at_co_set_to_co___Standard__BytePtr(obj_ this_, obj_ index, obj_ value)
{
	value_(this_)[IntValue_(index)] = IntValue_(value);
}



obj_ copy_from_co_length_co___Standard__BytePtr(obj_ this_, obj_ source, obj_ length)
{
	memcpy(value_(this_), value_(source), IntValue_(length));
}


obj_ string__Standard__BytePtr(obj_ this)
{
	char str[64];

	sprintf(str, "0x%08X", BytePtrValue_(this));
	return BuildString_(str);
}



/*
	Copyright 2005 Steve Folta.
	See the License file.
*/
