#include "main.h"

/**
 * print _chessboard - prints the chessboard
 *@a: array
 *Return:Always 0 (success)
 */
void print_chessboard(char (*a)[8])
{
	int h;
	int j;

	for (h = 0; h < 8; h++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[h][j]);
		_putchar('\n');
	}
}
