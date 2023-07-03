//////////////////////SWITCH////////////////////////////////////////
/*Here is the format of switch:
 switch (expression)
{
case (expression1): { one or more C statements; }
case (expression2): { one or more C statements; }
case (expression3): { one or more C statements; }
// This would keep going for however many case statements to test
default: { one or more C statements; }
*/

/* This program presents a menu of choices, gets the user's choice,
and then uses the switch statement to execute a line or two of code
based on that choice. (What the user wants to do is not truly
implemented—it is just a series of stubs to teach the value of the
switch statement. */
#include <stdio.h>
#include <stdlib.h>
void main()
{

    int choice;
    printf("what do you want to do ?\n");
    printf("1. add new contact\n");
    printf("2. edit existing contact\n");
    printf("3. call contatc\n");
    printf("4. text contact\n");
    printf("5. exit");
    do
    {
        printf("enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case (1):
            printf("\nto add you wil need the contatcs");
            printf("first name ,last name,contact");
            break;
        case (2):
            printf("\nGet ready to enter the name of ");
            printf("name of the\n");
            printf("contact you wish to change.\n");
            break;
        case (3):
            printf("\nWhich contact do you ");
            printf("wish to call?\n");
            break;
        case (4):
            printf("\nWhich contact do you ");
            printf("wish to text?\n");
            break;
        case (5):
            exit(1); // Exits the program early
        default:
            printf("\n%d is not a valid choice.\n", choice);
            printf("Try again.\n");
            break;
        }
    } while ((choice < 1) || (choice > 5));
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* example that demonstrates different kinds of case expressions in a switch statement:*/
#include <stdio.h>

int main()
{
    char grade;

    printf("Enter your grade (A, B, C, D, or F): ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Excellent!\n");
        break;
    case 'B':
    case 'C':
        printf("Well done!\n");
        break;
    case 'D':
        printf("You passed.\n");
        break;
    case 'F':
        printf("You failed.\n");
        break;
    default:
        printf("Invalid grade.\n");
        break;
    }

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* example that showcases different kinds of case expressions in a switch statement using string literals:*/
#include <stdio.h>
#include <string.h>

int main()
{
    char fruit[20];

    printf("Enter a fruit name: ");
    scanf("%s", fruit);

    switch (strcmp(fruit, "apple"))
    {
    case 0:
        printf("It's an apple!\n");
        break;
    case 1:
        printf("It's not an apple, but something else.\n");
        break;
    default:
        printf("Invalid input.\n");
        break;
    }

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*in standard C, you cannot use operators directly as case expressions in a switch statement. Case expressions in a switch statement are limited to constant integral expressions or single values.

The case expressions in a switch statement must be constant expressions that can be evaluated at compile time. Operators involve operations that are evaluated at runtime, and they cannot be used directly as case expressions.

However, you can use a workaround by using if-else statements within each case to perform conditional checks involving operators. This way, you can achieve the desired functionality using conditional logic. Here's an example:
 */
#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    switch (1)
    {
    case 1:
        if (number > 0 && number <= 10)
        {
            printf("Number is between 1 and 10.\n");
        }
        else if (number > 10 && number <= 20)
        {
            printf("Number is between 11 and 20.\n");
        }
        else
        {
            printf("Number is outside the specified ranges.\n");
        }
        break;
    default:
        printf("Invalid case.\n");
        break;
    }

    return 0;
}
