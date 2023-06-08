#include "reader.h"

char **prepareBuffer(int lineCount, int lineLength)
{
    char **buffer = malloc(lineCount * sizeof(char *));
    for (int i = 0; i < lineCount; i++)
    {
        buffer[i] = malloc(lineLength * sizeof(char));
    }
    return buffer;
}

int freeBuffer(char **buffer, int lineCount)
{
    for (int i = 0; i < lineCount; i++)
    {
        free(buffer[i]);
    }
    free(buffer);
    return 0;
}

int replaceNewline(char line[], int maxLength)
{
    int currPos = 0;
    while (*(line + currPos) != '\n')
    {
        currPos++;
    }
    *(line + currPos) = '\0';
    return currPos;
}

int readFileContent(const char *name, char **buffer, int lineLength)
{
    FILE *file = fopen(name, "r");
    int lineCurrent = 0;
    while (fgets(buffer[lineCurrent], lineLength + 1, file) != NULL)
    {
        replaceNewline(buffer[lineCurrent], lineLength);
        lineCurrent++;
    }
    fclose(file);
    return lineCurrent;
}