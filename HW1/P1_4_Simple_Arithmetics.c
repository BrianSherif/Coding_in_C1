/*
JTSK-320111
a1 p1.1
Brian Sherif Hanna Nasralla
 B.hannanasralla@jacobs-university.de
*/

#include <stdio.h>
int main() {
    int a = 37 ;
    int b = 14 ;
    int sum = a + b;
    printf ("Sum of A and B is %i\n ", sum);
    int Product = a * b ;
    printf ("Product of A and B is %i\n ", Product);
    int difference = a - b;
    printf ("difference of A and B is %i\n ", difference);
    double division = (double)a / b ;
    printf ("division of A and B is %lf\n ", division);
    int remainder = a % b;
    printf ("remainder of A and B is %d\n ", remainder);
    printf ("A is %i and B is %i ", a, b);

    return 0;
}
