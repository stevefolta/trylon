#include "Trylon_.h"
#include <Carbon/Carbon.h>


obj_ insert_menu_co_before_co___Carbon__MenuManager(obj_ menu, obj_ before)
{
	InsertMenu((MenuRef) menu->fields[0], IntValue_(before));
	return NULL;
}


obj_ draw_menu_bar__Carbon__MenuManager(void)
{
	DrawMenuBar();
	return NULL;
}



/*
	Copyright 2005 - 2007 Steve Folta.
	See the License file.
*/

