#ifndef REPLACE_H
#define REPLACE_H

struct Replacement
{
    char from;
    char to;
};

typedef struct Replacement Replacement_t;

void replace(char *string, Replacement_t *replacements, int length);
char *getReplaced(char *string, Replacement_t *replacements, int length);

#endif
