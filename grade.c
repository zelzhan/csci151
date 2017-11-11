#include "stdio.h"

int main() {
  float quiz, lab, final, grade;
  quiz, lab, final, grade = 0;
  printf("Quiz: \n");
  scanf("%f", &quiz );
  quiz = quiz * 0.5;
  printf("Lab: \n");
  scanf("%f", &lab);
  lab = lab * 0.2;
  printf("Final\n");
  scanf("%f", &final );
  final = final * 0.3;
  grade = (quiz + lab + final);
  printf("Your final grade is %g percents\n", grade );
  return 0;
}
