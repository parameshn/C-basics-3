////////////////////////time_t
///////srand()
/////time()

// You must include time.h before seeding the random number generator with the time of day,

/*Use srand() to seed the random number generator. The
number inside the srand() parentheses must be different every time you run the program, unless you
want to produce the same set of random values.
****
The trick to giving srand() a different number each run is to put the exact time of day inside the
srand() parentheses. Your computer keeps track of the time of day, down to hundredths of a
second. So first declare a time variable, using the time_t declaration, and then send its address
(using the & character at the front of the variable name) to the srand() function.*/

/*You might always want a different set of random numbers produced each time a
program runs. Games need such randomness. However, many simulations and
scientific studies need to repeat the same set of random numbers. rand() will always
do that if you don’t seed the random number generator*/

/*The "time_t" type is commonly used in programming to represent time values. It is typically defined as a signed integer type, capable of storing the number of seconds since a specific reference time, often known as the Unix epoch.*/

/* This program rolls two dice and presents the total. It then asks
the user to guess if the next total will be higher, lower, or equal.
It then rolls two more dice and tells the user how they did. */
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

void main()
{
    int dice1, dice2, total1, total2;
    time_t t;
    char ans;

    // Remember that this is needed to make sure each random number
    // generated is different
    srand(time(&t));

    // this would give you a number between 0 and 5, so the +1 makes it 1 to 6

    dice1 = (rand() % 5) + 1;
    dice2 = (rand() % 5) + 1;
    total1 = dice1 + dice2;
    printf("First roll of the dice was %d and %d", dice1, dice2);
    printf(" for a total of %d.\n\n\n", total1);

    do
    {
        puts("do you think the roll will be ");
        puts("(H)igher,(L)ower or (S)same ?");
        puts("enter H,L or S to rflect your guess.");

        scanf("%c", &ans);
        ans = toupper(ans);
    } while ((ans != 'H') && (ans != 'L') && (ans != 'S'));

    // Roll the dice a second time to get your second total

    dice1 = (rand() % 5) + 1;
    dice2 = (rand() % 5) + 1;
    total2 = dice1 + dice2;
    // Display the second total for the user

    printf("\nThe second total was %d and %d", dice1, dice2);
    printf("for a total of %d.\n\n\n", total2);

    // now compare the two dice totals against the user's guess
    // and tell them if they were right or not.

    if (ans == 'L')
    {
        if (total2 < total1)
        {
            printf("good job your right!\n");
            printf("%d is lower than %d\n", total2, total1);
        }
        else
        {
            printf("sorry! %d is not higher than %d\n ", total2, total1);
        }
    }

    else if (ans == 'H')
    {
        if (total2 > total1)
        {
            printf("Good job! You were right!\n");
            printf("%d is higher than %d\n", total2, total1);
        }
        else
        {
            printf("sorry! %d is not greater than %d\n\n", total2, total1);
        }
    }
    else if (ans == 'S')
    {
        if (total1 == total2)
        {
            printf("good job ! you were right\n");
            printf("%d is the same as %d\n\n", total2, total1);
        }
    }
    else
    {
        printf("Sorry! %d is not the same as %d\n\n",
               total2, total1);
    }
}

//// use of srand(time(&t));

///
/*In the above program, the line `srand(time(&t));` is utilized to seed the random number generator before generating random values for the dice rolls. Here's how it is used in the program:

1. The program includes the necessary header files: `stdio.h`, `string.h`, `time.h`, and `ctype.h`.

2. The `time_t t;` declaration creates a variable `t` of type `time_t`, which will be used to store the current time.

3. `srand(time(&t));` seeds the random number generator. The `time(&t)` function retrieves the current time and stores it in the `t` variable. The `&t` is passed as an argument to `time` to obtain its address. This address is used as the seed for `srand`, ensuring a different seed value each time the program runs.

4. The program proceeds with rolling two dice by generating random numbers using `rand()`. The expressions `(rand() % 5) + 1` generate random numbers between 1 and 6 inclusive, simulating the roll of a six-sided die. These random values are stored in the variables `dice1` and `dice2`.

5. The total of the two dice rolls is calculated and stored in the variable `total1`.

6. The program prompts the user to guess if the next roll will be higher, lower, or the same.

7. The user's guess is obtained through `scanf` and stored in the variable `ans`.

8. The `toupper(ans)` function call converts the user's input to uppercase, ensuring case-insensitive comparison in the subsequent code.

9. The second roll of the dice is performed, and the random values are stored in `dice1` and `dice2`.

10. The total of the second roll is calculated and stored in `total2`.

11. The program compares the user's guess (`ans`) with the two totals (`total1` and `total2`) and provides feedback on whether the guess was correct or not.

In summary, the `srand(time(&t))` call ensures that each run of the program starts with a different seed for the random number generator, generating different sequences of random numbers for the dice rolls.*/