#include "Trylon_.h"
#include <Carbon/Carbon.h>

extern obj_ value_for_symbol__Carbon__EventManager(obj_ symbol);

#define carbonEvent	((EventRef) this_->fields[0])

typedef struct {
	obj_  	symbol;
	UInt32	value;
} UInt32Spec;

typedef struct {
	UInt32     	eventClass;
	UInt32Spec*	kindSpecs;
} ClassSpec;

UsingSym_(mouse_down)    UsingSym_(mouse_up)  UsingSym_(mouse_moved)
UsingSym_(mouse_dragged) UsingSym_(mouse_entered)  UsingSym_(mouse_exited)
UsingSym_(mouse_wheel_moved)
static UInt32Spec mouseEventSpecs[] = {
	{ Sym_(mouse_down), kEventMouseDown },
	{ Sym_(mouse_up), kEventMouseUp },
	{ Sym_(mouse_moved), kEventMouseMoved },
	{ Sym_(mouse_dragged), kEventMouseDragged },
	{ Sym_(mouse_entered), kEventMouseEntered },
	{ Sym_(mouse_exited), kEventMouseExited },
	{ Sym_(mouse_wheel_moved), kEventMouseWheelMoved },
	{ NULL, 0 }
};

static UInt32Spec keyboardEventSpecs[] = {
	/***/
	{ NULL, 0 }
};

UsingSym_(update_active_input_area)  UsingSym_(unicode_for_key_event)
UsingSym_(offset_to_pos)  UsingSym_(pos_to_offset)
UsingSym_(show_hide_bottom_window)  UsingSym_(get_selected_text)
UsingSym_(unicode_text)
static UInt32Spec textInputEventSpecs[] = {
	{ Sym_(get_selected_text), kEventTextInputGetSelectedText },
	{ Sym_(offset_to_pos), kEventTextInputOffsetToPos },
	{ Sym_(pos_to_offset), kEventTextInputPosToOffset },
	{ Sym_(show_hide_bottom_window), kEventTextInputShowHideBottomWindow },
	{ Sym_(unicode_for_key_event), kEventTextInputUnicodeForKeyEvent },
	{ Sym_(unicode_text), kEventTextInputUnicodeText },
	{ Sym_(update_active_input_area), kEventTextInputUpdateActiveInputArea },
	{ NULL, 0 }
};

static UInt32Spec applicationEventSpecs[] = {
	/***/
	{ NULL, 0 }
};

static UInt32Spec appleEventEventSpecs[] = {
	/***/
	{ NULL, 0 }
};

static UInt32Spec menuEventSpecs[] = {
	/***/
	{ NULL, 0 }
};

UsingSym_(update)  UsingSym_(draw_content)  UsingSym_(content_click)
static UInt32Spec windowEventSpecs[] = {
	{ Sym_(update), kEventWindowUpdate },
	{ Sym_(draw_content), kEventWindowDrawContent },
	{ Sym_(content_click), kEventWindowHandleContentClick },
	/***/
	{ NULL, 0 }
};

static UInt32Spec controlEventSpecs[] = {
	/***/
	{ NULL, 0 }
};

static UInt32Spec commandEventSpecs[] = {
	/***/
	{ NULL, 0 }
};

static UInt32Spec tabletEventSpecs[] = {
	/***/
	{ NULL, 0 }
};

static UInt32Spec volumeEventSpecs[] = {
	/***/
	{ NULL, 0 }
};

static UInt32Spec appearanceEventSpecs[] = {
	/***/
	{ NULL, 0 }
};

static UInt32Spec serviceEventSpecs[] = {
	/***/
	{ NULL, 0 }
};

static UInt32Spec toolbarEventSpecs[] = {
	/***/
	{ NULL, 0 }
};

static UInt32Spec toolbarItemEventSpecs[] = {
	/***/
	{ NULL, 0 }
};

static UInt32Spec accessibilityEventSpecs[] = {
	/***/
	{ NULL, 0 }
};

static ClassSpec classSpecs[] = {
	{ kEventClassMouse, mouseEventSpecs },
	{ kEventClassKeyboard, keyboardEventSpecs },
	{ kEventClassTextInput, textInputEventSpecs },
	{ kEventClassApplication, applicationEventSpecs },
	{ kEventClassAppleEvent, appleEventEventSpecs },
	{ kEventClassMenu, menuEventSpecs },
	{ kEventClassWindow, windowEventSpecs },
	{ kEventClassControl, controlEventSpecs },
	{ kEventClassCommand, commandEventSpecs },
	{ kEventClassTablet, tabletEventSpecs },
	{ kEventClassVolume, volumeEventSpecs },
	{ kEventClassAppearance, appearanceEventSpecs },
	{ kEventClassService, serviceEventSpecs },
	{ kEventClassToolbar, toolbarEventSpecs },
	{ kEventClassToolbarItem, toolbarItemEventSpecs },
	{ kEventClassAccessibility, accessibilityEventSpecs },
	{ 0, NULL }
};


UsingSym_(primary)  UsingSym_(secondary)  UsingSym_(tertiary)
static UInt32Spec mouseButtonSpecs[] = {
	{ Sym_(primary), kEventMouseButtonPrimary },
	{ Sym_(secondary), kEventMouseButtonSecondary },
	{ Sym_(tertiary), kEventMouseButtonTertiary },
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


static int ParamValue(obj_ parameter)
{
	extern obj_ four_char_value__Carbon__EventManager(obj_);

	return IntValue_(four_char_value__Carbon__EventManager(parameter));
}



obj_ create_co_kind_co___Carbon__EventManager__Event(
	obj_ this_, obj_ event_class, obj_ kind)
{
	OSStatus result;

	result =
		CreateEvent(NULL, ParamValue(event_class), ParamValue(kind), 0,
	            	kEventAttributeNone, (EventRef*) &this_->fields[0]);
	return NULL;
}


obj_ release__Carbon__EventManager__Event(obj_ this_)
{
	ReleaseEvent(carbonEvent);
	return NULL;
}


obj_ type__Carbon__EventManager__Event(obj_ this_)
{
	obj_ sym, start, stopper;
	byte_ptr_ stringText;
	extern obj_ new_co_to_co___Standard__String(obj_, obj_);

	/* Find the specs. */
	ClassSpec* classSpec = classSpecs;
	UInt32 eventClass = GetEventClass(carbonEvent);
	UInt32 kind = GetEventKind(carbonEvent);
	for (; classSpec->kindSpecs; ++classSpec) {
		if (classSpec->eventClass == eventClass)
			break;
		}

	/* See if there's a symbol */
	if (classSpec->kindSpecs) {
		sym = SymForValue(kind, classSpec->kindSpecs);
		if (sym)
			return sym;
		}

	/* If we don't know it, just return the kind as a String. */
	stringText = Allocate_(4);
	memcpy(stringText, &kind, 4);
	start = BuildBytePtr_(stringText);
	stopper = BuildBytePtr_(stringText + 4);
	return new_co_to_co___Standard__String(start, stopper);
}


obj_ event_class__Carbon__EventManager__Event(obj_ this_)
{
	return BuildInt_(GetEventClass(carbonEvent));
}


obj_ kind__Carbon__EventManager__Event(obj_ this_)
{
	return BuildInt_(GetEventKind(carbonEvent));
}


obj_ uint_parameter_co___Carbon__EventManager__Event(obj_ this_, obj_ parameter)
{
	UInt32 value;
	OSStatus result;

	result =
		GetEventParameter(carbonEvent, ParamValue(parameter), typeUInt32, NULL,
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
		GetEventParameter(carbonEvent, ParamValue(parameter), typeQDPoint, NULL,
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
		GetEventParameter(carbonEvent, ParamValue(parameter), typeQDRectangle, NULL,
		                  sizeof(Rect), NULL, &value);
	if (result != noErr)
		return NULL;
	return
		new_co_top_co_right_co_bottom_co___Standard__Rectangle(
			BuildInt_(value.left), BuildInt_(value.top),
			BuildInt_(value.right), BuildInt_(value.bottom));
}


obj_ mouse_button_parameter_co___Carbon__EventManager__Event(
	obj_ this_, obj_ parameter)
{
	EventMouseButton button;
	OSStatus result;

	result =
		GetEventParameter(carbonEvent, ParamValue(parameter), typeMouseButton, NULL,
		                  sizeof(EventMouseButton), NULL, &button);
	if (result != noErr)
		return NULL;
	return SymForValue(button, mouseButtonSpecs);
}


obj_ unicode_text_parameter_co___Carbon__EventManager__Event(
	obj_ this_, obj_ parameter)
{
	#define maxUnicodeTextSize 64
	UniChar unichars[maxUnicodeTextSize];
	UInt32 size, numUnichars;
	CFStringRef cfString;
	char* buffer;
	obj_ resultStr;
	OSStatus result;
	extern obj_ new_co_to_co___Standard__String(obj_, obj_);

	/* Get the text */
	result =
		GetEventParameter(carbonEvent, ParamValue(parameter), typeUnicodeText, NULL,
		                  maxUnicodeTextSize, &size, unichars);
	if (result != noErr)
		return NULL;

	/* Convert to UTF8 */
	numUnichars = size / sizeof(UniChar);
	cfString =
		CFStringCreateWithCharacters(NULL, unichars, numUnichars);
	buffer = Allocate_(maxUnicodeTextSize);
	CFStringGetBytes(cfString, CFRangeMake(0, numUnichars), kCFStringEncodingUTF8,
	                 0, false, buffer, maxUnicodeTextSize, &size);

	/* Build the result string */
	resultStr =
		new_co_to_co___Standard__String(
			BuildBytePtr_(buffer), BuildBytePtr_(buffer + size));
	return resultStr;
}


obj_ target_co___Carbon__EventManager__Event(obj_ this_, obj_ target)
{
	EventTargetRef targetRef;
	OSStatus result;
	UsingMethod_(event_target)

	targetRef = (EventTargetRef) BytePtrValue_(Call_(event_target, target));
	result =
		SetEventParameter(carbonEvent, kEventParamPostTarget, typeEventTargetRef,
		                  sizeof(EventTargetRef), &targetRef);
	return BuildInt_(result);
}


/*
	Copyright 2005 - 2007 Steve Folta.
	See the License file.
*/


