/* Xlib__XDrawable.primitives.c */

#include "Trylon_.h"
#include <X11/Xlib.h>


obj_ draw_string_co_gc_co_x_co_y_co___Xlib__XDrawable(
	obj_ this_, obj_ string, obj_ gc, obj_ x, obj_ y)
{
	Display* xdisplay = (Display*) this_->fields[0]->fields[0];
	Drawable drawable = (Drawable) IntValue_(this_->fields[1]);
	GC xgc = (GC) gc->fields[0];
	char* stringStart = StringStart_(string);

	XDrawString(xdisplay, drawable, xgc, IntValue_(x), IntValue_(y),
	            stringStart, StringStopper_(string) - stringStart);
	return NULL;
}


obj_ fill_rectangle_co_x_co_y_co_width_co_height_co___Xlib__XDrawable(obj_ this_, obj_ gc, obj_ x, obj_ y, obj_ width, obj_ height)
{
	Display* xdisplay = (Display*) this_->fields[0]->fields[0];
	Drawable drawable = (Drawable) IntValue_(this_->fields[1]);
	GC xgc = (GC) gc->fields[0];

	XFillRectangle(xdisplay, drawable, xgc, IntValue_(x), IntValue_(y),
	               IntValue_(width), IntValue_(height));
	return NULL;
}


obj_ draw_rectangle_co_x_co_y_co_width_co_height_co___Xlib__XDrawable(obj_ this_, obj_ gc, obj_ x, obj_ y, obj_ width, obj_ height)
{
	Display* xdisplay = (Display*) this_->fields[0]->fields[0];
	Drawable drawable = (Drawable) IntValue_(this_->fields[1]);
	GC xgc = (GC) gc->fields[0];

	XDrawRectangle(xdisplay, drawable, xgc, IntValue_(x), IntValue_(y),
	               IntValue_(width), IntValue_(height));
	return NULL;
}


obj_ draw_line_co_x1_co_y1_co_x2_co_y2_co___Xlib__XDrawable(obj_ this_, obj_ gc, obj_ x1, obj_ y1, obj_ x2, obj_ y2)
{
	Display* xdisplay = (Display*) this_->fields[0]->fields[0];
	Drawable drawable = (Drawable) IntValue_(this_->fields[1]);
	GC xgc = (GC) gc->fields[0];

	XDrawLine(xdisplay, drawable, xgc,
	          IntValue_(x1), IntValue_(y1), IntValue_(x2), IntValue_(y2));
	return NULL;
}


obj_ draw_arc_co_x_co_y_co_width_co_height_co_angle_1_co_angle_2_co___Xlib__XDrawable(
	obj_ this_, obj_ gc, obj_ x, obj_ y, obj_ width, obj_ height,
	obj_ angle_1, obj_ angle_2)
{
	Display* xdisplay = (Display*) this_->fields[0]->fields[0];
	Drawable drawable = (Drawable) IntValue_(this_->fields[1]);
	GC xgc = (GC) gc->fields[0];

	XDrawArc(xdisplay, drawable, xgc,
	         IntValue_(x), IntValue_(y), IntValue_(width), IntValue_(height),
					 IntValue_(angle_1), IntValue_(angle_2));
	return NULL;
}


obj_ fill_arc_co_x_co_y_co_width_co_height_co_angle_1_co_angle_2_co___Xlib__XDrawable(
	obj_ this_, obj_ gc, obj_ x, obj_ y, obj_ width, obj_ height,
	obj_ angle_1, obj_ angle_2)
{
	Display* xdisplay = (Display*) this_->fields[0]->fields[0];
	Drawable drawable = (Drawable) IntValue_(this_->fields[1]);
	GC xgc = (GC) gc->fields[0];

	XFillArc(xdisplay, drawable, xgc,
	         IntValue_(x), IntValue_(y), IntValue_(width), IntValue_(height),
					 IntValue_(angle_1), IntValue_(angle_2));
	return NULL;
}


obj_ copy_from_co_gc_co_source_x_co_source_y_co_width_co_height_co_dest_x_co_dest_y_co___Xlib__XDrawable(
	obj_ this_, obj_ source, obj_ gc, obj_ source_x, obj_ source_y,
	obj_ width, obj_ height, obj_ dest_x, obj_ dest_y)
{
	Display* xdisplay = (Display*) this_->fields[0]->fields[0];
	Drawable drawable = (Drawable) IntValue_(this_->fields[1]);
	Drawable srcDrawable = (Drawable) source->fields[1];
	GC xgc = (GC) gc->fields[0];

	XCopyArea(xdisplay, srcDrawable, drawable, xgc,
	          IntValue_(source_x), IntValue_(source_y),
	          IntValue_(width), IntValue_(height),
	          IntValue_(dest_x), IntValue_(dest_y));
}


obj_ width__Xlib__XDrawable(obj_ this_)
{
	Window root;
	int x, y;
	unsigned int width, height, borderWidth, depth;
	Display* xdisplay = (Display*) this_->fields[0]->fields[0];
	Drawable drawable = (Drawable) IntValue_(this_->fields[1]);

	XGetGeometry(xdisplay, drawable, &root, &x, &y, &width, &height,
	             &borderWidth, &depth);
	return BuildInt_(width);
}


obj_ height__Xlib__XDrawable(obj_ this_)
{
	Window root;
	int x, y;
	unsigned int width, height, borderWidth, depth;
	Display* xdisplay = (Display*) this_->fields[0]->fields[0];
	Drawable drawable = (Drawable) IntValue_(this_->fields[1]);

	XGetGeometry(xdisplay, drawable, &root, &x, &y, &width, &height,
	             &borderWidth, &depth);
	return BuildInt_(height);
}


