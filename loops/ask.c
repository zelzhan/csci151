#include "stdio.h"

int main(int argc, char const *argv[]) {
  int a, b, c;


  do {
    printf("Please enter an integer: \n");
    scanf("%i", &a);
    if (a<0) {
      a = a*a;
      printf("The number squared is: %i\n", a );
      printf("Done.\n");
      break;
    }
    a = a*a;
    printf("The number squared is:%i\n", a );
  } while(1>0);

  return 0;
}
