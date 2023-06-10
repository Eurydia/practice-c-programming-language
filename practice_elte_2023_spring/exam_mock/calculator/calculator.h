#ifndef CALCULATOR_H
#define CALCULATOR_H

struct calculator;

typedef struct calculator calculator_t;
typedef int __calculator_memory_type;

calculator_t *new_calculator(int memory_size);
int dispose_calculator(calculator_t *calc);

__calculator_memory_type set_memory(int index, __calculator_memory_type element);
__calculator_memory_type get_memory(int index);

int add_memory(calculator_t *calc, int index_a, int index_b, int index_r);
int sub_memory(calculator_t *calc, int index_a, int index_b, int index_r);
int mul_memory(calculator_t *calc, int index_a, int index_b, int index_r);
int div_memory(calculator_t *calc, int index_a, int index_b, int index_r);

#endif // CALCULATOR_H