/*
JTSK-320111
a2 p4.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
float a ;
char line [100];
//taking inputs
printf("What is the temperature in centigrades? \n");
fgets (line, sizeof(line),stdin);
sscanf(line, "%f", &a);
// COnvert to Fahrenheit
float f = (9 / 5) ;
float e = f * a ;
float r = e + 32 ;
printf("The temperature in Fahrenheit is %f \n" , r );
    return 0;
}
