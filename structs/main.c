#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct StudentCard
{
    char name[50];
    int id;
    int age;
};

typedef struct
{
    int x;
    int y;
} Point;

int main()
{
    struct StudentCard s1={"Alaa", 125,20};
    printf("Name= %s\t", s1.name);
    printf("ID= %d\t", s1.id);
    printf("Age= %d\t", s1.age);
    s1.id =254;
    s1.age=30;
    strcpy(s1.name,"Amal");
    printf("Name= %s\t", s1.name);
    printf("ID= %d\t", s1.id);
    printf("Age= %d\t", s1.age);
     struct StudentCard s[3];
   for(int i = 0; i < 3; i++)
    {
        printf("Student [%d] Name: ", i + 1);
        scanf("%49s", s[i].name);

        printf("Student [%d] ID: ", i + 1);
        scanf("%d", &s[i].id);

        printf("Student [%d] Age: ", i + 1);
        scanf("%d", &s[i].age);
    }

    printf("\nStudent Information:\n");

    for(int i = 0; i < 3; i++)
    {
        printf("\nStudent [%d]\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("ID: %d\n", s[i].id);
        printf("Age: %d\n", s[i].age);
    }


    Point p1 = {10,20};
    printf("x = %d\n", p1.x);
    printf("y = %d\n", p1.y);
    Point p2 = {30, 40};
    Point p3 = {0};    // x = 0, y = 0
    printf("x = %d\n", p2.x);
    printf("y = %d\n", p2.y);
    printf("x = %d\n", p3.x);
    printf("y = %d\n", p3.y);

    return 0;
}
