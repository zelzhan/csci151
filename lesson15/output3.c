#include "stdio.h"

typedef struct {
  int customerID;
  char type; //' c’ for checking, ‘s’ for savings, ‘d’ for deposit
  int balance;
} BankCustomer;

int main() {
  FILE* savings;
  savings = fopen("file.txt" , "r");

  if (savings == NULL) {
    printf("Error\n");
    return 1;
  }
  BankCustomer customer[10];
  int average1 = 0, average2 = 0, average3 = 0;
  int counter1 = 0, counter2 = 0, counter3 = 0;

  for (int i = 0; i < 10; i++) {
    if (feof(savings)) {
      break; //in case of unexpected behaviour
    }
    fscanf(savings, "%d" , &customer[i].customerID);
    fscanf(savings, "%c" , &customer[i].type);
    fscanf(savings, "%d" , &customer[i].balance);
    if (customer[i].type == 'c') {
      average1 += customer[i].balance;
      counter1 ++;
    }
    if (customer[i].type == 's') {
      average2 += customer[i].balance;
      counter2 ++;
    }
    if (customer[i].type == 'd') {
      average3 += customer[i].balance;
      counter3 ++;
    }
  }

  printf("Average balance for all checking accounts is : %g\n", (double)average1/counter1 );
  printf("Average balance for all saving accounts is : %g\n", (double)average2/counter2 );
  printf("Average balance for all deposit accounts is : %g\n", (double)average3/counter3 );


  fclose(savings);


  return 0;
}
