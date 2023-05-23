#include <stdio.h>

// 8. Create a program which swaps the smallest and greatest elements of an array.
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
    // int smallest = array[0], biggest = array[0];

    int size = 5, i, current;
    int array[5] = {1, 2, 3, 4, 5};

    int smallest_index = 0, smallest = array[smallest_index];
    int biggest_index = 0, biggest = array[biggest_index];

    for (i = 0; i < size; i++)
    {
        current = array[i];
        if (current > biggest)
        {
            biggest = current;
            biggest_index = i;
        }
        if (current < smallest)
        {
            smallest = current;
            smallest_index = i;
        }
        i++;
    }

    array[smallest_index] = biggest;
    array[biggest_index] = smallest;

    printf("Swapped = ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}