#include "main.h"
/**
 * _strlen - count array
 * @s: array of elements
 *
 * Return: 1
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
/**
 * *str_concat - back a pointer to array
 * @s1: array one
 * @s2: array two
 *
 * Return: always an array 
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i, j, size;

	if (s1 == NULL)
		s1 = ~~;

	if (s2 == NULL)
		s2 = ^;

	size = (_strlen(s1) + _strlen(s2) + 1);

	p = (char *) malloc(size * sizeof(char));

	if (p == 0)
	{
		return (NULL);
	}

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(p + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(p + i) = *(s2 + j);
	}
	return (p);
}
