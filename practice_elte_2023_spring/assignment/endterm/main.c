#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <string.h>

#include "reverse.h"
#include "reader.h"

#define gLineCount 1000
#define gLineLength 100

int main(int argc, char *argv[])
{
    // Parse command line args
    char *fileName = argv[1];

    bool flagDisplayLineNumber = false;
    bool flagReverseLineContent = false;
    bool flagFilterLineContent = false;
    char flagFilterKeyword[gLineLength] = "";

    int argOpt;

    while (argOpt = getopt(argc, argv, "nrf:"))
    {
        if (argOpt == -1)
        {
            break;
        }

        switch (argOpt)
        {
        case 'n':
            flagDisplayLineNumber = true;
            break;
        case 'r':
            flagReverseLineContent = true;
            break;
        case 'f':
            flagFilterLineContent = true;
            strcpy(flagFilterKeyword, optarg);
            break;
        default:
            printf("Unkown flag.\n");
            break;
        }
    }

    // Read prepare buffer
    // and read file content
    char **buffer = prepareBuffer(gLineCount, gLineLength);
    int lineCount = readFileContent(fileName, buffer, gLineLength);

    // Reverse lines if needed
    if (flagReverseLineContent)
    {
        for (int i = 0; i < lineCount; i++)
        {
            reverseLine(buffer[i]);
        }
    }
    reverseFile(buffer, lineCount, gLineLength);

    // Output
    int i, lineNumber;
    for (i = 0; i < lineCount; i++)
    {
        // filter lines if needed
        if (flagFilterLineContent)
        {
            if (strstr(buffer[i], flagFilterKeyword) == NULL)
            {
                continue;
            }
        }
        // display line number if needed
        if (flagDisplayLineNumber)
        {
            lineNumber = i + 1;
            if (flagReverseLineContent)
            {
                lineNumber = lineCount - i;
            }
            printf("%d ", lineNumber);
        }
        printf("%s\n", buffer[i]);
    }

    // Clean up
    freeBuffer(buffer, gLineCount);

    return 0;
}
