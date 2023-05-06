#include <stdio.h>
#include <math.h>

// 2. Given an integer number, prints the corresponding power of 2. (math function - bitwise).
int main()
{
    int power;

    // printf("Enter a number separated (Int): ");
    // scanf("%d", &power);

    power = 3;

    printf("Power of two = %d", (int)pow(2, power));
    return 0;
}
