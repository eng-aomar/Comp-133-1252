/*
 * ============================================================
 *  C Programming – One-Dimensional Arrays
 *  Section 2: Array Declaration
 * ============================================================
 *
 *  LEARNING OBJECTIVES
 *  -------------------
 *  - Declare arrays of various data types
 *  - Understand the memory allocated per type
 *  - Use sizeof() to verify allocation
 *
 * ============================================================
 */

#include <stdio.h>

int main(void) {

    /* ── Declarations (no initialization yet) ────────────────── */
    int    scores[5];       /* 5 × 4 bytes = 20 bytes            */
    float  temps[12];       /* 12 × 4 bytes = 48 bytes           */
    char   grade[30];       /* 30 × 1 byte  = 30 bytes           */
    double prices[100];     /* 100 × 8 bytes = 800 bytes         */

    /* ── sizeof() reports total bytes used ───────────────────── */
    printf("=== sizeof() for each array ===\n");
    printf("int    scores[5]   : %zu bytes  (%zu per element)\n", sizeof(scores),  sizeof(scores[0]));
    printf("float  temps[12]   : %zu bytes  (%zu per element)\n", sizeof(temps),   sizeof(temps[0]));
    printf("char   grade[30]   : %zu bytes  (%zu per element)\n", sizeof(grade),   sizeof(grade[0]));
    printf("double prices[100] : %zu bytes  (%zu per element)\n", sizeof(prices),  sizeof(prices[0]));

    /* ── Number of elements from sizeof ─────────────────────── */
    printf("\n=== Deriving element count from sizeof ===\n");
    int n_scores = sizeof(scores) / sizeof(scores[0]);
    printf("scores has %d elements\n", n_scores);

    /* ── Demonstration: assign and read one element ──────────── */
    printf("\n=== Assign and read single elements ===\n");
    scores[0] = 95;
    scores[4] = 72;
    printf("scores[0] = %d\n", scores[0]);
    printf("scores[4] = %d\n", scores[4]);

    /* NOTE: scores[1], scores[2], scores[3] are UNINITIALIZED   */
    /* Reading them would yield garbage – always initialize first */

    return 0;
}
