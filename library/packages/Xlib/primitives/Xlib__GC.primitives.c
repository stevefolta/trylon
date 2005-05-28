/* Xlib__GC.primitives.c */

#include "Trylon_.h"
#include <X11/Xlib.h>
#include <X11/Xutil.h>


obj_ create_co___Xlib__GC(obj_ this_, obj_ drawableObj)
{
	obj_ displayObj;
	Display* xdisplay;
	Drawable drawable;
	UsingMethod_(display) UsingMethod_(display_co_) UsingMethod_(id)

	displayObj = Call_(display, drawable);
	Call_(display_co_, this_, displayObj);
	xdisplay = (Display*) displayObj->fields[0];
	drawable = (Drawable) IntValue_(Call_(id, drawableObj));
	this_->fields[0] = (obj_) XCreateGC(xdisplay, drawable, 0, NULL);
	return NULL;
}


obj_ close__Xlib__GC(obj_ this_)
{
	UsingMethod_(display)
	obj_ displayObj = Call_(display, this_);
	Display* xdisplay = (Display*) displayObj->fields[0];
	GC gc = (GC) this_->fields[0];

	if (gc) {
		XFreeGC(xdisplay, gc);
		this_->fields[0] = NULL;
		}
	return NULL;
}


obj_ font_co___Xlib__GC(obj_ this_, obj_ font)
{
	UsingMethod_(display)
	obj_ displayObj = Call_(display, this_);
	Display* xdisplay = (Display*) displayObj->fields[0];
	GC gc = (GC) this_->fields[0];

	// XSetFont(xdisplay, gc, ((XFontStruct*) font->font_struct)->fid);
	return NULL;
}


obj_ foreground_co___Xlib__GC(obj_ this_, obj_ foreground)
{
	UsingMethod_(display)
	obj_ displayObj = Call_(display, this_);
	Display* xdisplay = (Display*) displayObj->fields[0];
	GC gc = (GC) this_->fields[0];

	XSetForeground(xdisplay, gc, IntValue_(foreground));
	return NULL;
}


obj_ background_co___Xlib__GC(obj_ this_, obj_ background)
{
	UsingMethod_(display)
	obj_ displayObj = Call_(display, this_);
	Display* xdisplay = (Display*) displayObj->fields[0];
	GC gc = (GC) this_->fields[0];

	XSetBackground(xdisplay, gc, IntValue_(background));
	return NULL;
}


obj_ copy_from_co___Xlib__GC(obj_ this_, obj_ other)
{
	UsingMethod_(display)
	obj_ displayObj = Call_(display, this_);
	Display* xdisplay = (Display*) displayObj->fields[0];
	GC gc = (GC) this_->fields[0];
	GC otherGC = (GC) other->fields[0];

	XCopyGC(xdisplay, otherGC, 0xFFFFFFFF, gc);
	return NULL;
}


obj_ line_width__Xlib__GC(obj_ this_)
{
	UsingMethod_(display)
	obj_ displayObj = Call_(display, this_);
	Display* xdisplay = (Display*) displayObj->fields[0];
	GC gc = (GC) this_->fields[0];

	XGCValues values;
	XGetGCValues(xdisplay, gc, GCLineWidth, &values);
	return BuildInt_(values.line_width);
}


obj_ line_width_co___Xlib__GC(obj_ this_, obj_ new_line_width)
{
	UsingMethod_(display)
	obj_ displayObj = Call_(display, this_);
	Display* xdisplay = (Display*) displayObj->fields[0];
	GC gc = (GC) this_->fields[0];

	XGCValues values;
	values.line_width = IntValue_(new_line_width);
	XChangeGC(xdisplay, gc, GCLineWidth, &values);
	return NULL;
}


obj_ region_co___Xlib__GC(obj_ this_, obj_ region)
{
	UsingMethod_(display)
	obj_ displayObj = Call_(display, this_);
	Display* xdisplay = (Display*) displayObj->fields[0];
	GC gc = (GC) this_->fields[0];

	// XSetRegion(xdisplay, gc, ((Region) region->region_ptr));
	return NULL;
}


