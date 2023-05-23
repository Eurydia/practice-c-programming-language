#include <stdio.h>

float arravg(int *start, int *end)
{
    int *p;
    float sum = 0.0f;
    for (p = start; p <= end; p++)
    {
        sum += *p;
    }
    return sum / (end - start + 1);
}

// 6. Redesign the previous program to calculate an average. How can we calculate
//    the size of the array from the pair of pointers?
int main()
{
    // int size;
    // printf("Enter the size of the array: ");
    // scanf("%d", &size);

    // int arr[size];
    // printf("Enter the elements of the array: ");
    // for (int i = 0; i < size; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }

    int size = 5;
    int arr[] = {1, 2, 3, 4, 5};
    printf("Size of array: %f\n", arravg(arr, arr + size));

    return 0;
}