#include <stdio.h>

int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int front, back;
        char ticket[6];

        scanf("%s", ticket);
        front = ticket[0] + ticket[1] + ticket[2];
        back = ticket[3] + ticket[4] + ticket[5];

        if (front == back)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}