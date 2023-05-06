#include <stdio.h>
#include <stdlib.h>

char *substring(char *str, int start, int end)
{
    char *result = malloc(sizeof(char) * (end - start + 1));
    int i = 0, j;
    for (j = start; j < end; j++)
    {
        result[i] = str[j];
        i++;
    }
    result[i] = '\0';

    return result;
}

// 1. Implement the substring function. Read https://en.wikipedia.org/wiki/Substring.
int main()
{

    char *str = "Hello World!";

    char *result = substring(str, 0, 5);

    printf("%s\n", result);

    return 0;
}