#include <stdio.h>

// 3. Can you create a pointer to itself? What would be its type? Why not? Compare
//    the sizes of pointers to different types of variables. Explain why the result
//    is logical!
int main()
{
    int *k;
    k = &k;
    printf("%d", k);
    return 0;
}