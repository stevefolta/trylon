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
	struct Standard__String__internal* name =
		(struct Standard__String__internal*) nameObj;
	char* start = BytePtrValue_(name->start);
	char* stopper = BytePtrValue_(name->stopper);
	ATSUFontID fontID;

	ATSUFindFontFromName(start, stopper - start,
	                     kFontFullName, kFontNoPlatform, kFontNoScript,
	                     kFontNoLanguageCode, &fontID);
	return BuildInt_(fontID);
}


