#include <stdio.h>

int main() {
  int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int factorial = 1;
  int i;

  // For loop to calculate the factorial of 10
  for (i = 0; i < 10; i++) {
    factorial = factorial * array[i];
    // Other ways of doing the same thing...
    // factorial *= array[i];
  };

  printf("10! is %d.\n", factorial);
}