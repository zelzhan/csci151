#include "stdio.h"

int main() {
  int counter, length = 0, temp;
  char ch;
  while (ch != '\n') {
    ch = getchar();
    counter++;
    if (ch == ' ' && counter != 0) {
      printf("%i\n", counter-1);
      if (counter-1 > length) {
        length = counter-1;
      }
      counter = 0;
    }
  }
  printf("%i\n", counter-1);
  if (counter-1 > length) {
    printf("The length of the longest word is %i\n", counter-1 );
  } else {
    printf("The length of the longest word is %i\n", length );
  }
  printf("Done.\n");
  return 0;
}
