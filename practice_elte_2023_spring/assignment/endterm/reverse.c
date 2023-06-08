#include <string.h>

#include "reverse.h"

void reverseLine(char *lineBuffer)
{
    int i;
    int size = strlen(lineBuffer);
    char temp;
    for (i = 0; i < size / 2; i++)
    {
        temp = lineBuffer[i];
        lineBuffer[i] = lineBuffer[size - i - 1];
        lineBuffer[size - i - 1] = temp;
    }
}

void reverseFile(char **fileBuffer, int lineCount, int lineLength)
{
    int i;
    char temp[lineLength];
    for (i = 0; i < lineCount / 2; i++)
    {
        strcpy(temp, fileBuffer[i]);
        strcpy(fileBuffer[i], fileBuffer[lineCount - i - 1]);
        strcpy(fileBuffer[lineCount - i - 1], temp);
    }
}
