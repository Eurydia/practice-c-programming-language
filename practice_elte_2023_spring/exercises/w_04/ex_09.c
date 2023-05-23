#include <stdio.h>

// 9. Create a program which calculates the length of a string.
int main()
{
    // int size;
    // printf("Enter array size (Int): ");
    // scanf("%d", &size);

    // char str[size];
    // printf("Enter a string: ");
    // scanf("%s", str);

    char str[] = "Hello World!";

    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }

    printf("The length of %s is %d", str, len);
    return 0;
}