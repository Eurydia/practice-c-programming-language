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

int main()
{
    return 0;
}