#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: one of the strings to compare
 * @s2: the other string to compare
 *
 * Return: difference in length
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] == s2[a])
	{
		if (s1[a] == '\0')
			return (s1[a] - s2[a]);
		a++;
	}
	return (s1[a] - s2[a]);
}
