#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*




6. Display area.

    */
    float rectangle_height,rectangle_width,area;
   //1. Ask user to enter the height of rectangle.
   printf("Please enter the height of the rectangle ");
   //2. Read height and save as rectangle_height.
   scanf("%f",&rectangle_height);
//3. Ask user to enter the width of rectangle.
 printf("Please enter the wedith of the rectangle ");
 //4. Read width and save as rectangle_width.
 scanf("%f",&rectangle_width);
 //5. Multiply rectangle_heigh by rectangle_width and save the result as area.
area = rectangle_height * rectangle_width;
//6. Display area.
printf("Area=%f m2",area);
    return 0;
}
