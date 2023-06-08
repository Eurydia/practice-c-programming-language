Create a program that reverses the lines of a multi-line text. The program can be given the file it needs to process via a command line argument (2 points):

```
$ cat text.txt
one
two
three
```

```
$ ./a.out text.txt
eno
owt
eerht
```

The program can be given an additional flag (`-r`), which reverses not only the content of the lines, but their order too (3 points). An additional flag (`-n`) indicates the number of lines (3 points). Finally, based on the string given as a parameter to the `-f` flag, it is possible to filter the lines of the output that contain the given text (3 points):

```
$ ./a.out text.txt -r
eerht
owt
eno

on $ ./a.out text.txt
1 eno
2 owt
3 eerht

$ ./a.out text.txt -r -n
3 eerht
2 owt
1 eno

$ ./a.out text.txt -f wt -n
2 owt

$ ./a.out text.txt -f o -n
1 eno
2 owt

$ ./a.out text.txt -n -f o -r
2 owt
1 eno
```

When writing the program, you can assume that the file has a maximum of 1000 lines, and the lines are no longer than 100 characters. Represent these dimensions with preprocessor macros (2 points). Store the scanned lines in the heap memory (3 points). Take care to avoid memory leaks (2 points)!

Read the lines in a separate function, of which the parameter is the name of the file to be read and the array of strings that it fills with the lines of the file. The return value of the function should be the number of lines. The lines should be read with the `fgets()` function. However, this function also reads the `\n` character indicating the end of the line, delete this by simply overwriting it with the `\0` character indicating the end of strings. The function should not print anything to the output, but only fill the 1000-element array containing the lines (3 points).

Create a function that receives the previously uploaded array and the number of lines in it as parameters. The function should reverse the lines in the array (2 points).

In the `main()` function, call the functions that read and reverse the lines, as well as handle the command line arguments as described above (4 points).

Split the program into several translation units. The functions that read the file and reverse the lines should be placed in a separate source file with the extension `.c`, which should also include a header file. Don't forget to use the header guard. (3 points)

Non-compiling program or plagiarized code is graded to 0 points. The assignment cannot be retaken. If you get stuck, ask the instructors for help!
