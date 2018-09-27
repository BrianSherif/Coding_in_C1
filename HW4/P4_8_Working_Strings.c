/*
JTSK-320111
a4 p8.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>

int main(){
//take in inputs of both strings
char s1 [100];
char s2 [100];
printf("Enter 1st String\n");
fgets (s1, 100, stdin);
printf("Enter 2nd String\n");
fgets (s2, 100, stdin);
//calculate string length for both strings
//computes the length of the string
//not including the '\n'.
int line1=strlen(s1);
int line2=strlen(s2);
printf("String length (s1) =%d\n", line1-1);
printf("String length (s2) =%d\n", line2-1);
//creating a third string and compare them.
char s3 [100];
strcpy(s3, s1);
printf("Print Third String = %s\n", s3);
strcat (s1, s2);
printf ("Concatenation of Strings =%s\n", s1);
printf("\nCompare Strings: %i\n",strcmp(s1,s2));
//searching for character in the strings
char c;
printf ("Enter Letter to locate position:");
scanf("%c", &c);

int x;
int y=0;
int a=0;
for (x=0 ;x<strlen(s1);x++)
{

if (s1[x]==c)
{
y=x;
x=x+50;
a++;
}
}
//printing the position of the character
if(a>0)
{
printf("position of character is: %i\n", y+1);
}
//condition incase charater is not present.
else
{
printf("character not found\n");
}

return 0 ;
}
