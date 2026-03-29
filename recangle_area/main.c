#include <stdio.h>
#include <stdlib.h>

int main()
{
// 1. Ask user to enter the height of rectangle.
printf("Please enter the height of the rectangle \n");
//2. Read height and save as rectangle_height.
float rectangle_height;
scanf("%f",&rectangle_height);
//3. Ask user to enter the width of rectangle.
printf("Please enter the width of the rectangle \n");
//4. Read width and save as rectangle_width.
float rectangle_width;
scanf("%f",&rectangle_width);
//5. Multiply rectangle_heigh by rectangle_width and save the result as area.
float area;
area = rectangle_height * rectangle_width; // calcluation
//6. Display area.
printf("area=%f\n",area);
    return 0;
}
