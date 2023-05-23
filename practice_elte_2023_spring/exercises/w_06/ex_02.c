#include <stdio.h>

int count_lines(char *str)
{
    int i = 0, count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '\n')
        {
            count++;
        }
        i++;
    }
    return count;
}

// 2. Create a program which gets a string and prints the number of lines.
int main()
{

    // int size;
    // printf("Enter the size of the string: ");
    // scanf("%d", &size);

    // char str[size];
    // printf("Enter the string: ");
    // scanf("%s", str);

    char str[] = "Hello\nWorld!\nHow are you?\n";

    printf("Number of lines: %d\n", count_lines(str));

    return 0;
}