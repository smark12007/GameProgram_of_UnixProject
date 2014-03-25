#ifndef _SCREEN_H
#define _SCREEN_H

#include "base.h"

#define blink groundbright
#define bold textbright
#define underline bottomline

typedef enum _color{nochange = -1, black, red, green, yellow, blue, pink, cyan, white} color;
typedef enum _screffect{
	reset = 0,
	textbright = 1,
	bottomline = 4,
	groundbright = 5,
	reverse = 7
} screffect;

void settextcolor(color);
void setgroundcolor(color);
void setscreffect(screffect);

void setcursorvisible(bool);

vector2D getscreensizebymvcurs(void);

#endif
