#include <stdio.h>

// 2. Write out a 10x10 times table. Separate the numbers in a line with tab
//    characters.
int main()
{
    int row, col;
    for (row = 1; row <= 10; row++)
    {
        for (col = 1; col <= 10; col++)
        {
            printf("%dx%d=%d\t", row, col, col * row);
        }
        printf("\n");
    }
    return 0;
}