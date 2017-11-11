#include "stdio.h"

int main(int argc, char const *argv[]) {
  char ch;
  while (ch != '\n') {
    ch = getchar();
    printf("%c", ch );
    /* code */
  }
  return 0;
}
