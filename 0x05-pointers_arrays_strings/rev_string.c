#include "main.h"

/**
 * rev_string - this function reverses a string
 *
 * @s: The string to be reversed
 *
 * Return: nothing
 */void rev_string(char *s)
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
