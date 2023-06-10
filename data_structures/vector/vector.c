#include <stdlib.h>
#include <stdbool.h>
#include "vector.h"

struct vector
{
    __vector_element_type *data;

    int current_size;
    int capacity;
};

vector_t *create()
{
    vector_t *vector = malloc(sizeof(vector_t));
    vector->current_size = 0;
    vector->capacity = 0;
    return vector;
}

int initialize(vector_t *vector, int capacity)
{
    if (capacity < 0)
    {
        return 0;
    }

    // TODO: should return false if `malloc` could not reserve memory in heap
    int *data = malloc(capacity * sizeof(__vector_element_type));
    if (!data)
    {
        return 0;
    }

    vector->data = data;
    vector->capacity = capacity;
    return 1;
}

void dispose(vector_t *vector)
{
    free(vector->data);
    vector->capacity = 0;
    vector->current_size = 0;
}

int is_full(vector_t *vector)
{
    return vector->current_size == vector->capacity;
}

int append(vector_t *vector, __vector_element_type element)
{
    if (is_full(vector) == 1)
    {
        return 0;
    }

    vector->data[vector->current_size] = element;
    (vector->current_size)++;

    return 1;
}

__vector_element_type retrieve(vector_t *vector, int index)
{
    return vector->data[index];
}

//---------------------------------------------

int insert(vector_t *vector, int index, __vector_element_type element)
{
    if (is_full(vector) == 1)
    {
        return 0;
    }

    if (index > vector->current_size)
    {
        return 0;
    }

    // make room
    // 1 2 3 4
    //       ^
    int i;
    for (i = vector->current_size; i > index; i--)
    {
        vector->data[i] = vector->data[i - 1];
    }
    vector->data[index] = element;
    vector->current_size++;
    return 1;
}

int erase(vector_t *vector, int index)
{
    if (index >= vector->current_size)
    {
        return 0;
    }

    int i;
    for (i = index + 1; i < vector->current_size; i++)
    {
        vector->data[i - 1] = vector->data[i];
    }
    vector->current_size--;
    return 1;
}
//---------------------------------------------

int __arrcpy(int *arr_a, int *arr_b, size_t size_a)
{
    int i;
    for (i = 0; i < size_a; i++)
    {
        arr_b[i] = arr_a[i];
    }
    return 1;
}

int set_capacity(vector_t *vector, int capacity)
{
    if (capacity < vector->capacity)
    {
        return 0;
    }

    int *data = malloc(capacity * sizeof(__vector_element_type));
    if (!data)
    {
        return 0;
    }

    __arrcpy(vector->data, data, vector->current_size);
    free(vector->data);
    vector->data = data;
    vector->capacity = capacity;

    return 1;
}

int safe_append(vector_t *vector, __vector_element_type element)
{
    if (vector->current_size == vector->capacity)
    {
        if (!set_capacity(vector, (vector->capacity) * 2))
        {
            return 0;
        }
    }
    return append(vector, element);
}

int safe_insert(vector_t *vector, int index, __vector_element_type element)
{
    if (vector->current_size == vector->capacity)
    {
        if (!set_capacity(vector, (vector->capacity) * 2))
        {
            return 0;
        }
    }
    return insert(vector, index, element);
}

//---------------------------------------------
