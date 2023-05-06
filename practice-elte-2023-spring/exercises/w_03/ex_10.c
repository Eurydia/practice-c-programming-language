#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_palindrome(int n)
{
    int temp = n, reversed = 0;
    while (temp > 0)
    {
        reversed = (reversed * 10) + (temp % 10);
        temp = temp / 10;
    }

    return reversed == n;
}

int pow_int(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}

// 10. Given an integer 12345, prints 54321. Check If It is palindrome and try to print it without the middle digit "3".
int main()
{
    int n, temp, digits_counter = 0, n_temp;

    printf("Enter a number (Int): ");
    scanf("%d", &n);

    if (is_palindrome(n))
    {
        printf("%d is palindrome\n", n);
    }
    else
    {
        printf("%d is not palindrome\n", n);
    }

    n_temp = n;
    while (n_temp > 0)
    {
        digits_counter++;
        n_temp = n_temp / 10;
    }

    // without middle digit
    int left, right, half_pow;
    half_pow = pow_int(10, digits_counter / 2);
    right = n % half_pow;
    left = n / pow_int(10, (digits_counter / 2) + 1) * half_pow;
    printf("Without middle digit = %d", left + right);
    return 0;
}
