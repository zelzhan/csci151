#include "stdio.h"

int main() {
  char text[81];
  int i = 0, k=0, counter = 0;
  printf("Enter some text:\n" );
  scanf("%s", text );
  while (k < 80) {
    if (text[k] == 'a' || text[k] == 'A') {
      counter++;
    }
    k++;
  }
  printf("%i\n", counter);
  return 0;
}
