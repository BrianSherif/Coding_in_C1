/*
JTSK-320111
a3 p2.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
char line [100];
int x;
// requesting input
printf("Please input an integer.\n");
fgets (line, sizeof(line),stdin);
sscanf(line, "%d", &x);
//processing input to check if divisible by 4 and 7
if (x%4 == 0 && x%7 == 0)
printf("this %d is divisible by 4\n", x );
// in case not divisible by 4 and 7
else
printf("%d not divisible by 4 and 7 \n", x );
return 0;
}
