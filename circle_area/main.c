#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main()
{
    // Declare Varaibles
    float r,circ;
    // read input (radious)
    printf("Please enter the radious of the circle ");
    scanf("%f",&r);
    circ=2*PI*r;
    printf("The circ is %f",circ);
    return 0;
}
