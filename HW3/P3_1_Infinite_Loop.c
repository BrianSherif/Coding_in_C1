/*
JTSK-320111
a3 p1.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
int n = 2;
while (n < 6)
{
printf("n is %d\n", n);
n++;
}
printf("That’s it.\n");
return 0;
/* The reason the code was stuck in an infinte loop was due to the fact that
the coder forgot to put curly brackets around his statment*/
}
