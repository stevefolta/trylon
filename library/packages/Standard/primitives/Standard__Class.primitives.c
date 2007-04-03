/* Standard__Class.primitives.c */

#include "Trylon_.h"


obj_ num_fields__Standard__Class(obj_ this_)
{
	struct Standard__Class__internal* class_ =
		(struct Standard__Class__internal*) this_;

	return BuildInt_(class_->instance_size);
}



/*
	Copyright 2005 Steve Folta.
	See the License file.
*/
