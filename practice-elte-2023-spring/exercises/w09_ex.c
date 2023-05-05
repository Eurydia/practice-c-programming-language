#include <stdio.h>

struct card
{
    char *face;
    char *suit;
};

struct phone
{
    char *brand;
    char *color;
    int width;
    int height;
};

typedef struct phone Phone;

Phone phones[5];

Phone new_phone(char *brand, char *color, int width, int height)
{
    Phone p;
    p.brand = brand;
    p.color = color;
    p.width = width;
    p.height = height;

    // Phone p = {
    //     color,
    //     width,
    //     height,
    //     brand = brand,
    // };

    return p;
}

int main()
{
    char tmp_brand[50], tmp_color[50];
    int tmp_width, tmp_height;
    // int i = 0;
    // for (i = 0; i < 1; i++)
    // {
    //     printf("Enter brand name:\n");
    //     scanf(" %s\n", tmp_brand);
    //     printf("Enter color:\n");
    //     scanf(" %s\n", tmp_color);
    //     printf("Enter screen width and height:\n");
    //     scanf(" %d %d", &tmp_width, &tmp_height);

    //     phones[i] = new_phone(tmp_brand, tmp_color, tmp_width, tmp_height);
    // }

    Phone p = {
        brand = "Nokia"};

    printf("%s %s %d %d", p.brand, p.color, p.width, p.height);
}