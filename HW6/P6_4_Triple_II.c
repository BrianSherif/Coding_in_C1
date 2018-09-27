/*
JTSK-320111
a6 p2.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

void triple(int arr[], int size);

int main()
{
  //data types
  int *arr;
  int size;
  int i;
  //input array size
  printf("Enter size of array:\n");
  scanf(" %d", &size);
  arr = (int*) malloc(size);
  //input array values (for loop)
  for (i = 0; i < size; i++)
  {
    printf("Enter element #%d:\n", i + 1);
    scanf(" %d", &arr[i]);
  }
  // Prints array before function triple is called
  printf("Original inputs:\n");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }

  // Call triple function
  triple(arr, size);

  // Prints array after its been tripled
  printf("\ntripled input:\n");
  for (int k = 0; k < size; k++)
  {
    printf("%d ", arr[k]);
  }
  printf("\n");
   return 0;
}



void triple(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    arr[i] = arr[i] * 3;
  }
}
