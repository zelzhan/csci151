#include "stdio.h"

typedef struct {
  int hours;
  int minutes;
  char amORpm;
} time;

int main() {
  int advMins, hours, minutes;

  time now = {.hours = 12, .minutes = 0, .amORpm = 'a'};


  printf("Right now it is %.2i:%.2i %c\n", now.hours, now.minutes, now.amORpm);

  printf("How many minutes would you want to forward the time:\n");

  scanf("%i", &advMins);


  hours = advMins / 60;

  minutes = advMins % 60;

  if(now.hours + hours >= 24 && hours%24 != 0 ) {
    if(now.amORpm == 'a') {
      now.amORpm = 'p';
    }
    else now.amORpm = 'a';
  }


  now.hours = (now.hours+hours)%12;
  now.minutes = minutes;


  printf("Right now it is %.2i:%.2i %c\n", now.hours, now.minutes, now.amORpm);

  return 0;
}
