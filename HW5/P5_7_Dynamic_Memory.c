/*
JTSK-320111
a5 p7.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
//Function prototype
void two_min(float arr[], int x);

int main()
{
    //datatypes of variables
    int x;
    float *a;

    // Total number of elements in the array
    printf("Enter total number of values: \n");
    scanf(" %d", &x);
    // allocation of memory
    a = (float *) malloc(x);
    // input of values
    for (int i = 0; i < x; i++)
    {
        printf("Enter double %d: \n", i + 1);
        scanf("%f", &a[i]);
    }

    two_min(a, x);
    //memory release
    free(a);
}


// searches for the two smallest inputs
void two_min(float arr[], int x)
{
  float min1 = arr[0], min2 = arr[1];
  for (int i = 2; i < x; i++)
   {
        // Start comparing from arr[2] as the first 2 values are taken as minimum by default
        if (min1 > min2)
        {
            if (arr[i] < min1)
             {
                min1 = arr[i];
             }
        else if (arr[i] < min2)
            {
                min2 = arr[i];
            }
        }
        else if (min1 < min2)
        {
            if (arr[i] < min2)
            {
                min2 = arr[i];
        }
            else if (arr[i] < min1)
            {
                min1 = arr[i];
            }
        }
        else if (min1 == min2)
        {
            if (arr[i] < min1)
            {
                min1 = arr[i];
        }
        else if (arr[i] < min2)
          {
            min2 = arr[i];
          }
        }
    }
    //print to screen the smallest values 
    printf("The two minimum values are %f and %f", min1, min2);
}
