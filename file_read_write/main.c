#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ftp_in, *ftp_out;  // step number 1
    int num1, num2, sum;

    ftp_in = fopen("C:\\Users\\Lenovo\\Desktop\\input.txt", "r");
    ftp_out = fopen("output.txt", "w"); // step number 2

    fscanf(ftp_in,"%d%d",&num1,&num2); // step number 3
    sum = num1 +num2;

    fprintf(ftp_out, "The result of adding %d and %d is %d", num1,num2,sum);

    fclose(ftp_in);
    fclose(ftp_out);

    return 0;
}
