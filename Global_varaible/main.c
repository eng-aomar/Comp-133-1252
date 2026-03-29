#include <stdio.h>
#include <stdlib.h>
void myFunction();
// Global variable x
//A variable created outside of a function, is called a global variable and belongs to the global scope.
int x = 5;
int main()
{
    myFunction();

    // We can also use x here
    printf("Inside Main X=%d\n", x);
    return 0;
}
void myFunction()
{
    // We can use x here
    int x = 20;
    printf("Inside myFunction X=%d\n", x);
}
