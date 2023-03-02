#include "main.h"

/**
 *  _strcmp - Compares pointers to two strings
 *  @s1: A first pointer string to be compared
 *  @s2: A second pointer string to be compared
 *
 *  Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
