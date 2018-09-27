/*
JTSK-320111
a3 p5.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
char line [100];
int count;
// requesting input
printf("Please input a  value.\n");
fgets (line, sizeof(line),stdin);
sscanf(line, "%d", &count);
//for loop to convert seconds into minutes
for (int Start = 1; Start <= count; Start++) {
int Seconds = Start * 60 ;
//print final results
printf("%d minutes = %d seconds \n", Start, Seconds);
}
return 0;
 }
