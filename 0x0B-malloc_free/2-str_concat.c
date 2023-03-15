#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: input one
 * @s2: input two
 * Return:concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int m, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	m = k = 0;
	while (s1[m] != '\0')
		m++;
	while (s2[k] != '\0')
		m++;
	conct = malloc(sizeof(char) * (m + k + 1));

	if (conct == NULL)
		return (NULL);
	m = k = 0;
	while (s1[m] != '\0')
	{
		conct[m] = s1[m];
		m++;
	}
	while (s2[k] != '\0')
	{
		conct[m] = s2[k];
		m++, k++;
	}
	conct[m] =  '\0';
	return (conct);
}
