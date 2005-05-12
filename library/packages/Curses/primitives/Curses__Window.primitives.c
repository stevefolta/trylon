/* Curses__Window.primitives.c */

#include "Trylon_.h"
#include <ncurses.h>


#define wind	((WINDOW*) this_->fields[0])


obj_ create_co_x_co_width_co_height_co___Curses__Window(obj_ this_, obj_ start_y, obj_ start_x, obj_ width, obj_ height)
{
	this_->fields[0] = (obj_)
		newwin(IntValue_(height), IntValue_(width),
		       IntValue_(start_y), IntValue_(start_x));
	return NULL;
}


obj_ close__Curses__Window(obj_ this_)
{
	if (this_->fields[0] == NULL)
		return NULL;

	delwin(wind);
	this_->fields[0] = NULL;
	return NULL;
}


obj_ attribute_off_co___Curses__Window(obj_ this_, obj_ attribute)
{
	wattroff(wind, IntValue_(attribute));
}


obj_ attribute_on_co___Curses__Window(obj_ this_, obj_ attribute)
{
	wattron(wind, IntValue_(attribute));
}


obj_ attributes__Curses__Window(obj_ this_)
{
	attr_t curAttributes;
	short curColorPair;
	wattr_get(wind, &curAttributes, &curColorPair, NULL);
	return BuildInt_(curAttributes);
}


obj_ attributes_co___Curses__Window(obj_ this_, obj_ new_attributes)
{
	wattrset(wind, IntValue_(new_attributes));
	return NULL;
}


obj_ cursor_x__Curses__Window(obj_ this_)
{
	int y, x;
	getyx(wind, y, x);
	return BuildInt_(x);
}


obj_ cursor_y__Curses__Window(obj_ this_)
{
	int y, x;
	getyx(wind, y, x);
	return BuildInt_(y);
}


obj_ end_bold__Curses__Window(obj_ this_)
{
	wattroff(wind, A_BOLD);
	return NULL;
}


obj_ end_dim__Curses__Window(obj_ this_)
{
	wattroff(wind, A_DIM);
	return NULL;
}


obj_ end_standout__Curses__Window(obj_ this_)
{
	wstandend(wind);
	return NULL;
}


obj_ erase__Curses__Window(obj_ this_)
{
	werase(wind);
	return NULL;
}


obj_ get_char__Curses__Window(obj_ this_)
{
	return BuildChar_(wgetch(wind));
}


obj_ height__Curses__Window(obj_ this_)
{
	int width, height;
	getmaxyx(wind, height, width);
	return BuildInt_(height);
}


obj_ keypad_co___Curses__Window(obj_ this_, obj_ enable)
{
	keypad(wind, Test_(enable));
}


obj_ move_cursor_to_co_x_co___Curses__Window(obj_ this_, obj_ y, obj_ x)
{
	wmove(wind, IntValue_(y), IntValue_(x));
	return NULL;
}


obj_ notimeout_co___Curses__Window(obj_ this_, obj_ enable)
{
	notimeout(wind, Test_(enable));
	return NULL;
}


obj_ refresh__Curses__Window(obj_ this_)
{
	wrefresh(wind);
	return NULL;
}


obj_ start_bold__Curses__Window(obj_ this_)
{
	wattron(wind, A_BOLD);
	return NULL;
}


obj_ start_dim__Curses__Window(obj_ this_)
{
	wattron(wind, A_DIM);
	return NULL;
}


obj_ start_standout__Curses__Window(obj_ this_)
{
	wstandout(wind);
	return NULL;
}


obj_ width__Curses__Window(obj_ this_)
{
	int width, height;
	getmaxyx(wind, height, width);
	return BuildInt_(width);
}


obj_ write_at_co_x_co_string_co___Curses__Window(obj_ this_, obj_ start_y, obj_ start_x, obj_ string_)
{
	char* start = StringStart_(string_);
	char* stopper = StringStopper_(string_);
	int length = stopper - start;
	mvwaddnstr(wind, IntValue_(start_y), IntValue_(start_x), start, length);

	/* update last-written-character */
	if (length != 0)
		this_->fields[1] = BuildChar_(*(stopper - 1));

	return NULL;
}


obj_ write_co___Curses__Window(obj_ this_, obj_ string_)
{
	char* start = StringStart_(string_);
	char* stopper = StringStopper_(string_);
	int length = stopper - start;
	waddnstr(wind, start, length);

	/* update last-written-character */
	if (length != 0)
		this_->fields[1] = BuildChar_(*(stopper - 1));

	return NULL;
}


