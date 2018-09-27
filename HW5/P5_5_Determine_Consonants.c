/*
JTSK-320111
a5 p5.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
//protype of function
int countconsonants(char *string);
int main()
{
    char string[100];
    int size;
    // collect inputs
    while (*string != '\n')
    {
        printf("Enter string:\n");
        fgets(string, 100, stdin);
        // If no newline; continue counting consonants
        if (*string != '\n')
        {
            //printing final result
            size = strlen(string) - 1;
            string[size] = '\0';
            printf("Total consonants is %d in the string\n", countconsonants(string));
        }
    }
 return 0;
}


// Determine the number of consonants in a string then return the result.
int countconsonants(char *string)
{
    char pstring[100];
    int counter = 0;

    strcpy(pstring, string);
    for (string = pstring; *string != '\0'; string++)
    {
        if (*string != 'A' && *string != 'E' && *string != 'I' && *string != 'O' && *string != 'U' &&
            *string != 'a' && *string != 'e' && *string != 'i' && *string != 'o' && *string != 'u' &&
            *string != ' ')
        {
            counter++;
        }
    }
    //return total number of consonants to main function
    return counter;
}
