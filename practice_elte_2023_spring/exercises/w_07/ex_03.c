#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool compare(char *str_a, char *str_b)
{
    int i = 0;
    while (str_a[i] != '\0' && str_b[i] != '\0')
    {
        if (str_a[i] != str_b[i])
        {
            return false;
        }
        i++;
    }
    return true;
}

// 3. Write a program that reads a second string and compares it with the previous
//    one! Do the task with a built-in operation from the `string.h` library, and
//    without it.
int main()
{

    // char str_a[100];
    // char str_b[100];
    // fgets(str_a, 100, stdin);
    // fgets(str_b, 100, stdin);

    char *str_a = "Hello World!";
    char *str_b = "Hello World!";

    // char *str = "Hello World!";

    printf("strcmp: %d\n", strcmp(str_a, str_b));
    printf("compare: %d\n", compare(str_a, str_b));

    return 0;
}