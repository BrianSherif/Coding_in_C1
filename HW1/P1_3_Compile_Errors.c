/*
JTSK-320111
a1 p1.1
Brian Sherif Hanna Nasralla
 B.hannanasralla@jacobs-university.de
*/

#include <stdio.h>
int main() {
    double result; /* The result of the division */
    int divisor = 22;
    result = 7.0 / divisor;
    printf("The result is %lf\n", result);
    return 0;
}

/* While working on the following problem, I have identified 3 problem.
1) The "#" was missing when identifying which library was suppose to be used.
2) Divisor was said to be an integer but was written as a float. So I removed the .0 after the number.
3) the place holder in the string was incorrect. it was %d when it was suppose to be %lf because the result was decimal.
*/
