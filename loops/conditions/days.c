#include "stdio.h"

int main(int argc, char const *argv[]) {
  int d, month, day, week;
  scanf("%i", &day );
  if (day>366 || day<0) {
    printf("Error");
    return 1;
  }
  week = day%7;
  if (week  == 0) {
    printf("It's Monday, ");
  } else if (week == 1) {
    printf("It's Tuesday, ");
  } else if (week == 2) {
    printf("It's Wednesday, ");
  } else if (week == 3) {
    printf("It's Thursday, ");
  } else if (week == 4) {
    printf("It's Friday, ");
  } else if (week == 5) {
    printf("It's Sunday, ");
  } else if (week == 6) {
    printf("It's Saturday, ");
  }

  if (day > 0 && day < 31) {
    printf("January %i\n", day );
  } else if (day >= 31 && day < 61) {
    printf("February %i\n", (day-31) );
  } else if (day >=61 && day < 90) {
    printf("March %i\n", (day - 61));
  } else if (day >= 90 && day < 120) {
    printf("April %i\n", (day - 90));
  } else if (day >=120 && day < 151) {
    printf("May %i\n",(day - 120));
  } else if (day >= 151 && day < 182) {
    printf("June %i\n", (day - 151 ));
  } else if (day >= 182 && day < 212) {
    printf("July %i\n", (day - 182 ));
  } else if (day >= 212 && day < 243) {
    printf("August %i\n", (day - 212 ));
  } else if (day >= 243 && day < 274) {
    printf("September %i\n", (day - 243 ));
  }  else if (day >= 274 && day < 304) {
    printf("October %i\n", (day - 274));
  } else if (day >= 304 && day < 335 ) {
    printf("November %i\n", (day - 304 ));
  } else if (day >= 335 && day < 367  ) {
    printf("December %i\n", (day - 335 ));
  }




  return 0;
}
