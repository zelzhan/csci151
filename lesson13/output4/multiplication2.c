#include <stdio.h>

#include <stdlib.h> // for rand()


int main() {
  int a[3][3], b[3][3], c[3][3];

	int i, j, k, sum = 0;

	for (j = 0; j<3; j++) {
		for (i = 0; i<3; i++) {
			a[j][i] = rand()%10;
			b[j][i] = rand()%10;
		}
	}

	printf("Matrix A:\n");

	for (j = 0; j<3; j++) {
		for (i = 0; i<3; i++) {
			printf("%6i", a[j][i]);
		}
		printf("\n");
	}

	printf("Matrix B:\n");

	for (j = 0; j<3; j++) {
		for (i = 0; i<3; i++) {
			printf("%6i", b[j][i]);
		}
		printf("\n");
	}

	printf("Matrix C is:\n");

	k = 0;
	j=0;

	for (j = 0; j < 3; j++) {
		for(k = 0; k < 3; k++) {
			for (i = 0;i < 3; i++) {
				sum+=a[j][i]*b[i][k];
			}
		c[j][k]=sum;
		printf("%i\t", sum);
		sum = 0;
		}
		printf("\n");
	}


	return 0;

}






	//	c[j][0] = a[j][0]*b[0][j]+a[j][1]*b[1][j]+a[j][2]*b[2][j];
	//	printf("%i\t", c[j][0]);
	//	c[j][1] = a[j][0]*b[0][j+1]+a[j][1]*b[1][j+1]+a[j][2]*b[2][j+1];
	//	printf("%i\t", c[j][1]);
	//	c[j][2] = a[j][0]*b[0][j+2]+a[j][1]*b[1][j+2]+a[j][2]*b[2][j+2];
	//	printf("%i\n", c[j][2]);
	//	c[1][0] = a[1][0]*b[0][0] + a[1][1]*b[1][0]+a[1][2]*b[2][0];
	//	printf("%i\t", c[1][0]);
