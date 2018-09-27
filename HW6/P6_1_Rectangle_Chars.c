/*
JTSK-320111
a6 p1.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/

#include <stdio.h>
// prototype of function
void d(int x, int y, char c);
int main()
{
  char line [100];
  char Character;
  int c;
  int r;
  //taking inputs from user
  printf("Please input your Character\n");
  fgets (line, sizeof(line),stdin);
  sscanf(line, "%c", &Character);
  printf("please input your first integer\n");
  fgets (line, sizeof(line),stdin);
  sscanf(line, "%d", &c);
  printf("please input your second integer\n");
  fgets (line, sizeof(line),stdin);
  sscanf(line, "%d", &r);
  //running function
  d(r, c, Character);

  return 0;
}
//function
void d(int r, int c, char d) {
   //for loop for rows
  for (int x = 1; x <= r ; x++) {
    printf("\n");
    //for loop for columns
    for (int y = 1; y <= c; y++) {
      printf("%c", d);
    }
  }

}
