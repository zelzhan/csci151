#include "stdio.h"
#include "stdlib.h"

typedef struct{
  int r, g, b;
} Color;

typedef struct {
  int x, y;
} Coords;

typedef struct {
  Coords upper_left_corner;
  int length;
  int width;
  Color outline;
  Color fill;
} Rectangle;

typedef struct {
  Coords upper_left_corner;
  int length;
  Color outline;
  Color fill;

} Square;

int main( ) {
    Square something = {{5, 4}, 10, {555, 222, 222}, {1,2,3}};
    Rectangle nothing = {{1,2}, 2, 3, {1,2,3}, {4,5,6} };
    printf("%i\n", something.outline.r );

  return 0;
}
