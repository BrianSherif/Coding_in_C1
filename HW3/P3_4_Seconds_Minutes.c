/*
JTSK-320111
a3 p4.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
char line [100];
int count;
int Start = 0 ;
// requesting input
printf("Please input a  value.\n");
fgets (line, sizeof(line),stdin);
sscanf(line, "%d", &count);
//while loop to convert seconds into minutes
while (Start < count)
{
Start++; //used to calculate next term
int Seconds = Start * 60 ;
//used to print results
printf("%d minutes = %d seconds \n", Start, Seconds);
}
return 0;
}
