#include <stdio.h>
#include <stdlib.h>

void createFile(char *fileName)
{
    system((".> %s", fileName));
}

void emptyFile(char *fileName)
{
    FILE *fptr;
    fptr = fopen(fileName, "w");

    if (fptr == NULL)
    {
        printf("ERROR: Could not empty file %s", fileName);
    }
    else
    {
        fprintf(fptr, "%s", "");
    }

    fclose(fptr);
}

void writeFile(char *fileName, char *content)
{
    FILE *fptr;
    fptr = fopen(fileName, "w");

    if (fptr == NULL)
    {
        createFile(fileName);
    }

    fprintf(fptr, "%s", content);
    fclose(fptr);
}

void appendFile(char *fileName, char *content)
{
    FILE *fptr;
    fptr = fopen(fileName, "a");

    if (fptr == NULL)
    {
        system((".> %s", fileName));
    }

    fprintf(fptr, "%s", content);
    fclose(fptr);
}