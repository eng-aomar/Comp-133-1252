#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /*
    int x,a=10,b=20;
    //x= a*a+2*a*b+b*b; //
    x=pow(a,2)+2*a*b+pow(b,2);
    printf("%d", x);

    float Z,z=5,x=1,y=2;

    Z =(  4.2*(x+y)/z  - 0.25*x/(y+z) ) /(pow(x+y,2));
    printf("%f", Z);
     */

     int  x =387;
     int ones = x%10;
     int tens = x/10%10;
     int hands=x/100;
     printf("%d", hands);
    return 0;
}
