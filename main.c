#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

   
  // My code goes here

  /* VARS */
  int rolls[100];
  int roll_count = sizeof(rolls) / sizeof(rolls[0]); // note: can only be defined in same scope as array, cannot be passed
  int die_size = 6;
  
  /* ROLL DICE */
  for (int i = 0; i < roll_count; i++) {
    int dice_roll = (rand() % die_size) + 1;
    /*
    printf("Roll #%d, ", i+1);
    printf("Result: %d\n", dice_roll);
    */

    rolls[i] = dice_roll;
  }
  
  /* COUNT HITS */
  int score[die_size];
  int total_score = 0;
  for (int i = 0; i < die_size; i++) {
    int hits = 0;
    for (int ii = 0; ii < roll_count; ii++) {
      if (rolls[ii] == i+1) {
        hits++;
      }
    }


    score[i] = hits * (i+1);
    total_score += score[i];
    /*
    printf("Die side #%d: ", i+1);
    printf("%d hits", hits);
    printf("; %d score\n", score[i]);
    */
    printf("%d\n", hits);
  }
  float average = (float)total_score / roll_count;
  /*
  printf("Total score: %d\n", total_score);
  printf("Average score: %.1f\n", average);
  */
  printf("%d\n", total_score);
  printf("%.1f\n", average);

  return 0;
}
