#include <stdbool.h>

// 11. Write a function that computes the area of a rectangle.
struct point
{
    float x;
    float y;
};

typedef struct point point_t;

struct rect
{
    point_t lower_left;
    point_t upper_right;
};

typedef struct rect rect_t;

float area(rect_t r)
{
    float width = r.upper_right.x - r.lower_left.x;
    float height = r.upper_right.y - r.lower_left.y;
    return width * height;
}

int main()
{
    return 0;
}