#include "main.h"

/**
 *prints_array -  n elements of an array of integers
 *@a: int type array point
 *@n: int type integer
 *Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
