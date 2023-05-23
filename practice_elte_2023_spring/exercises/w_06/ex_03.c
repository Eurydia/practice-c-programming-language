#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool isvowel(char c)
{
    int u = tolower(c);
    return u == 'a' || u == 'e' || u == 'i' || u == 'o' || u == 'u';
}

int count_vowels(char *str)
{
    int i = 0, count = 0;
    while (str[i] != '\0')
    {
        if (isvowel(str[i]))
        {
            count++;
        }
        i++;
    }
    return count;
}

int count_consonants(char *str)
{
    int i = 0, count = 0;
    while (str[i] != '\0')
    {
        if (isalpha(str[i]) && !isvowel(str[i]))
        {
            count++;
        }
        i++;
    }
    return count;
}

// 3. Write a program which counts the number of vowels and consonants in a
//     string.
int main()
{
    // int size;
    // printf("Enter the size of the string: ");
    // scanf("%d", &size);

    // char str[size];
    // printf("Enter the string: ");
    // scanf("%s", str);

    char str[] = "Hello World!";

    printf("Number of vowels: %d\n", count_vowels(str));
    printf("Number of consonants: %d\n", count_consonants(str));

    return 0;
}