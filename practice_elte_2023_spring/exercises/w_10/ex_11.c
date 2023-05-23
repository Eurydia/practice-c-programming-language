#include <stdio.h>

// 11. (Outputting Type Sizes to a File) Write a program that uses the sizeof operator to determine the sizes in bytes of the various data types on your computer system.
//       Write the results to the file "datasize.dat" so you may print the results later.
//       The format for the results in the file should
//       be as follows:

//           Data type           Size
//           char                 1
//           unsigned char        1
//           short int            2
//           unsigned short int   2
//           int                  4
//           unsigned int         4
//           long int             4
//           unsigned long int    4
//           float                4
//           double               8
//           long double         16

//   [Note: The type sizes on your computer might be different from those listed above.]

int main()
{

    FILE *f = fopen("datasize.dat", "w");

    fprintf(f, "Data type\t\tSize\n");
    fprintf(f, "char\t\t\t%lu\n", sizeof(char));
    fprintf(f, "unsigned char\t\t%lu\n", sizeof(unsigned char));
    fprintf(f, "short int\t\t%lu\n", sizeof(short int));
    fprintf(f, "unsigned short int\t%lu\n", sizeof(unsigned short int));
    fprintf(f, "int\t\t\t%lu\n", sizeof(int));
    fprintf(f, "unsigned int\t\t%lu\n", sizeof(unsigned int));
    fprintf(f, "long int\t\t%lu\n", sizeof(long int));
    fprintf(f, "unsigned long int\t%lu\n", sizeof(unsigned long int));
    fprintf(f, "float\t\t\t%lu\n", sizeof(float));
    fprintf(f, "double\t\t\t%lu\n", sizeof(double));
    fprintf(f, "long double\t\t%lu\n", sizeof(long double));

    return 0;
}