#include "main.h"
/**
 * print_triangle - print triangle
 * @size: size of the triangle
 * return:triange of '#'s
 */
void print_triangle(int size)
{
	int w, x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x <= (size - 1); x++)
		{
			for (w = 0; w < (size - 1) - x; w++)
			{
				_putchar('_');
			}
			for (y = 0; y <= x; y++)
			{
				_putchar ('#');
			}
			_putchar('\n');
		}
	}
}
