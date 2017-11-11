#include "stdio.h"
#include "math.h"

int main(int argc, char const *argv[]) {
  double a, b, c, D1, D2;
  scanf("%lf", &a );
  scanf("%lf", &b );
  scanf("%lf", &c );
  D1 = (-b + sqrt(pow(b, 2) - 4 * a * c))/2*a;
  D2 = (-b - sqrt(pow(b, 2) - 4 * a * c))/2*a;
  printf("%g %g\n", D1, D2 );
  return 0;
}
