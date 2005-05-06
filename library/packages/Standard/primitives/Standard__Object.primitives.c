/* Standard__Object.primitives.c */

#include "Trylon_.h"
#include <stdio.h>
#include <stdlib.h>


#ifndef CLASSES_BY_NUM_
obj_ class___Standard__Object(obj_ this_)
{
	return (obj_) this_->class_;
}
#endif


obj_ object_ptr__Standard__Object(obj_ this_)
{
	return BuildBytePtr_((byte_ptr_) this_);
}


obj_ is_a_co___Standard__Object(obj_ this_, obj_ class_)
{
#ifdef CLASSES_BY_NUM_
	UsingMethod_(class_)
	class_spec_* objClass = (class_spec_*) Call_(class_, this_);
#else
	class_spec_* objClass = this_->class_;
#endif
	while (objClass) {
		if (objClass == (class_spec_*) class_)
			return true__Standard;
		objClass = (class_spec_*) objClass->superclass;
		}

	return false__Standard;
}


obj_ message_not_understood__Standard__Object(obj_ this_)
{
	fprintf(stderr, "Message not understood.\n");
	exit(1);
}




/*
	Copyright 2005 Steve Folta.
	See the License file.
*/
