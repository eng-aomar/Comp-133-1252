#include <stdio.h>
#include <stdlib.h>



int main()
{
    printf("|%s|\n", "Cat");
    printf("|%10s|\n", "Cat");
    printf("|%-10s|\n", "Cat");
    printf("|%10.5s|\n", "Elephant");
    printf("|%-10.5s|\n", "Elephant");
    // printf("|%10.5s|\n", "Elephant");

    return 0;
}

