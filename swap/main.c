#include <stdio.h>
#include <stdlib.h>
void swap( int *x_ptr, int *y_ptr);
int main()
{
    int x=50,y=20;
    printf("Oringial X=%d, Y=%d\n", x,y);
    swap(&x,&y);
    printf("After Swap X=%d, Y=%d\n", x,y);

    return 0;
}

void swap( int *x_ptr, int *y_ptr)
{
    int temp;
   temp =*x_ptr;
    *x_ptr =*y_ptr;
    *y_ptr =temp;
}
