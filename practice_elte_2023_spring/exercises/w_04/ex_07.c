#include <stdio.h>

// 7. Create a program which prints the greatest/lowest element of an array. (DO NOT sort the array)
int main()
{
    // int size;
    // printf("Enter array size (Int): ");
    // scanf("%d", &size);

    // int array[size], current;
    // printf("Enter values of array separated by a space: ");
    // for (int i = 0; i < size; i++)
    // {
    //     scanf("%d", &array[i]);
    // }

    int size = 5, current, i;
    int array[5] = {1, 2, 3, 4, 5};

    int smallest = array[0], biggest = array[0];

    for (i = 1; i < size; i++)
    {
        current = array[i];
        if (current > biggest)
        {
            biggest = current;
        }
        if (current < smallest)
        {
            smallest = current;
        }
    }
    printf("smallest = %d; biggest = %d", smallest, biggest);
    return 0;
}