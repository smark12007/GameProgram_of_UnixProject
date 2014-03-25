#include "sys/lib.h"

void gameloop(void);

int main(void) {
	initcurses();
	refresh();
	gameloop();
	closecurses();
	return 0;
}

void gameloop(void) {
	char t = ' ';
	while(1) {
		delayTime(.01);
		t = getkeypressedimprove();
		if(t == 27)
			break;
		if ((t >= '0') && (t <= '7')) {
			setscreffect(t - '0');
		} else if(t == 'q') {
			attron(A_UNDERLINE);
		} else if(t == 'w') {
			attron(A_REVERSE);
		} else if(t == 'e') {
			attron(A_BLINK);
		} else if(t == 'r') {
			attron(A_BOLD);
		} else if(t == 't') {
			attron(A_NORMAL);
		}
		if(t == ' ') {
			setcursorvisible(false);
		} else {
			setcursorvisible(true);
		}
		if(t == ERR) {
			settextcolor(white);
			setgroundcolor(black);
			printw("@");
		} else if(t == '\t') {
			move(0,0);
		} else if (t == 'p') {
			printw("(%d, %d) ", getscreensizebymvcurs().x, getscreensizebymvcurs().y);
		} else {
			settextcolor(red);
			setgroundcolor(green);
			printw("%c",t);
		}
	}
}
