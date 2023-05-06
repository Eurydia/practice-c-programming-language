#include <stdio.h>

// 9. Prints the Fibonacci sequence and its (n - 1)th term. Note: n > 1.
int main()
{
    int pos;
    int curr = 0, prev = 1, next;
    printf("Enter a number (Int): ");
    scanf("%d", &pos);
    while (pos > 0)
    {
        next = curr + prev; // 2 // 3 //5
        prev = curr;        // 1 // 2 // 3
        curr = next;        // 2 // 3 // 5
        pos--;
        printf("%d ", curr);
    }

    printf("Nth = %d; (N-1)th = %d", curr, prev);
    return 0;
}
