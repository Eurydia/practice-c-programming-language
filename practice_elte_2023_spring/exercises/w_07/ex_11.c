#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool is_vowel(char c)
{
    char u = tolower(c);
    return u == 'a' || u == 'e' || u == 'i' || u == 'o' || u == 'u';
}

int count_vowels(char *str)
{
    int i = 0, count = 0;
    while (str[i] != '\0')
    {
        if (is_vowel(str[i]))
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
        if (isalpha(str[i]) && !is_vowel(str[i]))
        {
            count++;
        }
        i++;
    }
    return count;
}

// 11. Write a program that determines how many consonants and vowels there are in
//     the entered text! (We only use the letters of the English alphabet.)
int main()
{

    // char str_a[100];
    // fgets(str_a, 100, stdin);

    char *str_a = "ADA";

    printf("Vowels: %d\n", count_vowels(str_a));
    printf("Consonants: %d\n", count_consonants(str_a));

    return 0;
}
