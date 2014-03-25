/* Copyright (c) 2014 by Xuan-Yao Chen (smark12007@gmail.com). All Rights Reserved */

#include"timer.h"

void delayTime(double delay_time){
	delay_time=delay_time*((double)CLOCKS_PER_SEC) + ((double)clock());
	while (((double)clock()) < delay_time);
}

double getTime(void){
	struct tms tmp;
	return (((double)times(&tmp)) / ((double)HZ));
}
