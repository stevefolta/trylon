#include "Trylon_.h"
#include <Carbon/Carbon.h>
#include <string.h>


#define carbonMenu	((MenuRef) this_->fields[0])

static void GetPString(obj_ strObj, Str255 pstr)
{
	int length = StringStopper_(strObj) - StringStart_(strObj);
	if (length > 255)
		length = 255;
	pstr[0] = length;
	memcpy(pstr, StringStart_(strObj), length);
}


obj_ create_co_title_co___Carbon__MenuManager__Menu(obj_ this_, obj_ id, obj_ title)
{
	Str255 titleStr;
	GetPString(title, titleStr);
	this_->fields[0] = (obj_) NewMenu(IntValue_(id), titleStr);
	return NULL;
}


obj_ close__Carbon__MenuManager__Menu(obj_ this_)
{
	DisposeMenu(carbonMenu);
	this_->fields[0] = NULL;
	return NULL;
}


obj_ append_item_co___Carbon__MenuManager__Menu(obj_ this_, obj_ title)
{
	Str255 titleStr;
	GetPString(title, titleStr);
	AppendMenuItemText(carbonMenu, titleStr);
	return NULL;
}


