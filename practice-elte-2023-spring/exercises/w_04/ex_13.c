#include <stdio.h>

// 13. Given an odd integer number, prints the "X" pattern. Sample input: 11
// Output:
//       X - - - - - - - - - X
//       - X - - - - - - - X -
//       - - X - - - - - X - -
//       - - - X - - - X - - -
//       - - - - X - X - - - -
//       - - - - - X - - - - -
//       - - - - X - X - - - -
//       - - - X - - - X - - -
//       - - X - - - - - X - -
//       - X - - - - - - - X -
//       X - - - - - - - - - X
int main()
{

    // int size, i, current_val, decimal = 0;
    // printf("Enter string size (Int): ");
    // scanf("%d", &size);

    // char buffer[size], current;

    // printf("Enter a hex-valid characer [0-9,a-f]: ");
    // scanf("%s", buffer);

    // int size;
    // printf("Enter the size of the matrix (Int): ");
    // scanf("%d", &size);

    int row, col, size = 11;

    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            if (row == col || row + col + 1 == size)
            {
                printf("x");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
    }
    return 0;
}