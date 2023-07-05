/*The isupper() and islower() functions let you know whether a variable contains an upper- or
lowercase value. Using isupper() keeps you from having to write long if statements like this:*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
void main()
{
    char inLetter = 'W';
    if ((inLetter >= 'A') && (inLetter <= 'Z'))
    {
        printf("letter is upper case\n");
    }
    // instead
    if (isupper(inLetter))
    {
        printf("letter is upper case\n");
    }
    else
        printf("lettter is lowe r\n ");

    /// islower() tests for lowercase values in the same way as isupper() tests for uppercase values.

    /* This program asks a user for a username and a password. It tests
whether their password has an uppercase letter, lowercase letter,
and a digit. If it does, the program congratulates their selection.
If not, it suggests they might want to consider a password with more
variety for the sake of security. */

    // stdio.h is needed for printf() and scanf()
    // string.h is needed for strlen()
    // ctype.h is needed for isdigit, isupper, and islower

    int i;
    int hasUpper, hasLower, hasDigit;
    char user[25], password[25];

    // initialize all the three test variables to i.e false

    hasUpper = hasLower = hasDigit = 0;

    printf("what is your username?\n");
    scanf("%s", user);

    printf("pls create a PASSWORD:\n");
    scanf("%s", password);
    // This loop goes through each character of the password and
    // tests
    // whether it is a digit, upppercase letter, then lowercase
    // letter.
    for (i = 0; i < strlen(password); i++)
    {
        if (isdigit(password[i]))
        {
            hasDigit = 1;
            continue;
        }
        if (isupper(password[i]))
        {
            hasUpper = 1;
            continue;
        }
        if (islower(password[i]))
        {
            hasLower = 1;
        }
    }
    /* The if portion will only execute if all three variables
below are 1, and the variables will only equal 1 if the appropriate
characters were each found */

    if ((hasDigit) && (hasUpper) && (hasLower))
    {
        printf("\n\nExcellent work, %s,\n", user);
        printf("Your password has upper and lowercase ");
        printf("letters and a number.");
    }
    else
    {
        printf("\n\nYou should consider a new password, %s,\n",
               user);
        printf("One that uses upper and lowercase letters ");
        printf("and a number.");
    }
}