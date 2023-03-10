#include <stdio.h>

#define M_PI 3.14159265358979323846

void print_name()
{
    // task -- 1 print name
    printf("Korn\n");
}

void print_sum_int()
{
    // task 2 -- print sum of two integers
    int a, b;
    printf("Enter two integers separated by a space: ");
    scanf("%d %d", &a, &b);
    printf("%d\n", a + b);
}

void print_sum_float()
{
    // task 3 -- print sum of two floats
    float a, b;
    printf("Enter two floats separated by a space: ");
    scanf("%f %f", &a, &b);
    printf("%.5f\n", a + b);
}

void print_age()
{
    // task 4 -- print age from year of birth
    const int CURRENT_YEAR = 2023;
    int birth_year;
    printf("Enter year of birth (int):");
    scanf("%d", &birth_year);
    printf("%d y/o", CURRENT_YEAR - birth_year);
}

void print_escape_name()
{
    // task 5 -- escaping characters
    char name[50];
    printf("Enter you name:");
    scanf("%s", name);
    printf("\"%s\"", name);
}

void print_area_perimeter_of_a_circle()
{
    // task 6 -- calculate area and perimeter of a circle
    float radius, area, perimeter;
    scanf("%f", &radius);

    area = radius * radius * M_PI;
    perimeter = 2 * radius * M_PI;

    printf("Area = %.3f\n", area);
    printf("Perimeter = %.3f\n", perimeter);
}

int main()
{
    // print_name();
    // print_sum_int();
    // print_sum_float();
    // print_age();
    // print_escape_name();
    print_area_perimeter_of_a_circle();

    return 0;
}