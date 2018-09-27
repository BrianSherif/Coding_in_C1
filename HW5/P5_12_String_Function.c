/*
JTSK-320111
a5 p12.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

//decelaration of prototype
void myreplace(char *str, char c, char e);

int main()
{
  //decelaration of data types
  char str[70];
  char c;
  char e;
  long length;
  // Loop to contiously collect input
  while (strcmp(str, "quit") != 0)
  {
   printf("Enter string:\n");
   fgets(str, 70, stdin);
   length = strlen(str) - 1;
   str[length] = '\0';
   //condition if "quit" entered then terminate program
   if (strcmp(str, "quit") != 0)
   {
     //input for C
     printf("Replace:\n");
     scanf(" %c", &c);
     fgetc(stdin);
     //input for e
     printf("with:\n");
     scanf(" %c", &e);
     fgetc(stdin);
     //printing before and after
     printf("Before: %s\n", str);
     myreplace(str, c, e);
     printf("After:%s\n\n", str);
   }
  }
  return 0;

}

// Replacing inputed char c with inputed char e
void myreplace(char *str, char c, char e)
{
  long size;
  size = strlen(str);
  for (int i = 0; i < size; i++)
  {
    if (str[i] == c)
    {
      str[i] = e;
    }
  }
}
