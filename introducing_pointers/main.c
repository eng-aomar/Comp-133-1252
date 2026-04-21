#include <stdio.h>
#include <stdlib.h>
//int sum(int num1, int num2);
//int sub(int num1, int num2);
int sum;
void calint (int *sum_ptr, int * sub_ptr, int num1, int num2);
int main()
{
    printf("Enter Tow Numbers: ");
    int x, y,  sum_res, sub_res;
    scanf("%d%d", &x,&y);
   // sum_res = sum(x,y);
   // sub_res =sub(x,y);
     calint(&sum_res, &sub_res,x,y);
    printf("sum %d, sub %d", sum_res,sub_res );
    return 0;
}
void calint (int *sum_ptr, int *sub_ptr, int num1, int num2)
{

    *sum_ptr= num1 +num2;
    *sub_ptr= num1 - num2;

}




int sum(int num1, int num2)
{
    return num1 +num2;

}
int sub(int num1, int num2)
{
    return num1 - num2;

}
