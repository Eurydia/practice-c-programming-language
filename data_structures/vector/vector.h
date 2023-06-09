#ifndef VECTOR_H
#define VECTOR_H

struct vector;
typedef struct vector vector_t;
typedef int __vector_element_type;

vector_t *create();
int initialize(vector_t *vector, int capacity);
void dispose(vector_t *vector);
int append(vector_t *vector, __vector_element_type element);
int retrieve(vector_t *vector, int index);

int insert(vector_t *vector, int index, __vector_element_type element);
int erase(vector_t *vector, int index);

int set_capacity(vector_t *vector, int capacity);
int safe_append(vector_t *vector, __vector_element_type element);
int safe_insert(vector_t *vector, int index, __vector_element_type element);

#endif // VECTOR_H