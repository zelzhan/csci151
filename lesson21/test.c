#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double strToDouble(const char str[]) {
 int i = 0, result1;
 double decResult = 0,p=0, ten = 10, intValue = 0;
 double result;
 if (str[i] == '-') {
  for (i = i + 1; str[i] >= '0' && str[i] <= '9'; i++) {
   intValue = str[i] - '0';
   result1 = result1 * 10 + intValue;
  }
 } else {
  for (i=0; str[i] >= '0' && str[i] <= '9'; i++) {
   intValue = str[i] - '0';
   result1 = result1 * 10 + intValue;
  }
  result = result1;
 }
 if (str[i] == '.') {
  while (str[i+1] != '\0') {
    if (str[i+1] == 'e') {
      i++;
      break;
    }
   intValue = str[i+1] - '0';
   decResult = decResult + intValue / ten;
//   printf("%g\n", decResult );
   ten = ten * 10;
   i++;
  }
 }
 //printf("%g\n", decResult );
 result = result1 + decResult;

 //printf("%g\n", result );
 if (str[0] == '-') {
  result *= -1;
 }
 if (str[i] == 'e') {
  if (str[i + 1] != '-') {
   for (i = i + 1; str[i] >= '0' && str[i] <= '9'; i++) {
    intValue = str[i] - '0';
    p = p * 10 + intValue;
  //printf("P: %g\n", p );
   }
  //printf("P: %g\n", p );
   result = result * pow(10, p);
  } else {
   for (i+=2; str[i] >= '0' && str[i] <= '9'; i++) {
    intValue = str[i] - '0';
    p = p * 10 + intValue;
    printf("p: %g\n", p );
   }
   printf("p: %g\n", p );
   result = result * pow(10, -p);
  }
 }
 return result;
}
int main() {

 //printf("%lf\n", strToDouble("123456"));
 //printf("%lf\n", strToDouble("-123.456"));
 //printf("%lf\n", strToDouble("123.456e13"));
 printf("%.19lf\n", strToDouble("-123.456e-13"));

 return 0;
}
