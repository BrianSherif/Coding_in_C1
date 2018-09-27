/*
JTSK-320111
a3 p3.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
char line [100];
char letter;
// requesting input
printf("Please input a letter.\n");
fgets (line, sizeof(line),stdin);
sscanf(line, "%c", &letter);
// Comparing to see if letter is uppercase or lowercase
if ((letter >= 'A') && (letter <= 'Z'))
  {
  printf("This is a uppercase letter\n");
  }
else if ((letter >= 'a') && (letter <= 'z'))
{
    printf("This is a lower case letter\n");
} else {
    printf("Error, this is not a letter\n");
}
//final step taken incase a non letter is inputted.
return 0;
}
