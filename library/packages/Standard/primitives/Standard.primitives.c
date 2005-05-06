/* Standard.primitives.c */

#include "Trylon_.h"
#include <stdio.h>


struct object false__Standard__obj = { &Standard__Bool, (obj_) 0 };
obj_ false__Standard = &false__Standard__obj;
struct object true__Standard__obj = { &Standard__Bool, (obj_) 1 };
obj_ true__Standard = &true__Standard__obj;

obj_ nil__Standard = (0);


obj_ print_co___Standard(obj_ strObj)
{
	byte_ptr_ start, stopper;
	UsingMethod_(string)
	strObj = Call_(string, strObj);
	start = StringStart_(strObj);
	stopper = StringStopper_(strObj);
	fwrite(start, stopper - start, 1, stdout);
}



/*
	Copyright 2005 Steve Folta.
	See the License file.
*/
