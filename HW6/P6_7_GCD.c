/*
JTSK-320111
a6 p7.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
//prototype of function
int gcd(int a, int b);

int main()
{
  //datatypes
  int a;
  int b;
  int z;
  //input values from keyboard
  printf("Enter first value:\n");
  scanf(" %d", &a);
  printf("Enter second values:\n");
  scanf(" %d", &b);
  //call function to z
  z = gcd(a, b);
  printf("Greatest Commond Divisor of %d and %d is %d\n", a, b, z);
  return 0;
}

int gcd(int a, int b)
{
  //if one of the numbers is divisible by the other then the second one is the gcd
  if (b == 0)
  {
    return a;
  }
  //or the gcd of the second number and the remainder of a/b has to be determined.
  else
  {
    int x = gcd(b, a%b);
    return x;
  }
}
