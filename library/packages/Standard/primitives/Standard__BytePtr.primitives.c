/* Standard__BytePtr.primitives.c */

#include "Vlange_.h"
#include <string.h>

#define value_(bytePtrObj) 	\
	(((struct Standard__BytePtr__internal*) bytePtrObj)->value)


obj_ _eq__eq__sp_arg__Standard__BytePtr(obj_ this_, obj_ arg)
{
	return (value_(this_) == value_(arg) ? true__Standard : false__Standard);
}


obj_ _nt__eq__sp_arg__Standard__BytePtr(obj_ this_, obj_ arg)
{
	return (value_(this_) != value_(arg) ? true__Standard : false__Standard);
}


obj_ _lt__sp_arg__Standard__BytePtr(obj_ this_, obj_ arg)
{
	return (value_(this_) < value_(arg) ? true__Standard : false__Standard);
}


obj_ _lt__eq__sp_arg__Standard__BytePtr(obj_ this_, obj_ arg)
{
	return (value_(this_) <= value_(arg) ? true__Standard : false__Standard);
}


obj_ _gt__sp_arg__Standard__BytePtr(obj_ this_, obj_ arg)
{
	return (value_(this_) >= value_(arg) ? true__Standard : false__Standard);
}


obj_ _gt__eq__sp_arg__Standard__BytePtr(obj_ this_, obj_ arg)
{
	return (value_(this_) >= value_(arg) ? true__Standard : false__Standard);
}



obj_ _pl__sp_arg__Standard__BytePtr(obj_ this_, obj_ arg)
{
	int increment = ((struct Standard__Int__internal*) arg)->value;
	return BuildBytePtr_(value_(this_) + increment);
}


obj_ __sp_arg__Standard__BytePtr(obj_ this_, obj_ arg)
{
	int increment = ((struct Standard__Int__internal*) arg)->value;
	return BuildBytePtr_(value_(this_) - increment);
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


obj_ ptr_sp_at__Standard__BytePtr(obj_ this_, obj_ at)
{
	int index = ((struct Standard__Int__internal*) at)->value;
	return BuildBytePtr_(((byte_ptr_*) value_(this_))[index]);
}


obj_ object_sp_at__Standard__BytePtr(obj_ this_, obj_ at)
{
	int index = ((struct Standard__Int__internal*) at)->value;
	return ((obj_*) value_(this_))[index];
}


obj_ char_sp_at__Standard__BytePtr(obj_ this_, obj_ at)
{
	int index = ((struct Standard__Int__internal*) at)->value;
	return BuildChar_(value_(this_)[index]);
}


obj_ int_sp_at__Standard__BytePtr(obj_ this_, obj_ at)
{
	int index = ((struct Standard__Int__internal*) at)->value;
	return BuildInt_(((int*) value_(this_))[index]);
}



obj_ as_object__Standard__BytePtr(obj_ this_)
{
	return (obj_) value_(this_);
}



obj_ ptr_sp_at_sp_set_to__Standard__BytePtr(obj_ this_, obj_ at, obj_ set_to)
{
	int index = ((struct Standard__Int__internal*) at)->value;
	((byte_ptr_*) value_(this_))[index] = value_(set_to);
}


obj_ object_sp_at_sp_set_to__Standard__BytePtr(obj_ this_, obj_ at, obj_ set_to)
{
	int index = ((struct Standard__Int__internal*) at)->value;
	((obj_*) value_(this_))[index] = set_to;
}


obj_ char_sp_at_sp_set_to__Standard__BytePtr(obj_ this_, obj_ at, obj_ set_to)
{
	int index = ((struct Standard__Int__internal*) at)->value;
	int value = ((struct Standard__Int__internal*) set_to)->value;
	value_(this_)[index] = value;
}


obj_ int_sp_at_sp_set_to__Standard__BytePtr(obj_ this_, obj_ at, obj_ set_to)
{
	int index = ((struct Standard__Int__internal*) at)->value;
	int value = ((struct Standard__Int__internal*) set_to)->value;
	((int*) value_(this_))[index] = value;
}



obj_ copy_sp_source_sp_length__Standard__BytePtr(obj_ this_, obj_ source, obj_ length)
{
	int theLength = ((struct Standard__Int__internal*) length)->value;
	memcpy(value_(this_), value_(source), theLength);
}





/*
	Copyright 2005 Steve Folta.
	See the License file.
*/
