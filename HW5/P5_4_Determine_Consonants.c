/*
JTSK-320111
a5 p4.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>

int countconsonants(char string[]);

int main()
{
    char string[100];

    // Collecting inputs
    while (*string != '\n')
    {
        printf("Enter string:\n");
        fgets(string, 100, stdin);
        if (*string != '\n')
        {
        printf("Total consonants is %d in the string\n", countconsonants(string));
        }
    }

    return 0;
}

// Determine total of consonants in the string and returns results.
int countconsonants(char string[])
{
    long n;
    int counter = 0;
    // Returns the number of characters without '\n'
    n = strlen(string) - 1;
    for (int i = 0; i < n; i++)
    {
        if (string[i] != 'A' && string[i] != 'E' && string[i] != 'I' && string[i] != 'O' && string[i] != 'U' &&
        string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' && string[i] != 'u' &&
        string[i] != ' ')
        {
            counter++;
        }
    }

    return counter;
}
