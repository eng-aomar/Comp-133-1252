#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int id;
    int age;
};

void read(struct Student s[], int size);
void print_struct(struct Student s[], int size);
void sort(struct Student s[], int size);
void updateAge(struct Student *s);
int main()
{
    struct Student s[3];
float x =9/6;
printf("%f\n", x);
    //read(s, 3);
    //print_struct(s, 3);
   //sort(s,3);
   //print_struct(s, 3);
   struct Student st = {101, 20};
   printf("Before: Age = %d\n", st.age);

   updateAge(&st);   // pass address of st

  printf("After : Age = %d\n", st.age);
    return 0;
}

void read(struct Student s[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter id: ");
        scanf("%d", &s[i].id);

        printf("Enter age: ");
        scanf("%d", &s[i].age);

    }
}

void print_struct(struct Student s[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("ID  : %d\n", s[i].id);
        printf("Age : %d\n", s[i].age);
    }
}
void sort(struct Student s[], int size)
{
    int max_index;
    struct Student temp;

    for (int i = 0; i < size - 1; i++)
    {
        max_index = i;

        for (int j = i + 1; j < size; j++)
        {
            if (s[j].age > s[max_index].age)
            {
                max_index = j;
            }
        }

        if (max_index != i)
        {
            temp = s[i];
            s[i] = s[max_index];
            s[max_index] = temp;
        }
    }
}

void updateAge(struct Student *s)
{
   // s->age = 25;   // same as (*s).age = 25;
   (*s).age = 50;
}

void readStudent(struct Student *s)
{
    printf("Enter ID: ");
    scanf("%d", &s->id);

    printf("Enter Age: ");
    scanf("%d", &s->age);
}
