#include "stdio.h"

int main() {
  int a, b, c, counter;
  counter = 0;
  c = 0;
  b = 1;
  printf("%i\n", c);
  printf("%d\n", b);
  while (counter<20) {
    a = b + c;
    c = b;
    b = a;
    printf("%i\n",a );
    counter++;
  }
  return 0;
}
