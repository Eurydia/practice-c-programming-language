# Tasks

Review:
0. lab_2_exercise_09
1. lab_3_exercise_11
2. lab_3_exercise_12
3. Declare an `int` variable. Calculate the largest value that can be stored in
   it. Give the variable this number as its value, then add one in a subsequent
   statement. Print the increased value.
4. (Bonus - Useful application) Forty students were asked to rate the quality of the food in the student cafeteria on a
scale of 1 to 10 (1 means awful and 10 means excellent). Place the 40 responses in an
integer array and summarize the results of the poll.

Exercises (Pointers, arrays):
1. Change the value of a variable via a pointer.
2. Change the value of a pointer through a pointer to a pointer. Then change the
   value pointed by the pointed pointer as well!
3. Can you create a pointer to itself? What would be its type? Why not? Compare
   the sizes of pointers to different types of variables. Explain why the result
   is logical!
4. Write a function that returns the sum of the elements in an array received as
   a parameter. The array is passed using a pointer to the first element and an
   integer variable containing a length. Let's write the function without using
   the `operator[]`, using pointer arithmetic. Is it possible to find the size
   of the array inside the function without the variable containing the length?
5. Redesign the previous function so that we get the array using a pointer to
   the first element and a pointer to the last element. What happens if we
   overindex by one? (int* p = begin; p <= end; p++) What happens if we overindex by more?
6. Redesign the previous program to calculate an average. How can we calculate
   the size of the array from the pair of pointers?
7. What happens when a function returns a pointer to a local variable that is
   dereferenced?
8. Let's dereference a null pointer. What is the result?
9. Explain why the `operator&` is needed in the case of `scanf()` when reading
   into an integer variable.
10. Write a function that, from two pointers pointing inside the same array,
    decides which one points to an element with a smaller index.
11. Write a function that returns a pointer to the maximum element of an array
    received as a parameter. What is the advantage and disadvantage of this
    compared to returning an index?
12. Can we apply the function written in the previous task to half of an array?
    How?
13. Can we apply the function written in the previous task to a single variable,
    as if it were an array with one element?
14. A function can also return a value using a return value or a pointer (e.g.
    `scanf()`). When should you use which one? What are the
    advantages/disadvantages of the methods?