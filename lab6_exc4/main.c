#include <stdio.h>
/*
Compute change = paid − due
Start from the largest denomination → smallest
For each denomination:
    Count how many fit
    Reduce the remaining change
Return results using pointers (output parameters)


*/
void calculateChange(int change,
                     int *b200, int *b100, int *b50, int *b20,
                     int *c10, int *c5, int *c2, int *c1) ;
int main() {
    int paid, due;

    printf("Enter amount paid: ");
    scanf("%d", &paid); //500

    printf("Enter amount due: ");
    scanf("%d", &due);  //375

    if (paid < due) {
        printf("Insufficient amount paid.\n");
        return 1;
    }

    int change = paid - due; // 125

    int b200, b100, b50, b20;
    int c10, c5, c2, c1;

    calculateChange(change,
                    &b200, &b100, &b50, &b20,
                    &c10, &c5, &c2, &c1);

    printf("\nChange = %d\n", change);
    printf("200 bills: %d\n", b200);
    printf("100 bills: %d\n", b100);
    printf("50 bills: %d\n", b50);
    printf("20 bills: %d\n", b20);
    printf("10 coins: %d\n", c10);
    printf("5 coins: %d\n", c5);
    printf("2 coins: %d\n", c2);
    printf("1 coins: %d\n", c1);

    return 0;
}
void calculateChange(int change,
                     int *b200, int *b100, int *b50, int *b20,
                     int *c10, int *c5, int *c2, int *c1) {

    *b200 = change / 200;
    change %= 200; // 175/200=0, reminder 175

    *b100 = change / 100;
    change %= 100;

    *b50 = change / 50;
    change %= 50;

    *b20 = change / 20;
    change %= 20;

    *c10 = change / 10;
    change %= 10;

    *c5 = change / 5;
    change %= 5;

    *c2 = change / 2;
    change %= 2;

    *c1 = change;
}
