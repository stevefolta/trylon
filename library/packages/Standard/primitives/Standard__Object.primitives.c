/* Standard__Object.primitives.c */

#include "Vlange_.h"
#include <stdio.h>
#include <stdlib.h>


obj_ class___Standard__Object(obj_ this_)
{
	return this_->class_;
}


obj_ object_ptr__Standard__Object(obj_ this_)
{
	return BuildBytePtr_((byte_ptr_) this_);
}


obj_ is_a_sp_class__Standard__Object(obj_ this_, obj_ class_)
{
	obj_ objClass = this_->class_;
	while (objClass) {
		if (objClass == class_)
			return true__Standard;
		objClass = ((class_spec_*) objClass)->superclass;
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
