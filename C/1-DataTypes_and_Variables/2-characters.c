/**
 * Characters :
 * single quoatation for characters
 * double quoatation for strings
ASCII Encoded values
-----------------------------------
Format specifier :
    %c
 **/
#include <stdio.h>
int main()
{
    char c = 'A';
    printf("char c : %d\n", c);
    printf("char c : %c\n", c);

    c = 66; // can assign int values
    printf("char c : %c\n", c);

    // Aquire user input
    printf("Input a character : ");
    c = getchar();
    printf("You entered : %c\n", c);
    c = getchar();
    printf("You entered : %c\n", c);
}