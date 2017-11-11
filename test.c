/* Implement the following four string functions similar to the ones from before,
 *except now, use pointer arithmetic instead of array accesses in your implementations.
 * A starter file, StringPtrs.c, is provided with function stubs and testing code for your convenience.
 * You are encouraged to use your previous implementations of these functions as a starting point.
 * As before, you may assume that the string parameters that are getting new or modified values are large enough
 * to the hold the required number of characters.
 */
#include <stdio.h>
#include <string.h>
void stringCopy(const char *fromStr, char *toStr) {
 while (*fromStr != '\0' || *toStr != '\0') {
  *toStr = *fromStr; //assign from to to
  fromStr++, toStr++;
 }
}

_Bool areEqual(const char *str1, const char *str2) {
 while (*str1 != '\0' || *str2 != '\0') { //in case they are not of the same size
  if (*str1 != *str2) { //checking if each character is the same
   return 0;
  }
  str1++, str2++;
 }
 return 1;
}

void reverse(char *fromStr, char *toStr) {
 int i = 0;

 while (*fromStr != '\0') {
  i++;
  fromStr++;
 }
 while (i > 0) {
  fromStr--;
  *toStr = *fromStr;
  toStr++;
  i--;
 }

}

void concatenate(char *str1, char *str2, char *resultStr) {
 while (*str1 != '\0') { //up until it hits the null character
  *resultStr = *str1;
  str1++, resultStr++;
 }
 while (*str2 != '\0') {
  *resultStr = *str2;
  str2++, resultStr++;
 }
 if (*resultStr != '\0') {
  *resultStr = ' ';
  resultStr++;
 }
}

int main() {
 char word1[] = "Hello";
 char word2[] = "Hi there";
 char word3[] = { 'H', 'e', 'l', 'l', 'o', '\0', 'X' };
 char word4[] = "Hi";

 char result[48];

 // Test code for stringCopy
 stringCopy(word1, result);
 printf("Test 1.1 result: %s\n", result);
 stringCopy(word2, result);
 printf("Test 1.2 result: %s\n", result);
 stringCopy(word3, result);
 printf("Test 1.3 result: %s\n", result);

 // Test code for areEqual
 printf("Test 2.1 result: %i\n", areEqual(word1, word2));
 printf("Test 2.2 result: %i\n", areEqual(word1, word3));
 printf("Test 2.3 result: %i\n", areEqual(word2, word4));
 printf("Test 2.4 result: %i\n", areEqual(word4, word2));

 // Test code for reverse
 reverse(word1, result);
 printf("Test 3.1 result: %s\n", result);
 reverse(word3, result);
 printf("Test 3.2 result: %s\n", result);
 reverse(word2, result);
 printf("Test 3.3 result: %s\n", result);

 // Test code for concatenate
 concatenate(word1, word2, result);
 printf("Test 4.1 result: %s\n", result);
 concatenate(word3, word4, result);
 printf("Test 4.2 result: %s\n", result);
 concatenate(word1, word1, result);
 printf("Test 4.3 result: %s\n", result);

 return 0;
}
