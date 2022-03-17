/**
Boolean variables:
- No specifically boolean
false = 0
true != 0
-------------------------
#include<stdbool.h>
bool a = true;
bool b = false;
**/
#include <stdio.h>
#include <stdbool.h>
int main()
{
    /* Before C99 */
    int a = 1; // true
    int b = 0; // false

    /* stdbool */
    bool aa = true;
    bool bb = false;
    printf("bool aa(true) : %d\n", aa);
    printf("bool bb(false) : %d\n", bb);
}