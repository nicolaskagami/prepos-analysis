//Nicolas Silveira Kagami 194636

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aag.h"

#define MAX_IO_LINE 150

FILE * defFile;
char title[MAX_LINE];
int minx;
int miny;
int maxx;
int maxy;
int nandheight;
int nandwidth;

void defRead();
void defHeader();
void defAreas();
void defStatsPrint();
void defIOPositions();
