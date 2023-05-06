#include <stdio.h>

// 7. Prints the sum of numbers from 0 to 100 with and without math formula. (Try sum of prime numbers)
int main()
{
    // with math formula
    printf("Using math formula = %d\n", (100) / 2 * (0 + 101));

    int sum = 0;
    for (int i = 0; i < 101; i++)
    {
        sum = sum + i;
    }
    printf("Without using math formula = %d", sum);
    return 0;
}
