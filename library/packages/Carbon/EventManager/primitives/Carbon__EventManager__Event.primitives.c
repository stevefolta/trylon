#include "Trylon_.h"
#include <Carbon/Carbon.h>

#define carbonEvent	((EventRef) this_->fields[0])

typedef struct {
	obj_  	symbol;
	UInt32	value;
} UInt32Spec;

UsingSym_(draw_content)
UsingSym_(mouse_down)
static UInt32Spec eventKindSpecs[] = {
	{ Sym_(draw_content), kEventWindowDrawContent },
	{ Sym_(mouse_down), kEventMouseDown },
	{ NULL, 0 }
};


static obj_ SymForValue(UInt32 value, UInt32Spec* specs)
{
	UInt32Spec* spec = specs;
	for (; spec->symbol; ++spec) {
		if (spec->value == value)
			return spec->symbol;
		}
	return NULL;
}


obj_ event_class__Carbon__EventManager__Event(obj_ this_)
{
	return BuildInt_(GetEventClass(carbonEvent));
}


obj_ kind__Carbon__EventManager__Event(obj_ this_)
{
	return SymForValue(GetEventKind(carbonEvent), eventKindSpecs);
}


obj_ uint_parameter_co___Carbon__EventManager__Event(obj_ this_, obj_ parameter)
{
	UInt32 value;
	OSStatus result;

	result =
		GetEventParameter(carbonEvent, IntValue_(parameter), typeUInt32, NULL,
		                  sizeof(UInt32), NULL, &value);
	if (result != noErr)
		return NULL;
	return BuildInt_(value);
}


obj_ point_parameter_co___Carbon__EventManager__Event(obj_ this_, obj_ parameter)
{
	Point value;
	obj_ pointObj;
	OSStatus result;
	extern obj_ new_co_y_co___Standard__Point(obj_, obj_);

	result =
		GetEventParameter(carbonEvent, IntValue_(parameter), typeQDPoint, NULL,
		                  sizeof(Point), NULL, &value);
	if (result != noErr)
		return NULL;
	return new_co_y_co___Standard__Point(BuildInt_(value.h), BuildInt_(value.v));
}


obj_ rect_parameter_co___Carbon__EventManager__Event(obj_ this_, obj_ parameter)
{
	Rect value;
	obj_ rectObj;
	OSStatus result;
	extern obj_ new_co_top_co_right_co_bottom_co___Standard__Rectangle(obj_, obj_, obj_, obj_);

	result =
		GetEventParameter(carbonEvent, IntValue_(parameter), typeQDRectangle, NULL,
		                  sizeof(Rect), NULL, &value);
	if (result != noErr)
		return NULL;
	return
		new_co_top_co_right_co_bottom_co___Standard__Rectangle(
			BuildInt_(value.left), BuildInt_(value.top),
			BuildInt_(value.right), BuildInt_(value.bottom));
}


