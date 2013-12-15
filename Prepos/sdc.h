//Nicolas Silveira Kagami

#include "def.h"

#define MAX_CLOCKS 8

typedef struct
{
    char name[MAX_LINE];
    float period; 
} CLOCK;




FILE * sdcFile;

int numberClocks;
CLOCK clocks[MAX_CLOCKS];

void sdcRead(char * sdcFileName);
void sdcCreateClk();
void sdcSetInputDelay();
void sdcSetMaxDelay();
void sdcClksPrint();
