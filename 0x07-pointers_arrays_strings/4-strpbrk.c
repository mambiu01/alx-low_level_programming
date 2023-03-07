#include "main.h"

/**
 * _strpbrk - a string for any of a set of bytes
 * @s: input
 * @accept : input
 * Return :Always 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
	int f;

	while (*s)
	{
		for (f = 0; accept[f]; f++)
		{
			if (*s == accept[f])
				return (s);
		}
		s++;
	}
	return ('\0');
}
