#include <stdio.h>
#include <stdlib.h>

int check_perfect(int num);

int main()
{
    int num , res;
    printf("Please enter a new number or -1 to quit> ");
    scanf("%d",&num);
    while(num !=-1)
    {
        res = check_perfect(num);
    if (res)
        printf("Perfect\n");
    else
        printf("Not Perfect\n");
        printf("Please enter a new number or -1 to quit> ");
        scanf("%d",&num);
    }
    printf("GoodBye!!!");
    return 0;
}

int check_perfect(int num){
    if (num <= 0) return 0;

    int sum = 0;
    int i = 1;          // initialization

    while (i < num)     // condition
    {
        if (num % i == 0)
        {
            sum += i;
        }
        i++;            // update
    }

    if (num == sum)
        return 1;
    else
        return 0;
}
