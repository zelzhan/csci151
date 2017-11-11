#include "stdio.h"
#include "string.h"

int strToDouble(const char num[]) {
 double floatValue, decimalValue, result = 0, negative_counter = 0, decimal = 0, exponential = 0;
 int i;

 for (i = 0; num[i] == '.' || num[i] == '-' || (num[i] >= '0' && num[i] <= '9'); i++) {
   if (num[i] == '.') {
     decimal = 1;
     break;
   }
   if (num[i] == '-') {
     negative_counter = 1;
     continue;
   }
// printf("value %i\n", num[i] );
   floatValue = num[i] - '0';
// printf("digit %i\n", floatValue );
   result = result * 10 + floatValue;
 }

 if (decimal == 1) {
   int quotent = i+1;
   int k = 0;
   for (k = i+1; num[k]=='e' || (num[k] >= '0' && num[k] <= '9'); k++, quotent++) {
     if(num[k]=='e') {
       k++;
       exponential = 1;
       break;
     }
     quotent++;
     floatValue = num[k] - '0';
     decimal = decimal*10 + floatValue;
 }

 for (; quotent<k; quotent--) {
   decimal /= 10;
 }

 result+= decimal;
 if (negative_counter == 1) {
   return -result;
 }
 return result;
}
}
int main() {
  double something = strToDouble("123.456");
  printf("%lf\n", something);
 return 0;
}














//
//
// double strToDouble(const char str[]) {
// 	int i;
//
// 	double dValue, result = 0, deciResult=0, multiple=1;
//
// 	_Bool isDecimal = 1, isNegative=0, isE=0;
//
// 	for (i = 0; (str[i] >= '0' && str[i] <= '9') || str[i]=='-' || str[i]=='.'; i++) {
// 		if(str[i]=='-') {isNegative = 1; continue;}
// 		if(str[i] == '.') {isDecimal = 0; break;}
// 		dValue = str[i] - '0';
// 		result = result * 10 + dValue;
// 	}
//
// 	if(!isDecimal) {
// 		int degree = i+1, j;
// 		for(j = i+1; (str[j] >= '0' && str[j] <= '9') || str[j]=='e'; j++, degree++) {
// 			if(str[j]=='e') {isE = 1; j++; break;}
// 			dValue = str[j] - '0';
// 			deciResult = deciResult*10 + dValue;
// 			degree++;
// 		}
//
// 		while(degree>j) {
// 			deciResult /= 10;
// 			degree--;
// 		}
//
// 		degree = 0;
//
// 		if(isE) {
// 			int asd=0, sum=0;
// 			_Bool negativeDegree=0;
// 			for(; (str[j] >= '0' && str[j] <= '9') || str[j]=='e' || str[j]=='-'; j++) {
// 				if(str[j]=='-') {negativeDegree=1; continue;}
// 				asd = str[j] - '0';
// 				if(negativeDegree) asd = -asd;
// 				sum = sum*10 + asd;
// 			}
//
// //			printf("POWER IS:%i\n", sum);
//
// 			multiple = pow(10, sum);
// 		}
//
// 	}
//
// 	result += deciResult;
// 	result *= multiple;
// 	if(isNegative) result *= -1;
// 	return result;
//
// 	return (double) atof(str);
//
// }
