/*
JTSK-320111
a5 p11.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//prototype of function
int count_char(char *str, char c);

int main()
{
  //Declaring variables
  int length;
  char *str;
  long size;
  // Input og full string
  printf("Enter your full string:\n");
  scanf(" %d", &length);
  // Memory allocation
  str = (char *) malloc(length);
  // taking string inputed
  fgets(str, length, stdin);
  size = strlen(str) - 1;
  str[size] = '\0';
  //reprint the previous string
  printf("The string input was:\n%s\n", str); // Prints input
  // Calling different functions in each printf
  //as well as provide them with the input for "char c"
  printf("The letter 'B' occured %d times\n", count_char(str, 'B'));
  printf("The letter 'p' occured %d times\n", count_char(str, 'p'));
  printf("The letter 'i' occured %d times\n", count_char(str, 'i'));
  printf("The letter 'D' occured %d times\n", count_char(str, 'D'));
  printf("The letter 'z' occured %d times\n", count_char(str, 'z'));

    return 0;
}

// Counts presents of inputed "char c" in the string
int count_char(char *str, char c)
{
  //declaring data types
  int counter = 0;
  long size;
  size = strlen(str);
  for (int i = 0; i < size; i++)
  {
    if (str[i] == c)
    {
    counter++;
    }

  }
  //return the counted amount of "char c"
  return counter;
}
