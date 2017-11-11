#include "stdio.h"

void stringCopy();
_Bool areEqual(char str1[], char str2[]);
void reverse();
void concat();


int main() {

  char hello[] = "Hello world";         //task one
  char world[100]="Hallelujadfsdfsdfsdfsdfyah";
//  stringCopy(hello, world);
  printf("%s\n", hello);
  printf("%s\n", world );

  char something[100]; // task four
  concat(hello, world, something);
  printf("%s\n", something );

//  reverse(hello, world);   //task three
//  printf("%s\n", world );

  printf("%d\n", areEqual(hello, world) );//task two
  return 0;
}

_Bool areEqual(char str1[], char str2[]) {
  for (int i = 0; str1[i] != '\0'; i++) {
    if (str1[i] != str2[i]) {
      return 0;
    }
  }
  return 1;
}

void stringCopy(char fromStr[], char toStr[]) {
  for (int i = 0; toStr[i] != '\0'; i++) {
    toStr[i] = fromStr[i];
  }
}

void reverse(char fromStr[], char toStr[]) {
  int j = 0;
  for (; fromStr[j] != '\0'; j++);
  j--;
  for (int i = 0; j >= 0; j--, i++) {
    toStr[i] = fromStr[j];
  }
}

void concat(char str1[], char str2[], char resultStr[]) {
  int i = 0;
  for (; str1[i] != '\0'; i++) {
    resultStr[i] = str1[i];
  }
  for (int j = 0; str2[j] != '\0'; j++, i++) {
    resultStr[i] = str2[j];
  }
}
