/////////////////////FABS()/////////////////////////

/*The fabs() function returns the floating-point absolute value

The absolute value of a number, whether it is negative or positive, is the positive
version of the number
*/

#include <stdio.h>
#include <math.h>
void main()
{
    printf("Absolute value of 25.0 is %.0f.\n", fabs(25.0));
    printf("Absolute value of -25.0 is %.0f.\n", fabs(-25.0));
    /*Absolute value of 25.0 is 25.
Absolute value of -25.0 is 25.*/

    /*Absolute values are useful for computing differences in ages, weights, and distances. For example,
    the difference between two people’s ages is always a positive number, no matter how you subtract
    one from the other.
    */
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////pow()///////////////sqrt()//////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /*The pow() function raises a value to a power, and the sqrt() function returns
the square root of a value.


You can’t compute the square root of a negative number. The fabs() function can
help ensure that you don’t try to do so by converting the number to a positive value
before you compute the square root.

*/

    printf("10 raised to the third power is %.0f.\n", pow(10.0, 3.0));
    printf("The square root of 64 is %.0f.\n", sqrt(64));
    printf("%.0f\n", pow(4, 6));
}