/*
 * ============================================================
 *  C Programming – One-Dimensional Arrays
 *  Section 1: Introduction – Why Arrays Are Needed
 * ============================================================
 *
 *  LEARNING OBJECTIVES
 *  -------------------
 *  - Understand the problem with individual variables
 *  - See how an array replaces many variables
 *  - Observe loop-based access vs. manual access
 *
 * ============================================================
 */

#include <stdio.h>

int main(void) {

    /* ── Without arrays: tedious, doesn't scale ─────────────── */
    printf("=== Without Arrays (5 separate variables) ===\n");

    int score1 = 85, score2 = 90, score3 = 78,
        score4 = 92, score5 = 88;

    printf("Score 1 : %d\n", score1);
    printf("Score 2 : %d\n", score2);
    printf("Score 3 : %d\n", score3);
    printf("Score 4 : %d\n", score4);
    printf("Score 5 : %d\n", score5);

    /* Manual sum – imagine doing this for 100 students! */
    int manual_sum = score1 + score2 + score3 + score4 + score5;
    printf("Sum     : %d\n\n", manual_sum);


    /* ── With an array: clean and scalable ───────────────────── */
    printf("=== With an Array (same 5 scores) ===\n");

    int scores[5] = {85, 90, 78, 92, 88};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        printf("scores[%d] = %d\n", i, scores[i]);
        sum += scores[i];
    }

    printf("Sum     : %d\n", sum);
    printf("Average : %.1f\n\n", (float)sum / 5);


    /* ── Key insight: index can be a variable ────────────────── */
    printf("=== Accessing via a variable index ===\n");

    int idx = 2;
    printf("scores[idx]     where idx=%d  =>  %d\n", idx, scores[idx]);
    printf("scores[idx+1]   where idx=%d  =>  %d\n", idx, scores[idx + 1]);

    return 0;
}
