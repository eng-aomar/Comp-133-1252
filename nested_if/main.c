#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 15;
    int y = 10;

    if (x > 10)
    { // True Part Beginning
        printf("x is greater than 10\n");

        // Nested if
        if (y > 20)
        {
            printf("y is also greater than 20\n"); // x > 10 and Y > 20
        }
        else
        printf("y is less than or equal  20\n");

    } // True Part End
    else
        printf("x is less than or equal  10\n"); // x > 10 and Y > 20


   /* if (x>10 && y>20)  // Compound two operands --> simple
    {
        printf("x is greater than 10\n");
        printf("y is also greater than 20\n");
    }
    else
        printf("x is less than or equal  10 or y is less than or equal 20");
        */
    return 0;
}
