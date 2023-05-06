#include <stdbool.h>

// 8. Provide an implementation of a function point_dist() that computes the
//     Euclidean distance between two Points.
struct point
{
    float x;
    float y;
};

typedef struct point point_t;

float euclidean_dist(point_t a, point_t b)
{
    float dx = a.x - b.x;
    float dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

int main()
{
    return 0;
}