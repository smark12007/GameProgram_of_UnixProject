#ifndef _BASE_H
#define _BASE_H

#include <curses.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/console.h>
#include <sys/param.h>
#include <sys/select.h> 
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/times.h>
#include <sys/types.h>
#include <time.h>

#define false FALSE
#define true TRUE

struct timeval timeperframe;
long int idletimesforkeypress;

typedef struct _vector2D{
	int x, y;
} vector2D;

void initcurses(void);
void closecurses(void);

#endif
