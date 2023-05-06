#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Exercises (Random number generator and recursion):
// 0. [Random number generator] Develop a program to simulate 20 rolls of a six-sided die and
// print the value of each roll. Investigate what is actually happening at each run!
// 1. Show that the numbers generated by rand() function occur approximately with equal likelihood. Simulate the rolling of a six-sided die 6000 times and prints the frequency of each side.
// 2. Solve task 0., but this time the user should enter a seed and then use srand to generate the rolling.
// 3. [A Game of Chance]
//     One of the most popular games of chance is a dice game known as "craps," which is played
//     in casinos and back alleys throughout the world. The rules of the game are straightforward:
//     A player rolls two dice. Each die has six faces. These faces contain 1, 2, 3, 4, 5, and 6
//     spots. After the dice have come to rest, the sum of the spots on the two upward faces is
//     calculated. If the sum is 7 or 11 on the first throw, the player wins. If the sum is 2, 3,
//     or 12 on the first throw (called "craps"), the player loses (i.e., the "house" wins). If the
//     sum is 4, 5, 6, 8, 9, or 10 on the first throw, then that sum becomes the player's
//     "point." To win, you must continue rolling the dice until you "make your point." The
//     player loses by rolling a 7 before making the point.

int guess_the_number()
{

    // 4. (Guess the Number) Write a C program that plays the game of "guess the number" as follows:
    // Your program chooses the number to be guessed by selecting an integer at random in the range
    // 1 to 1000. The program then types:

    //     I have a number between 1 and 1000.
    //     Can you guess my number?
    //     Please type your first guess:

    // The player then types a first guess. The program responds with one of the following:

    //     1. Excellent! You guessed the number!
    //     Would you like to play again (y or n)?
    //     2. Too low. Try again.
    //     3. Too high. Try again.

    // If the player's guess is incorrect, your program should loop until the player finally gets the number
    // right. Your program should keep telling the player Too high or Too low to help the player "zero in"
    // on the correct answer. [Note: The searching technique employed in this problem is called binary
    // search. We'll say more about this in the next problem.]

    srand(time(NULL));
    int k = 1 + rand() % 1000;
    int r = 1001;
    int tries = 0;
    printf("I have a number between 1-1000.\n");
    printf("Can you guess my number?\n");
    printf("%d\n", k);

    while (r != k)
    {
        printf("Please type your guess\n");
        scanf("%d", &r);
        if (r < k)
        {
            printf("Too low. Try again.\n");
            tries++;
        }
        else if (r > k)
        {
            printf("Too high. Try again.\n");
            tries++;
        }
    }
    printf("Excellent! You guessed the number!\n");
    return tries;
}

void guess_the_number_imp()
{
    // 5. (Guess the Number Modification) Modify the program of Exercise 4. to count the number
    // of guesses the player makes. If the number is 10 or fewer, print Either you know the secret or
    // you got lucky! If the player guesses the number in 10 tries, then print Ahah! You know the secret!
    // If the player makes more than 10 guesses, then print You should be able to do better! Why should
    // it take no more than 10 guesses? Well, with each "good guess" the player should be able to eliminate
    // half of the numbers. Now show why any number 1 to 1000 can be guessed in 10 or fewer tries.
    int tries = guess_the_number();
    if (tries < 10)
    {
        printf("Either you know the secret or you got lucky!");
    }
    else if (tries == 10)
    {
        printf("Ahah! You know the secret!");
    }
    else
    {
        printf("You should be able to do better!");
    }
}

// 8. (Coin Tossing) Write a program that simulates coin tossing. For each toss of the coin the
// program should print Heads or Tails. Let the program toss the coin 100 times, and count the number
// of times each side of the coin appears. Print the results. The program should call a separate function
// flip that takes no arguments and returns 0 for tails and 1 for heads. [Note: If the program
// realistically simulates the coin tossing, then each side of the coin should appear approximately half
// the time for a total of approximately 50 heads and 50 tails.]

// 6. (Perfect Numbers) An integer number is said to be a perfect number if its factors, including
// 1 (but not the number itself), sum to the number. For example, 6 is a perfect number because 6 =
// 1 + 2 + 3. Write a function perfect that determines if parameter number is a perfect number. Use
// this function in a program that determines and prints all the perfect numbers between 1 and 1000.
// Print the factors of each perfect number to confirm that the number is indeed perfect. Challenge
// the power of your computer by testing numbers much larger than 1000.

int gcd_loop(int x, int y)
{
    int min = x > y ? y : x, i, res;

    for (i = 1; i <= min; i++)
    {
        if ((x % i == 0) && (y % i == 0))
        {
            res = i;
        }
    }
    return res;
}
int gcd_rec(int x, int y, int r, int d)
{
    int min = x > y ? y : x;
    if (d == min)
    {
        return r;
    }

    if (x % d == 0 && y % d == 0)
    {
        return gcd_rec(x, y, d, d + 1);
    }

    return gcd_rec(x, y, r, d + 1);
}

int gcd(int x, int y)
{
    // 7. (Greatest Common Divisor) The greatest common divisor (GCD) of two integers is the largest
    // integer that evenly divides each of the two numbers. Write function gcd that returns the greatest
    // common divisor of two integers. [Try with loop and then with recursion]

    gcd_loop(x, y);
    gcd_rec(x, y, 1, 1);
}

// 8. (Recursive Greatest Common Divisor) The greatest common divisor of integers x and y is
// the largest integer that evenly divides both x and y. Write a recursive function gcd that returns the
// greatest common divisor of x and y. The gcd of x and y is defined recursively as follows: If y is equal
// to 0, then gcd(x, y) is x; otherwise gcd(x, y) is gcd(y, x % y) where % is the remainder operator.

// 9. (Recursive Exponentiation) Write a recursive function power( base, exponent ) that when
// invoked returns
//     base^(exponent)

//     For example, power( 3, 4 ) = 3 * 3 * 3 * 3. Assume that exponent is an integer greater than or equal
//     to 1. Hint: The recursion step would use the relationship
//         base^exponent = base * base^(exponent-1)
//     and the terminating condition occurs when exponent is equal to 1 because
//         base^1 = base

int main()
{
    // printf("%d", gcd_rec(2, 3, 1, 1));
    guess_the_number();
}