/* Xft__Font.primitives.c */

#include "Trylon_.h"
#include <X11/Xlib.h>
#include <X11/Xft/Xft.h>


obj_ create_co_display_co___Xft__Font(obj_ this_, obj_ name, obj_ display)
{
	Display* xdisplay = (Display*) display->fields[0];
	UsingMethod_(display_co_)
	UsingMethod_(ascent_co_) UsingMethod_(descent_co_)
	UsingMethod_(line_height_co_)

	XftFont* xftFont =
		XftFontOpenName(xdisplay, DefaultScreen(xdisplay), MakeCString_(name));

	Call_(display_co_, this_, display);
	this_->fields[0] = (obj_) xftFont;

	/* Get the metrics */
	Call_(ascent_co_, this_, BuildInt_(xftFont->ascent));
	Call_(descent_co_, this_, BuildInt_(xftFont->descent));
	Call_(line_height_co_, this_, BuildInt_(xftFont->height));

	return NULL;
}


obj_ close__Xft__Font(obj_ this_)
{
	UsingMethod_(display)

	if (this_->fields[0]) {
		obj_ display = Call_(display, this_);
		Display* xdisplay = (Display*) display->fields[0];
		XftFontClose(xdisplay, (XftFont*) this_->fields[0]);
		this_->fields[0] = NULL;
		}
	return NULL;
}


obj_ width_of_co___Xft__Font(obj_ this_, obj_ string)
{
	UsingMethod_(display)
	obj_ display = Call_(display, this_);
	Display* xdisplay = (Display*) display->fields[0];
	char* start = StringStart_(string);
	XGlyphInfo glyphInfo;

	XftTextExtents8(xdisplay, (XftFont*) this_->fields[0],
	                (XftChar8*) start, StringStopper_(string) - start,
	                &glyphInfo);
	return BuildInt_(glyphInfo.xOff);
}


obj_ width_of_utf8_co___Xft__Font(obj_ this_, obj_ string)
{
	UsingMethod_(display)
	obj_ display = Call_(display, this_);
	Display* xdisplay = (Display*) display->fields[0];
	char* start = StringStart_(string);
	XGlyphInfo glyphInfo;

	XftTextExtentsUtf8(xdisplay, (XftFont*) this_->fields[0],
	                   (XftChar8*) start, StringStopper_(string) - start,
	                   &glyphInfo);
	return BuildInt_(glyphInfo.xOff);
}


