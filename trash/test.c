#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*
Starting with the Color and Coords struct definitions given in the first video clip, define another struct called
Square, which has an upper-left corner, a side length, an outline color, and a fill color.
(Assume that a square’s sides are parallel to the x and y-axes.) Declare a Square variable in main, and initialize all of its member values.
Similarly, define another struct for Rectangle, and declare and initialize a variable of that type.
*/

typedef struct {

int r,g,b;

} Color;

typedef struct {

Color color;

} Something;

int main(int argc, char const *argv[]) {
  Something hello;
  hello.color = {255, 255, 255};
  return 0;
}
