#include <stdio.h>

int strsize(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

// 0. Create a program which calculates the length of a string.
int main()
{
    // int size;
    // printf("Enter the size of the string: ");
    // scanf("%d", &size);

    // char str[size];
    // printf("Enter the string: ");
    // scanf("%s", str);

    char str[] = "Hello World!";
    printf("Length of string: %d\n", strsize(str));

    return 0;
}