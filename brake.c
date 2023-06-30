//////////////BRAKE///////////////
/*The break and continue statements let you control loops for those special occasions when you want to quit a loop early or repeat a loop sooner than it would normally repeat.

Typically, break appears in the body of an if statement.

Here is the format of
break:
    break;
 */
#include <stdio.h>
void main()
{
    int i;
    /*break always appears inside a loop. The purpose of break is to terminate the current loop. When
a loop ends, the code following the body of the loop takes over. When break appears inside a
loop’s body, break terminates that loop immediately, and the rest of the program continues.*/
    for (i = 0; i < 10; i++)
    {
        printf("%d ", i);
        if (i == 4)
        {
            break;
        }
    }
    /* This program will ask users to input test grades for the 25 students in a class and
then compute an average test grade. If fewer than 25 students took the test, the user
can enter -1 as a grade and break the loop, and only those entered grades will be used
to compute the average. */
    int numTest;
    float stTest, avg, total = 0.0;

    // Asks for up to 25 tests
    for (numTest = 0; numTest < 25; numTest++)
    {
        // Get the test scores, and check if -1 was entered
        printf("\nwhat's the next student test score?");
        scanf("%d", &stTest);
        if (stTest < 0.0)
        {
            break;
        }
        total += stTest;
    }
    avg = total / numTest;
    printf("\nThe average is %.1f%%.\n", avg);
    /*To print the percent sign at the end of the final average, two % characters have to be
used in the printf() control string. C interprets a percent sign as a control code
unless you put two of them together, as done in this program. Then it still interprets the
first percent sign as a control code for the second. In other words, the percent sign is a
control code for itself.*/
}