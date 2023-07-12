////////Trigonometric Functions//////////////////////////////////////

/*cos(x) = returns the cosine of angle x
sin(x)  = returns the sine of angle x
tan(x) = returns the tangent of angle x
acos(x) = returns the arc cosine of angle x
asin(x) = returns the arc sine of angle x
atan(x) = returns the arc tangent of angle x*/

#include <stdio.h>
#include <math.h>
#include <string.h>
void main()
{

    /*If you want to supply an argument in degrees instead of radians, you can convert from degrees to radians with this formula:*/
    int radians, degrees;
    radians = degrees * (3.14159 / 180.0);
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //////////////////exponential

    /////exp(x) = returns e , the base of the natural logarithm, raised to a power specified by x (e^x).

    double p = 2.0; // Example value for p
    double result = exp(p);

    printf("The exponential of %f is %f\n", p, result);
    /*where "e" is the base of the natural logarithm (approximately 2.71828) and "x" is the exponent or power.

When we calculate the exponential function for a given value of "x", it represents the result of raising the base "e" to the power of "x". In other words, it gives us the value of "e" multiplied by itself "x" times.

For example, if we calculate exp(2), it means we are raising "e" to the power of 2, resulting in "e * e", which is approximately 7.38906.

The exponential function is widely used in various fields of mathematics, science, and engineering. It has many applications, including modeling growth and decay processes, solving differential equations, and describing exponential growth in various natural phenomena.

In the C programming language, the exp() function from the math.h library allows us to compute the exponential function for a given value. By passing the desired value as an argument to the exp() function, we can obtain the corresponding result of the exponential calculation.*/

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //////////logarithm

    ////log(x)   returns the natural logarithm of the argument x,mathematically written as ln(x). x must be positive.
    /*The natural logarithm and base 10 logarithm are two different logarithmic functions used to express the relationship between numbers.

1. Natural logarithm (ln):
The natural logarithm, denoted as "ln(x)" or "logₑ(x)", is a logarithmic function with the base "e". Here, "e" is Euler's number, an irrational constant approximately equal to 2.71828. The natural logarithm function represents the inverse of the exponential function with base "e". In other words, it tells us to what power we need to raise "e" to obtain a specific number.

For example, ln(e) = 1, ln(e²) = 2, ln(e⁴) = 4, and so on. The natural logarithm function has various applications in mathematics, science, and engineering, particularly in areas involving exponential growth or decay.

2. Base 10 logarithm (log10):
The base 10 logarithm, commonly denoted as "log(x)" or "log₁₀(x)", is a logarithmic function with the base 10. It represents the inverse of the exponential function with base 10. The base 10 logarithm tells us to what power we need to raise 10 to obtain a specific number.

For example, log(10) = 1, log(100) = 2, log(1000) = 3, and so on. The base 10 logarithm is often used in everyday calculations, particularly in measurements involving magnitudes, orders of magnitude, or conversions between logarithmic and linear scales.

Both the natural logarithm and base 10 logarithm are essential tools in mathematics and have their respective applications in various fields.*/

    /* This program demonstrates the math functions from the C math.h
    library, so that you can get your homework right thanks to some
    quick-and-easy programming. */

    printf("it's time to do your math homework!\n");

    printf("section 1: square root\n");
    printf("the sqquare root of 49.0 is %.1f\n", sqrt(4.0));
    printf("the square root of 149.0is %.1f\n", sqrt(149.0));

    printf("\n\nsection 2: powers\n");
    printf("4 raised to the 3rd power is %1.f\n", pow(4.0, 3.0));
    printf("7 raised to the power is %.1f\n", pow(7.0, 5.0));

    printf("\n\nsection 3: trignometry\n");
    printf("th cosine of a 60 degree angle is %.3f\n", cos((60 * (3.14159 / 180))));
    printf("the tangent of 75 degree angle is %.3f\n", tan((75 * (3.1415 / 180.0))));

    printf("\n\nsection 4: log functions\n");
    printf("e rasied to 2 is %.3f\n", exp(2));
    printf("the natural log of 5 is %.3f\n", log(5));
    printf("the base-10 log of 5 is %.3f\n", log10(5));
}