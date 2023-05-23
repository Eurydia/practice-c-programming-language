#ifndef SET_H
#define SET_H
#include <stdbool.h>

struct set;

typedef struct set set_t;

set_t *new_set(int capacity);
void set_capacity(set_t *sPtr, int capacity);
void insert(set_t *sPtr, int e);
void remove(set_t *sPtr, int e);

int size(set_t *sPtr);
int capacity(set_t *sPtr);

bool has(set_t *sPtr, int e);
bool is_empty(set_t *sPtr);
bool is_full(set_t *sPtr);

#endif