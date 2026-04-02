#include <stdio.h>
void print_menu();
int main() {
    int choice;
    float num1, num2, result;

    print_menu(); // Display the menu

    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4) {
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
    }

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;

        case 2:
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;

        case 3:
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;

        case 4:
            if (num2 != 0)
                printf("Result = %.2f\n", num1 / num2);
            else
                printf("Error: Division by zero!\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
void print_menu()
{
    printf("=== Simple Calculator ===\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("Enter your choice: ");
}
