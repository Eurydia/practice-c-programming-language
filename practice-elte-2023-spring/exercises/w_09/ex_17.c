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

int main()
{
    return 0;
}