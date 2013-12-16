//Nicolas Silveira Kagami

#include "specs.h"

void specsRead(char * specsFileName)
{
    specsFile = fopen(specsFileName,"r");

    if(specsFile)
    { 

        while(!feof(sdcFile))
        {
            if(fgets(line,MAX_LINE,sdcFile))
            {
                if(strcmp(aux,"create_clock") == 0)
                {

                }
            }
        }
    }
}

