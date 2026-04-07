#include <stdio.h>

int main()
{
    /*  int g1, g2, g3, g4, g5;// Grades

      printf("Please enter Student 1 Grade > ");
      scanf("%d", &g1);

      printf("Please enter Student 2 Grade > ");
      scanf("%d", &g2);

      printf("Please enter Student 3 Grade > ");
      scanf("%d", &g3);

      printf("Please enter Student 4 Grade > ");
      scanf("%d", &g4);

      printf("Please enter Student 5 Grade > ");
      scanf("%d", &g5);

      printf("\n--- Grades ---\n");
      printf("Student 1: %d\n", g1);
      printf("Student 2: %d\n", g2);
      printf("Student 3: %d\n", g3);
      printf("Student 4: %d\n", g4);
      printf("Student 5: %d\n", g5);

      int total = g1 + g2 + g3 + g4 + g5;
      printf("\nTotal = %d\n", total);*/
// Convert Loops --> while ,for ,do while
    int grade, total_grades=0, grade_counter=1; // 0
    while(grade_counter<=1000) // True  4<=5 --? True
    {
        // Multiple statments  // True
        printf("Please enter Student %d Grade > ", grade_counter);
        scanf("%d", &grade);
        total_grades = total_grades+grade;

        // Update statment
       ++ grade_counter ;  // grade_counter =grade_counter+1; grade_counter+=1;
    }

    printf("\nTotal = %d\n", total_grades);

    return 0;
}
