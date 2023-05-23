#include <stdbool.h>

// 5. Define a structure called Circle which consists of the radius of the
// circle and the (x,y) coordinates of its centre. And perform the following:

//     a) Implement the function intersect() that returns true if two circles intersect, and false otherwise.
//     Two circles intersect when the distance between their centres is less than or equal to the sum of
//     their radii. The function prototype is given below:
//         int intersect(struct circle c1, struct circle c2);

//     b) Implement the function contain() that returns 1 if circle1 contains c2, i.e. circle c2 is found
//     inside circle c1. Otherwise, the function returns 0. Circle c1 contains circle c2 when the radius
//     of c1 is larger than or equal to the sum of the radius of c2 and the distance between the centres of
//     c1 and c2. The function prototype is given below:
//         int contain(struct circle *c1, struct circle *c2);

//     Test the implementated functions inside the main function.
struct circle
{
    float radius;
    float x;
    float y;
};
typedef struct circle circle_t;

bool intersect(circle_t ca, circle_t cb)
{
    float dx = ca.x - cb.x;
    float dy = ca.y - cb.y;
    float d = sqrt(dx * dx + dy * dy);
    return d <= (ca.radius + cb.radius);
}

bool contain(circle_t ca, circle_t cb)
{
    float dx = ca.x - cb.x;
    float dy = ca.y - cb.y;
    float d = sqrt(dx * dx + dy * dy);
    return ca.radius >= (cb.radius + d);
}

int main()
{
    return 0;
}