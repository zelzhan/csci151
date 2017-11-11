#include "stdio.h"
#include "math.h"

int main() {
  double height, radius, surf_area, base, volume;
  height = 15.1;
  radius = 17.55;
  surf_area = 3.14*pow(radius, 2) + 3.14 * radius * sqrt(pow(radius, 2) + pow(height, 2));  
  volume = 1/3 * 3.14 * pow(radius, 2) + height;
  base = 3.14 * pow(radius, 2);
  printf("Area of base is %f\n Surface area is %f\n Volume is %f\n", base, surf_area, volume );


  return 0;
}
