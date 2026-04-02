#include <stdio.h>

int main() {
    char grade;

    printf("Enter your grade (A, B, C, D, F): ");
    scanf(" %c", &grade);

    switch(grade) {
        case 'A':
        case 'a':
        case 'b':
        case 'B':   // 'A' OR 'B'  Grade =A or grade=B
            printf("Excellent!\n");
            break;

        case 'C':
        case 'c':
        case 'd':
        case 'D':   // 'C' OR 'D'
            printf("Good.\n");
            break;

        case 'F':
            printf("Fail.\n");
            break;

        default:
            printf("Invalid grade!\n");
    }

    return 0;
}
