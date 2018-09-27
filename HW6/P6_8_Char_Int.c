/*
JTSK-320111
a6 p8.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  //assign pointers and data type
  int ch;
  FILE *fp1;
  FILE *fp2;
  //open file
  fp1 = fopen("char.txt", "r");
  //write 2nd file because code.txt doesnt exist
  fp2 = fopen("code.txt", "w");
  ch = getc(fp1);
  //ASCII code value of letter in char.txt
  fprintf(fp2, "%d", ch);
  //files no longer needed
  fclose(fp1);
  fclose(fp2);
  return 0;
}
