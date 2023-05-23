#include <stdio.h>

int main()
{
    size_t size;
    scanf("%d", &size);

    int seq[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &seq[i]);
    }

    int gain = 0;
    int loss = 0;

    for (int j = 0; j < size; j++)
    {
        printf("%d", seq[j]);
    }

    return 0;
}