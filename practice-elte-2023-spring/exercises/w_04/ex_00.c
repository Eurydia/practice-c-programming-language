#include <stdio.h>

int maxof(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

// 0. Create a program which determine whether or not two numbers are Amicable. (Check: https://en.wikipedia.org/wiki/Amicable_numbers)
int main()
{
    // int a, b, d, max_val;

    // printf("Enter two numbers separated by a space (Int Int): ");
    // scanf("%d %d", &a, &b);

    int a = 9, b = 10;

    int sum_a_divisors = a + 1, sum_b_divisors = b + 1, max_val = maxof(a, b), d;

    for (d = 2; d < max_val; d++)
    {
        if (a % d == 0)
        {
            sum_a_divisors += d;
        }
        if (b % d == 0)
        {
            sum_b_divisors += d;
        }
    }

    if (sum_a_divisors == sum_b_divisors)
    {
        printf("%d and %d are amicable.\n", a, b);
    }
    else
    {
        printf("%d and %d are not amicable.\n", a, b);
    }
    return 0;
}