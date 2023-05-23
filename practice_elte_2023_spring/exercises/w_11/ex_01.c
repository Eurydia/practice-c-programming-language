#include <stdio.h>

#define AREA(x, y) printf("%d, %d", x, y)
#define MAX(x, y) x > y ? x : y
// #define MAX(x, y) \
//     if (x > y)    \
//     x else y

#define localMacro

int main()
{
    printf("%d", MAX(3, 4));
    return 0;
}

#undef localMacro
