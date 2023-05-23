# Tasks

Discussion:

0. How are arrays passed? By value or by reference?

1. What alternativies do you have to clear the buffer/remove enter from the buffer? - fgetc(stdin)

2. What are the differences between structs, union and enums?

3. Why do we need fwrite and fread?

4. What is the size of an enum type? How is it determined?

Exercises (Enums, Random-Access File, Command-line, Structs):

- [x] 0. Can the enum data be entered by the user ??? Explain.

- [x] 1.  Create enums for:
      a) Grading score (Fail, Pass, Satisfactory, Good, Excellent);
      b) Genders (Male, Female);
      c) Response (Yes, No);
      d) Boolean values (True, False);
      e) Types of fishes (Mammals, Birds, Fish, Reptiles, Amphibians, Insects, Arachnids, Crustaceans, Mollusks, Echinoderms);
      f) Months (January, February, ..., December);
      g) Direction (LEFT, RIGHT, UP, DOWN):

  Provide the declarations and definition in all possible ways.
  Can you solve this task in less than 10 minute?

- [ ] 2.  What is the advantage of typedef statement?

- [ ] 3.  [A Game of Chance]
      One of the most popular games of chance is a dice game known as "craps," which is played in casinos and back alleys throughout the world. The rules of the game are straightforward:

      - A player rolls two dice. Each die has six faces. These faces contain 1, 2, 3, 4, 5, and 6 spots.
      - After the dice have come to rest, the sum of the spots on the two upward faces is calculated.
      - If the sum is 7 or 11 on the first throw, the player wins.
      - If the sum is 2, 3, or 12 on the first throw (called "craps"), the player loses (i.e., the "house" wins).
      - If the sum is 4, 5, 6, 8, 9, or 10 on the first throw, then that sum becomes the player's "point."
      - To win, you must continue rolling the dice until you "make your point."
      - The player loses by rolling a 7 before making the point.

      Solve the task using enums for status of the game.

- [x] 4.  A text filename called "numbers.txt" is given from the command line.
      Sample content before modification:
      0 1 2 3 4
      5 6 7 8 9

      As one can see, the numbers are separated by tabs (\t).
      Another text file is asked from the user which will be used as temporary file.

      Your task is to remove the tabs and replace them with spaces.
      You are allowed to open and close each of the files "exactly" once.

      Sample content after modification:
      0 1 2 3 4
      5 6 7 8 9

  Hint: argv, rewind.

- [ ] 5.  View the detailed information of files and directories.
      When and who created these (`ls -l`)?

- [ ] 6.  (Variable-Length Argument List: Calculating Products) Write a program that calculates the product of a series of integers that are passed to function product using a variable-length argument list.
      Test your function with several calls, each with a different number of arguments.

- [x] 7.  (Printing Command-Line Arguments) Write a program that prints the command-line arguments of the program.

- [x] 8.  (Sorting Integers) Write a program that sorts an array of integers into ascending order or descending order.
      Use command-line arguments to pass either argument -a for ascending order or -d for descending order.
      [Note: This is the standard format for passing options to a program in UNIX.]

- [x] 9.  (Temporary Files) Write a program that places a space between each character in a file.
      The program should first write the contents of the file being modified into a temporary file with spaces between each character, then copy.

- [x] 10. (Command-Line Arguments) Write a program that takes two command-line arguments that are file names, reads the characters from the first file one at a time and writes the characters in reverse order to the second file.

- [x] 11. (Outputting Type Sizes to a File) Write a program that uses the sizeof operator to determine the sizes in bytes of the various data types on your computer system.
      Write the results to the file "datasize.dat" so you may print the results later.
      The format for the results in the file should
      be as follows:

          Data type           Size
          char                 1
          unsigned char        1
          short int            2
          unsigned short int   2
          int                  4
          unsigned int         4
          long int             4
          unsigned long int    4
          float                4
          double               8
          long double         16

  [Note: The type sizes on your computer might be different from those listed above.]

- [ ] 12. Solve task 0 from lab 8, and print the size of each struct.
      Explain each of the output.

- [ ] 13. Write a program to register bank account using the following info:

  - account number,
  - client name,
  - balance and
  - account type (Checking accounts (CAs),
  - Savings accounts (SCs),
  - Certificates of deposit (CDs),
  - Individual retirement accounts (IRAs)).

  Banks allow registrating up to 30 accounts and all the account numbers should be distinct.

  Create a menu: 1. Fill accounts from a file given by the command line; 2. List all accounts of a given client; 3. Remove accounts with balance bellow the average; 4. Account type of the account with maximum balance; 5. Those clients with Saving Account and balance higher than 15.000 EURS; 6. Print all accounts (with all the given attributes); 7. All types of account inserted so far! Do duplicate type should be presented in the output; 8. Exit.

  To solve this task, use structs, enums, prototype functions and all best practices.

- [ ] 14. After a hard exam, a list of students and their grades was uploaded on TEAMS as a binary file.
      The data was stored in form of container with just name (100 characters), neptune code (6 characters long), and score (integer).

  Your task is to:

  1. Print their final result;
  2. Average of the group of the students;
  3. List students who failed the subject;
  4. Exclude students who barelly passed the subject;
  5. Is there anymore with maximum score? Print his/her/their name(s).

  Filename is given by the command line.
  Use enums for final classification!

  NOTE: Check sample data in Labs > 09 > sample_input_task_14.dat. You can check the content inside in the .txt file (same name).
