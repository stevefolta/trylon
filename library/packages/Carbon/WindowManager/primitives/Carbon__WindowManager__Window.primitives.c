/* WindowManager primitives */

#include "Trylon_.h"
#include <Carbon/Carbon.h>

extern obj_ allocate_object_co___Standard__Implementation(obj_);
extern class_spec_ Standard__Rectangle;


#define CarbonWindow(obj) ((WindowRef) obj->fields[0])

static EventHandlerUPP eventHandlerUPP = NULL;

/* Window attributes */
UsingSym_(no_attributes)
UsingSym_(close_box)
UsingSym_(horizontal_zoom)
UsingSym_(vertical_zoom)
UsingSym_(full_zoom)
UsingSym_(collapse_box)
UsingSym_(resizable)
UsingSym_(side_titlebar)
UsingSym_(toolbar_button)
UsingSym_(metal)
UsingSym_(no_updates)
UsingSym_(no_activates)
UsingSym_(opaque_for_events)
UsingSym_(compositing)
UsingSym_(no_shadow)
UsingSym_(hide_on_suspend)
UsingSym_(standard_handler)
UsingSym_(hide_on_full_screen)
UsingSym_(in_window_menu)
UsingSym_(live_resize)
UsingSym_(ignore_clicks)
UsingSym_(no_constrain)
UsingSym_(standard_document_attributes)
UsingSym_(standard_floating_attributes)
static struct {
	obj_            	symbol;
	WindowAttributes	attributes;
} attributeSpecs[] = {
	{ Sym_(no_attributes), kWindowNoAttributes },
	{ Sym_(close_box), kWindowCloseBoxAttribute },
	{ Sym_(horizontal_zoom), kWindowHorizontalZoomAttribute },
	{ Sym_(vertical_zoom), kWindowVerticalZoomAttribute },
	{ Sym_(full_zoom), kWindowFullZoomAttribute },
	{ Sym_(collapse_box), kWindowCollapseBoxAttribute },
	{ Sym_(resizable), kWindowResizableAttribute },
	{ Sym_(side_titlebar), kWindowSideTitlebarAttribute },
	{ Sym_(toolbar_button), kWindowToolbarButtonAttribute },
	{ Sym_(metal), kWindowMetalAttribute },
	{ Sym_(no_updates), kWindowNoUpdatesAttribute },
	{ Sym_(no_activates), kWindowNoActivatesAttribute },
	{ Sym_(opaque_for_events), kWindowOpaqueForEventsAttribute },
	{ Sym_(compositing), kWindowCompositingAttribute },
	{ Sym_(no_shadow), kWindowNoShadowAttribute },
	{ Sym_(hide_on_suspend), kWindowHideOnSuspendAttribute },
	{ Sym_(standard_handler), kWindowStandardHandlerAttribute },
	{ Sym_(hide_on_full_screen), kWindowHideOnFullScreenAttribute },
	{ Sym_(in_window_menu), kWindowInWindowMenuAttribute },
	{ Sym_(live_resize), kWindowLiveResizeAttribute },
	{ Sym_(ignore_clicks), kWindowIgnoreClicksAttribute },
	{ Sym_(no_constrain), kWindowNoConstrainAttribute },
	{ Sym_(standard_document_attributes), kWindowStandardDocumentAttributes },
	{ Sym_(standard_floating_attributes), kWindowStandardFloatingAttributes },
	{ NULL, 0 }
};


static pascal OSStatus WindowEventHandler(EventHandlerCallRef nextHandler,
                                          EventRef event, void* userData)
{
	extern MethodSpec_ handle_event__methods[];

	Call_(handle_event, ((obj_) userData));
	return noErr; 	/***/
}


obj_ create_co_attributes_co___Carbon__WindowManager__Window(obj_ this_, obj_ content_rect, obj_ attributes)
{
	obj_ iterator, attribute;
	int index;
	Rect contentRect;
	WindowRef carbonWindow;
	WindowAttributes windowAttrs;
	OSStatus result;
	DefineInt_(1, 1)
	extern MethodSpec_
		left__methods[], top__methods[], right__methods[], bottom__methods[],
		iterator__methods[], is_done__methods[], current_item__methods[], go_forward__methods[];
	extern obj_ allocate_object_co_with_extra_slots_co___Standard__Implementation(obj_, obj_);
	extern class_spec_ Carbon__WindowManager__Window;
	EventTypeSpec typeList[] = {
		{ kEventClassWindow, kEventWindowDrawContent }
		};

	/* Get the attributes */
	windowAttrs = kWindowNoAttributes;
	iterator = Call_(iterator, attributes);
	while (1) {
		if (!_Test_(Call_(is_done, iterator)))
			break;
		attribute = Call_(current_item, iterator);
		for (index = 0; ; ++index) {
			if (attributeSpecs[index].symbol == attribute) {
				windowAttrs |= attributeSpecs[index].attributes;
				break;
			if (attributeSpecs[index].symbol == NULL)
				break;
				}
			}
		Call_(go_forward, iterator);
		}

	/* Create the window */
	contentRect.left = IntValue_(Call_(left, content_rect));
	contentRect.top = IntValue_(Call_(top, content_rect));
	contentRect.right = IntValue_(Call_(right, content_rect));
	contentRect.bottom = IntValue_(Call_(bottom, content_rect));
	result =
		CreateNewWindow(kDocumentWindowClass, windowAttrs, &contentRect,
		                &carbonWindow);
	this_->fields[0] = (obj_) carbonWindow;

	/* Install the event handler */
	if (eventHandlerUPP == NULL)
		eventHandlerUPP = NewEventHandlerUPP(WindowEventHandler);
	result =
	InstallWindowEventHandler(carbonWindow, eventHandlerUPP,
	                          sizeof(typeList) / sizeof(EventTypeSpec), typeList,
	                          this_, NULL);
}


obj_ show__Carbon__WindowManager__Window(obj_ this_)
{
	ShowWindow(CarbonWindow(this_));
}


obj_ port_bounds__Carbon__WindowManager__Window(obj_ this_)
{
	Rect rect;
	obj_ rectObj =
		allocate_object_co___Standard__Implementation((obj_) &Standard__Rectangle);
	GetWindowPortBounds(CarbonWindow(this_), &rect);
	rectObj->fields[0] = BuildInt_(rect.left);
	rectObj->fields[1] = BuildInt_(rect.top);
	rectObj->fields[2] = BuildInt_(rect.right);
	rectObj->fields[3] = BuildInt_(rect.bottom);
	return rectObj;
}


