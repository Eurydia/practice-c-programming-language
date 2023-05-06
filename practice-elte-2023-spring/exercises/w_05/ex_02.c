#include <stdio.h>

// 2. Change the value of a pointer through a pointer to a pointer. Then change the
//    value pointed by the pointed pointer as well!
int main()
{
    int a = 0, b = 1, c = 2;
    int *a_ptr = &a;
    int *b_ptr = &b;
    int **a_ptr_ptr = &a_ptr;

    (*a_ptr_ptr) = b_ptr;

    printf("a = %d; b = %d; c = %d\n", a, b, c);

    (*(*a_ptr_ptr)) = 5;

    printf("a = %d; b = %d; c = %d", a, b, c);
    return 0;
}