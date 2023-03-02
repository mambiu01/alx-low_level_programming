#include "main.h"

/**
 *reverse_array - reverse array of integere
 *@a: array
 *@n: number of elementof array
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int e;
	int d;

	for (e = 0; e < n--; e++)
	{
		d = a[e];
		a[e] = a[n];
		a[n] = d;
	}
}
