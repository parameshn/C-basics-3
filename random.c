///////////random()

/*For games and simulation programs, you often need to generate random values. C’s built-in rand()
function does just that. It returns a random number from 0 to 32767
*/

// The rand() function requires the stdlib.h (standard library) header file.

#include <stdio.h>
#include <stdlib.h>
void main()
{
    /*If you want to narrow the random numbers, you can
use % (the modulus operator) to do so.*/

    // The following expression puts a random number from 1 to 6 in the variable dice

    int dice, i;
    // dice = (rand() % 5) + 1; /* From 1 to 6 */
    for (i = 0; i <= dice; i++)
    {
        dice = (rand() % 6) + 1;
        printf("dice = %d\n", dice);
    }
    /*Because a die can have a value from 1 to 6, the modulus operator returns the integer
division remainder (0 through 5), and then a 1 is added to produce a die value.*/

    /*(rand() % 6) calculates the remainder of dividing the random integer by 6. The modulus operator % returns the remainder of the division operation. Since we are dividing by 6, the possible remainders are 0, 1, 2, 3, 4, and 5.*/

    /*When using the modulus operator % in programming, the result will be in the range from 0 to the divisor minus 1. For example, if you use rand() % 6, the possible remainders will be 0, 1, 2, 3, 4, and 5.*/
}
