#include <stdio.h>

// 4. Create a program which asks a year and print the possible age. Consider current year as 2023.
int main()
{
    const int CURRENT_YEAR = 2023;

    // int birth_year;
    // printf("Enter year of birth (int):");
    // scanf("%d", &birth_year);

    int birth_year = 2000;

    printf("%d y/o", CURRENT_YEAR - birth_year);
}
