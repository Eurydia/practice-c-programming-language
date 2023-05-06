#include <stdio.h>

// 6. Create a program that calculates the area of a circle and its perimeter.
int main()
{
    float PI = 3.14159265359;
    float radius, area, perimeter;
    scanf("%f", &radius);

    area = radius * radius * PI;
    perimeter = 2 * radius * PI;

    printf("Area = %.3f\n", area);
    printf("Perimeter = %.3f\n", perimeter);
}
