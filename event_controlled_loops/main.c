#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, sum = 0, counter = 0; // intilization
    printf("Please enter a number or -1 to stop> ");
    scanf("%d", &num);
    while (num != -1)  // condition
    {
        counter++;
        sum += num; // sum=sum+num;
        //update statment
        printf("Please enter a number or -1 to stop> ");
        scanf("%d", &num);
    }

    printf("Sum = %d, number =%d", sum, counter);
    return 0;
}
