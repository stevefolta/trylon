/* WindowManager primitives */

#include "Trylon_.h"
#include <Carbon/Carbon.h>


#define CarbonWindow(obj) ((WindowRef) obj->fields[0])

obj_ new_co___Carbon__WindowManager__Window(obj_ content_rect)
{
	obj_ windObj;
	Rect contentRect;
	WindowRef carbonWindow;
	WindowAttributes windowAttrs;
	OSStatus result;
	DefineInt_(1, 1)
	extern MethodSpec_ left__methods[], top__methods[], right__methods[], bottom__methods[];
	extern obj_ allocate_object_co_with_extra_slots_co___Standard__Implementation(obj_, obj_);
	extern class_spec_ Carbon__WindowManager__Window;

	/* Allocate the object */
	windObj =
		allocate_object_co_with_extra_slots_co___Standard__Implementation(
			(obj_) &Carbon__WindowManager__Window, Int_(1));

	/* Create the window */
	contentRect.left = IntValue_(Call_(left, content_rect));
	contentRect.top = IntValue_(Call_(top, content_rect));
	contentRect.right = IntValue_(Call_(right, content_rect));
	contentRect.bottom = IntValue_(Call_(bottom, content_rect));
	windowAttrs =
		kWindowStandardDocumentAttributes | kWindowStandardHandlerAttribute |
		kWindowInWindowMenuAttribute;
	result =
		CreateNewWindow(kDocumentWindowClass, windowAttrs, &contentRect,
		                &carbonWindow);
	windObj->fields[0] = (obj_) carbonWindow;

	return windObj;
}


obj_ show__Carbon__WindowManager__Window(obj_ this_)
{
	ShowWindow(CarbonWindow(this_));
}


