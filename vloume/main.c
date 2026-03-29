#include <stdio.h>
#include <stdlib.h>

int main()
{

    scanf("%f,%f",&base,&hight);
    // declare varaibels
    float length,width,height,volume;
    // read values
    printf("Please enter Length, width, height ");
    scanf("%f%f%f",&length,&width,&height);
    // calcualte
    volume=length*width*height;
    printf("Volume=%f m3",volume);
    return 0;
}
