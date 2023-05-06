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

int main()
{
    return 0;
}