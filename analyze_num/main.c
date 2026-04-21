#include <stdio.h>
#include <stdlib.h>

void analyze(int num, int *sum, int *count, int *reverse);

int main()
{
    printf("Enter Number\n");

    int num, count = 0, sum = 0, reverse = 0;

    scanf("%d", &num);

    analyze(num, &sum, &count, &reverse);

    printf("Number %d, sum %d, count %d, reverse %d\n",
           num, sum, count, reverse);

    return 0;
}

void analyze(int num, int *sum, int *count, int *reverse)
{
    int digit;

    while (num != 0)
    {
        digit = num % 10;

        *sum += digit;
        (*count)++;

        *reverse = (*reverse * 10) + digit;

        num /= 10;
    }
}
