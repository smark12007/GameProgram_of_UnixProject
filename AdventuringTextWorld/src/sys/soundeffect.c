/* Copyright (c) 2014 by Xuan-Yao Chen (smark12007@gmail.com). All Rights Reserved */

#include "soundeffect.h"

void onebeep(void) {
	if(soundstat) {
		printf("\a");
		fflush(stdout);
	}
}
