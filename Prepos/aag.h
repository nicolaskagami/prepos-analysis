//Nicolas Silveira Kagami 194636

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_LINE 50

FILE * aagFile;
int M;
int I;
int L;
int O;
int A;
int * inputs;
int * outputs;

void aagRead();
void aagHeader();
void aagStatsPrint();
void aagInputs();
void aagOutputs();
void aagAnds();
