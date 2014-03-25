/* Copyright (c) 2014 by Xuan-Yao Chen (smark12007@gmail.com). All Rights Reserved */

#include "screen.h"

void settextcolor(color c) {
	printf("\x1b[%dm", 30 + c);
	fflush(stdout);
}

void setgroundcolor(color c) {
	printf("\x1b[%dm", 40 + c);
	fflush(stdout);
}

void setscreffect(screffect e) {
	printf("\x1b[%dm", e);
	fflush(stdout);
}

void setcursorvisible(bool show){
	if(show) {
		printf("\e[?25h");
	} else {
		printf("\e[?25l");
	}
	fflush(stdout);
}

vector2D getscreensizebymvcurs(void){
	int i;
	vector2D cur, scr;
	getyx(stdscr,cur.y,cur.x);
	for(i = 0; move(i, 0) != ERR; ++i);
	scr.y = i;
	for(i = 0; move(0, i) != ERR; ++i);
	scr.x = i;
	move(cur.y, cur.x);
	return scr;
}
