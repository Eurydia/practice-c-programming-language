#include <stdio.h>
#include <ctype.h>

int count_words(char *str)
{
    int count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            count++;
        }
        i++;
    }
    return count + 1;
}

int count_chars(char *str)
{
    int count = 0, i = 0;
    while (str[i] != '\0')
    {
        if (isalpha(str[i]))
        {
            count++;
        }
        i++;
    }
    return count;
}

// 2. Write a program that reads a string from the standard input and counts the
//    number of characters and words in it! Use the `fgets()` function to read.
int main()
{

    char str[100];
    fgets(str, 100, stdin);

    // char *str = "Hello World!";

    printf("Number of words: %d\n", count_words(str));
    printf("Number of characters: %d\n", count_chars(str));

    return 0;
}