#include "stdio.h"

double power(double x, int n) {
  if (n==0) {
    return 1.0;
  } else if (n > 0) {
    if (n%2==0) {
      return (power(x, n/2)*power(x, n/2));
    } else {
      return (power(x, n-1) * x) ;
    }
  } else {
    if (n%2==0) {
      return (power(x, n/2)*power(x, n/2));
    } else {
      return power(x, n+1) * 1/x ;
    }
  }
}

int addSubarray(int x[], int from, int to) {
  if (from == to) {
    return x[from];
  } else {
    return addSubarray(x, from+1, to) + x[from];
  }
}

int elfish(char[]) {
  if () {
    /* code */
  }
}

// bool x_ish(const string s1, const string s2) {
//     if(s1[0] == '\0' && s2[0] == '\0'){
//         return true;
//     }
//     else if(s1[0] < s2[0] || s1[0] > s2[0]){
//         return false;
//     } else{
//         string new_s1 = s1.substr(1);
//         string new_s2 = s2.substr(1);
//         return elfish(new_s1, new_s2);
//     }
// }

// int counter1 = 0, counter2 = 0, counter3 = 0;
//
// string elfish(const string s1) {
//   int counter1 = 0, counter2 = 0, counter3 = 0;
//     if (counter1+couter2+counter3 = 3) {
//       return "Elfish"
//     }
//     if(s1[0] == '\0'){
//         return "Not elfish";
//     }
//     else if(s1[0] == 'e' || s1[0] == 'l' || s1[0] == 'f' ){
//       if (s1[0] == 'e' && counter1 < 2)
//         counter1++;
//       }
//       if (s1[0] == 'l' && counter2 < 2) {
//         counter2++;
//       }
//       if (s1[0] == 'f' && counter2 < 2) {
//         counter3++;
//       }
//       string new_s1 = s1.substr(1);
//       string new_s2 = s2.substr(1);
//       return elfish(new_s1, new_s2);
//     } else{
//         string new_s1 = s1.substr(1);
//         string new_s2 = s2.substr(1);
//         return elfish(new_s1, new_s2);
//     }
//}

double minValue(double arr[], int from, int to) {
	if(from == to) {
		if(arr[to]<arr[to-1]) {
     return arr[to];
   }
		return arr[to-1];
	}
	if(from>=1) {
		if (arr[from-1] < arr[from]){
      arr[from] = arr[from-1];
    }
	}
	return minValue(arr, from+1, to);
}

void printBinary(int n) {
	if(n==0){
    return;
  };
  printBinary(n/2);
	printf("%i", n%2);

}

long choose(int n, int k){
  if (k == 0) {
    return 1;
  } else if (k == n) {
    return 1;
  }
  return (choose(n, k-1)*(n-k+1)/k);
}

int main() {
  for (int i = -10; i < 0; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%d^%i = %.3f \n",j, i, power(j, i));
    }
  }

  double arr[] = {1, 2, 3, 4, 5, 0, 7, 8, 9, 10};

  printf("%lf\n", minValue(arr, 0, 9));
  printBinary(13);
  long foo = choose(52, 5);
  printf("%li\n", foo);
  return 0;
}
