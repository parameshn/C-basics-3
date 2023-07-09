/*. Be sure to include
math.h along with stdio.h if you use a math function.*/

/*The floor() and ceil() functions are called the floor and ceiling functions, respectively. They
“push down” and “push up” nonintegers to their next-lower or next-higher integer values.*/

#include <stdio.h>
#include <math.h>
void main()
{
    float change, amtPaid = 1253.456, cost = 1335, dollars;

    change = amtPaid - cost;
    printf("change = %f\n", change);
    dollars = floor(change);
    printf("dollars = %f", dollars);
    // change = -81.543945
    // dollars = -82.00000

    /*Although ceil() and floor() convert their arguments to integers, each function
returns a float value. That’s why the dollars variable was printed using the %f
conversion code.*/

    /*The ceil() function (which is the opposite of floor()) finds the next-highest integer*/
    float lowVal1, lowVal2, hiVal1, hiVal2, ab = 14.5, x;
    lowVal1 = floor(18.5);  // Stores 18.0
    lowVal2 = floor(-18.5); // Stores -19.0
    hiVal1 = ceil(18.5);    // Stores 19.0
    hiVal2 = ceil(-18.5);   // Stores -18.0
    printf("\n %f %F %F %F", lowVal1, lowVal2, hiVal1, hiVal2);
    printf("\n%f", floor(ab)); // 14

    x = ceil(ab);
    printf("\n%f\nx =%f", ab, x);

    float k = 12.3;

    k += floor(k);
    printf("\n%f", k);

    float m = 15.5;

    m -= 1;
    printf("\n\n%f", m);
    /*The negative values make sense when you think about the direction of negative
numbers. The next integer down from –18.5 is –19. The next integer up from –18.5 is –
18.*/
}
