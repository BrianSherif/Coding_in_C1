/*
JTSK-320111
a3 p6.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
char line [100];
char ch;
int n;
// requesting input
printf("Please input letters.\n") ;
fgets (line, sizeof(line),stdin);
sscanf(line, "%c", &ch);
printf("Please input integers.\n");
fgets (line, sizeof(line),stdin);
sscanf(line, "%d", &n);
//if statment in case of negative integer
if (n<0)
{
printf("Please input a positive integer\n");
fgets (line, sizeof(line),stdin);
sscanf(line, "%d", &n);
}
//for loop to print results
for (int i = 0; i < n; i++)
{
printf("the characters are %c\n", ch );
}
return 0;
}
