/* Xlib__XWindow.primitives.c */

#include "Trylon_.h"
#include <X11/Xlib.h>
#include <X11/Xutil.h>


obj_ create_co_x_co_y_co_width_co_height_co___Xlib__XWindow(
	obj_ this_, obj_ displayObj, obj_ x, obj_ y, obj_ width, obj_ height)
{
	Display* xdisplay = (Display*) displayObj->fields[0];
	int screen = DefaultScreen(xdisplay);
	Window wind;
	UsingMethod_(id_co_) UsingMethod_(register_window_co_)

	this_->fields[0] = displayObj;
	wind =
		XCreateSimpleWindow(xdisplay, RootWindow(xdisplay, screen),
	                      IntValue_(x), IntValue_(y),
		                    IntValue_(width), IntValue_(height), 0,
	                      BlackPixel(xdisplay, screen),
	                      WhitePixel(xdisplay, screen));
	Call_(id_co_, this_, BuildInt_(wind));
	if (wind)
		Call_(register_window_co_, displayObj, this_);

	return NULL;
}


obj_ close__Xlib__XWindow(obj_ this_)
{
	UsingMethod_(id)
	Display* xdisplay = (Display*) this_->fields[0]->fields[0];
	Window wind = (Window) IntValue_(Call_(id, this_));
	UsingMethod_(id_co_) UsingMethod_(unregister_window_co_)

	if (wind) {
		Call_(unregister_window_co_, this_->fields[0], this_);
		XDestroyWindow(xdisplay, wind);
		Call_(id_co_, this_, NULL);
		}

	return NULL;
}


obj_ map__Xlib__XWindow(obj_ this_)
{
	UsingMethod_(id)
	Display* xdisplay = (Display*) this_->fields[0]->fields[0];
	Window wind = (Window) IntValue_(Call_(id, this_));

	XMapWindow(xdisplay, wind);
	return NULL;
}


obj_ select_input_co___Xlib__XWindow(obj_ this_, obj_ mask)
{
	UsingMethod_(id)
	Display* xdisplay = (Display*) this_->fields[0]->fields[0];
	Window wind = (Window) IntValue_(Call_(id, this_));

	XSelectInput(xdisplay, wind, IntValue_(mask));
	return NULL;
}


obj_ dont_flash_on_resize__Xlib__XWindow(obj_ this_)
{
	UsingMethod_(id)
	Display* xdisplay = (Display*) this_->fields[0]->fields[0];
	Window wind = (Window) IntValue_(Call_(id, this_));
	XSetWindowAttributes attributes;

	attributes.bit_gravity = NorthWestGravity;
	XChangeWindowAttributes(xdisplay, wind, CWBitGravity, &attributes);
	return NULL;
}


obj_ mouse_point__Xlib__XWindow(obj_ this_)
{
	UsingMethod_(id)
	Display* xdisplay = (Display*) this_->fields[0]->fields[0];
	Window wind = (Window) IntValue_(Call_(id, this_));
	Window rootWindow, childWindow;
	int rootX, rootY, winX, winY;
	unsigned int mask;
	extern obj_ new_co_y_co___Standard__Point(obj_, obj_);

	Bool onSameScreen =
		XQueryPointer(xdisplay, wind, &rootWindow, &childWindow, &rootX, &rootY,
		              &winX, &winY, &mask);
	if (!onSameScreen)
		winX = winY = -1;

	return new_co_y_co___Standard__Point(BuildInt_(winX), BuildInt_(winY));
}


obj_ check_window_event_co___Xlib__XWindow(obj_ this_, obj_ event_mask)
{
	UsingMethod_(id)
	Display* xdisplay = (Display*) this_->fields[0]->fields[0];
	Window wind = (Window) IntValue_(Call_(id, this_));
	XEvent rawEvent;
	extern obj_ XEventObjectFor(XEvent* rawEvent, obj_ display);

	Bool hadEvent =
		XCheckWindowEvent(xdisplay, wind, IntValue_(event_mask), &rawEvent);
	if (!hadEvent)
		return NULL;
	return XEventObjectFor(&rawEvent, this_->fields[0]);
}


obj_ title_co___Xlib__XWindow(obj_ this_, obj_ new_title)
{
	UsingMethod_(id)
	Display* xdisplay = (Display*) this_->fields[0]->fields[0];
	Window wind = (Window) IntValue_(Call_(id, this_));

	char* titleString = MakeCString_(new_title);
	XTextProperty titleProperty;
	XStringListToTextProperty(&titleString, 1, &titleProperty);
	XSetWMName(xdisplay, wind, &titleProperty);
	XSetWMIconName(xdisplay, wind, &titleProperty);
	return NULL;
}


