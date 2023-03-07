#include "main.h"

/**
 * _strchr - a character in a string
 * @s: input
 * @c: input
 * Return: always 0 (success)
 */
char *_strchr(char *s, char c)
{
	int e = 0;

	for (; s[e] >= '\0'; e++)
	{
		if (s[e] == c)
			return (&s[e]);
	}
	return (0);
}
