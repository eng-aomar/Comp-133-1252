#include <stdio.h>
#include <stdlib.h>
/*
(Ternary Operator)
//condition ? expression_if_true : expression_if_false;
Explanation:
condition → any expression that evaluates to true (non-zero) or false (0).
expression_if_true → true part.
expression_if_false → false part.
*/
int main()
{
    int a,b,max; // max ?  a =4, b=5  a>b
    printf("Please enter values of a and b > ");
    scanf("%d%d", &a, &b);
    //int max = (a>b?a:b);  //condition ? expression_if_true : expression_if_false;
   // printf("Max Value %d\n", max);

     if (a>b)
        max = a;
        else
            max= b;

printf("Max Value %d\n", max);
    return 0;
}
