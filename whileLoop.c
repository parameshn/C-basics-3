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
    /*int amount;
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
     */
    int count = 1;

    while (/* condition */ count <= 10)
    {
        /* code */ printf("hahahahahah %d\n", count);
        count += 3;
    }
    printf("count = %d", count);
    return 0;
    /*
    Initially, count is 1. It satisfies the condition count <= 10, so the loop is entered. The value of count is printed as 1, and it is incremented by 3, becoming 4.

Now, count is 4. It still satisfies the condition count <= 10, so the loop is executed again. The value of count is printed as 4 and incremented by 3, becoming 7.

The value of count is now 7. It continues to satisfy the condition count <= 10, so the loop executes once more. The value of count is printed as 7 and incremented by 3, becoming 10.

At this point, count is 10. It still satisfies the condition count <= 10, so the loop runs again. The value of count is printed as 10 and incremented by 3, becoming 13.

Now, count is 13. However, when the condition count <= 10 is evaluated again, it is no longer true because 13 is greater than 10. Therefore, the loop is exited, and the program proceeds to the next statement.

The final printf statement outside the loop prints the value of count, which is 13 in this case. This demonstrates that after the loop terminates, the value of count is 13.*/
}