/*
JTSK-320111
a5 p1.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//function prototyping
float square1(int x);
float cube (int x);

int main()
{
  char line [100];
  int low;
  int up;
  //collecting input and assigning them to variables
  printf("Please input your lower.\n") ;
  fgets (line, sizeof(line),stdin);
  sscanf(line, "%d", &low);
  printf("Please input your upper limit.\n") ;
  fgets (line, sizeof(line),stdin);
  sscanf(line, "%d", &up);
  //for loop for printing every row.
  for (int i = low; i <= up; i++)
  {
    float square = square1(i);
    float cubed = cube(i);
    printf("\n %12.3f %12.3f %12.3f \n", (float)i, square, cubed);
  }

  return 0;
}

//function to calculate square
float square1(int x)
{
  float  power2 = (float)x * x;
   return power2;
}

//function to calculate cube
float cube(int x)
{
  float power3 = ((float)x * x) * x;
  return power3;
}
