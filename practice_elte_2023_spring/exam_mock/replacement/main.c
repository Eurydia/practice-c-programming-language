#include <stdio.h>
#include "replace.h"

#define BUFFER_SIZE 100

void read_from_console(char *buffer, int length)
{
    int current_char;
    int current_character_index = 0;

    while ((current_char = getc(stdin)) != EOF)
    {
        if (current_character_index + 1 == length)
        {
            break;
        }

        if (current_char == '\n')
        {
            break;
        }

        buffer[current_character_index] = current_char;
        current_character_index++;
    };
}

// Use
// gcc .\main.c .\replace.c
// to compile
int main(int argc, char *argv[])
{
    // actual length 101
    char buffer[BUFFER_SIZE + 1];
    buffer[BUFFER_SIZE] = '\0';

    Replacement_t replacements[2];

    if (argc > 1)
    {
        char *file_name = argv[1];
        FILE *file_stream = fopen(file_name, "r");

        while (fgets(buffer, BUFFER_SIZE, file_stream) != NULL)
        {
            // "123\n"
            // "123\n\0"
            replace(buffer, replacements, 2);
            printf("%s", buffer);
        }
        // DON'T FORGET TO CLOSE THE FILE
        fclose(file_stream);
    }
    else
    {
        printf("Enter a string:\n");
        read_from_console(buffer, BUFFER_SIZE);
        replace(buffer, replacements, 5);
        printf("%s", buffer);
    }
    return 0;
}
