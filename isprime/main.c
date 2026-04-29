#include <stdio.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num);

int main()
{
    int x, res;
   // printf("Please enter a number to check> ");
    //scanf("%d", &x);
    //res =isPrime(x);
    int counter =1;
    for (int i=2; counter<=50  ; i++)
    {
       if(isPrime(i)) {
        printf("\nOrder =%d,Number %d is Prime",counter,i);
        counter++;
       }

    }




    return 0;
}

bool isPrime(int num)
{
    if (num ==1) // Edge Case
    {
        return false;
    }


    for (int i = 2; i <=sqrt(num); i++)
    {
        if (num % i == 0)
            return false;


    }
    return true; // True

}
