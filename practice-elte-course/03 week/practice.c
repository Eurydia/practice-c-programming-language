#include <stdio.h>
#include <stdbool.h>

// Exercises:
// ...
// More to come :)

// --------------------
// HELPERS
int powof(int base, int exp)
{
    int res = 1;
    for (int i = 1; i <= exp; i++)
    {
        res = res * base;
    }
    return res;
}

int minof(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    return a;
}

int maxof(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

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
// END OF HELPER
// ---------------

void sort_two_numbers()
{
    // 1. Create a program that reads two integers from the user
    // and print them in ascending order.
    // Try It with 3 numbers! (if statment, swap, min and max functions)
    int a, b;
    int min_val, max_val;
    printf("Enter A B separated by a space (Int Int): ");
    scanf("%d %d", &a, &b);

    min_val = minof(a, b);
    max_val = maxof(a, b);

    printf("Ascending = %d, %d", min_val, max_val);
}
void sort_three_numbers()
{
    int a, b, c;
    int min_val, med_val, max_val;
    printf("Enter A B C separated by a space (Int Int Int): ");
    scanf("%d %d %d", &a, &b, &c);

    min_val = minof(a, minof(b, c));
    med_val = minof(a, maxof(b, c));
    max_val = maxof(a, maxof(b, c));

    printf("Ascending = %d, %d, %d", min_val, med_val, max_val);
}

void compute_pow_of_two()
{
    // 2. Given an integer number,
    // prints the corresponding power of 2. (math function - bitwise).
    int power, res = 1;
    printf("Enter a number separated (Int): ");
    scanf("%d", &power);

    while (power-- && power > 0)
    {
        res = res * 2;
    }

    printf("Power of two = %d", res);
}

void reverse_digits_of_int()
{
    // 3. Create a program that reads an integer x, 10 <= x <= 99
    // and prints It with his digits inverted. (modulos)
    int n;
    printf("Enter a number separated (Int): ");
    scanf("%d", &n);

    printf("Reversed digits of %d = ", n);

    while (n > 0)
    {
        printf("%d", n % 10);
        n = n / 10;
    }
}

void is_valid_time_format()
{
    // 4. For an input in the format "HH:MM",
    // check whether or not It if valid and convert It to seconds.
    // HH -> Hour, MM -> Minute.

    int hour, minute;
    printf("Enter a time in this format (HH:MM): ");
    scanf("%d:%d", &hour, &minute);

    if (0 < hour && hour < 24 && 0 < minute && minute < 60)
    {
        printf("Second = %d", ((3600 * hour) + (60 * minute)));
        return;
    }
    printf("Invalid format");
}
void count_even_numbers()
{
    // 5. How many even numbers do we have from 0 to a given integer?
    // (Use for loop and while => Try with do ... while as well)
    int n;
    printf("Enter a number (Int): ");
    scanf("%d", &n);
    printf("There are %d even integers from 0 to %d.", (n / 2), n);
}

void compute_divisors()
{
    // 6. What are the divisors of a number?
    int n;
    printf("Enter a number (Int): ");
    scanf("%d", &n);

    printf("The divisors of %d are = 1, ", n);

    for (int i = 2; i <= (n / 2); i++)
    {
        if (n % i == 0)
        {
            printf("%d, ", i);
        }
    }
    printf("%d", n);
}

void compute_sum_of_one_hundred()
{
    // 7. Prints the sum of numbers from 0 to 100 with and without math formula. (Try sum of prime numbers)
    int num = 100;

    // with math formula
    printf("Using math formula = %d\n", (100) / 2 * (0 + 101));

    int sum = 0;
    for (int i = 0; i < 101; i++)
    {
        sum = sum + i;
    }
    printf("Without using math formula = %d", sum);
}

void compute_prime_factor()
{
    // 8. Prints a number in form of a prime factorization.
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
}

void compute_fibonacci()
{
    // 9. Prints the Fibonacci sequence and its (n - 1)th term. Note: n > 1.
    // 0 1 1 2 3 5 8 13 ...

    int pos;
    int curr = 1, prev = 1, next;
    printf("Enter a number (Int): ");
    scanf("%d", &pos);
    while (pos - 2 > 0)
    {
        next = curr + prev; // 2 // 3 //5
        prev = curr;        // 1 // 2 // 3
        curr = next;        // 2 // 3 // 5
        pos--;
    }

    printf("Nth = %d; (N-1)th = %d", curr, prev);
}
void is_palindrome()
{
    // 10. Given an integer 12345, prints 54321.
    // Check If It is palindrome and try to print it without the middle digit "3".
    int n;
    int n_temp, digits_counter = 0, n_reversed = 0;
    printf("Enter a number (Int): ");
    scanf("%d", &n);

    n_temp = n;
    while (n_temp > 0)
    {
        digits_counter++;
        n_temp = n_temp / 10;
    }

    // reversing the digits
    // to check if it is a palindrome
    for (int i = 0; i < digits_counter; i++)
    {
        n_temp = (n / powof(10, i)) % 10;
        n_reversed = n_reversed + (n_temp * powof(10, digits_counter - i - 1));
    }
    printf("Reversed = %d\n", n_reversed);

    if (n == n_reversed)
    {
        printf("%d is palindrome\n", n);
    }
    else
    {
        printf("%d is not palindrome\n", n);
    }

    // without middle digit
    int left, right, half_pow;
    half_pow = powof(10, digits_counter / 2);
    right = n % half_pow;
    left = n / powof(10, (digits_counter / 2) + 1) * half_pow;
    printf("Without middle digit = %d", left + right);
}

void compute_gcd()
{
    // 11. Calculate the greatest common divisor of two positive integers. (Use )
    // Try least common multiple as well.
    int a, b;
    int min_val, res;
    printf("Enter A B separated by a space (Int Int): ");
    scanf("%d %d", &a, &b);

    min_val = minof(a, b);
    res = 1;
    for (int i = 2; i <= min_val; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            res = i;
        }
    }
    printf("GCD of %d and %d = %d", a, b, res);
}

void compute_lcm()
{
    int a, b;
    int min_val, res;
    printf("Enter A B separated by a space (Int Int): ");
    scanf("%d %d", &a, &b);

    min_val = minof(a, b);
    res = a * b;
    for (int i = res - 1; i >= min_val; i--)
    {
        if (i % a == 0 && i % b == 0)
        {
            res = i;
        }
    }

    printf("LCM of %d and %d = %d", a, b, res);
}

int main()
{
    // sort_two_numbers();
    // sort_three_numbers();
    // compute_pow_of_two();
    // reverse_digits_of_int();
    // is_valid_time_format();
    // count_even_numbers();
    // compute_divisors();
    // compute_sum_of_one_hundred();
    // compute_prime_factor();
    // compute_fibonacci();
    // is_palindrome();
    // compute_gcd();
    // compute_lcm();
    return 0;
}