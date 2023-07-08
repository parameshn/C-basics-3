///////////////////////puts()////////////gets()//////////

/*The puts() and gets() functions provide an easy way to print and get strings.
Their descriptions
are in stdio.h, so you don’t have to add another header file for puts() and gets().

puts()
sends a string to the screen
 gets() gets a string from the keyboard.
*/

/*The following program
demonstrates gets() and puts(). As you look through it, notice that neither printf() nor
scanf() is required to input and print strings.*/

/* This program asks a user for their hometown and the two-letter
abbreviation of their home state. It then uses string concatenation
to build a new string with both town and state and prints it using
puts. */
#include <stdio.h>
#include <string.h>

main()
{
    char city[15];
    // 2 chars for the state abbrev. amd one for the null zero
    char st[3];
    char fullLocation[18] = "";

    puts("what town do you live in?");
    gets(city);

    puts("what state do you live in ? (2-letter abbrevation)");
    gets(st);

    /*concatenates the string*/
    strcat(fullLocation, city);
    strcat(fullLocation, ","); // adds a coma and space between the city
    strcat(fullLocation, st);  // and the state abbrevation

    puts("\nyou live in");
    puts(fullLocation);
    return (0);

    /* strcat() has to be used three times: once to add the city, once for the comma, and
 once to tack the state onto the end of the city.

/////////////
 puts() automatically puts a newline at the end of every string it prints. You don’t have to add a \n
at the end of an output string unless you want an extra blank line printed.
 */
}