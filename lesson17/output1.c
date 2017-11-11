#include "stdio.h"

/*double smallest(int y, int x, double arr[y][x]) {
  double counter = arr[0][0];
  for (int i = 0; i < y; i++) {
    for (int j = 0; j < x; j++) {
      if (counter > arr[i][j]) {
        counter = arr[i][j];
      }
      printf("%7g ", arr[i][j]);
    }
    printf("\n ");
  }
  printf("\n");
  return counter;
}*/

int smallestDouble(int size, double arr[]){
	int n = 0;
	double min = arr[0];
	for (int i = 1; i<size; i++) {
		if (arr[i] < min) {
			min = arr[i];
			n = i;
		}
	}
	return n;
}

double maxVal(int len, double arr[len][len]) {
  double counter = arr[0][0];
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len; j++) {
      if (counter < arr[i][j]) {
        counter = arr[i][j];
      }
    }
  }
  return counter;
}

void reverse(int y, double arr[y]) {
  double temp;
  for (int i = 0; i < y; i++, y--) {
    temp = arr[i];
    arr[i] = arr[y-1];
    arr[y-1] = temp;
  }
}

void transpose(int row, int col, double orig[row][col], double result[col][row]){

  for (int i = 0; i < col; i++) {
    for (int j = 0; j < row; j++) {
      result[j][i] = orig[i][j];
    }
  }
}

void transposePrint(int row, int col, double result[row][col]) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf("%7g", result[i][j] );
    }
    printf("\n");
  }
}

void reversePrint(int y, double arr[y]) {
  for (int i = 0; i < y; i++) {
    printf("%g ",arr[i]);
  }
  printf("\n");
}

int main() {
  double arr[][10] = {{1,2,5,0.005,2,4,5,5,10,11},
                      {3,1,2,3,4,6,32,2,5,12},
                      {1,2,3,4,5,6,7,8,9,10},
                      {10,11,12,13,14,15,15,16,17,323},
                      {3,1,2,3,4,6,32,2,5,12},
                      {3,1,2,3,4,6,32,2,5,12},
                      {3,1,2,3,4,6,32,2,5,12},
                      {3,1,2,3,4,6,32,2,5,12},
                      {3,1,2,3,4,6,32,2,5,12},
                      {3,1,2,3,4,6,32,2,5,12}};
  double something = smallest(10, 10, arr);
  double aarraayy[10][10];
  printf("Smallest is %g\n", something );
  something = maxVal(10, arr);
  printf("Biggest is %g\n", something );
  double array[] = { 1.2, 3.2, 5, 10, 11, 12, 15};
  reverse(7, array);
  reversePrint(7, array);
  transpose(10, 10, arr, aarraayy);
  transposePrint(10, 10, aarraayy);
  return 0;
}
