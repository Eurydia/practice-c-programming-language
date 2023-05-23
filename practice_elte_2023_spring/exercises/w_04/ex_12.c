#include <stdio.h>
#include <ctype.h>
#include <math.h>

// 12. Read the characters `0-9`, `a`, `b`, `c`, `d`, `e`, `f`. Give an error
//    message for everything else. Interpret the number as hexadecimal and convert
//    it to base 10. Use character to digit conversion. Use (https://www.tutorialspoint.com/how-to-convert-hexadecimal-to-decimal)
int main()
{

    // int size, i, current_val, decimal = 0;
    // printf("Enter string size (Int): ");
    // scanf("%d", &size);

    // char buffer[size], current;

    // printf("Enter a hex-valid characer [0-9,a-f]: ");
    // scanf("%s", buffer);

    int size = 3, i, current_val, decimal = 0;
    char buffer[] = {'a', 'b', 'c', '\0'}, current;

    for (i = 0; i < size; i++)
    {
        current = buffer[i];

        if (!isdigit(current) && !isalpha(current))
        {
            printf("Invalid character encountered");
            return 0;
        }
    }
    for (i = 0; i < size; i++)
    {
        current = buffer[i];
        current_val = isdigit(current) ? (current - '0') : (current - 'a');
        decimal += current_val * pow(16, size - i - 1);
    }
    printf("Hex = %s; decimal = %d", buffer, decimal);
    return 0;
}