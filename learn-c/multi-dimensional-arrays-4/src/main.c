#include <stdio.h>

int main() {
  // 2D array to store the grades of five students in two subjects.
  int grades[2][5];

  // Table representation of the grades array if populated:
  // Student | Subject 1 | Subject 2
  // --------------------------------
  // 1       | 80        | 85
  // 2       | 70        | 80
  // 3       | 65        | 80
  // 4       | 89        | 82
  // 5       | 90        | 87

  // Other variables
  float average;
  int i;
  int j;

  // Populate the grades array for subject 1.
  grades[0][0] = 80;
  grades[0][1] = 70;
  grades[0][2] = 65;
  grades[0][3] = 89;
  grades[0][4] = 90;

  // Populate the grades array for subject 2.
  grades[1][0] = 85;
  grades[1][1] = 80;
  grades[1][2] = 80;
  grades[1][3] = 82;
  grades[1][4] = 87;

  // Loop [0, 1]
  for (i = 0; i < 2; i++) {
    average = 0;

    // Loop [0, 1, 2, 3, 4]
    for (j = 0; j < 5; j++) {
      average += grades[i][j];
    }

    // Calculate average
    average = average / 5;
    printf("The average marks obtained in subject %d is: %.2f\n", i, average);
  }

  return 0;
}