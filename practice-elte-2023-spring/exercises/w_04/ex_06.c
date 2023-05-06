#include <stdio.h>
#include <stdbool.h>

// 6. Write a program that determines whether the number is a leap year from the
//  standard input. A leap year is any year divisible by four, except those
//  divisible by a hundred. However, those divisible by four hundred will also be
//  leap years. (DO NOT use `if` in the solution!)
int main()
{
    // int year;
    // printf("Enter a year (Int): ");
    // scanf("%d", &year);

    int year = 2020;

    bool is_div_by_four = year % 4 == 0;
    bool is_div_by_one_hundred = year % 100 == 0;
    bool is_div_by_four_hundred = year % 400 == 0;

    printf("%s\n", ((is_div_by_one_hundred && is_div_by_four_hundred) || (!is_div_by_one_hundred && is_div_by_four)) ? "YES" : "NO");
    return 0;
}