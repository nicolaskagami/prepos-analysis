//Nicolas Silveira Kagami

#include "specs.h"

void main(int argc, char ** argv)
{
    char argument[100];
    if(argc == 2)
    {
        strcpy(argument,argv[1]);
        strcat(argument,".aag");
        aagRead(argument);
        strcpy(argument,argv[1]);
        strcat(argument,".def");
        defRead(argument);
        strcpy(argument,argv[1]);
        strcat(argument,".sdc");
        sdcRead(argument);
        aagStatsPrint();
        defStatsPrint();
    }
}
