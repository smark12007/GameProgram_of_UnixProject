/* Copyright (c) 2014 by Xuan-Yao Chen (smark12007@gmail.com). All Rights Reserved */

#include "base.h"

void initcurses(void) {
	timeperframe.tv_sec = 0;
	timeperframe.tv_usec = 10;
	idletimesforkeypress = 15;
	initscr();
	cbreak();
	intrflush(stdscr, false);
	keypad(stdscr, true);
	nodelay(stdscr, true);
	noecho();
	nonl();
	refresh();
}

void closecurses(void) {
	endwin();
	putchar('\n');
}
