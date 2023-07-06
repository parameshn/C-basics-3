////////////////////strcat()

/*The string.h header file contains descriptions for more functions than just strcpy() and strlen().



 This section explains the strcat() function that lets you merge two character arrays, as long as the arrays hold strings. strcat() stands for string concatenation.

 strcat() takes one string and appends it to—that is, adds it onto the end of—another string.
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main()
{
    char first[25] = "katniss";
    char last[25] = "evevrdeen";
    strcat(first, last); // Adds last to the end of first
    printf(" i am %s\n", first);
    // i am katnissevevrdeen
    strcat(last, first);
    printf(" i am %s\n", last);
    // i am evevrdeenkatnissevevrdeen

    /*You are responsible for making sure that the first array is large enough to hold both strings. If you attempt to concatenate a second string to the end of another string, and the second string is not defined with enough characters to hold the two strings, strange and unpredictable results can happen.*/
}