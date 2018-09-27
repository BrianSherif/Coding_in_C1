/*
JTSK-320111
a2 p3.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
int h ;
int m ;
int s ;
char line [100];
//taking inputs 
printf("How many hours? \n");
fgets (line, sizeof(line),stdin);
sscanf(line, "%d", &h);
printf("how many minutes? \n");
fgets (line, sizeof(line),stdin);
sscanf(line, "%d", &m);
printf("how many seconds? \n");
fgets (line, sizeof(line),stdin);
sscanf(line, "%d", &s);
// conversions
int hs = h * 3600 ;
int ms = m * 60 ;
int total = hs + ms + s ;
//output
printf("the total number of seconds is %d \n",  total);

    return 0;
}
