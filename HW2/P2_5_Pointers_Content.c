/*
JTSK-320111
a2 p6.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
char line [100];
int val ;
printf("What value would you like? \n");
fgets (line, sizeof(line),stdin);
sscanf(line, "%i", &val);
int * val_ptr = &val;
printf("the address is %d\n", val_ptr);
}
