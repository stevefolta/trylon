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

