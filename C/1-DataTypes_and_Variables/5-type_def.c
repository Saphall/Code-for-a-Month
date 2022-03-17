/**
 Typedef:
    typedef existing_name alias_name;
**/
#include <stdio.h>
typedef enum
{
    TEA = 1,
    COFFEE,
    JUICE,
    BEER,
} Menu;
int main()
{
    Menu mario = COFFEE;
    Menu andrea = BEER;

    printf("Mario ordered : %d\n", mario);
    printf("Andrea ordered : %d\n", andrea);
}