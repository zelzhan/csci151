#include "stdio.h"

typedef struct {
  int r, g, b;
} Color;

typedef struct {
  int x,y;
} Coords;

typedef struct {
  Color color;
  Coords point[5];
} Pentagon;

int main() {
  FILE *input;
  input = fopen("pentagon.txt", "r");

  if (input == NULL) {
    printf("Error\n");
    return 1;
  }
  Pentagon shape;
  int temp[3], i = 0, j=0, something;


    for (; i < 3; i++) {
      fscanf(input,"%d", &temp[i]);
    }

    shape.color.r = temp[0];
    shape.color.g = temp[1];
    shape.color.b = temp[2];

    for (; j < 5; j++) {
      fscanf(input, "%i", &something);
      shape.point[j].x = something;
      fscanf(input, "%i", &something);
      shape.point[j].y = something;
    }
  printf("%d\n", shape.point[2].x ); //testing the ouput
  fclose(input);
  return 0;
}
