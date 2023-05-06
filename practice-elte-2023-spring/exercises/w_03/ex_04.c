#include <stdio.h>

// 4. For an input in the format "HH:MM", check whether or not It if valid and convert It to seconds. HH -> Hour, MM -> Minute.
int main()
{
    int h, m;
    printf("Enter a time in this format (HH:MM): ");
    scanf("%d:%d", &h, &m);

    if (0 <= h && h < 24 && 0 <= m && m < 60)
    {
        printf("Second = %d", ((3600 * h) + (60 * m)));
    }
    else
    {
        printf("Invalid format");
    }
    return 0;
}
