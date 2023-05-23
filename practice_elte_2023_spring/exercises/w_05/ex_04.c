#include <stdio.h>

int sumDeref(int *arr, size_t size)
{
    int sum = 0;
    for (int offset = 0; offset < size; offset++)
    {
        sum += *(arr + offset);
    }
    return sum;
}

int sumBracket(int *arr, size_t size)
{
    int sum = 0;
    for (int offset = 0; offset < size; offset++)
    {
        sum += arr[offset];
    }
    return sum;
}

// 4. Write a function that returns the sum of the elements in an array received as
//    a parameter. The array is passed using a pointer to the first element and an
//    integer variable containing a length. Let's write the function without using
//    the `operator[]`, using pointer arithmetic. Is it possible to find the size
//    of the array inside the function without the variable containing the length?
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
    printf("Sum of array elements: %d\n", sumDeref(arr, size));
    printf("Sum of array elements: %d\n", sumBracket(arr, size));

    return 0;
}