#include <stdio.h>

#define SIZE 2

struct Student
{
    char name[50];
    int seat_no;
    float marks;
    float percentage;
    char grade;
};

void calculate(struct Student s[], int size)
{
    for (int i = 0; i < size; i++)
    {
        s[i].percentage = (s[i].marks / 100.0) * 100.0;

        if (s[i].percentage >= 90)
            s[i].grade = 'A';
        else if (s[i].percentage >= 80)
            s[i].grade = 'B';
        else if (s[i].percentage >= 70)
            s[i].grade = 'C';
        else if (s[i].percentage >= 60)
            s[i].grade = 'D';
        else
            s[i].grade = 'F';
    }
}

void read(struct Student s[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);

        printf("Enter seat no: ");
        scanf("%d", &s[i].seat_no);

        printf("Enter marks (out of 100): ");
        scanf("%f", &s[i].marks);
    }
}

void print(struct Student s[], int size)
{
    printf("\n%-15s %-10s %-10s %-15s %-10s\n",
           "Name", "SeatNo", "Marks", "Percentage", "Grade");

    printf("--------------------------------------------------------------\n");

    for (int i = 0; i < size; i++)
    {
        printf("%-15s %-10d %-10.2f %-15.2f %-10c\n",
               s[i].name,
               s[i].seat_no,
               s[i].marks,
               s[i].percentage,
               s[i].grade);
    }
}

int main()
{
    struct Student s[SIZE];

    read(s, SIZE);
    calculate(s, SIZE);
    print(s, SIZE);

    return 0;
}
