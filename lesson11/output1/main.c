#include <stdio.h>

int main() {
 char CopyName[81], PastName[81];
 printf("Enter the name of the 1st file: \n");
 scanf("%s", CopyName );
 printf("Enter the name of the 2nd file: \n");
 scanf("%s", PastName );

 FILE *copy;
 FILE *past;
 copy  = fopen(CopyName, "r");
 past = fopen(PastName, "w");

 if (copy == NULL || past == NULL) {
 printf("Problem opening files");
 return 1;
 }

 char content;
 while (1) {
   content = getc(copy);
   if (content == EOF) {
     break;
   } else {
     putc(content, past);
   }
 }

 printf("The file '%s'  copied successfully in the file '%s'\n", CopyName, PastName);

 fclose(copy);
 fclose(past);
 return 0;
}
