/*
JTSK-320111
a5 p10.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>

//Function prototype
void sum_diff_prod_div(double x, double y, double *sum, double *diff, double *prod, double *div);
int main()
{
  //declaring all the variables
  double x;
  double y;
  double sum;
  double diff;
  double prod;
  double divi;
  //collect inputs and assign to x & y
  printf("Enter your first value: \n");
  scanf(" %lf", &x);
  printf("Enter your second value: \n");
  scanf(" %lf", &y);

  //calling in the function
  sum_diff_prod_div(x, y, &sum, &diff, &prod, &divi);

  //Print all the requested outputs
  printf("Sum        : %lf\n", sum);
  printf("Difference : %lf\n", diff);
  printf("Product    : %lf\n", prod);
  printf("Division   : %lf\n", divi);

  return 0;
}

void sum_diff_prod_div(double x, double y, double *sum, double *diff, double *prod, double *div)
{
  // Assigns value to address of sum, diff, prod, and divi
  *sum = x + y;
  *diff = x - y;
  *prod = x * y;
  *div = x / y;
}
