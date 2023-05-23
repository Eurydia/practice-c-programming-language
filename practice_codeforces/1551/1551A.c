#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, ones, twos;
        scanf("%d", &n);

        ones = n / 3;
        twos = n / 3;

        if (n % 3 == 1)
        {
            ones++;
        }
        else if (n % 3 == 2)
        {
            twos++;
        }

        printf("%d %d\n", ones, twos);
    }

    return 0;
}

// 1 -> 1,0
// 2 -> 0,1
// 3 -> 1,1

// 4 -> 2,1
// 5 -> 1,2
// 6 -> 2,2

// 7 -> 3,2
// 8 -> 2,3
// 9 -> 3,3