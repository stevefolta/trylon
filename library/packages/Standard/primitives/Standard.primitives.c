/* Standard.primitives.c */

#include "Trylon_.h"
#include <stdio.h>


struct object false__Standard__obj = { (obj_) &Standard__Bool, (obj_) 0 };
obj_ false__Standard = &false__Standard__obj;
struct object true__Standard__obj = { (obj_) &Standard__Bool, (obj_) 1 };
obj_ true__Standard = &true__Standard__obj;

obj_ nil__Standard = (0);


obj_ print_co___Standard(obj_ strObj)
{
	struct Standard__String__internal* str =
		(struct Standard__String__internal*) strObj;
	byte_ptr_ start = BytePtrValue_(str->start);
	byte_ptr_ stopper = BytePtrValue_(str->stopper);
	fwrite(start, stopper - start, 1, stdout);
}



/*
	Copyright 2005 Steve Folta.
	See the License file.
*/
