#include "stdio.h"

int main(int argc, char const *argv[]) {
  int n, counter;
  scanf("%i", &n );
  counter = 0;
  while (counter < n) {
    counter ++;
    if (n%counter == 0 && counter != 1) {
      printf("%i ", counter);
    }
  }
  printf("\n");
  return 0;
}
