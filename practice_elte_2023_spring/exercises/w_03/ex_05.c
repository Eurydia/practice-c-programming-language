#include <stdio.h>
#include <stdbool.h>

bool is_even(int n)
{
    return n % 2 == 0;
}

// 5. How many even numbers do we have from 0 to a given integer? (Use for loop and while => Try with do ... while as well)
int main()
{
    int n;
    int temp;
    printf("Enter a number (Int): ");
    scanf("%d", &n);

    int for_counter = 0;
    for (int i = 0; i <= n; i++)
    {
        if (is_even(i))
        {
            for_counter++;
        }
    }

    int while_counter = 0;
    temp = n + 1;
    while (temp--)
    {
        if (is_even(temp))
        {
            while_counter++;
        }
    }

    int do_while_counter = 0;
    temp = n;
    do
    {
        if (is_even(temp))
        {
            do_while_counter++;
        }
    } while (temp--);

    printf("With for loop = %d; with while loop = %d; with do while loop = %d\n", for_counter, while_counter, do_while_counter);
    return 0;
}
