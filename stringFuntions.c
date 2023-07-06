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
}