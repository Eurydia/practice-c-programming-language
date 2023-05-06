#include <stdio.h>

// 1. Create a program that reads two integers from the user and print them in ascending order. Try It with 3 numbers! (if statment, swap, min and max functions)
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

int main()
{

    int a, b, c;
    int min_val, med_val, max_val;
    // printf("Enter A B separated by a space (Int Int): ");
    // scanf("%d %d", &a, &b);

    // min_val = minof(a, b);
    // max_val = maxof(a, b);

    // printf("Ascending = %d, %d", min_val, max_val);

    printf("Enter A B C separated by a space (Int Int Int): ");
    scanf("%d %d %d", &a, &b, &c);

    min_val = minof(a, minof(b, c));
    med_val = minof(a, maxof(b, c));
    max_val = maxof(a, maxof(b, c));

    printf("Ascending = %d, %d, %d", min_val, med_val, max_val);

    return 0;
}