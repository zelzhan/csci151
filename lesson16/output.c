#include "stdio.h"
#include "math.h"

double expApprox(double, int);
int nFactorial(int);
double sinApprox(double, int);
_Bool isPrime(int);
int sumOfDigits(int);
_Bool isIdeal(int);

int main() {
  double a;
  int b, c, d, e;
  printf("Enter the first and second arguments of funciton expApprox and sinApprox: \n");
  scanf("%lf %i", &a, &b );
  printf("Approximation of exponential function: %g\n", expApprox(a , b));
  printf("Approximation of the trigonometric sine: %g\n", sinApprox(a, b));

  printf("Enter the number to check whether it is prime or not (1 stands for \"Yes\" and 0 for \"No\"): \n");
  scanf("%i", &c);
  printf("%i\n", isPrime(c));

  printf("Enter the number: \n");
  scanf("%i", &d);
  printf("Sum of the digits of the number %i is: %i\n", d, sumOfDigits(d));

  printf("Enter the number in order to findout is it ideal or not: \n");
  scanf("%i", &e );
  printf("The number is %i (1 stands for ideal and 0 for not)\n", isIdeal(e) );

  return 0;
}

double expApprox(double x, int n) {
	double sum = 0;
	for (int i = 0; i<= n; i++) {
		sum += (pow(x,i)/nFactorial(i));
	}
	return sum;
}

int nFactorial(int n) {

	if (n == 1 || n == 0) return 1;

	for (int i = n-1; i>0; i--) {
		n *= i;
	}
}

double sinApprox(double x, int n) {
	double sum = 0;
	int j = 0;
	for (int i = 1; i<=n; i+=2, j++) {
		if(j%2 == 0){
//			printf("+");
			sum += (pow(x,i)/nFactorial(i));
			continue;
		}
		sum -= (pow(x,i)/nFactorial(i));
//		printf("-");
	}
}

_Bool isPrime(int n) {
	if (n<1) return 0;
	for (int i = 2; i<n; i++) {
		if(n%i == 0) return 0;
	}
	return 1;
}

int sumOfDigits(int n) {
	int sum = 0;
	int rem;
	while(1) {
		if(n == 0) break;
		rem = (n%10);
		n = n/10;
		sum = sum + rem;
	};
	return sum;
}


_Bool isIdeal(int n) {
	int sum = 0, i = 1;
	for (; i<=(n/2); i++) {
		if(n%i==0){
			sum+=i;
		}
	};
	if(sum == n) return 1;
	return 0;
}


/*double expApprox(double x, int n) {
  double temp1 = 1, temp2 = 0, temp3;
  for (int i = 1; i < n+1; i++) {
    for (int j = 1; j < i+1; j++) {
      temp1 *= j;
      printf("%lf\n", temp1 );
    }
  temp2 += (pow(x,n))/temp1;
  }
  temp3 = 1 + temp2;
  return temp3;
}*/
