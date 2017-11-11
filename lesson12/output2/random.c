#include "stdio.h"
#include "stdlib.h"

int main() {
  int array[20];
  for (int i = 0; i < 20; i++) {
    array[i] = rand()%51+50;
  }

  for (int j = 0; j < 20; j++) {
    printf("Array[%d] is %d\n", j, array[j] );
  }
  return 0;
}
