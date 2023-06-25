//////////////do while loop///////////////////
/*do
{ block of one or more C statements; }
while (condition)

Use a do...while in place of a while only when the body of the loop must execute at least one
time. The condition is located at the bottom of the do...while loop, so C can’t test the
condition until the loop finishes the first time.
 */
#include <stdio.h>
int main()
{
    float num1, num2, result;
    char choice;
    do
    {
        printf("Enter your first number to multiply: ");
        scanf(" %f", &num1);
        printf("Enter your second number to multiply: ");
        scanf(" %f", &num2);
        result = num1 * num2;
        printf("%.2f times %.2f equals %.2f\n\n",
               num1, num2, result);
        printf("Do you want to enter another pair of numbers ");
        printf("to multiply (Y/N): ");
        scanf(" %c", &choice);
        // If the user enters a lowercase n, this if statement will
        // convert it to an N
        if (choice == 'n')
        {
            choice = 'N';
        }
    } while (choice != 'N');
    return 0;
}