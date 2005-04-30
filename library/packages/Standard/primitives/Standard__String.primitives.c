#include "Trylon_.h"
#include <stdlib.h>


obj_ int___Standard__String(obj_ this_)
{
	char* cString = MakeCString_(this_);
	int result;

	/* Allow hex literals to set the high bit (ie. they're unsigned) */
	if (cString[0] == '0' && cString[1] == 'x')
		result = strtoul(cString, NULL, 0);
	else
		result = strtol(cString, NULL, 0);

	return BuildInt_(result);
}


obj_ float___Standard__String(obj_ this_)
{
	char* cString = MakeCString_(this_);
	return BuildFloat_(strtod(cString, NULL));
}


#ifdef SEMI_PRIMITIVE_STRINGS_

#define start 	((byte_ptr_) this_->fields[0])
#define setStart(value) 	(this_->fields[0] = (obj_) (value))
#define stopper 	((byte_ptr_) this_->fields[1])
#define setStopper(value) 	(this_->fields[1] = (obj_) (value))

obj_ start__Standard__String(obj_ this_)
{
	return BuildBytePtr_(start);
}

obj_ start_co___Standard__String(obj_ this_, obj_ value)
{
	setStart(BytePtrValue_(value));
	return NULL;
}

obj_ stopper__Standard__String(obj_ this_)
{
	return BuildBytePtr_(stopper);
}

obj_ stopper_co___Standard__String(obj_ this_, obj_ value)
{
	setStopper(BytePtrValue_(value));
	return NULL;
}

obj_ length__Standard__String(obj_ this_)
{
	return BuildInt_(stopper - start);
}


obj_ is_empty__Standard__String(obj_ this_)
{
	return (stopper <= start ? true__Standard : false__Standard);
}


#endif 	// SEMI_PRIMITIVE_STRINGS_


