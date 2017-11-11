#include "stdio.h"
#include "string.h"

int main(int argc, char const *argv[]) {
  printf("Enter some text: ");
  char word[81];
  word [80] = '\n';
  scanf("%s", word );
  for (int i = 0; i < strlen(word); i++) {
    if (word[i] > 96 && word[i] < 123) {
      word[i] -= (97-65);
    }
  }
  printf("%s\n", word);
  return 0;
}
