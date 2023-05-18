#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// 8.  (Sorting Integers) Write a program that sorts an array of integers into ascending order or descending order.
//       Use command-line arguments to pass either argument -a for ascending order or -d for descending order.
//       [Note: This is the standard format for passing options to a program in UNIX.]

enum order
{
    ASCENDING,
    DESCENDING
};

typedef enum order order_t;

int cmpAsc(const void *a, const void *b)
{
    if (*(int *)a > *(int *)b)
    {
        return 1;
    }

    if (*(int *)a < *(int *)b)
    {
        return -1;
    }

    return 0;
}

int cmpDesc(const void *a, const void *b)
{
    if (*(int *)a < *(int *)b)
    {
        return 1;
    }

    if (*(int *)a > *(int *)b)
    {
        return -1;
    }

    return 0;
}

int main(int argc, char *argv[])
{
    order_t order = ASCENDING;
    int mode, i;

    while ((mode = getopt(argc, argv, "ad")) != -1)
    {
        switch (mode)
        {
        case 'a':
            order = ASCENDING;
            break;
        case 'd':
            order = DESCENDING;
            break;

        default:
            break;
        }
    }

    int nums[100];

    for (i = 0; i < 100; i++)
    {
        nums[i] = rand() % 67;
    }

    if (order == ASCENDING)
    {
        qsort(nums, 100, sizeof(int), *cmpAsc);
    }
    else
    {
        qsort(nums, 100, sizeof(int), *cmpDesc);
    }

    for (i = 0; i < 100; i++)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}