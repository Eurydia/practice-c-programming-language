#include <stdio.h>

int *smaller_element(int *ptr_a, int *ptr_b)
{

    if (*(ptr_a) > *(ptr_b))
    {
        return ptr_b;
    }
    return ptr_a;
}

// 10. Write a function that, from two pointers pointing inside the same array,
//     decides which one points to an element with a smaller index.
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
    printf("Size of array: %d\n", smaller_element(arr, arr + 2));

    return 0;
}