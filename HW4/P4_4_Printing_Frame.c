/*
JTSK-320111
a4 p4.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/
#include <stdio.h>

int main() {
int x;
int y;
int columns;
int rows;
char Character;
char line [100];

// Input number of Character from user
printf("Enter Character\n");
fgets (line, sizeof(line),stdin);
sscanf(line, "%c", &Character);
// input number of rows
printf("Enter number of rows: ");
fgets (line, sizeof(line),stdin);
sscanf(line, "%d", &rows);
//input number of columns
printf("Please enter number of columns\n");
fgets (line, sizeof(line),stdin);
sscanf(line, "%d", &columns);
// Iterate over each row
for(x=1; x<=rows; x++)
{
// Iterate over each columns
for(y=1; y<=columns; y++)
{
if(y==1 || x==rows || x==1 || y==columns)
{
// Print Character for 1st to the Nth row and column
printf("%c", Character);
}
else
{
// for empty spaces
printf(" ");
}
}
// Move to the next line
printf("\n");
}
return 0;
}
