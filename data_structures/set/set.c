#include "./set.h"

struct set
{
    int *container;
    int size;
    int capacity;
};

set_t *new_set(int capacity)
{
    set_t *n_set = malloc(sizeof(set_t));
    n_set->container = (int *)malloc(sizeof(int) * capacity);
    n_set->capacity = capacity;
    n_set->size = 0;
    return n_set;
}

void del_set(set_t *sPtr)
{
    free(sPtr->container);
    free(sPtr);
}

void set_capacity(set_t *sPtr, int capacity)
{
    if (capacity <= (sPtr->size))
    {
        return;
    }

    sPtr->container = (int *)realloc(sPtr->container, capacity);
    sPtr->capacity = capacity;
}

bool has(set_t *sPtr, int e)
{
    int i;
    for (i = 0; i < sPtr->size; i++)
    {
        if (sPtr->container[i] == e)
        {
            return true;
        }
    }
    return false;
}

void insert(set_t *sPtr, int e)
{
    if (has(sPtr, e))
    {
        return;
    }

    if (((sPtr->size) + 1) > sPtr->capacity)
    {
        set_capacity(sPtr, (sPtr->capacity) * 2);
    }
    sPtr->container[sPtr->size] = e;
    sPtr->size += 1;
}

void remove(set_t *sPtr, int e)
{
    int eIndex = -1;
    int i;
    for (i = 0; i < sPtr->size; i++)
    {
        int curr = (sPtr->container)[i];
        if (curr == e)
        {
            eIndex = i;
            break;
        }
    }
    sPtr->size -= 1;
    sPtr->container[eIndex] = sPtr->container[sPtr->size];
}

int size(set_t *sPtr)
{
    return sPtr->size;
}

int capacity(set_t *sPtr)
{
    return sPtr->capacity;
}

bool is_empty(set_t *sPtr)
{
    return (sPtr->size) == 0;
}

bool is_full(set_t *sPtr)
{
    return (sPtr->size) == (sPtr->capacity);
}