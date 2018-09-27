/*
JTSK-320111
a2 p1.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
float a;
float b;
int c;
int d;
int e;
int f;
char line [100];
// taking in values for float
  printf("What's your first value? \n");
  fgets (line, sizeof(line),stdin);
  sscanf(line, "%f", &a);
  printf(" %f What's your second value? \n", a);
  fgets (line, sizeof (line), stdin) ;
  sscanf(line, "%f", &b);
  // orders received and calculations being made.
  // print results
  float Sum1 = a + b ;
  printf("Sum of first and second is %f \n", Sum1);
  float Diff = b - a ;
  printf("The difference of the first and second is %f \n", Diff );
  float Square = a*a ;
  printf("The square of the first is %f\n", Square );
  // asking users for any further inputs
  printf("Would you like to calculate something else?\n");
  fgets (line, sizeof(line),stdin);
  sscanf(line, "%d", &c);
  printf("%d What's your second input?\n", c);
  fgets (line, sizeof(line),stdin);
  sscanf(line, "%d", &d);
  //inputs received
  // start calculations
  int Sum2 = c + d ;
  int prod2 = c * d ;
  printf("the sum is %d , and the product is %d \n",Sum2, prod2 );
  // Turning char into int
  printf("I can also do magic! type in a letter and I will calculated.\n");
  fgets (line, sizeof(line),stdin);
  sscanf(line, "%d", &e);
  printf("Give me a second letter!\n");
  fgets (line, sizeof(line),stdin);
  sscanf(line, "%d", &f);
  //calculating final numbers
  int Sum3 = e + f ;
  int prod3 = e * f ;
  printf("Awesome! the sum is %d and the product is %d \n", Sum3, prod3 );
  //end





    return 0;
}
