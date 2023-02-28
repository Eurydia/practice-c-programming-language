#include <stdio.h>
#include <string.h>

int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        char string[100];
        scanf("%s", string);

        int string_len = strlen(string);

        if (string_len % 2 == 1)
        {
            printf("No\n");
            continue;
        }

        int offset = string_len / 2;
        int skip = 0;

        for (int i = 0; i < offset; i++)
        {
            if (string[i] != string[i + offset])
            {
                skip = 1;
                break;
            }
        }

        if (skip == 0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}