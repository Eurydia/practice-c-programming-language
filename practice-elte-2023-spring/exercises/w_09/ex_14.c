#include <stdbool.h>

// 14. Write a program that reads in a list of points (given by their x and
//     y coordinates) and determines the pair that is the farthest apart.
//     Hint: store them in an array and use the point_dist() function.
struct point
{
    float x;
    float y;
};

typedef struct point point_t;

void find_furthest_points(point_t *points, int size)
{
    point_t _left = points[0], _right = points[0];
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            point_t a = points[i];
            point_t b = points[j];
            if (euclidean_dist(a, b) > euclidean_dist(_left, _right))
            {
                _left = a;
                _right = b;
            }
        }
    }
    printf("The furthest points are (%f, %f) and (%f, %f)\n", _left.x, _left.y, _right.x, _right.y);
}

int main()
{
    return 0;
}