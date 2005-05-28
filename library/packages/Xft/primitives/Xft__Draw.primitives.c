/* Xft__Draw.primitives.c */

#include "Trylon_.h"
#include <X11/Xlib.h>
#include <X11/Xft/Xft.h>

#define xftdraw	((XftDraw*) this_->fields[0])

obj_ create_co_drawable_co___Xft__Draw(obj_ this_, obj_ display, obj_ drawable)
{
	Display* xdisplay = (Display*) display->fields[0];
	int screen = DefaultScreen(xdisplay);
	Drawable drawableID;
	UsingMethod_(display_co_) UsingMethod_(id)

	Call_(display_co_, this_, display);
	drawableID = IntValue_(Call_(id, drawable));
	this_->fields[0] = (obj_)
		XftDrawCreate(xdisplay, drawableID,
		              DefaultVisual(xdisplay, screen),
		              DefaultColormap(xdisplay, screen));

	return NULL;
}


obj_ close__Xft__Draw(obj_ this_)
{
	if (this_->fields[0]) {
		XftDrawDestroy(xftdraw);
		this_->fields[0] = NULL;
		}
	return NULL;
}


obj_ draw_string_co_color_co_font_co_x_co_y_co___Xft__Draw(
	obj_ this_, obj_ string, obj_ color, obj_ font, obj_ x, obj_ y)
{
	char* start = StringStart_(string);
	XftDrawString8(xftdraw, (XftColor*) color->fields[0],
	               (XftFont*) font->fields[0], IntValue_(x), IntValue_(y),
	               (XftChar8*) start, StringStopper_(string) - start);
	return NULL;
}


obj_ draw_string_utf8_co_color_co_font_co_x_co_y_co___Xft__Draw(
	obj_ this_, obj_ string, obj_ color, obj_ font, obj_ x, obj_ y)
{
	char* start = StringStart_(string);
	XftDrawStringUtf8(xftdraw, (XftColor*) color->fields[0],
	                  (XftFont*) font->fields[0], IntValue_(x), IntValue_(y),
	                  (XftChar8*) start, StringStopper_(string) - start);
	return NULL;
}


