#include "Trylon_.h"
#include <Carbon/Carbon.h>

UsingSym_(mouse)
UsingSym_(keyboard)
UsingSym_(text_input)
UsingSym_(application)
UsingSym_(apple_event)
UsingSym_(menu)
UsingSym_(window)
UsingSym_(control)
UsingSym_(command)
UsingSym_(tablet)
UsingSym_(volume)
UsingSym_(appearance)
UsingSym_(service)
UsingSym_(toolbar)
UsingSym_(toolbar_item)
UsingSym_(accessibility)
UsingSym_(draw_content)
UsingSym_(mouse_down)
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
	{ Sym_(command), kEventClassCommand },
	{ Sym_(control), kEventClassControl },
	{ Sym_(draw_content), kEventWindowDrawContent },
	{ Sym_(keyboard), kEventClassKeyboard },
	{ Sym_(menu), kEventClassMenu },
	{ Sym_(mouse), kEventClassMouse },
	{ Sym_(mouse_down), kEventMouseDown },
	{ Sym_(service), kEventClassService },
	{ Sym_(tablet), kEventClassTablet },
	{ Sym_(text_input), kEventClassTextInput },
	{ Sym_(toolbar), kEventClassToolbar },
	{ Sym_(toolbar_item), kEventClassToolbarItem },
	{ Sym_(volume), kEventClassVolume },
	{ Sym_(window), kEventClassWindow }
};
#define numValueSpecs 	\
	(sizeof(valueSpecs) / sizeof(struct Carbon__EventManager__ValueSpec))


obj_ event_not_handled__Carbon__EventManager(void)
{
	return BuildInt_(eventNotHandledErr);
}


obj_ run_application_event_loop__Carbon__EventManager(void)
{
	RunApplicationEventLoop();
	return NULL;
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


