#include <stdio.h>

int pow_rec(int base, int exponent, int res)
{
    if (exponent == 0)
    {
        return res;
    }

    return pow_rec(base, exponent - 1, res * base);
}

// 10. (Recursive Exponentiation) Write a recursive function power( base, exponent ) that when invoked returns base^(exponent)
//     For example, power( 3, 4 ) = 3 * 3 * 3 * 3. Assume that exponent is an integer greater than or equal
//     to 1. Hint: The recursion step would use the relationship
//         base^exponent = base * base^(exponent-1)
//     and the terminating condition occurs when exponent is equal to 1 because
//         base^1 = base
int main()
{

    // int x, y;
    // printf("Please type two numbers\n");
    // scanf("%d %d", &x, &y);

    int x = 12, y = 2;

    printf("= %d\n", pow_rec(x, y, 1));

    return 0;
}