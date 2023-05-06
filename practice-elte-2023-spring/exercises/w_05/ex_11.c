#include <stdio.h>

int *max_element(int *arr, size_t size)
{
    int i;
    int *res_ptr = arr;
    for (i = 1; i < size; i++)
    {
        if (*(arr + i) > *res_ptr)
        {
            res_ptr = arr + i;
        }
    }
    return res_ptr;
}

// 11. Write a function that returns a pointer to the maximum element of an array
//     received as a parameter. What is the advantage and disadvantage of this
//     compared to returning an index?
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
    printf("Size of array: %d\n", max_element(arr, 5));

    return 0;
}