#include "stdio.h"

typedef struct {
  int customerID;
  _Bool isSavings;
  int balance;
  double interestRate;
} account;

int main(int argc, char const *argv[]) {
  int ttime, temp;
  account myAcct;
  printf("CustomerID:\n");
  scanf("%i", &myAcct.customerID );
  printf("Is it saving account? (1 for yes, 0 for not)\n");
  scanf("%i", &temp );
  myAcct.isSavings = temp;
  printf("Enter your current balance\n");
  scanf("%i", &myAcct.balance );
  if (myAcct.isSavings == 1) {
    myAcct.interestRate = 0.02;
  } else {
    myAcct.interestRate = 0.01;
  }
  printf("How many years?\n");
  scanf("%i", &ttime);
  for (int i = 0; i < ttime; i++) {
    myAcct.balance = (double)(myAcct.balance*myAcct.interestRate + myAcct.balance);
  }
  printf("After %i your balance will be: %g\n", ttime, (double)myAcct.balance);

  return 0;
}
