#include "Trylon_.h"
#include <Carbon/Carbon.h>


static obj_ invalid_font_id = NULL;

obj_ invalid_font_id__Carbon__ATSUI()
{
	if (invalid_font_id == NULL)
		invalid_font_id = BuildInt_(kATSUInvalidFontID);

	return invalid_font_id;
}


obj_ find_font_co___Carbon__ATSUI(obj_ nameObj)
{
	char* start = StringStart_(nameObj);
	char* stopper = StringStopper_(nameObj);
	ATSUFontID fontID;

	ATSUFindFontFromName(start, stopper - start,
	                     kFontFullName, kFontNoPlatform, kFontNoScript,
	                     kFontNoLanguageCode, &fontID);
	return BuildInt_(fontID);
}



/*
	Copyright 2005 - 2007 Steve Folta.
	See the License file.
*/

