# Task

Review:
0. Do functions have addresses? Can you create a pointer function? How?

- Discuss tasks from lab_5.

Exercises:
- [ ] 0. [*] Show the usage of the functions below and explain how they work:
    a) [Character-Handling Library] - isdigit, isalpha, isalnum, isalnum, isxdigit, islower, isupper, tolower, toupper, isspace, iscntrl, ispunct, isprint and isgraph
    b) [String-Conversion Functions] - Using <stdlib.h> library, how would you use atof, atoi, atol, strtod, strtol, strtoul functions.
    c) [Standard Input/Output Library Functions] - Show the usage of functions getchar, fgets, putchar, puts, sprintf, sscanf
    d) [String-Manipulation Functions of the String-Handling Library] - strcpy, strncpy, strcat, strncat
    e) [Comparison Functions of the String-Handling Library] - strcmp, strncmp, 
    f) [Search Functions of the String-Handling Library] - strchr, strcspn, strspn, strpbrk, strrchr, strstr, strtok
    g) [Memory Functions of the String-Handling Library] - memcpy, memmove, memcmp, memchr, memset
    h) [Other Functions of the String-Handling Library] -  strerror, strlen 
    https://www.tutorialspoint.com/c_standard_library/string_h.htm
- [x] 1. Implement the substring function. Read https://en.wikipedia.org/wiki/Substring.
- [x] 2. Write a program that reads a string from the standard input and counts the
   number of characters and words in it! Use the `fgets()` function to read.
- [x] 3. Write a program that reads a second string and compares it with the previous
   one! Do the task with a built-in operation from the `string.h` library, and
   without it.
- [x] 4. Copy the previous string into a third string! Complete the task with or
   without a built-in action.
- [ ] 5. Create a string as an array of characters and one as a pointer! Try to
   replace one character in both versions! What is the difference between the
   two?
- [ ] 6. Create a text file with any text. Write a program in which you open the file
   using the `fopen()` function and read the contents of the file by calling the
   `fgets()` function. Convert the scanned text to all uppercase letters and
   write the uppercase text to the standard output! After reading, close the
   file with the `fclose()` function.
- [ ] 7. Complete the previous task by writing the uppercase text not to the standard
   input, but to another file, using the `fprintf()` function. Use the `fopen()`
   function to create a new file as well. [Use rewind(cfPtr); to reset the file position pointer]
- [ ] 8. Create two new files containing the same number of arbitrary numbers. Read
   the numbers from both files in parallel and write their product in a third
   file! To scan, use the `fscanf()` function.
- [ ] 9. Check which of the learned reading functions are suitable for reading
   characters one by one from the standard input!
- [x] 10. Write a program that determines whether a string is a palindrome.
- [x] 11. Write a program that determines how many consonants and vowels there are in
    the entered text! (We only use the letters of the English alphabet.)
- [ ] 12. Try to find out how many bytes are stored if you read the word
    "árvíztűrőtükörfúrógép" into a character array!