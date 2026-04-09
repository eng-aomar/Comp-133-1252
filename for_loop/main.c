#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int i;
    // intitlization; condition; update stament
    for ( int i = 0; i < 5; i++)
    {
        printf("%d\n", i);
    }
   // printf("%d", i);
    printf("------------------\n");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d\n", i);
    }
    printf("------------------\n");
    // intitlization
    int i=4;
    while( i >= 0){
        printf("%d\n", i);
        i--;
    }
     printf("%d", i); // Last value of i after exuecting the while




    return 0;
}
