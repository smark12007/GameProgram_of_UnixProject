#ifndef _CONTROL_H
#define _CONTROL_H

#define KEY_ESC 27
#define KEY_TAB '\t'

#include "base.h"

void initcurses(void);

void settimeperframe(long int);
void setkeyidletimes(long int);

void closecurses(void);

char getkeypressed(void);
char getkeypressedimprove(void);

#endif
