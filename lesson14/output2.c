#include "stdio.h"

typedef struct {
int ID;
char gender;
double labGrades, qGrades, fexamGrade, finalGrade;

} student;

int main() {

    student nuStudent;

    printf("What is your ID number?\n");

    scanf("%i", &nuStudent.ID);

    printf("What is your gender? Type in M for male and F for Female\n");

    scanf(" %c", &nuStudent.gender);

    printf("What is your total grade for labs?\n");

    scanf("%lf", &nuStudent.labGrades);

    printf("What is your total grade for quizzes?\n");

    scanf("%lf", &nuStudent.qGrades);

    printf("What is your grade for final exam?\n");

    scanf("%lf", &nuStudent.fexamGrade);

    nuStudent.finalGrade = nuStudent.labGrades*0.2 + nuStudent.qGrades*0.5 + nuStudent.fexamGrade*0.3;

    printf("Student %i, your final grade is %g\n", nuStudent.ID, nuStudent.finalGrade);

    return 0;
}
