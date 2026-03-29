#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr_in, *ptr_out;
    int num1 ,  num2, sum;

    ptr_in = fopen("C:\\Users\\Lenovo\\Desktop\\data.txt", "r");
    ptr_out = fopen("output.txt", "w");
    fscanf(ptr_in, "%d%d",&num1,&num2);
    sum = num1 + num2;
    fprintf(ptr_out,"%d",sum);

    return 0;
}
