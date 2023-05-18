#include <stdio.h>
#include <stdlib.h>

// 9.  (Temporary Files) Write a program that places a space between each character in a file.
//       The program should first write the contents of the file being modified into a temporary file with spaces between each character, then copy.
int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *f = fopen(argv[1], "r+");
    FILE *tmp = fopen("tmp.txt", "w+");

    int c = '_';

    while ((c = fgetc(f)) != EOF)
    {
        fputc(c, tmp);
    }

    fseek(f, 0, SEEK_SET);
    fseek(tmp, 0, SEEK_SET);

    while ((c = fgetc(tmp)) != EOF)
    {
        printf("%c", c);
        fputc(c, f);
        fputc(' ', f);
    }

    fclose(f);
    fclose(tmp);

    return 0;
}