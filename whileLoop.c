/*///////WHILE LOOP/////////////////////////////

while (condition)
{ block of one or more C statements; }

The condition is a relational test that is exactly like the relational test condition you learned
for if. The block of one or more C statements is called the body of the while.
The body of the while repeats as long as the condition is true. This is the difference between a
while statement and an if statement: The body of the if executes if the condition is true. The
body of the if executes only once, however, whereas the body of the while can execute a lot of
times

///Never put a semicolon after the while’s parenthesis. The semicolon follows only the statements inside the
body of the while.

*/

#include <stdio.h>

int main()
{
    int amount;
    printf("Enter the amount value: ");
    scanf("%d", &amount);

    while (amount < 25)
    {
        printf("Amount is too low!\n");
        printf("Enter a new value: ");
        scanf("%d", &amount);
    }

    printf("Nice choice!\n");
    printf("The amount is %d\n", amount);

    return 0;
}
