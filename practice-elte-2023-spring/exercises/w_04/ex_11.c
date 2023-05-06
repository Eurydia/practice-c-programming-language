#include <stdio.h>
#include <stdbool.h>

// 11. Create a program which calculates the weighted sum of an array. The weights
//    are listed in another array. For example: first array: [1, 2, 3, 4, 5],
//    second array: [1, 1, 2, 3, 5]. Weighted sum: 1*1 + 1*2 + 2*3 + 3*4 + 5*5.
int main()
{
    // int size, i;
    // printf("Enter array size (Int): ");
    // scanf("%d", &size);

    // int array[size], weights[size], sum = 0;

    // printf("Enter values of array separated by a space: ");
    // for (i = 0; i < size; i++)
    // {
    //     scanf("%d", &array[i]);
    // }

    // printf("Enter weights separated by a space: ");
    // for (i = 0; i < size; i++)
    // {
    //     scanf("%d", &weights[i]);
    // }

    int size = 5, sum = 0, i;
    int array[] = {1, 2, 3, 4, 5};
    int weights[] = {1, 1, 2, 3, 5};

    for (i = 0; i < size; i++)
    {
        sum += array[i] * weights[i];
    }

    printf("Weighted sum = %d", sum);
    return 0;
}