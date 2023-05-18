#include <stdio.h>

// 14. After a hard exam, a list of students and their grades was uploaded on TEAMS as a binary file.
//       The data was stored in form of container with just name (100 characters), neptune code (6 characters long), and score (integer).

//   Your task is to:

//   1. Print their final result;
//   2. Average of the group of the students;
//   3. List students who failed the subject;
//   4. Exclude students who barelly passed the subject;
//   5. Is there anymore with maximum score? Print his/her/their name(s).

//   Filename is given by the command line.
//   Use enums for final classification!

//   NOTE: Check sample data in Labs > 09 > sample_input_task_14.dat. You can check the content inside in the .txt file (same name).

enum grading
{
    UNGRADED,
    FAILED,
    PASSED,
    EXCELLENT
};

typedef enum grading grading_t;

struct student
{
    char name[100];
    char last_name[100];
    char neptun[7];
    int score;
    grading_t grade;
};

typedef struct student student_t;

float groupavg(student_t students[], size_t n)
{
    int i;
    float sum = 0;

    for (i = 0; i < n; i++)
    {
        sum += students[i].score;
    }

    return sum / n;
}

// What is the max score?
// what does "barely passed" mean?

//   4. Exclude students who barelly passed the subject;
// What does this even mean?
// Exclude from what?

// ambiguous task is frustrating

int main(int argc, char *argv[])
{

    FILE *f = fopen(argv[1], "r+");

    int n = 0, c;

    while ((c = fgetc(f)) != EOF)
    {
        if (c == '\n')
        {
            n++;
        }
    }

    printf("Number of students: %d\n", n);
    fseek(f, 0, SEEK_SET);

    student_t students[n];
    int i;
    for (i = 0; i < n; i++)
    {
        students[i].grade = UNGRADED;
        fscanf(f, "%s %s, %s, %d", students[i].name, students[i].last_name, students[i].neptun, &students[i].score);
    }

    fclose(f);

    for (i = 0; i < i; i++)
    {
        if (students[i].score < 2)
        {
            students[i].grade = FAILED;
        }
        if (students[i].score < 4)
        {
            students[i].grade = PASSED;
        }
        if (students[i].score == 5)
        {
            students[i].grade = EXCELLENT;
        }
    }

    float avg = groupavg(students, n);
    printf("Group average: %.2f\n", avg);

    printf("Students who failed the subject:\n");
    for (i = 0; i < n; i++)
    {
        if (students[i].grade == FAILED)
        {
            printf("%s\n", students[i].name);
        }
    }

    printf("Students who has full mark:\n");
    for (i = 0; i < n; i++)
    {
        if (students[i].score == 5)
        {
            printf("%s\n", students[i].name);
        }
    }

    return 0;
}