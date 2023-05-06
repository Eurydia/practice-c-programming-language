#include <stdio.h>

// 3. Create a program that reads an integer x, 10 <= x <= 99 and prints It with his digits inverted. (modulos)
int main()
{
    int n, reversed;
    printf("Enter a number (Int): ");
    scanf("%d", &n);

    reversed = n / 10 + ((n % 10) * 10);

    printf("Reversed digits of %d = %d", n, reversed);
}
