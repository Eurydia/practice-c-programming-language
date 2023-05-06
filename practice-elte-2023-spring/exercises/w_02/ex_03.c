#include <stdio.h>

// 3. Create a program which asks two  numbers from the user and prints the sum of them.
int main()
{
    int a, b;
    printf("Enter two integers separated by a space: ");
    scanf("%d %d", &a, &b);
    printf("%d\n", a + b);
    return 0;
}
