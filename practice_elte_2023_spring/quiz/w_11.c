#include <stdio.h>
#include <stdlib.h>

enum state
{
    GOOD,
    BAD
};

typedef enum state state_t;

int main(int argc, char *argv[])
{

    FILE *f = fopen(argv[1], "rb");

    unsigned char buffer[10000];
    unsigned char c;

    // while ((c = fgetc(f)) != EOF)
    // {
    //     printf("%c", c);
    // }

    fclose(f);

    FILE *o = fopen("output.txt", "w");

    state_t state = GOOD;
    int n = -1;
    if (state == GOOD)
    {
        fprintf(o, "%d -> Good and ", n);
        if (n % 2 == 0)
        {
            fprintf(o, "Even");
        }
        else
        {
            fprintf(o, "Odd");
        }
    }

    fclose(o);

    return 0;
}