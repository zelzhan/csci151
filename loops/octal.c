#include "stdio.h"

int main(int argc, char const *argv[]) {
  int decimal, counter, octal;
  counter = 0;
  scanf("%i", &decimal );

  while (decimal > 8) {
    octal = decimal%8;
    decimal = decimal/8;
    counter++;
	if (decimal < 0) {
	break;
	}
    printf("(%i * 8^%i)+", octal, counter);
  }


  return 0;
}
