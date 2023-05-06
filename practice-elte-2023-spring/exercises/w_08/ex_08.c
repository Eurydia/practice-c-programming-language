#include <stdio.h>

int gcd(int x, int y)
{
    int min = x > y ? y : x, i, res;

    for (i = 1; i <= min; i++)
    {
        if ((x % i == 0) && (y % i == 0))
        {
            res = i;
        }
    }
    return res;
}

// 8. (Greatest Common Divisor) The greatest common divisor (GCD) of two integers is the largest integer that evenly divides each of the two numbers. Write function gcd that returns the greatest common divisor of two integers. [Try with loop and then with recursion]
int main()
{

    // int x, y;
    // printf("Please type two numbers\n");
    // scanf("%d %d", &x, &y);

    int x = 12, y = 18;

    printf("The greatest common divisor of %d and %d is %d\n", x, y, gcd(x, y));

    return 0;
}