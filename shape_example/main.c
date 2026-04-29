#include <stdio.h>
#include <stdlib.h>
void draw_shape();
void draw_shape2();
void draw_shape3();
int main()
{

 /* char x ='a';  // a=97, b=94, c=95 ---- x==z
                //A =65, B
                //A-a
    printf("%d\t", 'b' - 'B');
    x++;
    printf("%c\t", x);*/
    int count =1;
    for(char x='a';x<='z'; x++, count++){
           printf("%c\t", x);
            if ( count %4 ==0)
                printf("\n");

    }


    return 0;
}

void draw_shape()
{
    for(int row =1; row<=4; row++)
    {
        // loop spaces
        for(int space =1; space <= 4-row; space++)
        {
            printf(" ");
        }

        // shapes
        for(int shape=1; shape<=2*row-1;shape++)
        {
            printf("%d",row -1);
        }
        printf("\n");
    }
}
void draw_shape2()
{
    for(int row =1; row<=4; row++)
    {


        // shapes
        for(int shape=1; shape<=row;shape++)
        {
            //printf("%d",row -1);
            printf("*");
        }
        printf("\n");
    }
}

void draw_shape3()
{
    for(int row =4; row>=1; row--)
    {


        // shapes
        for(int shape=row; shape>=1;shape--)
        {
            //printf("%d",row -1);
            printf("*");
        }
        printf("\n");
    }
}
