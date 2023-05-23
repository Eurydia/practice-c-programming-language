#include <stdio.h>

// 1. Write the real numbers from 0 to 1 in increments of 0.1.
int main()
{
    float s;
    for (s = 0.0; s < 1; s += 0.1)
    {
        printf("%.1f\n", s);
    }
    return 0;
}