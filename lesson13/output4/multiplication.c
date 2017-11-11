#include "stdio.h"
#include "stdlib.h"
int main(int argc, char const *argv[]) {
int A[3][3], B[3][3], C[3][3];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      A[i][j] = rand()%4;
      B[i][j] = rand()%5;
      printf("%3d ", A[i][j] );
     }
     printf("\n");
   }

   for (int k = 0; k < 3; k++) {
     for (int z = 0; z < 3; z++) {
       C[i][j] = A[i][j] * B[i][j] + A[i][j+1]*B[i+1][j] + A[j][i+1]
     }
   }
  return 0;
}
