#include <stdio.h>
#include <stdlib.h>
void do_summation (int num1, int num2); //Function Prototype (2)
int do_summation_1 (int num1, int num2) ;
int do_summation_2 ();
void do_summation_3 ();
void print_menu();
int main()
{

     print_menu();
    // Call Function
    do_summation_3();
    //int x,y;
   // printf("Please enter Two numbers> ");
   // scanf("%d%d",&x,&y); // input
    //int sum;
   // sum= do_summation_2();
   // printf("Inside main Sum = %d",sum); //output
    return 0;
}
int do_summation_2 () // Function Defenition (1)
{
    //input
    int num1, num2;
    printf("Inside Function: Please enter Two numbers> ");
    scanf("%d%d",&num1,&num2);
  // process
    int result = num1 + num2;
    return result;
}

int do_summation_1 (int num1, int num2) // Function Defenition (1)
{
  // process
    int result = num1 + num2;
    return result;
}

void do_summation (int num1, int num2) // Function Defenition (1)
{

    int result = num1 + num2; // process
    printf("Sum inside function is %d", result); //output

}

void do_summation_3 () // Function Defenition (1)
{
    // input

    int num1, num2;
    printf("Inside Function: Please enter Two numbers> ");
    scanf("%d%d",&num1,&num2);
  // process
    int result = num1 + num2; // process
    printf("Sum inside function is %d", result); //output

}

void print_menu(){
 printf("Welcome to my App\n"); //output
 printf("-------------\n"); //output
 printf("1. Add two numbers\n"); //output
 printf("2. Subtract two numbers\n"); //output
 printf("-------------\n"); //output
}
