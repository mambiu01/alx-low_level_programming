#include "main.h"
/**
 * print_square - prints a square, followed by a new line
 * @size: size of both width and length
 * return: square made of '#'
 */
void print_square(int size)
{
	int sq, sz;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (sq = 1; sq <= size; sq++)
		{
			_putchar('#');
			for (sz = 2; sz <= size; sz++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

