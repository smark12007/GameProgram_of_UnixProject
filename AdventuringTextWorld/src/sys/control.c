/* Copyright (c) 2014 by Xuan-Yao Chen (smark12007@gmail.com). All Rights Reserved */

#include "control.h"

char getkeypressed(void) {
	fd_set rset;
	FD_ZERO(&rset);
	FD_SET(0, &rset);
	select(1, &rset, NULL, NULL, &timeperframe);
	return getch();
}

char getkeypressedimprove(void) {
	static char savbuf = ERR;
	static char idletimes = 0;
	char currstat = getkeypressed();
	if(currstat != ERR) {
		idletimes = 0;
		savbuf = currstat;
	} else {
		idletimes = (idletimes + 1) % idletimesforkeypress;
	}
	if(idletimes == idletimesforkeypress - 1)
		savbuf = ERR;
	return savbuf;
}
