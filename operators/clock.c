#include "stdio.h"

int main() {
  int seconds, hours, minutes, sseconds;
  scanf("%i", &seconds );
  sseconds = seconds%60;
  minutes = seconds%3600;
  hours = 3600%seconds;
  printf("%i:%i:%i\n", sseconds, minutes, hours);

  return 0;
}
