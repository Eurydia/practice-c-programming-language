#include <stdio.h>

void print_pyramid(int size)
{
    int row, col_size = (2 * size) + 1;
    for (row = 0; row < size; row++)
    {
        // left padding
        for (int p = 0; p < (col_size - ((2 * row) + 1)) / 2; p++)
        {
            printf("-");
        }

        // Xs
        for (int x = 0; x < (2 * row) + 1; x++)
        {
            printf("X");
        }

        // right padding
        for (int p = 0; p < (col_size - ((2 * row) + 1)) / 2; p++)
        {
            printf("-");
        }
        printf("\n");
    }
}

void print_diamond(int size)
{
    int row, col_size = (2 * size) + 1;
    // top half of diamond
    for (row = 0; row < size; row++)
    {
        // left padding
        for (int p = 0; p < (col_size - ((2 * row) + 1)) / 2; p++)
        {
            printf("-");
        }

        // Xs
        for (int x = 0; x < (2 * row) + 1; x++)
        {
            printf("X");
        }

        // right padding
        for (int p = 0; p < (col_size - ((2 * row) + 1)) / 2; p++)
        {
            printf("-");
        }
        printf("\n");
    }

    // bottom part of diamond
    for (row = size; row >= 0; row--)
    {
        // left padding
        for (int p = 0; p < (col_size - ((2 * row) + 1)) / 2; p++)
        {
            printf("-");
        }

        // Xs
        for (int x = 0; x < (2 * row) + 1; x++)
        {
            printf("X");
        }

        // right padding
        for (int p = 0; p < (col_size - ((2 * row) + 1)) / 2; p++)
        {
            printf("-");
        }
        printf("\n");
    }
}

// 14. Prints the patterns: Star Pyramid Pattern, Diamond and Full Star Diamond Pattern :).
int main()
{

    // int s;
    // printf("Enter the size pattern (Int): ");
    // scanf("%d", &s);

    int size = 9;
    print_diamond(size);
    print_pyramid(size);
    return 0;
}