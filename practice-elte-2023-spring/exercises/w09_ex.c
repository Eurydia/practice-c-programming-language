#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// ----------------------------------------------
// 0. Provide the definition for each of the following structures:
//     a) Structure inventory containing character array partName[ 30 ], integer partNumber,
//     floating point price, integer stock and integer reorder.
//     b) A structure called address that contains character arrays
//     streetAddress[ 25 ], city[ 20 ], state[ 3 ] and zipCode[ 6 ].
//     c) Structure student that contains arrays firstName[ 15 ] and
//     lastName[ 15 ] and variable homeAddress of type struct address from part (b).
struct inventory
{
    char partName[30];
    int partNum;
    float price;
    int stockl;
    int reorder;
};
struct address
{
    char streetAddress[25];
    char city[20];
    char state[3];
    char zipCode[6];
};
typedef struct address address_t;
struct student
{
    char firstName[15];
    char lastName[15];
    address_t address;
};
// ----------------------------------------------

// ----------------------------------------------
// 1. Define a data type for complex numbers and create functions that allows to determine the multiplication, addition, subtration and division of two complex numbers.
// Use as reference [https://www.mathsisfun.com/numbers/complex-numbers.html]
struct complex
{
    float re;
    float im;
};
typedef struct complex complex_t;
complex_t complex_add(complex_t a, complex_t b)
{
    complex_t r = {
        .re = a.re + b.re,
        .im = a.im + b.im,
    };
    return r;
}
complex_t complex_sub(complex_t a, complex_t b)
{
    complex_t r = {
        .re = a.re - b.re,
        .im = a.im - b.im,
    };
    return r;
}
complex_t complex_mul(complex_t a, complex_t b)
{
    complex_t r = {
        .re = a.re * b.re - a.im * b.im,
        .im = a.re * b.im + a.im * b.re,
    };
    return r;
}
complex_t copmlex_div(complex_t a, complex_t b)
{
    complex_t r = {
        .re = (a.re * b.re + a.im * b.im) / (b.re * b.re + b.im * b.im),
        .im = (a.im * b.re - a.re * b.im) / (b.re * b.re + b.im * b.im),
    };
    return r;
}
// ----------------------------------------------

// ----------------------------------------------
// 4. Given the following structure and variable definitions,
//     struct customer {
//         char lastName[ 15 ];
//         char firstName[ 15 ];
//         int customerNumber;

//         struct {
//             char phoneNumber[ 11 ];
//             char address[ 50 ];
//             char city[ 15 ];
//             char state[ 3 ];
//             char zipCode[ 6 ];
//         } personal;
//     } customerRecord, *customerPtr;

//     customerPtr = &customerRecord;

// write an expression that can be used to access the structure members in each of the following parts:
//     a) Member lastName of structure customerRecord.
//     b) Member lastName of the structure pointed to by customerPtr.
//     c) Member firstName of structure customerRecord.
//     d) Member firstName of the structure pointed to by customerPtr.
//     e) Member customerNumber of structure customerRecord.
//     f) Member customerNumber of the structure pointed to by customerPtr.
//     g) Member phoneNumber of member personal of structure customerRecord.
//     h) Member phoneNumber of member personal of the structure pointed to by customerPtr.
//     i) Member address of member personal of structure customerRecord.
//     j) Member address of member personal of the structure pointed to by customerPtr.
//     k) Member city of member personal of structure customerRecord.
//     l) Member city of member personal of the structure pointed to by customerPtr.
//     m) Member state of member personal of structure customerRecord.
//     n) Member state of member personal of the structure pointed to by customerPtr.
//     o) Member zipCode of member personal of structure customerRecord.
//     p) Member zipCode of member personal of the structure pointed to by
void so_much_repetition()
{
    struct customer
    {
        char lastName[15];
        char firstName[15];
        int customerNumber;

        struct
        {
            char phoneNumber[11];
            char address[50];
            char city[15];
            char state[3];
            char zipCode[6];
        } personal;
    } customerRecord, *customerPtr;

    customerPtr = &customerRecord;

    customerRecord.lastName;
    customerPtr->lastName;
    customerRecord.firstName;
    customerPtr->firstName;
    customerRecord.customerNumber;
    customerPtr->customerNumber;
    customerRecord.personal.phoneNumber;
    customerPtr->personal.phoneNumber;
    customerRecord.personal.address;
    customerPtr->personal.address;
    customerRecord.personal.city;
    customerPtr->personal.city;
    customerRecord.personal.state;
    customerPtr->personal.state;
    customerRecord.personal.zipCode;
    customerPtr->personal.zipCode;
}
// ----------------------------------------------

// ----------------------------------------------
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
// ----------------------------------------------

// ----------------------------------------------
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
// ----------------------------------------------

// ----------------------------------------------
// 9. Provide an implementation of a function that returns 1 if
//     the two points are "equal"; and 0 otherwise. With floating point
//     values it doesn't make much sense to test for exact equality; Instead
//     check to see if the distance between the points is less than 0.000001.
bool is_equal(point_t a, point_t b)
{
    return euclidean_dist(a, b) < 0.000001;
}
// ----------------------------------------------

// ----------------------------------------------
// 10. Define a type Rect for rectangles that are parallel to the axes in a
//     Cartesian coordinate system. Represent a rectangle by its lower left
//     and upper right endpoints using the Point type above.
struct rect
{
    point_t lower_left;
    point_t upper_right;
};
typedef struct rect rect_t;
// ----------------------------------------------

// ----------------------------------------------
// 11. Write a function that computes the area of a rectangle.
float area(rect_t r)
{
    float width = r.upper_right.x - r.lower_left.x;
    float height = r.upper_right.y - r.lower_left.y;
    return width * height;
}
// ----------------------------------------------

// ----------------------------------------------
// 12. Write a function that returns 1 if a point falls within a rectangle, 0 otherwise.
//     Use the Point and Rectangle types above.
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
// ----------------------------------------------

// ----------------------------------------------
// 13. Write a function that returns 1 if the first rectangle is completely
//     contained inside the second rectangle, and 0 otherwise.  Hint: check if
//     the lower left and upper right endpoints of the first rectangle fall
//     within the second rectangle.
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
// ----------------------------------------------

// ----------------------------------------------
// 14. Write a program that reads in a list of points (given by their x and
//     y coordinates) and determines the pair that is the farthest apart.
//     Hint: store them in an array and use the point_dist() function.
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

// ----------------------------------------------

// ----------------------------------------------
// 15. Create a structure named Date having day, month and year as its elements. Store the current date in the structure. Now add 45 days to the current date and display the final date.
struct date
{
    int day;
    int month;
    int year;
};

typedef struct date date_t;
// ----------------------------------------------

// ----------------------------------------------
// 16. Write a structure to store the
// names,
// salary
// and hours of work per day of 10 employees in a company.
// Write a program to increase the salary depending on the number of hours of work per day as follows and then print the name of all the employees along with their final salaries.
//
//     Hours of work per day
//                             8	  10	>=12
//     Increase in salary
//                 $50	 $100	$150

struct employee
{
    char *name;
    int salary;
    int hours;
};

typedef struct employee employee_t;

void increase_salary(employee_t *employees, int size)
{
    for (int i = 0; i < size; i++)
    {
        employee_t *employee = &employees[i];
        if (employee->hours >= 12)
        {
            employee->salary += 150;
        }
        else if (employee->hours >= 10)
        {
            employee->salary += 100;
        }
        else if (employee->hours >= 8)
        {
            employee->salary += 50;
        }
    }
}
// ----------------------------------------------

// ----------------------------------------------
// 17. Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10). Store the information of the students.
//     a) Write a function to print the names of all the students having age 14.
//     b) Write another function to print the names of all the students having even roll no.
//     c) Write another function to display the details of the student whose roll no is given (i.e. roll no. entered by the user).
struct student
{
    int roll_no;
    char *name;
    int age;
    char *address;
};

typedef struct student student_t;

void older_than_14(student_t *students, int size)
{
    for (int i = 0; i < size; i++)
    {
        student_t *student = &students[i];
        if (student->age == 14)
        {
            printf("%s\n", student->name);
        }
    }
}

void even_roll_no(student_t *students, int size)
{
    for (int i = 0; i < size; i++)
    {
        student_t *student = &students[i];
        if (student->roll_no % 2 == 0)
        {
            printf("%s\n", student->name);
        }
    }
}

void display_student(student_t *students, int size, int roll_no)
{
    for (int i = 0; i < size; i++)
    {
        student_t *student = &students[i];
        if (student->roll_no == roll_no)
        {
            printf("Name: %s\n", student->name);
            printf("Age: %d\n", student->age);
            printf("Address: %s\n", student->address);
        }
    }
}
// ----------------------------------------------

// 18. Write a structure to store the name, account number and balance of customers (more than 10) and store their information.
//     a) Write a function to print the names of all the customers having balance less than $200.
//     b) Write a function to add $100 in the balance of all the customers having more than $1000 in their balance and then print the incremented value of their balance.

struct customer
{
    char name[50];
    int account_number;
    int balance;
};

typedef struct customer customer_t;

void less_than_two_hundread(customer_t *customers, int size)
{
    for (int i = 0; i < size; i++)
    {
        customer_t *customer = &customers[i];
        if (customer->balance < 200)
        {
            printf("%s\n", customer->name);
        }
    }
}

void more_than_thousand(customer_t *customers, int size)
{
    for (int i = 0; i < size; i++)
    {
        customer_t *customer = &customers[i];
        if (customer->balance > 1000)
        {
            customer->balance += 100;
            printf("%d\n", customer->balance);
        }
    }
}

main()
{
    return 0;
}