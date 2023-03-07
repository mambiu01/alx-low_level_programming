#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory storage
 * @src: copied memory
 * @n : number of bytes
 *
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int s = n;

	for (; m < s; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}
