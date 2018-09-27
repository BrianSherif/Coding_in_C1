/*
JTSK-320111
a6 p6.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
//prototype of function
int sum(int n, int m);

int main()
{
  int n;
  int m;
  int z;
  //input of upper and lower end
  printf("Enter lower end:\n");
  scanf(" %d", &n);
  printf("Enter upper end:\n");
  scanf(" %d", &m);
  //calling function assign to z
  z = sum(n, m);
  //print the result
  printf("Sum of natural numbers between %d and %d is %d\n", n, m, z);
  return 0;
}

// If, else; sum function
int sum(int n, int m)
{
  // If n is equal to m, take n
  if (m == n)
  {
    return n;
  }
  //compute sum of natural numbers between upper and lower points
  else
  {
    int y = n + sum(n + 1, m);
    return y;
  }
}
