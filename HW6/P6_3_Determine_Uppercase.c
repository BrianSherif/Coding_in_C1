/*
JTSK-320111
a6 p3.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//function prototype
int count_upper(char* str);

int main()
{
  char str[100];
  //While loop to input string from keyboard
  //if statment to terminate program if "\n" is inputed alone.
  while (strcmp(str, "\n") != 0)
  {
    printf("Please type your string below:\n");
    fgets(str, 100, stdin);

    if (strcmp(str, "\n") != 0)
    {
      printf("The total number of UPPERCASE letters in the string is %d\n", count_upper(str));
    }
  }
  return 0;
}

int count_upper(char* str)
{
  int counter = 0;
  char pstr[100];
  strcpy(pstr, str);
  for (str = pstr; *str != '\0'; str++)
  {
    // using pointer to walk thru string
    if (isupper(*str))
    {
      counter++;
    }
  }
  return counter;
}
