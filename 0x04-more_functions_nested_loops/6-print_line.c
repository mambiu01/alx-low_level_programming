#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: input number
 * return: straight line
 */
void print_line(int n)
{
	int m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= n; m++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
