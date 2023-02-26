#include "main.h"

/**
 * more_numbers-  prints 10 times the numbers, from 0 to 14
 * _putchar only timt
 * Return:0-14 10times
 */

void more_numbers(void)
{

int i, mo;

for (i = 0; i <= 9; i++)
{
for (mo = 0; mo <= 14; mo++)
{
if (mo > 9)
_putchar((mo / 10) + '0');

_putchar((mo % 10) + '0');
}
_putchar('\n');
}
}
