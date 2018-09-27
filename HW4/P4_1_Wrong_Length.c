/*
JTSK-320111
a4 p1.
Brian Sherif Nazmi Hanna Nasralla B.hannanasralla@jacobs-university.de
*/



#include <stdio.h>
int length(char str[]) {
    int idx;
    /* Loop until end of string */
    for (idx = 0; str[idx] != '\0'; ++idx);
    {
        /* do nothing */
    return idx;
  }
}
int main() {
    char line[100];
    while(1) {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        line[length(line)-1]='\0';
        printf("Length (including newline) is: %d\n", length(line));
}
return 0; }
