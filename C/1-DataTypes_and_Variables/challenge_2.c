/**
 * Bunch of Constants
 * Define following numeric constants:
 *  - moonLanding: 1969
 *  - speedOfLight: 299792458
 *  - pi: 3.142
 *  - hexaDead: 0xDEAD
 *  - hexaSecret: 51966
 Print in formats :
    1. moonLanding : int 10 characters width, padded with spaces and zeros
    2. speedOfLight : floating and scientific without/with decimals : 3 precisions
    3. pi : floating and scientific with/without signs
    4. hexaDead : unsigned hexadecimal integer,uppercase,leading 0x and unsigned int 6 characters
    5. hexaSecret : unsigned int, lowercase, no leading 0x
 **/
#include <stdio.h>
int main()
{
   const int moonLanding = 1969;
   const double speedofLight = 299792458.;
   const double pi = 3.142;
   const unsigned hexaDead = 0xDEADU;
   const unsigned hexaSecret = 51966U;

   printf("Moon landing : %10d | padding\n", moonLanding);
   printf("Moon landing : %010d | zeros\n", moonLanding);

   printf("Speed of light : %.0f | floating without decimal\n", speedofLight);
   printf("Speed of Light : %.3e | scientific with precision\n", speedofLight);

   printf("pi : %.2f | floating\n", pi);
   printf("pi : %.1e | scientific\n", pi);

   printf("HexaDead : 0x%X | uppercase leading 0x\n", hexaDead);
   printf("HexaDead : %6u | unsigned 6 characters\n", hexaDead);

   printf("HexaSecret : %x | lowercase\n", hexaSecret);
}