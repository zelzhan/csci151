#include "stdio.h"
#include "stdlib.h"

int main() {
  int array[20], max = 0, min = 101, average = 0;
  for (int i = 0; i < 20; i++) {
    array[i] = rand()%51+50;
    if (array[i] > max) {
      max = array[i];
    }
    if (array[i] < min) {
      min = array[i];
    }
    average = average + array[i];
  }
  average = average/20;

  for (int j = 0; j < 20; j++) {
    printf("Array[%d] is %d\n", j, array[j] );
  }
  printf("Average is %d, maximum is %d and minimum is %d\n", average, max, min);
  return 0;
}
