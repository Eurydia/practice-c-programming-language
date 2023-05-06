#include <stdio.h>

int minof(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    return a;
}

int gcd(int a, int b)
{
    int min_val, res;

    min_val = minof(a, b);
    res = 1;
    for (int i = 2; i <= min_val; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            res = i;
        }
    }
    return res;
}

int lcm(int a, int b)
{
    int min_val, res;

    min_val = minof(a, b);
    res = a * b;
    for (int i = min_val; i < a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            res = i;
            break;
        }
    }

    return res;
}

// 11. Calculate the greatest common divisor of two positive integers. (Use )
// Try least common multiple as well.
int main()
{

    int a, b;

    // printf("Enter two positive integers separated by a space: ");
    // scanf("%d %d", &a, &b);

    a = 12, b = 18;

    printf("lcm = %d, gcd = %d", lcm(a, b), gcd(a, b));
    return 0;
}
