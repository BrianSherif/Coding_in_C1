/*
JTSK-320111
a4 p2.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double convert(int mm) {
double meter;
meter = mm * 0.001;
return meter;
}
int main() {
char line [100];
int mm;
printf("Please input measurments in mm.\n") ;
fgets (line, sizeof(line),stdin);
sscanf(line, "%i", &mm);
double meter = convert(mm);
printf("%lf meters\n", meter);
return 0 ;
}
