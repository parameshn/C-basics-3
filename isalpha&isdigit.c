/*C has several built-in character-testing functions. Now that you know how to use getchar() and
getch() to get single characters, the character-testing functions can help you determine exactly
what kind of input characters your program receives. You can set up if logic to execute certain
courses of action based on the results of the character tests.*/

/*You must include the ctype.h header file at the top of any program that uses the
character functions

The isalpha() function returns true (which is 1 to C) if the value in its parentheses is an
alphabetic character a through z (or the uppercase A through Z) and returns false (which is 0 to C)
if the value in parentheses is any other character. Consider this if:*/
#include <stdio.h>
#include <ctype.h>
void main()
{
    char inChar = 'a';

    if (isalpha(inChar))
    {
        printf("your in put was a letter.\n");
    }
    /*C has a corresponding function named isdigit() that returns true if the character in the
parentheses is a number from 0 through 9. The following if prints A number if inChar contains
a digit*/
    int incha = 4;
    if (isdigit(incha))
    {
        printf("is a digit \n");
    }
}
