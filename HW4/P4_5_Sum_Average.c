/*
JTSK-320111
a4 p5.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/
#include <stdio.h>
//Sum function
int sum (int x[])
{
int i;
int sumation = 0;
for (i = 0; i < 8; i++)
{
//to ensure that -99 does not get calculated
if (x[i] == -99)
{
break;
}
//else continue with summing
else
sumation+=x[i];
}
return sumation;
}


//calculate the average
int average (int x[], int i)
{
return sum(x) / i;
}


int main()
{
int x[8];
int i;

for (i = 0; i < 8; i++) {
//collect inputs
printf("Please enter grades then type -99 to calculate\n");
scanf("%d\n", &x[i]);
if (x[i]==-99)
{
break;
}
}
//print results
printf("sum= %d\n", sum(x) );
printf("average= %d\n", average (x,i) );
return 0;
}
