/*toupper() returns its parentheses argument as uppercase.


tolower() returns its parentheses argument as lowercase*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
void main()
{
    char userInput;

    if ((userInput == 'Y') || (userInput == 'y'))
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    /*The next set of statements uses the toupper() function to streamline the if statement’s logical test
for lowercase letters:
*/
    if (toupper(userInput) == 'Y') // only need to test for upper case
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
}