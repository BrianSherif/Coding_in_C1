/*
JTSK-320111
a5 p13.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
//declaring function prototype
void mixcase(char *str);

int main()
{
  //declaring data types
  char str[70];
  long size;
  //input loop for continous inputs after printing output
  //condition to terminate if "quit" is entered
  while (strcmp(str, "quit\n") != 0)
  {
    printf("Enter string:\n");
    fgets(str, 70, stdin);
    if (strcmp(str, "quit\n") != 0)
    {
      size = strlen(str) - 1;
      str[size] = '\0';
      printf("Modified string:\n");
      // Calling the function
      mixcase(str);
      // Printing modified string outputted from function
      printf("%s\n", str);
    }
  }
  return 0;
}


// Function to replace uppercase with lowercase
// and lowercase with uppercase
void mixcase(char *str)
{
  long size;
  size = strlen(str);
  for (int i = 0; i < size; i++)
  {
    if (isupper(str[i]))
    {
      // Assigns lowercase to array
      str[i] = tolower(str[i]);
    }
    else if (islower(str[i]))
    {
      // Assigns upperxase to different array
      str[i] = toupper(str[i]);
    }
  }
}
