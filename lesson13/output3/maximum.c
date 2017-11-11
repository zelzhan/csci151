#include "stdio.h"
#include "stdlib.h"

int main() {
int R=3, C=4;
int a[R][C];
int i, j, r = 1, c = 1, temp = 0;

  for (i = 0; i < R; i++) {
    for (j = 0; j < C; j++) {
      a[i][j] = rand()%24;
      if (temp < a[i][j] ) {
        temp = a[i][j];
        c = j+1;
        r = i+1;
       }
     }
   }

  for (i = 0; i < R; i++) {
    for (j = 0; j < C; j++) {
      printf("%5d", a[i][j]);
    }
    printf("\n");
  }
  printf("%d column and %d row\n", c, r );

}
