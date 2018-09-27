/*
JTSK-320111
a5 p2.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/
#include<stdio.h>
int main ()
{
  //take input from user
  char c[50];
  printf("Please type a string \n");
  scanf("%s",c);
  //for loop used to create an increasing variable "i".
  //to be used to control the spaces created to form diagonal.
  for (int i = 0; i < (c[i]-1) ; i++)
  {
    int y;
      //for every value of "i" print 1 space and 1 letter from array of string
     y--;
      printf(" ");
      printf("%c\n",c[i]);

  }

  return 0;
}
