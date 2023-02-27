#include "main.h"

/**
 * _atoi - an infinite number of characters
 * @s: the string to be converted
 *
 * Return: interger value of the converted string
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int um = 0;

	do {

		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			um = (um * 10) + (*s - '0');

		else if (um > 0)
			break;
	} while (*s++);

	return (um * sign);
}
