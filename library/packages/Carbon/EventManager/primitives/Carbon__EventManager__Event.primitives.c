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

static UInt32Spec textInputEventSpecs[] = {
	/***/
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


obj_ type__Carbon__EventManager__Event(obj_ this_)
{
	/* Find the specs. */
	ClassSpec* classSpec = classSpecs;
	UInt32 eventClass = GetEventClass(carbonEvent);
	UInt32 kind = GetEventKind(carbonEvent);
	for (; classSpec->kindSpecs; ++classSpec) {
		if (classSpec->eventClass == eventClass)
			break;
		}
	if (classSpec == NULL)
		return NULL;

	return SymForValue(kind, classSpec->kindSpecs);
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

	/* Allow symbols for the parameter */
	if (parameter->class_ == (obj_) &Standard__Symbol)
		parameter = value_for_symbol__Carbon__EventManager(parameter);

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

	/* Allow symbols for the parameter */
	if (parameter->class_ == (obj_) &Standard__Symbol)
		parameter = value_for_symbol__Carbon__EventManager(parameter);

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

	/* Allow symbols for the parameter */
	if (parameter->class_ == (obj_) &Standard__Symbol)
		parameter = value_for_symbol__Carbon__EventManager(parameter);

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


