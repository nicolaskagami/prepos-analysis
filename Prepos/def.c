//Nicolas Silveira Kagami 194636

#include "def.h"


void defRead(char * defFileName)
{
    defFile = fopen(defFileName,"r");
    if(defFile)
    {
        defHeader();
        defAreas();
        defIOPositions();
    }
}

void defHeader()
{
    char aux;
    fgets(title,MAX_LINE,defFile);
    title[strlen(title)-1] = '\0';
    fgets(&aux,1,defFile);
}

void defAreas()
{ 
    char line[MAX_LINE];
    char * aux;
    
    fgets(line,MAX_LINE,defFile);
    fgets(line,MAX_LINE,defFile);
    aux = strtok(line, "(");
    aux = strtok(NULL, ")");
    minx = strtol(aux,&aux,10);
    miny = strtol(aux,NULL,10);
    aux = strtok(NULL, "(");
    aux = strtok(NULL, ")");
    maxx = strtol(aux,&aux,10);
    maxy = strtol(aux,NULL,10);

    fgets(line,MAX_LINE,defFile);
    aux = strtok(line, " ");
    aux = strtok(NULL, " ");
    nandheight = strtol(aux,&aux,10);
    aux = strtok(NULL, " ");
    nandwidth  = strtol(aux,NULL,10);
}

void defStatsPrint()
{
    printf("Stats:\n");
    printf("X: %d, %d\n",minx, maxx);
    printf("Y: %d, %d\n",miny, maxy);
    printf("Nand: %d x %d\n",nandheight, nandwidth);
}

void defIOPositions()
{
    char line[MAX_IO_LINE];
    char *aux;
    int InputID;
    int OutputID;
    int numberIO;
    int i;

    fgets(line,MAX_LINE,defFile);
    fgets(line,MAX_LINE,defFile);

    aux = strtok(line," ");
    if(strcmp(aux,"PINS") == 0)
    { 
        aux = strtok(NULL," ");
        numberIO = strtol(aux,&aux,10);
        if(numberIO == (I + O)) 
        {
            for(i=0;i<numberIO;i++)
            {
                fgets(line,MAX_IO_LINE,defFile);
                aux = strtok(line," ");
                aux = strtok(NULL," ");
                InputID = aagFindSignal(aux);
                OutputID = aagFindOutput(aux);
                if(InputID)
                {
                    aux = strtok(NULL,"(");
                    aux = strtok(NULL,"(");
                    aux = strtok(NULL,"(");
                    aux = strtok(NULL,"(");
                    signals[InputID].srcX = strtol(aux,&aux,10);
                    signals[InputID].srcY = strtol(aux,NULL,10);
                }
                else if(OutputID != -1)
                {
                    aux = strtok(NULL,"(");
                    aux = strtok(NULL,"(");
                    aux = strtok(NULL,"(");
                    aux = strtok(NULL,"(");
                    outputs[OutputID].x = strtol(aux,&aux,10);
                    outputs[OutputID].y = strtol(aux,NULL,10);
                }
                else
                {
                    printf("Def File Error: %s not found\n", aux);
                }
            }
        }
    }
}
