#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

int main(int argc, char *argv[])
{

    int capacity = atoi(argv[1]);

    vector_t *vec = create();
    initialize(vec, capacity);

    int i;
    char opt;
    int optarg_a;
    int optarg_b;
    while (i < argc)
    {
        opt = argv[i][0];
        i++;

        switch (opt)
        {
        case 'R':
        case 'r':
            optarg_a = atoi(argv[i]);
            i++;
            printf("%d\n", retrieve(vec, optarg_a));
            break;
        case 'A':
        case 'a':
            optarg_a = atoi(argv[i]);
            i++;
            append(vec, optarg_a);
            break;
        case 'I':
        case 'i':
            optarg_a = atoi(argv[i]);
            i++;
            optarg_b = atoi(argv[i]);
            i++;
            insert(vec, optarg_a, optarg_b);
            break;
        case 'E':
        case 'e':
            optarg_a = atoi(argv[i]);
            i++;
            erase(vec, optarg_a);
            break;
        default:
            break;
        }
    }

    return 0;
}