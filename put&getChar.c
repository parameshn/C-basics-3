///////// putchar() sends a single character to the screen

/* This program is nothing more than a simple demonstration of the putchar() function. */
// putchar() is defined in stdio.h, but string.h is needed for the
// strlen() function
/*Notice that strlen() is used to ensure that the for
doesn’t output past the end of the string.*/
#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char msg[] = "c is fun";

    for (i = 0; i < strlen(msg); i++)
    {
        putchar(msg[i]); // outputs a single character
    }
    putchar('\n'); // onr lis break after the the loop is done.
    return (0);
}

// getchar(); /* Does nothing with the character you get */
/* This program is nothing more than a simple demonstration of the
getchar() function. */

/* This program is nothing more than a simple demonstration of the
getchar() function. */

#include <stdio.h>
#include <string.h>

mai()
{
    int i;
    char msg[25];

    printf("type up to characters and then press enter...\n");
    for (i = 0; i < 25; i++)
    {
        msg[i] = getchar(); // outputs a singlr character

        if (msg[i] == '\n')
        {
            i--;
            break;
        }
    }
    putchar('\n'); // onr line after the loop is done.
    for (; i >= 0; i--)
    {
        putchar(msg[i]);
    }
    putchar('\n');
    return (0);
}