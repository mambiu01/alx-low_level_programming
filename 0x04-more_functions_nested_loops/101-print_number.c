#include "main.h"
/**
 * print_ number - print
 * @n: integer to be printed
 * Return:always
 */
void print_number(int n)
{

unsigned int num = n;
if (n < 0)
{
_putchar('_');
num = -num;
}
if ((num / 10) > 0)
print_number(num / 10);

_putchar((num % 10) + '0');
}
