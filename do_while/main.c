#include <stdio.h>
#include <stdlib.h>
/* The example below uses a do/while loop. The loop will always be executed at least once,
even if the condition is false, because the code block is executed before the condition is tested:*/
int main()
{
    /*  int i = 10;

      do //
      {
          printf("%d\n", i);
          i++;
      }
      while (i < 5);
      */
    int number, sum=0;

    do
    {
        printf("Enter a positive number: ");
        scanf("%d", &number);
        // if statment
        if(number > 0)
            sum+=number;
    }
    while (number > 0);

    printf(" sum = %d, End\n", sum);
    return 0;
}




/*
int number;

do {
  printf("Enter a positive number: ");
  scanf("%d", &number);
} while (number > 0);
*/
