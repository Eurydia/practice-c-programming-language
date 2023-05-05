#include <stdio.h>
#include <ctype.h>

int stringLen(char *str)
{
    // 0. Create a program which calculates the length of a string.
    int l = 0;
    while (str[l] != '\0')
    {
        l++;
    }
    return l;
}

int bigger(char *str_a, char *str_b)
{
    // 1. Create a program which gets two strings and input and determines which one precedes the other in lexicographical order.
    int i;
    int length_a = stringLen(str_a);
    int length_b = stringLen(str_b);
    int min_length = length_a > length_b ? length_b : length_a;
    for (i = 0; i < min_length; i++)
    {
        if (str_a[i] < str_b[i])
        {
            return -1;
        }
        if (str_a[i] > str_b[i])
        {
            return 1;
        }
    }
    return 0;
}

int countLines(char *str)
{
    // 2. Create a program which gets a string and prints the number of lines.
    int i, res = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '\n')
        {
            res++;
        }
    }
    return res;
}

int countAlpha(char *str)
{
    // 3. Write a program which counts the number of vowels and consonants in a string.
    int i, res = 0;
    while (str[i] != '\0')
    {
        if (isalpha(str[i]))
        {
            res++;
        }
    }
    return res;
}

int main()
{
    return 0;
}