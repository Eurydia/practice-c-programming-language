#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int rating, division;
        scanf("%d", &rating);

        if (rating <= 1399)
        {
            division = 4;
        }
        else if (1400 <= rating && rating <= 1599)
        {
            division = 3;
        }
        else if (1600 <= rating && rating <= 1899)
        {
            division = 2;
        }
        else
        {
            division = 1;
        }
        printf("Division %d\n", division);
    }

    return 0;
}