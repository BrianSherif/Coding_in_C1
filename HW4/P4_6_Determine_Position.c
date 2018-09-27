/*
JTSK-320111
a4 p6.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/

#include <stdio.h>

int posmin(int v[], int n);

int main()
{
int c;
int v[50];
int size;
int location;
int minimum;
//determine amount of elements in the array
printf("Input number of elements in array\n");
scanf("%d", &size);
//record the values for each element in the array
printf("Input %d integers\n", size);
//for loop used to start program after all values are entered
for (c = 0; c < size; c++)
scanf("%d", &v[c]);
//intilization of the function
location = posmin (v, size);
//use of position to determine value
minimum  = v[location];
//final output
printf("Minimum element location = %d and value = %d.\n", location, minimum);
return 0;
}
//function
int posmin(int a[], int n)
{
int c;
int mini;
int index;
mini = a[0];
index = 0;
//determine position
for (c = 1; c < n; c++)
{
if (a[c] < mini)
{
index = c;
mini = a[c];
}
}
return index;
}
