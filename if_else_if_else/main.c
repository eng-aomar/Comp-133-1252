#include <stdio.h>
#include <stdlib.h>

int main()
{
    int time;
    printf("Enter Time> ");
    scanf("%d", &time);

    if (time < 12) // 11 and less

        printf("Good morning.");  // True Part


    else if (time < 18) // 17-12

        printf("Good day.");

    else  // time >= 18

        printf("Good evening.");

    return 0;
}
