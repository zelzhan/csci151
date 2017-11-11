#include "stdio.h"
#include "math.h"

int main() {
  double x, sine;
  scanf("%lf", &x);
  sine = x - pow(x, 3)/(1*2*3) + pow(x, 5)/(1*2*3*4*5);
  printf("%g\n", sine); 
  return 0;
}
