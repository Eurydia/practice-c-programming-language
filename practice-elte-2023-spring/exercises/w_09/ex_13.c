#include <stdbool.h>

// 13. Write a function that returns 1 if the first rectangle is completely
//     contained inside the second rectangle, and 0 otherwise.  Hint: check if
//     the lower left and upper right endpoints of the first rectangle fall
//     within the second rectangle.
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

bool is_rect_in_rect(rect_t a, rect_t b)
{
    if (!is_point_in_rect(a.lower_left, b))
    {
        return false;
    };
    if (!is_point_in_rect(a.upper_right, b))
    {
        return false;
    };
    return true;
}

int main()
{
    return 0;
}