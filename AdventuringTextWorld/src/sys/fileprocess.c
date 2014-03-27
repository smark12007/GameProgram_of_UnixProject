/* Copyright (c) 2014 by Xuan-Yao Chen (smark12007@gmail.com). All Rights Reserved */

#include "fileprocess.h"

int fileprocessor(const char *inputfilename, const char *outputfilename, const char *usagestr) {
	FILE *fin;
	FILE *fout;
	char defaultoutputname[7];
	int returnum = 0;
	int i;
	defaultoutputname[0] = 0;
	int usage = 0;
	if(strcmp(usagestr, "txt2bi") == 0) {
		usage = 1;
	} else if(strcmp(usagestr, "bi2txt") == 0) {
		usage = 2;
	}
	if(!usage) {
		return -1;
	}
	if(!inputfilename) {
		return -1;
	}
	if((usage == 1) && (!(fin = fopen(inputfilename, "r")))) {
		return -1;
	}
	if((usage == 2) && (!(fin = fopen(inputfilename, "rb")))) {
		return -1;
	}
	if(outputfilename) {
		if((fout = fopen(outputfilename, "r")) != NULL) {
			fclose(fout);
			defaultoutputname[0] = returnum = 1;
		}
	} else {
		defaultoutputname[0] = 1;
	}
	if(defaultoutputname[0] == 0) {
		if(usage == 1) {
			fout = fopen(outputfilename, "wb");
		} else if(usage == 2) {
			fout = fopen(outputfilename, "w");
		}
	} else {
		for(i = 0; i < 100; ++i) {
			sprintf(defaultoutputname, "%d.out", i);
			fout = fopen(defaultoutputname, "r");
			if(!fout) {
				break;
			}
			fclose(fout);
		}
		if(i == 100) {
			return -1;
		}
		if(usage == 1) {
			fout = fopen(defaultoutputname, "wb");
		} else if(usage == 2) {
			fout = fopen(defaultoutputname, "w");
		}
	}
	if(usage == 1) {
		while(fscanf(fin, "%d", &i) == 1) {
			fwrite( &i, sizeof(i), 1, fout);
		}
	}else if(usage == 2) {
		while(fread( &i, sizeof(i), 1, fin) == 1) {
			fprintf(fout, "%d\n", i);
		}
	}
	fclose(fin);
	fclose(fout);
	return returnum;
}

int txt2bi(const char *inputfilename, const char *outputfilename) {
	return fileprocessor(inputfilename, outputfilename, "txt2bi");
}

int bi2txt(const char *inputfilename, const char *outputfilename) {
	return fileprocessor(inputfilename, outputfilename, "bi2txt");
}
