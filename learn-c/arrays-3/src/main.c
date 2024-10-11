#include <stdio.h>

int main() {
  // When declaring arrays, need to specify the size of the array.
  int grades[3];

  // Due to no size being specified, this will just be a single integer.
  int average;

  // Populate array indices with grades.
  grades[0] = 80;
  grades[1] = 85;
  grades[2] = 90;

  // Some calculation and display.
  average = (grades[0] + grades[1] + grades[2]) / 3;
  printf("The average of the 3 grades is: %d\n", average);

  return 0;
}