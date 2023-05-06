#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(char *str)
{
    int len = 0, i;
    while (str[len] != '\0')
    {
        len++;
    }

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            return false;
        }
    }
    return true;
}

// 10. Write a program that determines whether a string is a palindrome.
int main()
{

    // char str_a[100];
    // fgets(str_a, 100, stdin);

    char *str_a = "ADA";

    printf("Palindrome: %d\n", is_palindrome(str_a));

    return 0;
}