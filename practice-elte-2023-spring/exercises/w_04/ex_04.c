#include <stdio.h>
#include <stdbool.h>

// 4. Write out how many bytes your computer represents an `int`, `long int`,
//    `unsigned int`, `unsigned long int`, `char`, `bool`, `float`, `double`,
//    `long double` value.
int main()
{
    printf("sizeof(int) = %u\n", sizeof(int));
    printf("sizeof(long int) = %u\n", sizeof(long int));
    printf("sizeof(unsigned int) = %u\n", sizeof(unsigned int));
    printf("sizeof(unsigned long int) = %u\n", sizeof(unsigned long int));
    printf("sizeof(char) = %u\n", sizeof(char));
    printf("sizeof(bool) = %u\n", sizeof(bool));
    printf("sizeof(float) = %u\n", sizeof(float));
    printf("sizeof(double) = %u\n", sizeof(double));
    printf("sizeof(long double) = %u\n", sizeof(long double));
    return 0;
}