/* Xlib__Font.primitives.c */

#include "Trylon_.h"
#include <X11/Xlib.h>


#define fontStruct	((XFontStruct*) this_->fields[0])


obj_ create_co_name_co___Xlib__Font(obj_ this_, obj_ display, obj_ name)
{
	UsingMethod_(display_co_)
	Display* xdisplay = (Display*) display->fields[0];

	Call_(display_co_, this_, display);
	this_->fields[0] = (obj_) XLoadQueryFont(xdisplay, MakeCString_(name));
	return NULL;
}


obj_ is_valid__Xlib__Font(obj_ this_)
{
	return (this_->fields[0] != NULL ? true__Standard : false__Standard);
}


obj_ close__Xlib__Font(obj_ this_)
{
	UsingMethod_(display)
	Display* xdisplay = (Display*) Call_(display, this_)->fields[0];

	if (this_->fields[0]) {
		XFreeFont(xdisplay, fontStruct);
		this_->fields[0] = NULL;
		}
	return NULL;
}


obj_ ascent__Xlib__Font(obj_ this_)
{
	return BuildInt_(fontStruct->ascent);
}


obj_ descent__Xlib__Font(obj_ this_)
{
	return BuildInt_(fontStruct->descent);
}


obj_ width_of_co___Xlib__Font(obj_ this_, obj_ string)
{
	char* start = StringStart_(string);
	return
		BuildInt_(XTextWidth(fontStruct, start, StringStopper_(string) - start));
}


