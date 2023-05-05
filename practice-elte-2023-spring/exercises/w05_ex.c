#include <stdio.h>
#include <math.h>

// void overflowingInt()
// {
//     int k;
//     k = pow(2, sizeof(int) * 8) + 1; // overflow warning
//     printf("Max size = %u, Max + 1 = %d", pow(2, sizeof(int) * 8), k);
// }

void changeValWithPtr()
{
    // 1. Change the value of a variable via a pointer.
    int k = 0;
    int *k_ptr = &k;

    printf("%d\n", k);

    (*k_ptr) = 2;
    // deference the pointer then
    // assign a new value to the address
    printf("%d\n", k);
}

void changePtrWithPtr()
{
    // 2. Change the value of a pointer through a pointer to a pointer. Then change the
    //    value pointed by the pointed pointer as well!

    // ?????????????????

    int a = 0, b = 1, c = 2;
    int *a_ptr = &a;
    int *b_ptr = &b;
    int **a_ptr_ptr = &a_ptr;

    (*a_ptr_ptr) = b_ptr;

    printf("a = %d; b = %d; c = %d\n", a, b, c);

    (*(*a_ptr_ptr)) = 5;

    printf("a = %d; b = %d; c = %d", a, b, c);
}

void PtrToItself()
{
    // 3. Can you create a pointer to itself? What would be its type? Why not? Compare
    //    the sizes of pointers to different types of variables. Explain why the result
    //    is logical!

    int *k = &k;
    printf("%d", k);
}

int sumArray(int *arr, size_t size)
{
    int sum = 0;
    for (int offset = 0; offset < size; offset++)
    {
        sum += *(arr + offset);
        // sum += arr[offset]
    }
    return sum;
}

void getSumArray()
{
    // 4. Write a function that returns the sum of the elements in an array received as
    //    a parameter. The array is passed using a pointer to the first element and an
    //    integer variable containing a length. Let's write the function without using
    //    the `operator[]`, using pointer arithmetic. Is it possible to find the size
    //    of the array inside the function without the variable containing the length?

    int n;
    printf("Enter array size (Int): ");
    scanf("%d", &n);

    printf("Enter each element separated by a space (Int, ...): ");
    int array[n];
    for (int offset = 0; offset < n; offset++)
    {
        scanf("%d", &(array[offset]));
    }

    printf("sum = %d", sumArray(array, n));
}

void overIndexingArray()
{
    // 5. Redesign the previous function so that we get the array using a pointer to
    //    the first element and a pointer to the last element. What happens if we
    //    overindex by one? (int* p = begin; p <= end; p++) What happens if we overindex by more?

    int n;
    printf("Enter array size (Int): ");
    scanf("%d", &n);

    printf("Enter each element separated by a space (Int, ...): ");
    int array[n];
    for (int offset = 0; offset < n; offset++)
    {
        scanf("%d", &(array[offset]));
    }

    printf("sum = %d", overIndexingSum(array, array + n));
}

float arrayAvg(int *begin, int *end)
{
    // If we over-index the array, then the pointer will be moved
    // to the part of memory which may or may not be initialized.
    // this result in garbage data being added to the sum.
    int sum = 0;
    for (int *p = begin; p < end; p++)
    {
        sum += (*p);
    }
    return sum / (end - begin);
}

void arrayAverage()
{
    // 6. Redesign the previous program to calculate an average. How can we calculate
    //    the size of the array from the pair of pointers?
    int n;
    printf("Enter array size (Int): ");
    scanf("%d", &n);

    printf("Enter each element separated by a space (Int, ...): ");
    int array[n];
    for (int offset = 0; offset < n; offset++)
    {
        scanf("%d", &(array[offset]));
    }

    printf("sum = %f", arrayAvg(array, array + n));
}

void derefNullPtr()
{
    // 8. Let's dereference a null pointer. What is the result?
    // printf("%s", *NULL); // Error
}

int isSmallerPointer(int *ptr_a, int *ptr_b)
{
    // 10. Write a function that, from two pointers pointing inside the same array,
    //     decides which one points to an element with a smaller index.
    if (ptr_a < ptr_b)
    {
        return 1;
    }
    return 0;
}
int *maxElement(int *arr, size_t dim)
{
    // 11. Write a function that returns a pointer to the maximum element of an array
    //     received as a parameter. What is the advantage and disadvantage of this
    //     compared to returning an index?
    int *maxPtr = arr, i;
    for (i = 1; i < dim; i++)
    {
        if (arr[i] > *(maxPtr))
        {
            maxPtr = arr + i;
        }
    }
    return maxPtr;
}

int main()
{
    overflowingInt();
    // changeValWithPtr();
    // changePtrWithPtr();
    // PtrToItself();
    // getSumArray();
    // overIndexingArray();
    // arrayAverage();
    // derefNullPtr();
    return 0;
}