#include <stdio.h>

// 7.  (Printing Command-Line Arguments) Write a program that prints the command-line arguments of the program.

int main(int argc, char *argv[])
{

    int i;
    for (i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
}