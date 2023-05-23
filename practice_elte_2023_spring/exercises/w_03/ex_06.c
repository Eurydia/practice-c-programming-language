#include <stdio.h>

// 6. What are the divisors of a number?
int main()
{
    int n;
    // printf("Enter a number (Int): ");
    // scanf("%d", &n);

    n = 12;

    printf("The divisors of %d are = 1, ", n);

    for (int i = 2; i <= (n / 2); i++)
    {
        if (n % i == 0)
        {
            printf("%d, ", i);
        }
    }
    printf("%d\n", n);
    return 0;
}
