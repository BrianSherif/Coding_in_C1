/*
JTSK-320111
a2 p2.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  // defining variables
char line [100];
int a ;
//asking for input
printf("What's your input value? \n");
// assigning it to variables
fgets (line, sizeof(line),stdin);
sscanf(line, "%d", &a);
//printing out results 
printf("results for your input is %o and %x \n",a ,a );

    return 0;
}
