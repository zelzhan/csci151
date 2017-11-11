#include "stdio.h"

int main() {
  int k, n, counter;
  //scanf("%i", &n );
  cin>>n;
  counter = 2;
  k=0;

  while (n>counter) {
    counter = counter * 2;
    k++;
  }
  cout<<k;
  //printf("%i\n", k );
  return 0;
}
