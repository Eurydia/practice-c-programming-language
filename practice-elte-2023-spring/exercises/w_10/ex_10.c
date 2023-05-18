#include <stdio.h>
#include <stdlib.h>

//  10. (Command-Line Arguments) Write a program that takes two command-line arguments that are file names, reads the characters from the first file one at a time and writes the characters in reverse order to the second file.

int main(int argc, char *argv[])
{

    FILE *fx = fopen(argv[1], "r+");
    FILE *fy = fopen(argv[2], "w+");

    int c = '_';

    fseek(fx, -1, SEEK_END);

    while ((c = fgetc(fx)) != EOF)
    {
        fputc(c, fy);
        fseek(fx, -2, SEEK_CUR);
    }

    return 0;
}