#include <stdio.h>
#include <stdlib.h>
int check_perfect(int num);
int main()
{
    int num = 7, res;
    res = check_perfect(num);
    if (res)
        printf("Perfext\n");
    else
        printf("Not Perfect\n");
    return 0;
}

int check_perfect(int num)
{

    int sum =0;
    int res;
    for (int i=1; i< num; i++)
    {

        if (num % i == 0)
        {
            sum+= i;
        }


    }
    if (num == sum)
        res= 1;
    else
        res= 0;

    return res;
}
