#include <stdio.h>
#include <stdlib.h>

#include "calculator.h"

struct calculator
{
    __calculator_memory_type *memory;
    int memory_size;
};

calculator_t *new_calculator(int memory_size)
{
    calculator_t *calc = malloc(sizeof(calculator_t));
    if (!calc)
    {
        return NULL;
    }

    __calculator_memory_type *memory = malloc(memory_size * sizeof(__calculator_memory_type));
    calc->memory = memory;
    calc->memory_size = memory_size;
    return calc;
}

int dispose_calculator(calculator_t *calc)
{
    free(calc->memory);
    free(calc);
    return 1;
}

int add_memory(calculator_t *calc, int index_a, int index_b, int index_r)
{
    int mem_size = calc->memory_size;

    if (index_a >= mem_size)
    {
        return 0;
    }
    if (index_b >= mem_size)
    {
        return 0;
    }
    if (index_r >= mem_size)
    {
        return 0;
    }

    calc->memory[index_r] = calc->memory[index_a] + calc->memory[index_b];

    return 1;
}

int sub_memory(calculator_t *calc, int index_a, int index_b, int index_r)
{
    int mem_size = calc->memory_size;

    if (index_a >= mem_size)
    {
        return 0;
    }
    if (index_b >= mem_size)
    {
        return 0;
    }
    if (index_r >= mem_size)
    {
        return 0;
    }

    calc->memory[index_r] = calc->memory[index_a] - calc->memory[index_b];

    return 1;
}

int mul_memory(calculator_t *calc, int index_a, int index_b, int index_r)
{
    int mem_size = calc->memory_size;

    if (index_a >= mem_size)
    {
        return 0;
    }
    if (index_b >= mem_size)
    {
        return 0;
    }
    if (index_r >= mem_size)
    {
        return 0;
    }

    calc->memory[index_r] = calc->memory[index_a] * calc->memory[index_b];

    return 1;
}

int div_memory(calculator_t *calc, int index_a, int index_b, int index_r)
{
    int mem_size = calc->memory_size;

    if (index_a >= mem_size)
    {
        return 0;
    }
    if (index_b >= mem_size)
    {
        return 0;
    }
    if (index_r >= mem_size)
    {
        return 0;
    }

    calc->memory[index_r] = calc->memory[index_a] / calc->memory[index_b];

    return 1;
}
