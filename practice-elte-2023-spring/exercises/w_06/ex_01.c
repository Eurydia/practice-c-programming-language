#include <stdio.h>

int str_greater(char *a, char *b)
{
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0')
    {
        if (a[i] > b[i])
        {
            return 1;
        }
        else if (a[i] < b[i])
        {
            return -1;
        }
        i++;
    }

    if (a[i] == '\0' && b[i] == '\0')
    {
        return 0;
    }

    if (a[i] == '\0')
    {
        return -1;
    }

    return 1;
}

// 1. Create a program which gets two strings and input and determines which one
//    precedes the other in lexicographical order.
int main()
{
    // int size_a, size_b;
    // printf("Enter the size of the first string: ");
    // scanf("%d", &size_a);

    // char a[size_a];
    // printf("Enter the first string: ");
    // scanf("%s", a);

    // printf("Enter the size of the second string: ");
    // scanf("%d", &size_b);

    // char b[size_b];
    // printf("Enter the second string: ");
    // scanf("%s", b);

    char a[] = "Hello";
    char b[] = "World";

    printf("Result: %d\n", str_greater(a, b));

    return 0;
}