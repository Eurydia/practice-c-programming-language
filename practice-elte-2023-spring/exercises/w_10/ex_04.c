#include <stdio.h>
#include <stdlib.h>
// A text filename called "numbers.txt" is given from the command line.
//       Sample content before modification:
//       0 1 2 3 4
//       5 6 7 8 9

//       As one can see, the numbers are separated by tabs (\t).
//       Another text file is asked from the user which will be used as temporary file.

//       Your task is to remove the tabs and replace them with spaces.
//       You are allowed to open and close each of the files "exactly" once.

//       Sample content after modification:
//       0 1 2 3 4
//       5 6 7 8 9

//   Hint: argv, rewind.

int main(int argc, char *argv[])
{
    FILE *f = fopen(argv[1], "r+");

    int c;
    while ((c = fgetc(f)) != EOF)
    {
        fseek(f, -1, SEEK_CUR);
        if (c == '\t')
        {
            fputc(' ', f);
        }
        else
        {
            fputc(c, f);
        }
        fseek(f, 0, SEEK_CUR);
    }

    return 0;
}