/**
 * Spaceship Thrust
 - Declaring different thrust level for spacship using enum
**/
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <stdio.h>
typedef enum
{
    THRUST_NONE = 0,
    THRUST_LOW = 20,
    THRUST_MEDIUM = 50,
    THRUST_MAXIMUM = 100,

} SpaceShip;
int main()
{
    SpaceShip thrust;
    thrust = THRUST_NONE;
    printf("Starting Spaceship | Thrust Level : %d%\n", thrust);
    sleep(2);
    thrust = THRUST_MAXIMUM;
    printf("Spacship taking off | Thrust Level : %d%\n", thrust);
    sleep(3);
    thrust = THRUST_MEDIUM;
    printf("Spaceship off Ionosphere | Thrust Level : %d%\n", thrust);
    sleep(3);
    thrust = THRUST_LOW;
    printf("Left Atmosphere | Thrust Level : %d%\n", thrust);
}