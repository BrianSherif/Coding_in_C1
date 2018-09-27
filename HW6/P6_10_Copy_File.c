/*
JTSK-320111
a6 p10.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
  char buffer[20];
  FILE *fp1, *fp2;
  // openning first file
  fp1 = fopen("text.txt", "r");
  if (fp1 == NULL)
  {
    printf("file cannot be opened\n");
    exit(1);
  }
  // writes a copy into file Text_copy
  fp2 = fopen("text_copy.txt", "w");
  while(fgets(buffer, 20, fp1))
  {
    // While buffer not empty; read file into buffer
    // Prints buffer
    fprintf(fp2, "%s", buffer);
  }
  //files no longer needed
  fclose(fp1);
  fclose(fp2);
  
  return 0;
}
