/**
 * Floating Point
- 32-bit floating point
  float pi = 3.14;
- 64-bit floating point
  double pi = 3.14;  (more digits or precision, smaller/bigger numbers)
- Scientific Notation
  double pi =314E-2; -> 314 * 10^-2 = 3.14
-----------------------------------------------------------------------
Format specifiers :
    %f : 3.14
    %e : 314E-2
    %[width][.precision]specifier
 **/

#include <stdio.h>
int main()
{
    /* 1.2343245324343 */
    double decimalDigits = 1.2343245324343;
    /* 7.88 * 10^9 */
    double worldpopulation = 7.88E9;
    /* 6.626 * 10^-34 */
    double plantksConstant = 6.626E-34;

    printf("%12.1f | 1 decimal digit\n", decimalDigits);
    printf("%12.3f | 3 decimal digits\n", decimalDigits);

    printf("%12.1f | worldPopulatoin-decimal-1 digit precision\n", worldpopulation);
    printf("%12.3e | worldPopulation-scientific-3 digit precision\n", worldpopulation);

    printf("%12.1E | PlanksConstant\n", plantksConstant);
    printf("%12.3E | PlanksConstant\n", plantksConstant);
}