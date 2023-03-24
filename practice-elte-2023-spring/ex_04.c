#include <stdio.h>
#include <stdbool.h>
#include <strings.h>
#include <ctype.h>
#include <math.h>

// Exercises:
int isAmicable()
{

    // 0. Create a program which determine
    // whether or not two numbers are Amicable.
    // (Check: https://en.wikipedia.org/wiki/Amicable_numbers)

    int a, b;
    int sum_a_divisors, sum_b_divisors;

    printf("Enter two numbers separated by a space (Int Int): ");
    scanf("%d %d", &a, &b);

    sum_a_divisors = 1 + a;
    sum_b_divisors = 1 + b;

    for (int da = 2; da <= (a / 2); da++)
    {
        if (a % da == 0)
        {
            sum_a_divisors += da;
        }
    }
    for (int db = 2; db <= (b / 2); db++)
    {
        if (b % db == 0)
        {
            sum_b_divisors += db;
        }
    }

    if (sum_a_divisors == sum_b_divisors)
    {
        printf("%d and %d are amicable.\n", a, b);
        return 0;
    }
    else
    {
        printf("%d and %d not amicable.\n", a, b);
    }
}

int realNumBetween()
{
    // 1. Write the real numbers from 0 to 1 in increments of 0.1.
    float s = 0.0;
    for (; s < 1; s += 0.1)
    {
        printf("%.1f\n", s);
    }
}

int multipleOfTenTable()
{
    // 2. Write out a 10x10 times table. Separate the numbers in a line with tab
    //    characters.
    for (int row = 1; row <= 10; row++)
    {
        for (int col = 1; col <= 10; col++)
        {
            printf("%dx%d=%d\t", row, col, col * row);
        }
        printf("\n");
    }
}

int byteSizes()
{
    // 4. Write out how many bytes your computer represents an `int`, `long int`,
    //    `unsigned int`, `unsigned long int`, `char`, `bool`, `float`, `double`,
    //    `long double` value.

    printf("sizeof(int) = %u\n", sizeof(int));
    printf("sizeof(long int) = %u\n", sizeof(long int));
    printf("sizeof(unsigned int) = %u\n", sizeof(unsigned int));
    printf("sizeof(unsigned long int) = %u\n", sizeof(unsigned long int));
    printf("sizeof(char) = %u\n", sizeof(char));
    printf("sizeof(bool) = %u\n", sizeof(bool));
    printf("sizeof(float) = %u\n", sizeof(float));
    printf("sizeof(double) = %u\n", sizeof(double));
    printf("sizeof(long double) = %u\n", sizeof(long double));
}

int operatorChaining()
{
    // 5. Try operator chaining (a < b < c, a = b = c).
    int a, b, c;
    a = b = c = 0;
    printf("%d %d %d", a, b, c);
}

int isLeapYear()
{

    // 6. Write a program that determines whether the number is a leap year from the
    //  standard input. A leap year is any year divisible by four, except those
    //  divisible by a hundred. However, those divisible by four hundred will also be
    //  leap years. (DO NOT use `if` in the solution!)

    int year;
    printf("Enter a year (Int): ");
    scanf("%d", &year);

    bool is_div_by_four = year % 4 == 0;
    bool is_div_by_one_hundred = year % 100 == 0;
    bool is_div_by_four_hundred = year % 400 == 0;

    printf("%d is leap year? %s\n", year, ((is_div_by_one_hundred && is_div_by_four_hundred) || (!is_div_by_one_hundred && is_div_by_four)) ? "YES" : "NO");
}

int findArrayExtremes()
{
    // 7. Create a program which prints the greatest/lowest element of an array.
    // (DO NOT sort the array)

    int some_array[10], current;

    int smallest = some_array[0], biggest = some_array[0];
    int index = 1;

    while (some_array[index] != '\0')
    {
        current = some_array[index];
        if (current > biggest)
        {
            biggest = current;
        }
        if (current < smallest)
        {
            smallest = current;
        }
        index++;
    }

    printf("smallest = %d; biggest = %d", smallest, biggest);
}

int swapArrayExtremes()
{
    // 8. Create a program which
    // swaps the smallest and greatest elements of an array.

    int some_array[10],
        current;

    int smallest_index = 0, smallest = some_array[smallest_index];
    int biggest_index = 0, biggest = some_array[biggest_index];
    int index = 1;

    while (some_array[index] != '\0')
    {
        current = some_array[index];
        if (current > biggest)
        {
            biggest = current;
            biggest_index = index;
        }
        if (current < smallest)
        {
            smallest = current;
            smallest_index = index;
        }
        index++;
    }

    some_array[smallest_index] = biggest;
    some_array[biggest_index] = smallest;
}

int stringLen()
{
    // 9. Create a program which calculates the length of a string.

    char some_string[10];

    int index = 0;

    while (some_string[index] != '\0')
    {
        index++;
    }

    printf("The length of %s is %d", some_string, index);
}

int avgOfFloat()
{
    // 10. Calculate the average of some floating point numbers in an array.

    float some_arr[10], sum = 0;
    int size = sizeof(some_arr) / sizeof(float);
    size_t i = 0;

    while (i < size)
    {
        sum += some_arr[i];
        i++;
    }

    printf("Avg = %f / %d = %f", sum, size, sum / size);
}

int computeWeightedSum()
{
    // 11. Create a program which calculates the weighted sum of an array. The weights
    //    are listed in another array. For example: first array: [1, 2, 3, 4, 5],
    //    second array: [1, 1, 2, 3, 5]. Weighted sum: 1*1 + 1*2 + 2*3 + 3*4 + 5*5.
    int some_arr[10], weight = 1, sum = 0;

    size_t len = sizeof(some_arr) / sizeof(int);
    size_t i = 0;

    for (; i < len; i++)
    {
        sum += weight * some_arr[i];
        weight++;
    }

    printf("Weighted sum = %d", sum);
}

int convertToHex()
{

    // 12. Read the characters `0-9`, `a`, `b`, `c`, `d`, `e`, `f`.
    // Give an error message for everything else.
    // Interpret the number as hexadecimal and convert
    // it to base 10. Use character to digit conversion.
    // Use (https://www.tutorialspoint.com/how-to-convert-hexadecimal-to-decimal)

    char buffer[99], current;
    int i, decimal = 0, ir = 0;

    printf("Enter a hex-valid characer [0-9,a-f]: ");
    scanf("%s", buffer);

    for (i = 0; buffer[i] != 0; i++)
    {
        current = buffer[i];

        bool is_num = 48 <= current && current <= 57;
        bool is_valid_char = 97 <= current && current <= 102;

        if (!is_num && !is_valid_char)
        {
            printf("Invalid character encountered");
            return 0;
        }
    }

    while (i > 0)
    {
        current = buffer[ir];

        if ('0' <= current && current <= '9')
        {
            decimal += (current - '0') * pow(16, i - 1);
        }
        else
        {
            decimal += (current - 'a') * pow(16, i - 1);
        }
        i--;
        ir++;
    }
    printf("Hex = %s; decimal = %d", buffer, decimal);
}

int printMatrix()
{
    // 13. Given an odd integer number, prints the "X" pattern. Sample input: 11
    // Output:
    //       X - - - - - - - - - X
    //       - X - - - - - - - X -
    //       - - X - - - - - X - -
    //       - - - X - - - X - - -
    //       - - - - X - X - - - -
    //       - - - - - X - - - - -
    //       - - - - X - X - - - -
    //       - - - X - - - X - - -
    //       - - X - - - - - X - -
    //       - X - - - - - - - X -
    //       X - - - - - - - - - X

    int s;
    printf("Enter the size of the matrix (Int): ");
    scanf("%d", &s);

    for (int row = 0; row < s; row++)
    {
        for (int col = 0; col < s; col++)
        {
            if (row == col || row + col + 1 == s)
            {
                printf("x");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
    }
}

int printPattern()
{
    // 14. Prints the patterns:
    // Star Pyramid Pattern,
    // Diamond and
    // Full Star Diamond Pattern :).
}

// 15. Do some research about bitwise operations and their usage:
//     https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/

int main()
{
    // isAmicable();
    // realNumBetween();
    // multipleOfTenTable();
    // byteSizes();
    // isLeapYear();
    // operatorChaining();
    // convertToHex();
    printMatrix();

    return 0;
}