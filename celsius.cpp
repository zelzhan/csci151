#include "stdio.h"

int main() {
  double farenheit;
  for (int i = -40; i < 50; i++) {
    farenheit = (1.8) * i + 32;
    printf("%g \n", farenheit );
  }
  return 0;
}
