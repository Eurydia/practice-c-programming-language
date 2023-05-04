#include "stdio.h"

int count_letters(char *str, size_t len);
int count_digits(char *str, size_t len);
int count_space(char *str, size_t len);

int main()
{
    char buffer[512];
    scanf("^[%s]\n", buffer);

    FILE *f = fopen("output.txt", "w");
    fprintf(f, "average = %f", (count_letters(buffer, 512) + count_space(buffer, 512) + count_digits(buffer, 512)) / 3.0);
    fclose(f);
}

int count_letters(char *str, size_t len)
{
    int counter = 0, i;
    for (i = 0; i < len; i++)
    {
        if ('a' <= (*(str + i)) && (*(str + i)) <= 'z')
        {
            counter++;
        }
        else if ('A' <= (*(str + i)) && (*(str + i)) <= 'Z')
        {
            counter++;
        }
    }
    return counter;
}

int count_digits(char *str, size_t len)
{
    int counter = 0, i;
    for (i = 0; i < len; i++)
    {
        if ('0' <= (*(str + i)) && (*(str + i)) <= '9')
        {
            counter++;
        }
    }
    return counter;
}

int count_space(char *str, size_t len)
{
    int counter = 0, i;
    for (i = 0; i < len; i++)
    {
        if ((*(str + i)) == ' ')
        {
            counter++;
        }
    }
    return counter;
}
