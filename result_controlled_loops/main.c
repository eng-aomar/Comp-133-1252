#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0,  counter=0, num;
    while(sum <=1000)
    {
        printf("Please enter a value> ");
        scanf("%d",&num);
        sum+=num;  //update
        counter++;
    }
    printf("Sum =%d, Count =%d\n", sum,counter);
    return 0;
}
