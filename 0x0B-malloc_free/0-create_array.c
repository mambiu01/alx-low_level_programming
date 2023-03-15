#include "main.h"

/**
 * create_array -  creates an array of chars
 * @size: number of elements in the array
 * @c: char
 * return:pointer
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int m;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (m = 0; m < size; m++)
		str[m] = c;
	return (str);
}
