/*
JTSK-320111
a5 p6.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

//function prototype
double max_diff(double arr[], int n);

int main()
{
  int x;
  double *a;
  // Input number of elements
  printf("Enter your total number of elements: \n");
  scanf(" %d", &x);
  // memory allocation
  a = (double *) malloc(x);
  for (int z = 0; z < x; z++)
  {
    //collect elements
    printf("Enter double %d:\n", z + 1);
    scanf(" %lf", &a[z]);
  }
  //print result
  printf("The difference between the largest and smallest element is %lf\n", max_diff(a, x));
  //memory release
  free(a);
}

// Calculates the difference between smallest and largest inputs
double max_diff(double arr[], int x)
{
  double max = arr[0];
  double min = arr[0];
  for (int z = 0; z < x; z++)
  {
    // If nth number is smaller than the n+1
    if (arr[z] > max)
    {
      max = arr[z];
    }
    else if (arr[z] < min)
      {
            min = arr[z];
      }
  }
    //return the difference between the max and min to the main function.
    return max - min;
}
