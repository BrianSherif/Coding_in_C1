/*
JTSK-320111
a5 p9.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/
#include <stdlib.h>
#include <stdio.h>

//function prototypes
void print_matrix(int arr[50][50], int size);

void print_diagonal(int arr[50][50], int size);

void print_second_diag(int arr[50][50], int size);

int main()
{
  int arr[50][50];
  int size;
  int total_of_elements;
  // Input the size of the matrix
  printf("Enter the number of columns and rows for a square matrix: \n");
  scanf(" %d", &size);
  total_of_elements = size * size;
  printf("Enter the %d values stored in the matrix\n", total_of_elements);
  // Input values for matrix
  for (int row = 0; row < size; row++)
  {
    for (int col = 0; col < size; col++)
    {
      scanf(" %d", &arr[col][row]);
    }
  }
    // Calling Print functions
    print_matrix(arr, size);
    print_diagonal(arr, size);
    print_second_diag(arr, size);
  return 0;
}

// Printing the full matrix
void print_matrix(int arr[50][50], int size)
{
  printf("The entered matrix is: \n");
  for (int row = 0; row < size; row++)
  {
    // Iterates row
    for (int col = 0; col < size; col++)
    {
      // Iterates column
      printf("%d ", arr[col][row]); // Prints character
    }
    printf("\n");
  }
}

// Print main diagonal of the matrix (left to right)
void print_diagonal(int arr[50][50], int size)
{
  printf("The diagonal line of the matrix is: \n");
  for(int row = 0; row < size; row++)
  {
    // Iterates thru row
    for (int col = 0; col < size; col++)
    {
      // Iterates thru column
      if (col == row)
      {
        printf("%d ", arr[col][row]);
      }
    }
  }
    printf("\n");
}


// Print second diagonal (from right to left)
void print_second_diag(int arr[50][50], int size)
{
  printf("The second diagonal is: \n");
  for(int row = 0; row < size; row++)
  {
    // Iterates thru row
    for (int col = 0; col < size; col++)
    {
      // Iterates thru column
      // Size - 1 because array starts from 0
      if (col == (size - 1) - row)
      {
        printf("%d ", arr[col][row]);
      }
    }
  }
    printf("\n");
}
