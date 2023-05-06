#include <stdio.h>
#include <stdbool.h>

// 10. Calculate the average of some floating point numbers in an array.
int main()
{
    // int size;
    // printf("Enter array size (Int): ");
    // scanf("%d", &size);

    // float array[size], sum = 0;
    // printf("Enter values of array separated by a space: ");
    // for (int i = 0; i < size; i++)
    // {
    //     scanf("%f", &array[i]);
    // }

    int size = 5, i;
    float array[] = {1.1, 2.2, 3.3, 4.4, 5.5}, sum = 0;

    for (i = 0; i < size; i++)
    {
        sum += array[i];
    }

    printf("Avg = %.3f / %d = %.3f", sum, size, (sum / size));
    return 0;
}