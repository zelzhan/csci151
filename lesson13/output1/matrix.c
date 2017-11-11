#include "stdio.h"

int main() {

  int table[12][12];
  for (int i = 1; i < 13; i++) {
    for (int j = 1; j < 13; j++) {
      table[i-1][j-1] = i*j;
    }
  }

  for (int i = 1; i < 13; i++) {
    for (int j = 1; j < 13; j++) {
      printf("%3d ", table[i-1][j-1] );
    }
    printf("\n");
  }
  return 0;
}
