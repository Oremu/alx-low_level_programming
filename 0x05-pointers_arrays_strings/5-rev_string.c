#include "main.h"

/**
 * rev_string - this function reverses a string
 *
 * @s: the string to be reversed
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;
	int len;
	char newStr;

	i = 0;
	len = _strlen(s) - 1;

	while (len >= i)
	{
		newStr = s[len];
		s[len] = s[i];
		s[i] = newStr;
		len--;
		i++;
	}
}

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
