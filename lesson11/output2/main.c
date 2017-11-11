#include "stdio.h"

int main() {

  FILE *values;
  FILE *story;
  FILE *output;

  values = fopen("values.txt", "r");
  story = fopen("story.txt", "r");
  output = fopen("output.txt", "w");

  if (values == NULL || story == NULL || output == NULL) {
    printf("Error\n");
    return 1;
  }

  char content, something, file1[81], file2[81];

  while (1) {
    content = getc(story);
    if (content == EOF) {
      break;
    } else {
      if (content != '$') {
        putchar(content);
        putc(content, output);
      } else {
        fscanf(values, "%s", file2);
        printf("%s ", file2 );
        fprintf(output, "%s ", file2 );
      }
    }
  }
  fclose(values);
  fclose(story);
  fclose(output);
  return 0;
}
