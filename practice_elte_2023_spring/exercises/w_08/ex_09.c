#include <stdio.h>

int gcd_rec(int x, int y, int r, int d)
{
    int min = x > y ? y : x;
    if (d == min)
    {
        return r;
    }

    if (x % d == 0 && y % d == 0)
    {
        return gcd_rec(x, y, d, d + 1);
    }

    return gcd_rec(x, y, r, d + 1);
}

// 9. (Recursive Greatest Common Divisor) The greatest common divisor of integers x and y is the largest integer that evenly divides both x and y. Write a recursive function gcd that returns the greatest common divisor of x and y. The gcd of x and y is defined recursively as follows: If y is equal to 0, then gcd(x, y) is x; otherwise gcd(x, y) is gcd(y, x % y) where % is the remainder operator.
int main()
{

    // int x, y;
    // printf("Please type two numbers\n");
    // scanf("%d %d", &x, &y);

    int x = 12, y = 18;

    printf("The greatest common divisor of %d and %d is %d\n", x, y, gcd_rec(x, y, 1, 1));

    return 0;
}