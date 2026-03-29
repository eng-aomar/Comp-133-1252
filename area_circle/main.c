#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main()
{
    int r;
    float area;
    printf("Please enter the value of radious\n");
    scanf("%d",&r);
    area = 2*r*PI;
    printf("area=%f",area);
    return 0;
}
