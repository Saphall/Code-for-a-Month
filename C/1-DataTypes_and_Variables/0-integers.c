/**
    int : signed (negative or positive)
        : unsigned (zero or positive)
-------------------------------------------------------------
(short int(%hd), int(%d), long int(%ld), long long int(%lld))
- for unsigned type : replace `d` with `u`.
  e.g. unsinged short int(%hu), unsigned int(%u) ...
-------------------------------------------------------------
#include <stdint.h>
- int8_t, uint8_t  (signed/unsigned 8 bit wide)
- int16_t, uint16_t
        ...
- int64_t, uint64_t
--------------------------------------------------------------
// Mininum values of exact-width signed : INTN_MIN = -2^(N-1)
// Maximum values of exact-width signed : INTN_MAX = 2^(N-1)-1
--------------------------------------------------------------
Format specifier :
    %d, %u
    %[widht]d
**/

#include <stdio.h>
#include <stdint.h>
int main()
{
    int temperatureFahrenheit = -10;
    unsigned int temperatureKelvin = 250U;
    printf("Fahrenheit : %6d\n", temperatureFahrenheit);

    unsigned students = 25U;
    unsigned long long worldPopulation = 7845454455ULL;
    printf("%12u | Students\n", students);
    printf("%12llu | World population\n", worldPopulation);

    uint8_t count = UINT8_MAX;
    printf("%12u | Maximum count\n", count);
    count = count + 1;
    printf("%12u | Overflow count\n", count);
}