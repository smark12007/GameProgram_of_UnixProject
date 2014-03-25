/* Copyright (c) 2014 by Xuan-Yao Chen (smark12007@gmail.com). All Rights Reserved */

#include "lib.h"

void initbasesys(void) {
	initcurses();
	soundstat = ON;
}

void endbasesys(void) {
	closecurses();
}
