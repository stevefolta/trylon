#include "Trylon_.h"
#include <ncurses.h>

extern obj_
	black__Curses__Screen,
	red__Curses__Screen,
	green__Curses__Screen,
	yellow__Curses__Screen,
	blue__Curses__Screen,
	magenta__Curses__Screen,
	cyan__Curses__Screen,
	white__Curses__Screen,
	default_color__Curses__Screen;
extern obj_
	bold__Curses__Screen,
	dim__Curses__Screen,
	reverse__Curses__Screen,
	underline__Curses__Screen,
	standout__Curses__Screen;
extern obj_
	horizontal_line__Curses__Screen,
	vertical_line__Curses__Screen;
extern obj_
	page_up__Curses__Screen,
	page_down__Curses__Screen,
	home__Curses__Screen,
	end__Curses__Screen,
	left_arrow__Curses__Screen,
	right_arrow__Curses__Screen,
	up_arrow__Curses__Screen,
	down_arrow__Curses__Screen,
	err_char__Curses__Screen;


obj_ create__Curses__Screen(obj_ this_)
{
	/* Initial setup */
	initscr();
	start_color();
	use_default_colors();

	/* Keyboard setup */
	cbreak();
	keypad(stdscr, TRUE);

	/* Color setup */
	init_pair(1, COLOR_BLACK, -1);
	black__Curses__Screen = BuildInt_(COLOR_PAIR(1));
	init_pair(2, COLOR_RED, -1);
	red__Curses__Screen = BuildInt_(COLOR_PAIR(2));
	init_pair(3, COLOR_GREEN, -1);
	green__Curses__Screen = BuildInt_(COLOR_PAIR(3));
	init_pair(4, COLOR_YELLOW, -1);
	yellow__Curses__Screen = BuildInt_(COLOR_PAIR(4));
	init_pair(5, COLOR_BLUE, -1);
	blue__Curses__Screen = BuildInt_(COLOR_PAIR(5));
	init_pair(6, COLOR_MAGENTA, -1);
	magenta__Curses__Screen = BuildInt_(COLOR_PAIR(6));
	init_pair(7, COLOR_CYAN, -1);
	cyan__Curses__Screen = BuildInt_(COLOR_PAIR(7));
	init_pair(8, COLOR_WHITE, -1);
	white__Curses__Screen = BuildInt_(COLOR_PAIR(8));
	default_color__Curses__Screen = BuildInt_(COLOR_PAIR(0));

	/* Other attributes */
	bold__Curses__Screen = BuildInt_(A_BOLD);
	dim__Curses__Screen = BuildInt_(A_DIM);
	reverse__Curses__Screen = BuildInt_(A_REVERSE);
	underline__Curses__Screen = BuildInt_(A_UNDERLINE);
	standout__Curses__Screen = BuildInt_(A_STANDOUT);

	/* Graphical character setup */
	horizontal_line__Curses__Screen = BuildInt_(ACS_HLINE);
	vertical_line__Curses__Screen = BuildInt_(ACS_VLINE);

	/* Keys setup */
	page_up__Curses__Screen = BuildChar_(KEY_PPAGE);
	page_down__Curses__Screen = BuildChar_(KEY_NPAGE);
	home__Curses__Screen = BuildChar_(KEY_HOME);
	end__Curses__Screen = BuildChar_(KEY_END);
	left_arrow__Curses__Screen = BuildChar_(KEY_LEFT);
	right_arrow__Curses__Screen = BuildChar_(KEY_RIGHT);
	up_arrow__Curses__Screen = BuildChar_(KEY_UP);
	down_arrow__Curses__Screen = BuildChar_(KEY_DOWN);
	err_char__Curses__Screen = BuildChar_(ERR);

	this_->fields[0] = true__Standard;
}


obj_ close__Curses__Screen(obj_ this_)
{
	if (!Test_(this_->fields[0]))
		return NULL;

	endwin();

	this_->fields[0] = false__Standard;
}


obj_ get_char__Curses__Screen(obj_ this_)
{
	return BuildChar_(getch());
}


obj_ width__Curses__Screen(obj_ this_)
{
	int width, height;
	getmaxyx(stdscr, height, width);
	return BuildInt_(width);
}


obj_ height__Curses__Screen(obj_ this_)
{
	int width, height;
	getmaxyx(stdscr, height, width);
	return BuildInt_(height);
}


obj_ noecho__Curses__Screen(obj_ this_)
{
	noecho();
	return NULL;
}


obj_ escape_delay__Curses__Screen(obj_ this_)
{
#ifdef NCURSES_VERSION
	return BuildInt_(ESCDELAY);
#else
	return BuildInt_(0);
#endif
}


obj_ escape_delay_co___Curses__Screen(obj_ this_, obj_ delay)
{
#ifdef NCURSES_VERSION
	ESCDELAY = IntValue_(delay);
#endif
	return NULL;
}


