/* Xlib__Region.primitives.c */

#include "Trylon_.h"
#include <X11/Xlib.h>
#include <X11/Xutil.h>

#define region 	((Region) this_->fields[0])


obj_ create__Xlib__Region(obj_ this_)
{
	this_->fields[0] = (obj_) XCreateRegion();
	return NULL;
}


obj_ close__Xlib__Region(obj_ this_)
{
	if (region) {
		XDestroyRegion(region);
		this_->fields[0] = NULL;
		}
	return NULL;
}


obj_ offset_by_x_co_y_co___Xlib__Region(obj_ this_, obj_ dx, obj_ dy)
{
	XOffsetRegion(region, IntValue_(dx), IntValue_(dy));
	return NULL;
}


obj_ shrink_by_x_co_y_co___Xlib__Region(obj_ this_, obj_ dx, obj_ dy)
{
	XShrinkRegion(region, IntValue_(dx), IntValue_(dy));
	return NULL;
}


obj_ set_to_intersection_of_co_and_co___Xlib__Region(
	obj_ this_, obj_ first_region, obj_ second_region)
{
	XIntersectRegion(((Region) first_region->fields[0]),
	                 ((Region) second_region->fields[0]),
	                 region);
	return NULL;
}


obj_ set_to_union_of_co_and_co___Xlib__Region(
	obj_ this_, obj_ first_region, obj_ second_region)
{
	XUnionRegion(((Region) first_region->fields[0]),
	             ((Region) second_region->fields[0]),
	             region);
	return NULL;
}


obj_ set_to_union_of_rect_x_co_y_co_width_co_height_co_and_co___Xlib__Region(
	obj_ this_, obj_ x, obj_ y, obj_ width, obj_ height, obj_ otherRegion)
{
	XRectangle rect;
	rect.x = IntValue_(x);
	rect.y = IntValue_(y);
	rect.width = IntValue_(width);
	rect.height = IntValue_(height);
	XUnionRectWithRegion(&rect, ((Region) otherRegion->fields[0]), region);
	return NULL;
}


obj_ set_to_subtraction_of_co_and_co___Xlib__Region(
	obj_ this_, obj_ first_region, obj_ second_region)
{
	XSubtractRegion(((Region) first_region->fields[0]),
	                ((Region) second_region->fields[0]),
	                region);
	return NULL;
}


obj_ set_to_xor_of_co_and_co___Xlib__Region(
	obj_ this_, obj_ first_region, obj_ second_region)
{
	XXorRegion(((Region) first_region->fields[0]),
	           ((Region) second_region->fields[0]),
	           region);
	return NULL;
}


obj_ is_empty__Xlib__Region(obj_ this_)
{
	return (XEmptyRegion(region) ? true__Standard : false__Standard);
}


obj_ equals_co___Xlib__Region(obj_ this_, obj_ other)
{
	return
		(XEqualRegion(region, ((Region) other->fields[0])) ?
		 true__Standard : false__Standard);
}


obj_ contains_point_x_co_y_co___Xlib__Region(obj_ this_, obj_ x, obj_ y)
{
	return
		(XPointInRegion(region, IntValue_(x), IntValue_(y)) ?
		 true__Standard : false__Standard);
}


obj_ contains_rect_x_co_y_co_width_co_height_co___Xlib__Region(
	obj_ this_, obj_ x, obj_ y, obj_ width, obj_ height)
{
	return
		(XRectInRegion(region, IntValue_(x), IntValue_(y),
		               IntValue_(width), IntValue_(height)) ?
		 true__Standard : false__Standard);
}


