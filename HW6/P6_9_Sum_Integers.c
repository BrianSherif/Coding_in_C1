/*
JTSK-320111
a6 p9.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a;
  int b;
  int z;
  FILE *fp1;
  FILE *fp2;
  FILE *fp3;
  // Openning first input file
  fp1 = fopen("input1.txt", "r");
  //If file is null
  if (fp1 == NULL)
  {
    printf("File cannot be opened\n");
    exit(1);
  }
  // Openning second input file
  fp2 = fopen("input2.txt", "r");
  //If file is null
  if (fp2 == NULL)
  {
    printf("File cannot be opened\n");
    exit(1);
  }
  // Write a new output file
  fp3 = fopen("output.txt", "w");
  // Scanning integers
  fscanf(fp1, " %d", &a);
  fscanf(fp2, " %d", &b);
  //sum of integers
  z = a + b;
  fprintf(fp3, "The sum of %d + %d = %d", a, b, z);
  //files no longer needed
  fclose(fp1);
  fclose(fp2);
  fclose(fp3);
  return 0;
}
