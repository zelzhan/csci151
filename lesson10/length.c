#include "stdio.h"

int main(int argc, char const *argv[]) {
  int counter;
  char ch;
  while (ch != '\n') {
    ch = getchar();
    counter++;
    if (ch == ' ' && counter != 0) {
      printf("%i\n", counter-1);
      counter = 0;
    }
  }
  printf("%i\n", counter-1);
  printf("Done.\n");
  return 0;
}
