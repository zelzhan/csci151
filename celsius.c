#include "stdio.h"

int main() {
  double celsius, farenheit;
  farenheit = 0;
  celsius = 0;
  for (int i = -40; i < 50; i++) {
    celsius = celsius + i;
    farenheit = (1.8) * celsius + 32;
    printf("%g \n", farenheit );
  }
  return 0;
}
