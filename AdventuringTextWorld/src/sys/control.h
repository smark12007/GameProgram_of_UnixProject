#ifndef _CONTROL_H
#define _CONTROL_H

#include "base.h"

#define KEY_ESC 27
#define KEY_TAB '\t'

void initcurses(void);

void settimeperframe(long int);
void setkeyidletimes(long int);

void closecurses(void);

char getkeypressed(void);
char getkeypressedimprove(void);

#endif
