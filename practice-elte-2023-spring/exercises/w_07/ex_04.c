#include <stdio.h>
#include <string.h>

void copy_string(char *str_a, char *str_b)
{
    int i = 0;
    while (str_a[i] != '\0')
    {
        str_b[i] = str_a[i];
        i++;
    }
    str_b[i] = '\0';
}

// 4. Copy the previous string into a third string! Complete the task with or
//    without a built-in action.
int main()
{

    // char str_a[100], str_b[100];
    // fgets(str_a, 100, stdin);

    char *str_a = "Hello World!", str_b[100];

    copy_string(str_a, str_b);

    printf("str_a: %s\n", str_b);

    return 0;
}