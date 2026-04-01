#include <stdio.h>
#include <stdlib.h>
// Write Function --> if number even or odd
//5 --> Odd
//6--> even
// Write Function --> Diviable by 3 and 5
void isEven(int num);
void isDivisableByThreeAndFive(int num1);
int main()
{
    int x;
    printf("Please enter X ");
    scanf("%d",&x); // 15
   // isEven(x);
   //isDivisableByThreeAndFive(x); // Function Call
    isDivisableByThreeAndFive(x); //isDivisableByThreeAndFive(15)
    return 0;
}

void isEven(int num)
{

    if (num %2 == 0 ) // even
        printf("Even");
    else
        printf("Odd");
}
void isDivisableByThreeAndFive(int num1) // num1 =15
{
//num1 % 3 ==0 and num1 %5 ==0
    if (num1 % 3 ==0 && num1 %5 ==0)
    {
        printf("%d is divisable",num1);
        printf("Inside if");
    }

    else
    {
         printf("%d is not divisable",num1);
         printf("Inside Else");
    }


}

