#include "main.h"

/**
 * alloc_grid -  pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the arrays
 * Retur:pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **array, a, b;
	int len = width * height;

	if (len <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		array[a] = (int *)malloc(sizeof(int) * width);
		if (array[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(array[a]);
			free(array);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			array[a][b] = 0;
	return (array);
}
