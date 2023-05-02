#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void createFile(char *fileName)
{
    FILE* file_ptr = fopen(fileName, "w");
    fclose(file_ptr);
}

bool deleteFile(char *fileName)
{
    return (remove(fileName) == 0);
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
        createFile(fileName);
    }

    fprintf(fptr, "%s", content);
    fclose(fptr);
}

char *readFile(char *fileName) {
    FILE *fptr;
    fptr = fopen(fileName, "r");

    if (fptr == NULL)
    {
        printf("ERROR: Could not read file %s", fileName);
        return "";
    }

    char *content = malloc(1000 * sizeof(char));
    fscanf(fptr, "%[^\n]", content);
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