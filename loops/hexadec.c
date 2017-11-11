#include "stdio.h"

int main(int argc, char const *argv[]) {
  int decimal, counter, hexa;
  counter = 0;
  scanf("%i", &decimal );

  while (decimal > 8) {
    hexa = decimal%16;
    decimal = decimal/16;
    printf("(%i * 16^%i)+", hexa, counter);
    counter++;
  }
  hexa = decimal%8;
  decimal = decimal/16;
  printf("(%i * 16^%i)\n", hexa, counter);
  return 0;
}
