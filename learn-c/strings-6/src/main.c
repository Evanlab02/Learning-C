#include <stdio.h>
#include <string.h>

int main() {
  // Pointer annotation for strings
  char * first_name = "John";

  // Array annotation for strings
  char last_name[] = "Doe";
  // Same as
  // char last_name[4] = "Doe"; Do not forget the extra number due to the terminator character.

  // Other code ...
  char name[100];

  last_name[0] = 'B';
  sprintf(name, "%s %s", first_name, last_name);
  if (strncmp(name, "John Boe", 100) == 0) {
    printf("Done!\n");
  }
  name[0]='\0';
  strncat(name,first_name,4);
  strncat(name,last_name,20);
  printf("%s\n",name);
  return 0;
}