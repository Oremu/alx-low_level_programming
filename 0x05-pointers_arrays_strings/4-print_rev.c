#include "main.h"

/**
 * print_rev - this function prints a string in reverse, with a new line
 *
 * @z: the string to be printed in reverse
 *
 * Return: Nothing
 */
void print_rev(char *z)
{
	int len = _strlen(z) - 1;

	while (len >= 0)
	{
		_putchar(z[len]);
		len--;
	}
	_putchar('\n');
}

/**
 * _strlen - this function returns the length of a string
 *
 * @s: the string whose length is to be returned
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
