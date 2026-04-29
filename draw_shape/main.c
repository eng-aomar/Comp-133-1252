#include <stdio.h>
#include <stdlib.h>
void draw_shape();
int main()
{
    // print enter number of rows
    // varaible
    // function
    draw_shape();
    return 0;
}


void draw_shape(int rows)
{
    // outer loop iterate rows
    for(int row=1; row<=4; row++)
    {
       // loop spaces
       for(int space=1;space <= (4-row); space++)
       {
           printf(" ");
       }

       // loop shapes
       for ( int shape =1; shape <=(2*row -1); shape++)
       {
           printf("%d", (row -1));
       }
       printf("\n");
    }
}

#include <stdio.h>
#include <stdlib.h>
void draw_shape();
int main()
{
    // print enter number of rows
    // varaible
    // function
    draw_shape();
    return 0;
}


void draw_shape2()
{
    // outer loop iterate rows
    for(int row=1; row<=4; row++)
    {


       // loop shapes
       for ( int shape =1; shape <= row; shape++)
       {
           printf("*"));
       }
       printf("\n");
    }
}

