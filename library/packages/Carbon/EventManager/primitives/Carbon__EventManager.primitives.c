#include "Trylon_.h"
#include <Carbon/Carbon.h>

UsingSym_(mouse)  UsingSym_(keyboard)  UsingSym_(text_input)
UsingSym_(application)  UsingSym_(apple_event)  UsingSym_(menu)
UsingSym_(window)  UsingSym_(control)  UsingSym_(command)  UsingSym_(tablet)
UsingSym_(volume)  UsingSym_(appearance)  UsingSym_(service)
UsingSym_(toolbar)  UsingSym_(toolbar_item)  UsingSym_(accessibility)
UsingSym_(draw_content)  UsingSym_(update)  UsingSym_(content_click)
UsingSym_(mouse_down)  UsingSym_(mouse_up)  UsingSym_(mouse_moved)
UsingSym_(mouse_dragged)  UsingSym_(mouse_entered)  UsingSym_(mouse_exited)
UsingSym_(mouse_wheel_moved)
UsingSym_(mouse_location)  UsingSym_(mouse_button)  UsingSym_(key_modifiers)
UsingSym_(click_count)  UsingSym_(window_mouse_location)
UsingSym_(update_active_input_area)  UsingSym_(unicode_for_key_event)
UsingSym_(offset_to_pos)  UsingSym_(pos_to_offset)
UsingSym_(show_hide_bottom_window)  UsingSym_(get_selected_text)
UsingSym_(unicode_text)  UsingSym_(send_text)
struct Carbon__EventManager__ValueSpec {
	obj_  	symbol;
	UInt32	value;
};

/* KEEP THIS SORTED! */
static struct Carbon__EventManager__ValueSpec valueSpecs[] = {
	{ Sym_(accessibility), kEventClassAccessibility },
	{ Sym_(appearance), kEventClassAppearance },
	{ Sym_(apple_event), kEventClassAppleEvent },
	{ Sym_(application), kEventClassApplication },
	{ Sym_(click_count), kEventParamClickCount },
	{ Sym_(command), kEventClassCommand },
	{ Sym_(content_click), kEventWindowHandleContentClick },
	{ Sym_(control), kEventClassControl },
	{ Sym_(draw_content), kEventWindowDrawContent },
	{ Sym_(get_selected_text), kEventTextInputGetSelectedText },
	{ Sym_(key_modifiers), kEventParamKeyModifiers },
	{ Sym_(keyboard), kEventClassKeyboard },
	{ Sym_(menu), kEventClassMenu },
	{ Sym_(mouse), kEventClassMouse },
	{ Sym_(mouse_button), kEventParamMouseButton },
	{ Sym_(mouse_down), kEventMouseDown },
	{ Sym_(mouse_dragged), kEventMouseDragged },
	{ Sym_(mouse_entered), kEventMouseEntered },
	{ Sym_(mouse_exited), kEventMouseExited },
	{ Sym_(mouse_location), kEventParamMouseLocation },
	{ Sym_(mouse_moved), kEventMouseMoved },
	{ Sym_(mouse_up), kEventMouseUp },
	{ Sym_(mouse_wheel_moved), kEventMouseWheelMoved },
	{ Sym_(offset_to_pos), kEventTextInputOffsetToPos },
	{ Sym_(pos_to_offset), kEventTextInputPosToOffset },
	{ Sym_(send_text), kEventParamTextInputSendText },
	{ Sym_(service), kEventClassService },
	{ Sym_(show_hide_bottom_window), kEventTextInputShowHideBottomWindow },
	{ Sym_(tablet), kEventClassTablet },
	{ Sym_(text_input), kEventClassTextInput },
	{ Sym_(toolbar), kEventClassToolbar },
	{ Sym_(toolbar_item), kEventClassToolbarItem },
	{ Sym_(unicode_for_key_event), kEventTextInputUnicodeForKeyEvent },
	{ Sym_(unicode_text), kEventTextInputUnicodeText },
	{ Sym_(update), kEventWindowUpdate },
	{ Sym_(update_active_input_area), kEventTextInputUpdateActiveInputArea },
	{ Sym_(volume), kEventClassVolume },
	{ Sym_(window), kEventClassWindow },
	{ Sym_(window_mouse_location), kEventParamWindowMouseLocation }
};
#define numValueSpecs 	\
	(sizeof(valueSpecs) / sizeof(struct Carbon__EventManager__ValueSpec))


typedef struct {
	obj_  	symbol;
	UInt32	value;
} UInt32Spec;

static obj_ SymForValue(UInt32 value, UInt32Spec* specs)
{
	UInt32Spec* spec = specs;
	for (; spec->symbol; ++spec) {
		if (spec->value == value)
			return spec->symbol;
		}
	return NULL;
}


obj_ event_not_handled__Carbon__EventManager(void)
{
	return BuildInt_(eventNotHandledErr);
}


obj_ run_application_event_loop__Carbon__EventManager(void)
{
	RunApplicationEventLoop();
	return NULL;
}


obj_ track_mouse_location_co___Carbon__EventManager(obj_ port)
{
	GrafPtr qdPort;
	Point mousePoint;
	MouseTrackingResult result;
	obj_ pointObj, resultObj;
	OSStatus status;
	UsingMethod_(track_result_co_)
	UsingMethod_(point_co_)
	extern obj_ new_co_y_co___Standard__Point(obj_, obj_);
	extern obj_ allocate_object_co___Standard__Implementation(obj_);
	extern class_spec_ Carbon__EventManager__MouseTrackingResult;

	UsingSym_(key_modifiers_changed)  UsingSym_(user_cancelled)
	UsingSym_(timed_out)
	static UInt32Spec trackingResultSpecs[] = {
		{ Sym_(mouse_down), kMouseTrackingMouseDown },
		{ Sym_(mouse_up), kMouseTrackingMouseUp },
		{ Sym_(mouse_exited), kMouseTrackingMouseExited },
		{ Sym_(mouse_entered), kMouseTrackingMouseEntered },
		{ Sym_(mouse_dragged), kMouseTrackingMouseDragged },
		{ Sym_(key_modifiers_changed), kMouseTrackingKeyModifiersChanged },
		{ Sym_(user_cancelled), kMouseTrackingUserCancelled },
		{ Sym_(timed_out), kMouseTrackingTimedOut },
		{ Sym_(mouse_moved), kMouseTrackingMouseMoved },
		{ NULL, 0 }
	};

	if (port == NULL)
		qdPort = NULL;
	else
		qdPort = (GrafPtr) port->fields[0];

	status = TrackMouseLocation(qdPort, &mousePoint, &result);
	if (status != noErr)
		return NULL;
	pointObj =
		new_co_y_co___Standard__Point(
			BuildInt_(mousePoint.h), BuildInt_(mousePoint.v));
	resultObj =
		allocate_object_co___Standard__Implementation(
			(obj_) &Carbon__EventManager__MouseTrackingResult);
	Call_(track_result_co_, resultObj, SymForValue(result, trackingResultSpecs));
	Call_(point_co_, resultObj, pointObj);
	return resultObj;
}


obj_ post_event_to_current_queue_co___Carbon__EventManager(obj_ event)
{
	OSStatus result;

	result =
		PostEventToQueue(GetCurrentEventQueue(), (EventRef) event->fields[0],
	                	 kEventPriorityStandard);
	return BuildInt_(result);
}



obj_ value_for_symbol__Carbon__EventManager(obj_ symbol)
{
	/* Use a binary search */
	int low, mid, high;
	obj_ curSymbol;
	low = 0;
	high = numValueSpecs - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		curSymbol = valueSpecs[mid].symbol;
		if (symbol < curSymbol)
			high = mid - 1;
		else if (symbol > curSymbol)
			low = mid + 1;
		else
			return BuildInt_(valueSpecs[mid].value);
		}

	return NULL;
}


obj_ four_char_value__Carbon__EventManager(obj_ value)
{
	UsingMethod_(length)  UsingMethod_(start)

	if (value->class_ == (obj_) &Standard__Symbol)
		value = value_for_symbol__Carbon__EventManager(value);

	else if (value->class_ == (obj_) &Standard__String) {
		int length = IntValue_(Call_(length, value));
		if (length == 4) {
			int intValue = 0;
			char* p = BytePtrValue_(Call_(start, value));
			for (; length > 0; --length) {
				intValue <<= 8;
				intValue |= *p++;
				}
			value = BuildInt_(intValue);
			}
		}

	else if (value->class_ != (obj_) &Standard__Int)
		return NULL;

	return value;
}


