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

char *readFile(char *fileName) {
    FILE *fptr;
    char *content = NULL;
    int fileSize = 0;

    fptr = fopen(fileName, "r");

    if (fptr == NULL) {
        printf("ERROR: Could not open file %s", fileName);
        exit(1);
    }

    fseek(fptr, 0, SEEK_END);
    fileSize = ftell(fptr);
    rewind(fptr);

    content = (char *)malloc(sizeof(char) * (fileSize + 1));
    fread(content, sizeof(char), fileSize, fptr);
    content[fileSize] = '\0';

    fclose(fptr);
    return content;
}

bool fileExists(char *fileName)
{
    FILE *fptr;
    fptr = fopen(fileName, "r");
    bool r = (fptr == NULL);
    fclose(fptr);
    return !r;
}