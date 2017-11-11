#include "stdio.h"

int main() {
int R=3, C=4;
int a[R][C], b[C][R];
int i, j, val = 100;

  for (i = 0; i < R; i++) {
    for (j = 0; j < C; j++) {
      a[i][j] = val;
      b[j][i] = a[i][j] + 25;
      val++;
    }
  }

  for (i = 0; i < R; i++) {
    for (j = 0; j < C; j++) {
      printf("%5d", a[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  for (i = 0; i < C; i++) {
    for (j = 0; j < R; j++) {
      printf("%5d", b[i][j]);
    }
    printf("\n");
  }
}
