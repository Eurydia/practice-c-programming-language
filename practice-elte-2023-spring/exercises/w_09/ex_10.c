#include <stdbool.h>

// 10. Define a type Rect for rectangles that are parallel to the axes in a
//     Cartesian coordinate system. Represent a rectangle by its lower left
//     and upper right endpoints using the Point type above.
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

int main()
{
    return 0;
}