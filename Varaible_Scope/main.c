#include <stdio.h>
#include <stdlib.h>
void myFunction() ;
//In C, variables are only accessible inside the region they are created. This is called scope
int main()
{
    int x =17;
    myFunction();

    // Print the variable x in the main function
    printf("%d\n", x);
    return 0;
}
void myFunction()
{
    // Local variable that belongs to myFunction
    //A local variable cannot be used outside the function it belongs to.
    int x = 5;

    // Print the variable x
    printf("%d\n", x);
}
