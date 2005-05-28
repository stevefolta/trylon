/* Xlib__Pixmap.primitives.c */

#include "Trylon_.h"
#include <X11/Xlib.h>


obj_ create_co_width_co_height_co_depth_co___Xlib__Pixmap(
	obj_ this_, obj_ window_or_display, obj_ width, obj_ height, obj_ depth)
{
	extern class_spec_ Xlib__Window;
	obj_ display;
	Drawable drawable;
	Pixmap pixmap;
	Display* xdisplay;
	UsingMethod_(is_a_co_) UsingMethod_(display) UsingMethod_(display_co_)
	UsingMethod_(id) UsingMethod_(id_co_)

	if (Test_(Call_(is_a_co_, window_or_display, (obj_) &Xlib__Window))) {
		display = Call_(display, window_or_display);
		drawable = (Drawable) IntValue_(Call_(id, window_or_display));
		xdisplay = (Display*) display->fields[0];
		}
	else {
		display = window_or_display;
		xdisplay = (Display*) display->fields[0];
		drawable = DefaultRootWindow(xdisplay);
		}
	pixmap =
		XCreatePixmap(xdisplay, drawable, IntValue_(width), IntValue_(height),
		              IntValue_(depth));
	Call_(display_co_, this_, display);
	Call_(id_co_, this_, BuildInt_(pixmap));
	return NULL;
}


obj_ close__Xlib__Pixmap(obj_ this_)
{
	UsingMethod_(display)
	Display* xdisplay = (Display*) Call_(display, this_)->fields[0];
	Pixmap pixmap;
	UsingMethod_(id) UsingMethod_(id_co_)

	pixmap = (Pixmap) Call_(id, this_);
	if (pixmap) {
		XFreePixmap(xdisplay, pixmap);
		Call_(id_co_, this_, BuildInt_(0));
		}

	return NULL;
}


