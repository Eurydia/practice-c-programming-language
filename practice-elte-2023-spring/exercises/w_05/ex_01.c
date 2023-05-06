#include <stdio.h>

// 1. Change the value of a variable via a pointer.
int main()
{
    int k = 0;
    int *k_ptr = &k;

    printf("%d\n", k);

    (*k_ptr) = 2;
    // deference the pointer then
    // assign a new value to the address
    printf("%d\n", k);
    return 0;
}