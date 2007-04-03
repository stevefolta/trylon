/* Xlib__Display.primitives.c */

#include "Trylon_.h"
#include <X11/Xutil.h>
#include <X11/keysym.h>


#define xdisplay 	((Display*) this_->fields[0])

extern obj_ XEventObjectFor(XEvent* rawEvent, obj_ display);

extern obj_
	class_initialized__Xlib__Display,
	button_1_motion_event_mask__Xlib__Display,
	button_2_motion_event_mask__Xlib__Display,
	button_3_motion_event_mask__Xlib__Display,
	button_4_motion_event_mask__Xlib__Display,
	button_5_motion_event_mask__Xlib__Display,
	button_motion_event_mask__Xlib__Display,
	button_press_event__Xlib__Display,
	button_press_event_mask__Xlib__Display,
	button_release_event__Xlib__Display,
	button_release_event_mask__Xlib__Display,
	client_message_event__Xlib__Display,
	configure_notify_event__Xlib__Display,
	configure_notify_event_mask__Xlib__Display,
	control_key__Xlib__Display,
	down_arrow_key__Xlib__Display,
	end_key__Xlib__Display,
	expose_event__Xlib__Display,
	expose_event_mask__Xlib__Display,
	home_key__Xlib__Display,
	key_press_event__Xlib__Display,
	key_press_event_mask__Xlib__Display,
	key_release_event__Xlib__Display,
	key_release_event_mask__Xlib__Display,
	left_arrow_key__Xlib__Display,
	lock_key__Xlib__Display,
	mod_1_key__Xlib__Display,
	mod_2_key__Xlib__Display,
	mod_3_key__Xlib__Display,
	mod_4_key__Xlib__Display,
	mod_5_key__Xlib__Display,
	motion_notify_event__Xlib__Display,
	page_down_key__Xlib__Display,
	page_up_key__Xlib__Display,
	pointer_motion_event_mask__Xlib__Display,
	pointer_motion_hint_mask__Xlib__Display,
	primary_mouse_button__Xlib__Display,
	right_arrow_key__Xlib__Display,
	secondary_mouse_button__Xlib__Display,
	shift_key__Xlib__Display,
	tertiary_mouse_button__Xlib__Display,
	up_arrow_key__Xlib__Display;


obj_ create__Xlib__Display(obj_ this_)
{
	extern obj_ new__Standard__List();

	this_->fields[0] = (obj_) XOpenDisplay(NULL);
	this_->fields[1] = new__Standard__List();

	if (!Test_(class_initialized__Xlib__Display)) {
		expose_event__Xlib__Display = BuildInt_(Expose);
		button_press_event__Xlib__Display = BuildInt_(ButtonPress);
		button_release_event__Xlib__Display = BuildInt_(ButtonRelease);
		key_press_event__Xlib__Display = BuildInt_(KeyPress);
		key_release_event__Xlib__Display = BuildInt_(KeyRelease);
		motion_notify_event__Xlib__Display = BuildInt_(MotionNotify);
		configure_notify_event__Xlib__Display = BuildInt_(ConfigureNotify);
		client_message_event__Xlib__Display = BuildInt_(ClientMessage);

		expose_event_mask__Xlib__Display = BuildInt_(ExposureMask);
		button_press_event_mask__Xlib__Display = BuildInt_(ButtonPressMask);
		button_release_event_mask__Xlib__Display = BuildInt_(ButtonReleaseMask);
		key_press_event_mask__Xlib__Display = BuildInt_(KeyPressMask);
		key_release_event_mask__Xlib__Display = BuildInt_(KeyReleaseMask);
		configure_notify_event_mask__Xlib__Display = BuildInt_(StructureNotifyMask);
		pointer_motion_event_mask__Xlib__Display = BuildInt_(PointerMotionMask);
		button_1_motion_event_mask__Xlib__Display = BuildInt_(Button1MotionMask);
		button_2_motion_event_mask__Xlib__Display = BuildInt_(Button2MotionMask);
		button_3_motion_event_mask__Xlib__Display = BuildInt_(Button3MotionMask);
		button_4_motion_event_mask__Xlib__Display = BuildInt_(Button4MotionMask);
		button_5_motion_event_mask__Xlib__Display = BuildInt_(Button5MotionMask);
		button_motion_event_mask__Xlib__Display = BuildInt_(ButtonMotionMask);
		pointer_motion_hint_mask__Xlib__Display = BuildInt_(PointerMotionHintMask);

		page_up_key__Xlib__Display = BuildChar_(XK_Page_Up);
		page_down_key__Xlib__Display = BuildChar_(XK_Page_Down);
		home_key__Xlib__Display = BuildChar_(XK_Home);
		end_key__Xlib__Display = BuildChar_(XK_End);
		up_arrow_key__Xlib__Display = BuildChar_(XK_Up);
		down_arrow_key__Xlib__Display = BuildChar_(XK_Down);
		left_arrow_key__Xlib__Display = BuildChar_(XK_Left);
		right_arrow_key__Xlib__Display = BuildChar_(XK_Right);

		primary_mouse_button__Xlib__Display = BuildInt_(Button1Mask);
		secondary_mouse_button__Xlib__Display = BuildInt_(Button2Mask);
		tertiary_mouse_button__Xlib__Display = BuildInt_(Button3Mask);
		shift_key__Xlib__Display = BuildInt_(ShiftMask);
		lock_key__Xlib__Display = BuildInt_(LockMask);
		control_key__Xlib__Display = BuildInt_(ControlMask);
		mod_1_key__Xlib__Display = BuildInt_(Mod1Mask);
		mod_2_key__Xlib__Display = BuildInt_(Mod2Mask);
		mod_3_key__Xlib__Display = BuildInt_(Mod3Mask);
		mod_4_key__Xlib__Display = BuildInt_(Mod4Mask);
		mod_5_key__Xlib__Display = BuildInt_(Mod5Mask);

		class_initialized__Xlib__Display = true__Standard;
		}

	return NULL;
}


obj_ close__Xlib__Display(obj_ this_)
{
	if (xdisplay)
		XCloseDisplay(xdisplay);
	this_->fields[0] = NULL;

	return NULL;
}


obj_ default_screen__Xlib__Display(obj_ this_)
{
	return BuildInt_(DefaultScreen(xdisplay));
}


obj_ width__Xlib__Display(obj_ this_)
{
	return BuildInt_(DisplayWidth(xdisplay, DefaultScreen(xdisplay)));
}


obj_ height__Xlib__Display(obj_ this_)
{
	return BuildInt_(DisplayHeight(xdisplay, DefaultScreen(xdisplay)));
}


obj_ white_pixel__Xlib__Display(obj_ this_)
{
	return BuildInt_(WhitePixel(xdisplay, DefaultScreen(xdisplay)));
}


obj_ black_pixel__Xlib__Display(obj_ this_)
{
	return BuildInt_(BlackPixel(xdisplay, DefaultScreen(xdisplay)));
}


obj_ depth__Xlib__Display(obj_ this_)
{
	return BuildInt_(DefaultDepth(xdisplay, DefaultScreen(xdisplay)));
}


obj_ flush__Xlib__Display(obj_ this_)
{
	XFlush(xdisplay);
	return NULL;
}


obj_ sync__Xlib__Display(obj_ this_)
{
	XSync(xdisplay, False);
	return NULL;
}


obj_ next_event__Xlib__Display(obj_ this_)
{
	XEvent rawEvent;
	XNextEvent(xdisplay, &rawEvent);
	return XEventObjectFor(&rawEvent, this_);
}


obj_ check_mask_event_co___Xlib__Display(obj_ this_, obj_ event_mask)
{
	XEvent rawEvent;
	Bool found = XCheckMaskEvent(xdisplay, IntValue_(event_mask), &rawEvent);
	if (!found)
		return NULL;
	return XEventObjectFor(&rawEvent, this_);
}


obj_ send_event_to_co_propagate_co_event_mask_co_event_co___Xlib__Display(
	obj_ this_, obj_ window, obj_ propagate, obj_ event_mask, obj_ event)
{
	XEvent xEvent;
	Window xwind = IntValue_(window->fields[1]);
	obj_ data;
	UsingMethod_(type)
	UsingMethod_(data_0) UsingMethod_(data_1) UsingMethod_(data_2)
	UsingMethod_(data_3) UsingMethod_(data_4)

	xEvent.xclient.type = IntValue_(Call_(type, event));
	xEvent.xclient.window = xwind;
	xEvent.xclient.format = 32;
	data = Call_(data_0, event);
	xEvent.xclient.data.l[0] = (data ? (long) BytePtrValue_(data) : 0);
	data = Call_(data_1, event);
	xEvent.xclient.data.l[1] = (data ? (long) BytePtrValue_(data) : 0);
	data = Call_(data_2, event);
	xEvent.xclient.data.l[2] = (data ? (long) BytePtrValue_(data) : 0);
	data = Call_(data_3, event);
	xEvent.xclient.data.l[3] = (data ? IntValue_(data) : 0);
	data = Call_(data_4, event);
	xEvent.xclient.data.l[4] = (data ? IntValue_(data) : 0);
	XSendEvent(xdisplay, xwind, Test_(propagate), IntValue_(event_mask), &xEvent);
	return NULL;
}


obj_ alloc_named_color_co___Xlib__Display(obj_ this_, obj_ color_name)
{
	char* colorName = MakeCString_(color_name);
	Colormap colormap = DefaultColormap(xdisplay, DefaultScreen(xdisplay));
	XColor screenColor, exactColor;
	XAllocNamedColor(xdisplay, colormap, colorName, &screenColor, &exactColor);
	return BuildInt_(screenColor.pixel);
}


obj_ alloc_color_red_co_green_co_blue_co___Xlib__Display(obj_ this_, obj_ red, obj_ green, obj_ blue)
{
	XColor color;
	Colormap colormap;

	color.red = IntValue_(red);
	color.green = IntValue_(green);
	color.blue = IntValue_(blue);
	color.flags = DoRed | DoGreen | DoBlue;
	colormap = DefaultColormap(xdisplay, DefaultScreen(xdisplay));
	XAllocColor(xdisplay, colormap, &color);
	return BuildInt_(color.pixel);
}


obj_ mouse_buttons__Xlib__Display(obj_ this_)
{
	Window rootWindow, childWindow;
	int rootX, rootY, winX, winY;
	unsigned int mask;
	Bool onSameScreen =
		XQueryPointer(xdisplay, DefaultRootWindow(xdisplay),
		              &rootWindow, &childWindow,
		              &rootX, &rootY, &winX, &winY, &mask);
	return BuildInt_(mask);
}


obj_ auto_repeat__Xlib__Display(obj_ this_)
{
	XKeyboardState keyboardState;
	XGetKeyboardControl(xdisplay, &keyboardState);
	if (keyboardState.global_auto_repeat == AutoRepeatModeOn)
		return true__Standard;
	else
		return false__Standard;
}


obj_ auto_repeat_co___Xlib__Display(obj_ this_, obj_ enable)
{
	if (Test_(enable))
		XAutoRepeatOn(xdisplay);
	else
		XAutoRepeatOff(xdisplay);
	return NULL;
}


obj_ intern_atom_co_only_if_exists_co___Xlib__Display(
	obj_ this_, obj_ name, obj_ only_if_exists)
{
	return
		BuildInt_(XInternAtom(xdisplay, MakeCString_(name), Test_(only_if_exists)));
}


obj_ is_modifier_key_co___Xlib__Display(obj_ this_, obj_ keyObj)
{
	int key = IntValue_(keyObj);
	return
		(key >= XK_Shift_L && key <= XK_Hyper_R ? true__Standard : false__Standard);
}



/* Helper function */

obj_ XEventObjectFor(XEvent* rawEvent, obj_ display)
{
	obj_ window;
	extern obj_ new_co___Xlib__Event(obj_);
	UsingMethod_(window_for_id_co_)
	UsingMethod_(type_co_) UsingMethod_(window_co_)
	UsingMethod_(x_co_) UsingMethod_(y_co_)
	UsingMethod_(width_co_) UsingMethod_(height_co_)
	UsingMethod_(button_co_) UsingMethod_(state_co_) UsingMethod_(time_co_)
	UsingMethod_(key_co_) UsingMethod_(key_symbol_co_)
	UsingMethod_(data_0_co_) UsingMethod_(data_1_co_) UsingMethod_(data_2_co_)
	UsingMethod_(data_3_co_) UsingMethod_(data_4_co_) 

	obj_ event = new_co___Xlib__Event(BuildInt_(rawEvent->type));
	window = Call_(window_for_id_co_, display, BuildInt_(rawEvent->xany.window));
	Call_(window_co_, event, window);
	switch (rawEvent->type) {
		case Expose:
			Call_(x_co_, event, BuildInt_(rawEvent->xexpose.x));
			Call_(y_co_, event, BuildInt_(rawEvent->xexpose.y));
			Call_(width_co_, event, BuildInt_(rawEvent->xexpose.width));
			Call_(height_co_, event, BuildInt_(rawEvent->xexpose.height));
			break;
		case ButtonPress:
		case ButtonRelease:
			Call_(x_co_, event, BuildInt_(rawEvent->xbutton.x));
			Call_(y_co_, event, BuildInt_(rawEvent->xbutton.y));
			Call_(button_co_, event, BuildInt_(rawEvent->xbutton.button));
			Call_(state_co_, event, BuildInt_(rawEvent->xbutton.state));
			Call_(time_co_, event, BuildInt_(rawEvent->xbutton.time));
			break;
		case KeyPress:
		case KeyRelease:
			{
			char keyBuffer[20];
			KeySym sym;
			int len =
				XLookupString(&rawEvent->xkey, keyBuffer, sizeof(keyBuffer), &sym, 0);
			if (len > 0)
				Call_(key_co_, event, BuildChar_(keyBuffer[0]));
			else
				Call_(key_co_, event, BuildChar_(sym));
			Call_(key_symbol_co_, event, BuildInt_(sym));
			Call_(state_co_, event, BuildInt_(rawEvent->xkey.state));
			Call_(time_co_, event, BuildInt_(rawEvent->xkey.time));
			Call_(x_co_, event, BuildInt_(rawEvent->xkey.x));
			Call_(y_co_, event, BuildInt_(rawEvent->xkey.y));
			}
			break;
		case MotionNotify:
			Call_(x_co_, event, BuildInt_(rawEvent->xmotion.x));
			Call_(y_co_, event, BuildInt_(rawEvent->xmotion.y));
			Call_(state_co_, event, BuildInt_(rawEvent->xmotion.state));
			Call_(time_co_, event, BuildInt_(rawEvent->xmotion.time));
			break;
		case ConfigureNotify:
			Call_(x_co_, event, BuildInt_(rawEvent->xconfigure.x));
			Call_(y_co_, event, BuildInt_(rawEvent->xconfigure.y));
			Call_(width_co_, event, BuildInt_(rawEvent->xconfigure.width));
			Call_(height_co_, event, BuildInt_(rawEvent->xconfigure.height));
			break;
		case ClientMessage:
			Call_(data_0_co_, event,
			      BuildBytePtr_((byte_ptr_) rawEvent->xclient.data.l[0]));
			Call_(data_1_co_, event,
			      BuildBytePtr_((byte_ptr_) rawEvent->xclient.data.l[1]));
			Call_(data_2_co_, event,
			      BuildBytePtr_((byte_ptr_) rawEvent->xclient.data.l[2]));
			Call_(data_3_co_, event, BuildInt_(rawEvent->xclient.data.l[3]));
			Call_(data_4_co_, event, BuildInt_(rawEvent->xclient.data.l[4]));
			break;
		}

	return event;
}


/*
	Copyright 2005 - 2007 Steve Folta.
	See the License file.
*/

