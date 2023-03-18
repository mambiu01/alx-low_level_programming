#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum number of values stored
 * @max: maximum number of values stored and elements
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int n, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (n = 0; min <= max; n++)
		ptr[n] = min++;
	return (ptr);
}
