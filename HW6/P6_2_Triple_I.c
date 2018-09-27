/*
JTSK-320111
a6 p2.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/
#include <stdio.h>
//function prototype
void triple(int arr[], int size);

int main()
{
  //Initiliazing array and creating data types
  int array[6] = {3, 2, 9, 3, 7, 12};
  //print array before triple
  for (int i = 0; i < 6; i++)
  {
    int print = array [i];
    printf("%d ", print);
  }
  //calling function
  triple (array, 6);
  //printing triple on new line
  printf("\n");
  //printing new array that has been tripled
  for (int i = 0; i < 6; i++)
  {
    int print = array [i];
    printf("%d ", print);
  }
  return 0;
}

// function to create triple
void triple(int arr[], int size)
{
  int count = 6;
  for (int size = 0; size < count; size++)
  {
    //saving results to a the array.
    arr[size] = 3 * arr [size];
  }
}
