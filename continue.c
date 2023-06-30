///////////CONTINUE////////////////////////////////////
/*Whereas break causes a loop to break early, continue forces a loop to continue early

Depending on the complexity of your for, while, or do while loop, you might not want to execute the entire body of the loop every iteration

“C, please ignore the rest of this loop’s body this iteration of the loop. Go back up to
the top of the loop and start the next loop cycle.”

/////////
The word iteration is a fancy computer name for the cycle of a loop

*/

/* This program loops through 10 numbers and prints a message that
varies whether the program is odd or even. It tests for odd and
if the number is odd, it prints the odd message and then starts
the next iteration of the loop using continue. Otherwise, it
prints the even message. */

#include <stdio.h>
void main()
{
    int i;
    // Loops through the numbers 1 through 10

    for (i = 0; i < 10; i++)
    {
        if ((i % 2) == 1) // Odd numbers have a remainder of 1
            printf("I'm rather odd...\n");
        // Will jump to the next iteration of the loop
        continue;
    }
    printf("Even up!\n");
}
/*As with break, continue is rarely used without a preceding if statement of some
kind. If you always wanted to continue, you wouldn’t have entered the last part of the
loop’s body. You want to use continue only in some cycles of the loop.*/