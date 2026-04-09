#include <stdio.h>
#include <stdlib.h>
void check_grade(float grade);
int main()
{
    float g;
    printf("Please enter your grade ");
    scanf("%f", &g);
    int res =check_grade(g);
    if (res)
        printf("")
        else
        printf("")

    return 0;
}

int check_grade(float grade)
{
    // 1 : pass
    //0: fail

    if (grade >=60)
    //printf("Pass");
    return 1;
    else
        //printf("Fail");
        return 0;

}
