#include "main.h"

/**
 * more_numbers- a function prints 10 times the numbers, from 0 to 14, followed by a new line
 * _putchar only timt
 * Return:0-14 10times
 */

void more_numbers(void)

int main()
{
int i, mo;

for (i = 0; i <= 9; i++)
{
for (mo = 0; mo <= 14; mo++)
{
if (mo > 9)
_puchar((mo / 10) + '0');

_puchar((mo % 10) + '0');
}
_puchar('\n');
}
}
