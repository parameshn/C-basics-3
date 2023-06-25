////////FOR LOOP ///////////
/*
for (startExpression; testExpression; countExpression)
{ block of one or more C statements; }

for (ctr = 1; ctr <= 5; ctr++)
{
printf("Counter is at %d.\n", ctr);
}

. Here’s how this for statement works: When the for begins, the startExpression,
which is ctr = 1;, executes. The startExpression is executed only once in any for loop.
The testExpression is then tested. In this example, the testExpression is ctr<= 5;. If it
is true—and it will be true the first time in this code—the body of the for loop executes. When the
body of the loop finishes, the countExpression is executed (ctr is incremented)
*/
#include <stdio.h>
void main()
{
    int ctr;
    for (ctr = 3; ctr <= 10; ctr += 3)
    {
        /* code */ printf("\nstill counting....");
        printf("\nctr = %d", ctr);
    }
    /*still counting....
ctr = 3
still counting....
ctr = 6
still counting....
ctr = 9*/

    // very same loop written as a while statement
    ctr = 3;
    while (ctr <= 10)
    {
        printf("\nctr is at =%d", ctr);
        ctr += 3;
    }

    int i, employees;
    printf("How many employees in the organization? ");
    scanf(" %d", &employees);
    // Loop to calculate payroll for each employee
    for (i = 1; i <= employees; i++)
    {
        // Calculations for each employee follow...
    }
    int cDown;

    for (cDown = 10; cDown > 0; cDown--)
    {
        printf("%d.\n", cDown);
    }
    printf("Blast off!\n");
    /*10
9
8
7
6
5
4
3
2
1
Blast off!*/

    int outer, inner;
    for (outer = 1; outer <= 3; outer++)
    {
        for (inner = 1; inner <= 5; inner++)
        {
            printf("%d ", inner);
        }
        // Print a newline when each inner loop finishes
        printf("\n");
    }
    /*
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5*/
    // If you put a for loop in the body of another loop, you are nesting the loops.
}