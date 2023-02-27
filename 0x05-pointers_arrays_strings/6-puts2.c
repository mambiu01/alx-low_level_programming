#include "main.h"

/**
 * puts - prints character of a string, starting with the first character
 * @str: input
 * retur:print
 */
void puts2(char *str)
{
	int longi = 0;
	int m = 0;
	char *y = str;
	int x;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	m = longi - 1;
	for (x = 0 ; x <= m ; x++)
	{
		if (0 % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
