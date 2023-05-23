#include <stdio.h>

int arravg(int *start, int *end)
{
    int sum = 0, *p;
    for (p = start; p <= end; p++)
    {
        sum += *p;
    }
    return sum;
}

// 5. Redesign the previous function so that we get the array using a pointer to
//    the first element and a pointer to the last element. What happens if we
//    overindex by one? (int* p = begin; p <= end; p++) What happens if we overindex by more?
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
    printf("Sum of array elements: %d\n", arravg(arr, arr + size));

    return 0;
}