#include <stdio.h>
#include <stdlib.h>
void num_analysis(int *sum, int *count, int *rev, int x);
int main()
{
    int sum=0, count=0, rev=0, num=0;
    printf("Please enter num> ");
    scanf("%d", &num);
    num_analysis(&sum,&count,&rev,num);
    printf("sum=%d, count=%d, rev=%d",sum,count,rev);

    return 0;
}
void num_analysis(int *sum, int *count, int *rev, int x)
{
    while(x !=0){
        int digit =x %10;
        *sum +=digit; // *sum =*sum+digit;
        (*count)++; // *count =*count+1; //*count+=1
        *rev =*rev*10 +digit;
        x=x/10; // update statment
    }

}
