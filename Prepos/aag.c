//Nicolas Silveira Kagami 194636

#include "aag.h"

void aagRead()
{
    aagFile = fopen("../benchmark/b1/b1.aag","r");
    char line[MAX_LINE];

    if(aagFile)
    {
        aagHeader();
        if(M==(A+I))
        {
            aagInputs();
            aagOutputs();
        }
        else
        {
            printf("Number of Signals doesn't match\n");
        }
    }
}

void aagHeader ()
{
    char head[MAX_LINE];
    fgets(head,MAX_LINE,aagFile);
    char * aux = &head[4];
    if(strcmp("aag",strtok(head," ")) == NULL)
    {
        M = strtol(aux,&aux,10);
        I = strtol(aux,&aux,10);
        L = strtol(aux,&aux,10);
        O = strtol(aux,&aux,10);
        A = strtol(aux,NULL,10);
    }
    else
    {
        printf("Header Syntax Error\n");
    }
}

void aagStatsPrint()
{
    int i;
    printf("Stats:\n");
    printf("M: %d\n",M);
    printf("I: %d\n",I);
    printf("L: %d\n",L);
    printf("O: %d\n",O);
    printf("A: %d\n",A);
    printf("Inputs:  ");
    for(i=0;i<I;i++)
    {
        printf("%d,",inputs[i]);
    }
    printf("\nOutputs: ");
    for(i=0;i<O;i++)
    {
        printf("%d,",outputs[i]);
    }
    printf("\n");
}

void aagInputs()
{ 
    char line[MAX_LINE];
    int i;
    inputs = malloc(I*sizeof(int));
    for(i=0;i<I;i++)
    {
        fgets(line,MAX_LINE,aagFile);
        inputs[i] = strtol(line,NULL,10);
    }
}

void aagOutputs()
{ 
    char line[MAX_LINE];
    int i;
    outputs = malloc(O*sizeof(int));
    for(i=0;i<O;i++)
    {
        fgets(line,MAX_LINE,aagFile);
        outputs[i] = strtol(line,NULL,10);
    }
}

