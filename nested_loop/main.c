#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter =0, mark ,sum=0, student_sum;
    for(int i=1; i<=3;i++)   // outer loop  5 times 0-4
    {
        //printf("Please enter Student %d Marks\n",i);
        for (int j=1;j<=2;j++) // inner loop  3 times 0-2
        {
            printf("Please enter Student %d, Mark %d\n",i,j );
            scanf("%d",&mark);
            sum+=mark; // sum = sum + mark;
            student_sum+= mark;
            counter ++;

        }
        printf("Student %d Final Sum of Marks =%d\n",i, student_sum);
        student_sum = 0;
    }
    printf("Counter %d, Sum=%d",counter,sum);
    return 0;
}
