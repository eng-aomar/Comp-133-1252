#include <stdio.h>
#include <stdlib.h>

/*
x++ → use then increase
++x → increase then use
*/
int main()
{
   // int x = 5;
   // int y = x++; // post increment (x++ --> x=x+1)
    // int y =x;  y=5
    // x=x+1 // 6

   // printf("x = %d, y = %d\n", x, y);


 //pre increment

    int x = 5;
    int y = ++x;
    // x=x+1;
    // y=x;

    printf("x = %d, y = %d\n", x, y);

    return 0;
}
