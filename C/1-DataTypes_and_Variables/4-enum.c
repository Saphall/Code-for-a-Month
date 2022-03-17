/**
 Enumeration:
    enum myEnum {CONST_1, CONST_2, CONST_3};
**/
#include <stdio.h>
enum menu
{
    TEA,    // 0
    COFFEE, // 1
    JUICE,  // 2
    BEER,   // 3
};
enum another_menu
{
    TEA2 = 10,    // 10
    COFFEE2 = 20, // 20
    JUICE2 = 30,  // 30
    BEER2,        // Not declared so : 31 -> starts as 30 base
};
int main()
{
    enum menu mario = COFFEE;
    enum another_menu mario_2 = COFFEE2;
    enum menu andrea = BEER;
    enum another_menu andrea_2 = BEER2;

    printf("Mario ordered : %d\n", mario);
    printf("Andrea ordered : %d\n", andrea);

    printf("Mario_2 ordered : %d\n", mario_2);
    printf("Andrea_2 ordered : %d\n", andrea_2);
}