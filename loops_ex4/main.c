#include <stdio.h>
#include <stdlib.h>
int x =10; // global varaible
void incX();
int main()
{
    int x=3;
    incX();
    printf("%d\n", ++x);
    return 0;
}
void incX()
{
    //int x=5;

    printf("%d", x++);
}
