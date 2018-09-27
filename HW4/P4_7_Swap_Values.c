/*
JTSK-320111
a4 p7.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
// prototypes
double sum(double a, double b);
//void sumbyref(double a, double b, double *s);
//void swapbyref(double *a, double *b);
double a;
double b;
double z;
//double q;
//int *s;
//int *b;
//int m;
int main()
{
char line [100];
//take in inputs
printf("Please input value A\n");
fgets (line, sizeof(line),stdin);
sscanf(line, "%lf", &a);
printf("Please input value b\n");
fgets (line, sizeof(line),stdin);
sscanf(line, "%lf", &b);
//printing outputs
z = sum(a, b);
printf("sum of both doubles is %lf\n", z);
/*s = &z;
*b = &z;
sumbyref (a, b, *s );
printf("address is %d\n", *s);
m = swapbyref(*a, *b;)
printf("swap is %lf\n", m);*/
return 0;
}
//function sum
double sum(double a, double b)
{
  double x;
  x = a + b;
  return x;
}
//function sum address
/*void sumbyref(double a, double b, int *s) {
  *s = a + b;
return;
}
void swapbyref(double *a, double *b) {
double swap = *a + *b;
return;
}*/
