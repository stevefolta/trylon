#include "Trylon_.h"
#include <Carbon/Carbon.h>

extern obj_ allocate_object_co___Standard__Implementation(obj_);
extern obj_ new_co_y_co___Standard__Point(obj_, obj_);
extern class_spec_ Carbon__QuickDraw__Port;
extern class_spec_ Carbon__Quartz__Context;
UsingMethod_(x)  UsingMethod_(y)


obj_ global_to_local_co___Carbon__QuickDraw__Port(obj_ this_, obj_ point)
{
	Point carbonPoint;

	carbonPoint.h = IntValue_(Call_(x, point));
	carbonPoint.v = IntValue_(Call_(y, point));
	QDGlobalToLocalPoint((CGrafPtr) this_->fields[0], &carbonPoint);
	return
		new_co_y_co___Standard__Point(
			BuildInt_(carbonPoint.h), BuildInt_(carbonPoint.v));
}


obj_ local_to_global_co___Carbon__QuickDraw__Port(obj_ this_, obj_ point)
{
	Point carbonPoint;

	carbonPoint.h = IntValue_(Call_(x, point));
	carbonPoint.v = IntValue_(Call_(y, point));
	QDGlobalToLocalPoint((CGrafPtr) this_->fields[0], &carbonPoint);
	return
		new_co_y_co___Standard__Point(
			BuildInt_(carbonPoint.h), BuildInt_(carbonPoint.v));
}


obj_ port__Carbon__QuickDraw()
{
	obj_ portObj =
		allocate_object_co___Standard__Implementation((obj_) &Carbon__QuickDraw__Port);
	GetPort((CGrafPtr*) &portObj->fields[0]);
	return portObj;
}


obj_ port_co___Carbon__QuickDraw(obj_ portObj)
{
	SetPort((CGrafPtr) portObj->fields[0]);
	return NULL;
}


obj_ window_port_co___Carbon__QuickDraw(obj_ windObj)
{
	SetPortWindowPort((WindowRef) windObj->fields[0]);
	return NULL;
}


obj_ begin_cg_context_co___Carbon__QuickDraw(obj_ portObj)
{
	obj_ contextObj =
		allocate_object_co___Standard__Implementation((obj_) &Carbon__Quartz__Context);
	QDBeginCGContext((CGrafPtr) portObj->fields[0],
	                 (CGContextRef*) &contextObj->fields[0]);
	return contextObj;
}


obj_ end_cg_context_co_context_co___Carbon__QuickDraw(obj_ portObj, obj_ contextObj)
{
	OSStatus result =
		QDEndCGContext((CGrafPtr) portObj->fields[0],
		               (CGContextRef*) &contextObj->fields[0]);
	return BuildInt_(result);
}


obj_ erase_rect_co___Carbon__QuickDraw(obj_ rectObj)
{
	Rect rect;
	SetRect(&rect, IntValue_(rectObj->fields[1]), IntValue_(rectObj->fields[0]),
	        IntValue_(rectObj->fields[3]), IntValue_(rectObj->fields[2]));
	EraseRect(&rect);
}


obj_ paint_rect_co___Carbon__QuickDraw(obj_ rectObj)
{
	Rect rect;
	SetRect(&rect, IntValue_(rectObj->fields[1]), IntValue_(rectObj->fields[0]),
	        IntValue_(rectObj->fields[3]), IntValue_(rectObj->fields[2]));
	PaintRect(&rect);
}


