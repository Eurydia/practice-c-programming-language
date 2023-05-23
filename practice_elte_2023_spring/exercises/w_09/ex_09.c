#include <stdbool.h>

// 9. Provide an implementation of a function that returns 1 if
//     the two points are "equal"; and 0 otherwise. With floating point
//     values it doesn't make much sense to test for exact equality; Instead
//     check to see if the distance between the points is less than 0.000001.
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

bool is_equal(point_t a, point_t b)
{
    return euclidean_dist(a, b) < 0.000001;
}

int main()
{
    return 0;
}