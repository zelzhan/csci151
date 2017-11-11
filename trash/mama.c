#include <stdio.h>

int main(void) {
 int k, i;
 char word[81];
 k = -4;
 i = 0;
 scanf ("%s", word);
 while (i<82) {
  if (word[i] == 'a' || word[i] == 'A') {
   k++;
  }
  i++;
 }
 printf("%i", k);
 return 0;
}
