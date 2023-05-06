#include <stdbool.h>

// 12. Write a function that returns 1 if a point falls within a rectangle, 0 otherwise.
//     Use the Point and Rectangle types above.
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

bool is_point_in_rect(point_t p, rect_t r)

{
    if (p.x < r.lower_left.x || p.x > r.upper_right.x)
    {
        return false;
    };
    if (p.y < r.lower_left.y || p.y > r.upper_right.y)
    {
        return false;
    };
    return true;
}

int main()
{
    return 0;
}