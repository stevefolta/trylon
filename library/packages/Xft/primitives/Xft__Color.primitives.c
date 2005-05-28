/* Xft__Color.primitives.c */

#include "Trylon_.h"
#include <X11/Xlib.h>
#include <X11/Xft/Xft.h>

#define xftcolor	((XftColor*) this_->fields[0])


obj_ create_co_display_co___Xft__Color(obj_ this_, obj_ name, obj_ display)
{
	Display* xdisplay = (Display*) display->fields[0];
	int screen = DefaultScreen(xdisplay);
	char* nameStr = MakeCString_(name);
	XftColor* xftColor = (XftColor*) Allocate_(sizeof(XftColor));
	UsingMethod_(display_co_)

	Call_(display_co_, this_, display);
	this_->fields[0] = (obj_) xftColor;
	XftColorAllocName(xdisplay, DefaultVisual(xdisplay, screen),
	                  DefaultColormap(xdisplay, screen), nameStr,
										xftColor);
	return NULL;
}


obj_ create_co_green_co_blue_co_alpha_co_display_co___Xft__Color(
	obj_ this_, obj_ red, obj_ green, obj_ blue, obj_ alpha, obj_ display)
{
	Display* xdisplay = (Display*) display->fields[0];
	int screen = DefaultScreen(xdisplay);
	XftColor* xftColor = (XftColor*) Allocate_(sizeof(XftColor));
	XRenderColor color;
	UsingMethod_(display_co_)

	Call_(display_co_, this_, display);
	this_->fields[0] = (obj_) xftColor;
	color.red = IntValue_(red);
	color.green = IntValue_(green);
	color.blue = IntValue_(blue);
	color.alpha = IntValue_(alpha);
	XftColorAllocValue(xdisplay, DefaultVisual(xdisplay, screen),
	                   DefaultColormap(xdisplay, screen), &color,
	                   xftColor);
	return NULL;
}


obj_ close__Xft__Color(obj_ this_)
{
	UsingMethod_(display);

	if (this_->fields[0]) {
		obj_ display = Call_(display, this_);
		Display* xdisplay = (Display*) display->fields[0];
		int screen = DefaultScreen(xdisplay);
		XftColorFree(xdisplay, DefaultVisual(xdisplay, screen),
		             DefaultColormap(xdisplay, screen), xftcolor);
		this_->fields[0] = NULL;
		}
	return NULL;
}


