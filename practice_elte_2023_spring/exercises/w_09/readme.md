# Tasks

Discussion:
    0. In how many ways can you print a pointer to a char, let's say char *str = "Sasha"?
    1. Common mistakes using srand x rand.
    2. How can you read a file two times without close It? - By rewinding.
    3. What's the problem with fprintf and/or fscanf? - fwrite, fread

Exercises (Structs):

- [x] 0. Provide the definition for each of the following structures:
    a) Structure inventory containing character array partName[ 30 ], integer partNumber,
    floating point price, integer stock and integer reorder.
    b) A structure called address that contains character arrays
    streetAddress[ 25 ], city[ 20 ], state[ 3 ] and zipCode[ 6 ].
    c) Structure student that contains arrays firstName[ 15 ] and
    lastName[ 15 ] and variable homeAddress of type struct address from part (b).

- [x] 1. Define a data type for complex numbers and create functions that allows to determine the multiplication, addition, subtration and division of two complex numbers.
Use as reference [https://www.mathsisfun.com/numbers/complex-numbers.html]

- [ ] 2. What is wrong with the following C declarations?
    a) struct point ( 
            double x, y 
        )
    b) struct point { 
            double x, 
            double y 
        };
    c) struct point {
            double x;
            double y 
        }
    d) struct point { 
            double x;
            double y;
        };
    e) struct point { 
            double x;
            double y;
        }

- [ ] 3. What is wrong with the following C declarations?
    a) typedef struct{
            double x;
            double y
        } Point;
    b) typedef {
            double x;
            double y;
        } Point;
    c) typedef struct {
            double x;
            double y;
        };
    d) typedef struct {
            double x;
            double y;
        } Point;

- [x] 4. Given the following structure and variable definitions,
    struct customer {
        char lastName[ 15 ];
        char firstName[ 15 ];
        int customerNumber;
        
        struct {
            char phoneNumber[ 11 ];
            char address[ 50 ];
            char city[ 15 ];
            char state[ 3 ];
            char zipCode[ 6 ];
        } personal;
    } customerRecord, *customerPtr;

    customerPtr = &customerRecord;

write an expression that can be used to access the structure members in each of the following parts:
    a) Member lastName of structure customerRecord.
    b) Member lastName of the structure pointed to by customerPtr.
    c) Member firstName of structure customerRecord.
    d) Member firstName of the structure pointed to by customerPtr.
    e) Member customerNumber of structure customerRecord.
    f) Member customerNumber of the structure pointed to by customerPtr.
    g) Member phoneNumber of member personal of structure customerRecord.
    h) Member phoneNumber of member personal of the structure pointed to by customerPtr.
    i) Member address of member personal of structure customerRecord.
    j) Member address of member personal of the structure pointed to by customerPtr.
    k) Member city of member personal of structure customerRecord.
    l) Member city of member personal of the structure pointed to by customerPtr.
    m) Member state of member personal of structure customerRecord.
    n) Member state of member personal of the structure pointed to by customerPtr.
    o) Member zipCode of member personal of structure customerRecord.
    p) Member zipCode of member personal of the structure pointed to by

- [x] 5. Define a structure called Circle which consists of the radius of the
circle and the (x,y) coordinates of its centre. And perform the following:

    a) Implement the function intersect() that returns true if two circles intersect, and false otherwise.
    Two circles intersect when the distance between their centres is less than or equal to the sum of
    their radii. The function prototype is given below:
        int intersect(struct circle c1, struct circle c2);

    b) Implement the function contain() that returns 1 if circle1 contains c2, i.e. circle c2 is found
    inside circle c1. Otherwise, the function returns 0. Circle c1 contains circle c2 when the radius
    of c1 is larger than or equal to the sum of the radius of c2 and the distance between the centres of
    c1 and c2. The function prototype is given below:
        int contain(struct circle *c1, struct circle *c2);

    Test the implementated functions inside the main function.

- [ ] 6. What is the difference among the following three programs?
    a)   #include <stdio.h>
          struct point { double x; double y; };
          int main(void) {
             struct point test;
             test.x = .25; test.y = .75;
             printf("[%f %f]\n", test.x, test.y);
             return 0;
          }

    b)   #include <stdio.h>
          typedef struct { double x; double y; } Point;
          int main(void) {
             Point test;
             test.x = .25; test.y = .75;
             printf("[%f %f]\n", test.x, test.y);
             return 0;
          }

    c)   #include <stdio.h>
          typedef struct { double x; double y; } Point;
          int main(void) {
             Point test = {.25, .75};
             printf("[%f %f]\n", test.x, test.y);
             return 0;
          }

- [ ] 7. Provide an implementation of a function point_show() so that the following
    program is functionally equivalent to the three programs above.

          #include <stdio.h>
          typedef struct { double x; double y; } Point;
          int main(void) {
            Point test = {.25, .75};
            point_show(test);
            return 0;
          }

- [x] 8. Provide an implementation of a function point_dist() that computes the
    Euclidean distance between two Points.

- [x] 9. Provide an implementation of a function that returns 1 if
    the two points are "equal"; and 0 otherwise. With floating point
    values it doesn't make much sense to test for exact equality; Instead
    check to see if the distance between the points is less than 0.000001.

- [x] 10. Define a type Rect for rectangles that are parallel to the axes in a
    Cartesian coordinate system. Represent a rectangle by its lower left
    and upper right endpoints using the Point type above.

- [x] 11. Write a function that computes the area of a rectangle. 
 
- [x] 12. Write a function that returns 1 if a point falls within a rectangle, 0 otherwise. 
    Use the Point and Rectangle types above.

- [x] 13. Write a function that returns 1 if the first rectangle is completely
    contained inside the second rectangle, and 0 otherwise.  Hint: check if
    the lower left and upper right endpoints of the first rectangle fall
    within the second rectangle.

- [x] 14. Write a program that reads in a list of points (given by their x and
    y coordinates) and determines the pair that is the farthest apart.
    Hint: store them in an array and use the point_dist() function.

- [ ] 15. Create a structure named Date having day, month and year as its elements. Store the current date in the structure. Now add 45 days to the current date and display the final date.

- [x] 16. Write a structure to store the names, salary and hours of work per day of 10 employees in a company. Write a program to increase the salary depending on the number of hours of work per day as follows and then print the name of all the employees along with their final salaries.

    Hours of work per day
                            8	  10	>=12
    Increase in salary	
                           $50	 $100	$150

- [x] 17. Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10). Store the information of the students.
    a) Write a function to print the names of all the students having age 14.
    b) Write another function to print the names of all the students having even roll no.
    c) Write another function to display the details of the student whose roll no is given (i.e. roll no. entered by the user).

- [x] 18. Write a structure to store the name, account number and balance of customers (more than 10) and store their information.
    a) Write a function to print the names of all the customers having balance less than $200.
    b) Write a function to add $100 in the balance of all the customers having more than $1000 in their balance and then print the incremented value of their balance.

- [ ] 19. Write a program to compare two dates entered by user. Make a structure named Date to store the elements day, month and year to store the dates. If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".

- [ ] 20. Write C program to read the details of two workers and calculate total payment of workers using structure.

- [ ] 21. Create a C program to read information of student. It contains Name, Roll number, Birthday, admission date. Calculate age of student at the time of admission.

- [ ] 22. Write C program to accept batting information of cricket team using structure. It contains player name and runs scored by player. Calculate total runs scored by cricket team.

- [ ] 23. Write C program to accept the details of employee and display them using structure. Details consist of Employee id, name, designation, department, salary.

- [ ] 24. Credit Inquiry Program
    The program allows a credit manager to obtain lists of customers with zero
    balances (i.e., customers who do not owe any money), customers with credit balances (i.e.,
    customers to whom the company owes money) and customers with debit balances (i.e.,
    customers who owe the company money for goods and services received). A credit balance
    is a negative amount; a debit balance is a positive amount.
    The program displays a menu and allows the credit manager to enter one of three
    options to obtain credit information. Option 1 produces a list of accounts with zero balances.
    Option 2 produces a list of accounts with credit balances. Option 3 produces a list
    of accounts with debit balances. Option 4 terminates program execution. 

    You are allowed to close the file only once. Hint: Check review 2. Solve without structs

    NOTE: Do not forget to print the data in a nice way.

- [ ] 25. Solve task 24, but this time using structures.

- [ ] 26. Create a credit processing system capable of storing up to 100 fixed-length records.
Each record should consist of an account number that will be used as the record key, a
last name, a first name and a balance. The resulting program should be able to update
an account, insert a new account record, delete an account and list all the account
records in a formatted text file for printing. Use a random-access file.