#include "stdio.h"

int main() {
  double  length = 33.5;
  double centimeter, myriameter, inches, miles, furlongs;
  centimeter = length * 1/100;
  myriameter = length * 10000;
  inches = length/39.37;
  miles = length * 1609.344;
  furlongs = length * 201.168;
  printf("%g\n", centimeter );
  printf("%g\n", myriameter );
  printf("%g\n", inches);
  printf("%g\n", miles);
  printf("%g\n", furlongs);
  return 0;
}
