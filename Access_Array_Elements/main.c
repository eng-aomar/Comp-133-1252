/*
 * ============================================================
 *  C Programming – One-Dimensional Arrays
 *  Section 4: Accessing Array Elements
 * ============================================================
 *
 *  LEARNING OBJECTIVES
 *  -------------------
 *  - Read (retrieve) individual array elements
 *  - Write (modify) individual array elements
 *  - Swap two elements using a temporary variable
 *  - Use elements inside expressions
 *
 *  COMPILE & RUN
 *  -------------
 *    gcc -Wall -o 04_accessing 04_accessing.c
 *    ./04_accessing
 * ============================================================
 */

#include <stdio.h>

/* Helper: print entire array */
void print_array(int arr[], int n) {
    printf("[ ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("]\n");
}

int main(void) {

    int scores[5] = {90, 85, 78, 92, 88};
    printf("Original: ");
    print_array(scores, 5);


    /* ── Reading elements ────────────────────────────────────── */
    printf("\n=== Reading Elements ===\n");
    printf("scores[0]       = %d\n", scores[0]);   /* first     */
    printf("scores[3]       = %d\n", scores[3]);
    printf("scores[4]       = %d\n", scores[4]);   /* last      */


    /* ── Using elements in expressions ──────────────────────── */
    printf("\n=== Elements in Expressions ===\n");
    int sum = scores[0] + scores[1];
    printf("scores[0] + scores[1] = %d + %d = %d\n",
           scores[0], scores[1], sum);

    double avg = 0;
    for (int i = 0; i < 5; i++) avg += scores[i];
    avg /= 5;
    printf("Average = %.1f\n", avg);


    /* ── Writing (modifying) elements ───────────────────────── */
    printf("\n=== Modifying Elements ===\n");
    printf("Before: scores[2] = %d\n", scores[2]);
    scores[2] = 95;                    /* overwrite 78 with 95   */
    printf("After : scores[2] = %d\n", scores[2]);
    printf("Array : ");
    print_array(scores, 5);


    /* ── Swapping two elements ───────────────────────────────── */
    printf("\n=== Swapping scores[0] and scores[4] ===\n");
    printf("Before swap: ");
    print_array(scores, 5);

    int temp    = scores[0];
    scores[0]   = scores[4];
    scores[4]   = temp;

    printf("After  swap: ");
    print_array(scores, 5);


    /* ── Variable index access ───────────────────────────────── */
    printf("\n=== Variable Index Access ===\n");
    int i = 2;
    printf("i = %d  =>  scores[i]   = %d\n", i, scores[i]);
    printf("i = %d  =>  scores[i+1] = %d\n", i, scores[i + 1]);


    /* ── OUT-OF-BOUNDS DEMO (commented out – undefined behavior) */
    /*
     *  scores[5]  = 99;   // BAD: index 5 doesn't exist
     *  scores[-1] = 0;    // BAD: negative index
     *  Accessing these corrupts memory – never do this!
     */

    return 0;
}
