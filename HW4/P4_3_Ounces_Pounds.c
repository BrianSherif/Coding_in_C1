/*
JTSK-320111
a4 p3.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double convert(int pounds);
double convert2(int ounces);
int main() {
char line [100];
int pounds;
int ounces;
printf("Please input weight in pounds.\n") ;
fgets (line, sizeof(line),stdin);
sscanf(line, "%i", &pounds);
printf("Please input rest of weight in ounces .\n") ;
fgets (line, sizeof(line),stdin);
sscanf(line, "%i", &ounces);
double kg1 = convert (pounds);
double kg2 = convert2(ounces);
double kgf = (kg1 + kg2) * 0.001;
printf("%lf kilograms\n", kgf);
return 0 ;
}

double convert(int pounds) {
double kg1;
kg1 = (double)pounds * 453.6;
return kg1;
}
double convert2(int ounces) {
double kg2;
kg2 = (double)ounces * 28.350;
return kg2;
}
