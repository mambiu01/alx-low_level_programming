#include "main.h"

/**
 * _memset - a block of memory with specific value
 * @s: starting address of memory
 * @b: the value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value of n bytes
 */
char *_memset(char *s, char b, unsigned int n)

{	int a = 0;
	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}

