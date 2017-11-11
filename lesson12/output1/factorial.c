#include "stdio.h"

int main() {
  int factorial[10], temp;
  temp = 1;
  for (int i = 1; i < 11; i++) {
    factorial[i-1] = temp;
    temp = temp*i;
  //  printf("factorial[%d] is equal to %d\n", i-1, factorial[i-1] );
  cout<<"factorial["<<i-1<<"] is equal to"<<factorial[i-1]<<endl;
  }
  return 0;
}
