#include <stdio.h>
#include "calculator.h"

#define CALCULATOR_MEMORY_SIZE 10
#define FILE_BUFFER_SIZE 100

int readConsole(const char const *file_name, calculator_t *calc)
{
    FILE *file = fopen(file_name, "r");

    char buffer[FILE_BUFFER_SIZE];

    while (fgets(buffer, FILE_BUFFER_SIZE, file) != NULL)
    {
    }

    fclose(file);

    return 1;
}

int main(int argc, char *argv[])
{
    int flagReadFromFile = argc > 1;

    calculator_t *calc = new_calculator(CALCULATOR_MEMORY_SIZE);

    dispose_calculator(calc);

    return 0;
}