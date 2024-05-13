#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    
    // 2D Pointer Initialization
    int ** pnumbers;

    // Allocate memory for three int pointer rows
    pnumbers = (int **) malloc(3 * sizeof(int *));

    // Allocate memory for each row
    // ROW 0 -> SIZE 1
    // ROW 1 -> SIZE 2
    // ROW 2 -> SIZE 3
    pnumbers[0] = (int *) malloc(1 * sizeof(int));
    pnumbers[1] = (int *) malloc(2 * sizeof(int));
    pnumbers[2] = (int *) malloc(3 * sizeof(int));

    pnumbers[0][0] = 1;
    pnumbers[1][0] = 1;
    pnumbers[1][1] = 1;
    pnumbers[2][0] = 1;
    pnumbers[2][1] = 2;
    pnumbers[2][2] = 1;

    for (i = 0; i < 3; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d", pnumbers[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
      // Free memory allocated for each row
      free(pnumbers[i]);
    }

    // Free table/top-level pointer
    free(pnumbers);

  return 0;
}