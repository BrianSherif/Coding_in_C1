
#include <stdio.h>
/*
JTSK-320111
a1 p1.1
Brian Sherif Hanna Nasralla
 B.hannanasralla@jacobs-university.de
*/
int main()
{
    float answer; /* The result of our calculation */
    answer = 1.0/8;
    printf("The value of 1/8 is %f\n", answer);
    return 0;
    // During the time I have worked with the following code; I have discovered 1 problem:
    // 1) There was unintend behavior caused by dividing an integer by another integer which gives you an integer result when we need to present a float.
    // The solution was to change either 1 or 8 to 1.0 or 8.0 or both. This is so they may identify with float which is the data type assigned to them.
}
