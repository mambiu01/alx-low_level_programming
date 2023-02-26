#include "main.h"
/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n:input
 * return: diagonal
 */
void print_diagonal(int n)
{
	int di, lin;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (di = 1; di <= n; di++)
		{
			for (lin = 1; lin < di; lin++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
