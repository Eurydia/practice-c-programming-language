#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

// 8. Prints a number in form of a prime factorization.
int main()
{
    // with math formula
    int n;
    printf("Enter a number (Int): ");
    scanf("%d", &n);

    printf("The prime factors of %d are = 1 ", n);
    for (int i = 2; i <= n; i++)
    {
        if (n % i != 0 || !is_prime(i))
        {
            continue;
        }

        printf("%d ", i);
    }
    return 0;
}
