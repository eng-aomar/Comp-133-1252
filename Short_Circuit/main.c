#include <stdio.h>

int check1();

int check2();

int main() {
   /* if (check2() && check1()) { // if( -- and -- )
        printf("Both true\n");
    }
*/    if (check1() || check2()) {
        printf("Both true\n");
    }

    return 0;
}
int check1() {
    printf("check1 called\n");
    return 0; // False
}

int check2() {
    printf("check2 called\n");
    return 1; // True
}
